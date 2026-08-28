# MDL / TEX 디코더 정독 — 재생성 코퍼스 기준 (2026-08-27)

본문 `WE-ENGINE-ANALYSIS-2026-07-27.md` §4(MDL)·§5(서브시스템 표 3·4행)이
"코퍼스 재생성 후에 하라"고 미뤄 둔 두 항목의 결과다.

## 0. 좌표계 · 도구 · 검증 원칙

- **모든 주소는 무손상 원본 `wallpaper_engine/wallpaper64.exe`(md5 `438cb215f20a8f6c38f57fbc3d9da588`,
  ImageBase `0x140000000`) 기준의 VA** 다. 재생성 코퍼스
  `analysis/decompiled/all/`(7,748 파일)와 좌표계가 같다(§6 `✅ RESOLVED`).
  구 코퍼스 좌표(`0x140261950` 등)는 이 문서 어디에도 쓰지 않는다.
- 근거는 세 갈래로만 적었다:
  1. **디스어셈블** — capstone 5.0.7 로 원본 바이너리를 직접 디코드(Ghidra 무관).
  2. **디컴파일** — 재생성 코퍼스의 `.c` 파일(줄 번호 명시).
  3. **실물 대조** — 이 저장소 안의 `wallpaper_engine/projects/defaultprojects/**`
     실물 에셋 `.mdl` 28개(45메시) · `.tex` 440개.
- 셋 중 하나도 못 댄 것은 **[미해결]** 로 표시했다. §4 절에 모아 뒀다.

### 0.1 오라클 독립 재측정

`.pdata` 를 직접 파싱해 §6 의 수치를 재현했다 — 인용이 아니라 재측정이다.

```
pdata entries: 14792   primary: 6824   chained: 7968
```

`UNW_FLAG_CHAININFO`(UNWIND_INFO 첫 바이트 `>>3` 의 bit2) 기준. §6 의 6,824 와 일치.

---

## 1. MDL 디코더 `0x140261880`

### 1.1 함수 범위 — §4 의 UNKNOWN #3 해소 ✅

§4 는 `.pdata` 의 `0x261880`–`0x26238b`(2,827 B)와 그 뒤 `0x26238b`–`0x265a0c`(13,953 B)가
**한 함수인지 두 함수인지 정할 수 없다**고 남겼다. 언와인드 체인을 풀면 정해진다.

```
00261880-0026238b  size=  2827  unw=004be9b8  flags=0  PRIMARY
0026238b-00265a0c  size= 13953  unw=004be9dc  flags=4  CHAINED -> 0x261880
00265a0c-00265a31  size=    37  unw=004bea0c  flags=4  CHAINED -> 0x261880
00265a31-00265a37  size=     6  unw=004bea1c  flags=4  CHAINED -> 0x261880
00265a37-00265a3d  size=     6  unw=004bea0c  flags=4  CHAINED -> 0x261880
00265a3d-00265a43  size=     6  unw=004bea1c  flags=4  CHAINED -> 0x261880
```

체인 대상은 `UNWIND_INFO` 의 언와인드 코드 뒤에 붙는 `RUNTIME_FUNCTION` 을 읽어 확인했고,
**5개 조각 전부 `(0x261880, 0x26238b, 0x4be9b8)` 를 가리킨다.**

> **확정**: `0x140261880` 은 **하나의 함수**이며 전체 범위는 `0x261880`–`0x265a43`
> (주소 16,835 B)다. 재생성 코퍼스의 Ghidra 함수 바디는 16,832 B(`0x41C0`)로 3바이트 짧다
> (도달 불가 꼬리로 보임). **§4 에 남아 있던 "8056 bytes" 는 폐기된 수치다.**

### 1.2 이 함수가 MDL 디코더라는 근거 (구 코퍼스 인용 아님)

원본 바이너리 `.text` 전체를 훑어 rip-상대 참조를 역산했다. MDL 서브청크 매직 5개는
**전부 이 함수 한 곳에서만** 참조된다.

| 매직 | 문자열 VA | 참조 명령 | 소속 함수 |
|---|---|---|---|
| `MDLA0006` | `0x1404920f0` | `0x140263970 lea rdx,[rip+0x22e779]` | `0x140261880` |
| `MDAT0001` | `0x140492100` | `0x1402655d7 lea rdx,[rip+0x22cb22]` | `0x140261880` |
| `MDMP0001` | `0x140492110` | `0x1402656a6 lea rdx,[rip+0x22ca63]` | `0x140261880` |
| `MDLE0002` | `0x140492120` | `0x1402658c2 lea rdx,[rip+0x22c857]` | `0x140261880` |
| `MDLS0004` | `0x140492130` | `0x1402624af lea rdx,[rip+0x22fc7a]` | `0x140261880` |

`MDLV0023`(`0x140492318`)는 이 함수가 아니라 `0x1402785a0` 에서 참조된다 — 컨테이너 매직
**문자열 상수**는 다른 곳(직렬화/버전 스탬프)이 쓰고, 디코더는 매직을 파일에서 읽은 뒤
`atoi` 로 버전만 뽑기 때문이다(§1.3). 재생성 코퍼스 `evidence-index.tsv` 도 같은 말을 한다:
`140261880 … MDAT;MDLA;MDLE;MDLS;MDMP`.

### 1.3 리더 프리미티브 (모두 재생성 코퍼스에서 본문 확인)

리더 객체는 32바이트다.

```c
struct Reader { const char* base; const char* cur; uint32 size; const char* sectionEnd; };
```

| 주소 | 역할 | 비고 |
|---|---|---|
| `0x14009c4e0` | `Reader(data, size)` 생성자 | `base=cur=data`, `size=size` |
| `0x14009c500` | `ReadCString()` | NUL 까지 읽고 **NUL 을 소비**, 오버런 시 `""` |
| `0x14009c560` | `ReadU32()` | 오버런 시 0 반환, 커서 안 움직임 |
| `0x14009c590` | `ReadF32()` | **기계어가 다르다** — `movss xmm0,[r8]` 로 xmm0 반환, 오버런 시 `xorps xmm0,xmm0`(0.0f). 재생성 코퍼스의 디컴파일이 `0x14009c560` 과 똑같아 보이는 건 Ghidra 가 반환형을 `undefined4` 로 잡았기 때문이다 |
| `0x140261680` | `ReadU16()` | |
| `0x1402616b0` | `ReadU64()` | |
| `0x1402616e0` | `ReadU8()` | bool 게이트로 쓰인다 |
| `0x14009c5c0` | `ReadBlob(&len)` | `u32 len` 을 읽고 `len` 바이트를 건너뛴 뒤 그 시작 포인터를 반환 |
| `0x140261710` | `ReadFixed(dst, n)` | `n` 바이트 memcpy, 오버런 시 dst 를 0으로 |
| `0x140261770` | `SetSectionLimit()` | `u32` 를 읽어 **`sectionEnd = base + 그 값`** (블롭 크기로 clamp) |
| `0x1402c82c0` | `atoi` | `strtol(base=10)` 래퍼(`0x1402bffcc`) |
| `0x1402c9e60` | `_strnicmp` | 대소문자 무시 — `bVar1-0x41 < 0x1a` tolower 관용구 |

`SetSectionLimit` 이 `cur + len` 이 아니라 **`base + len`** 인 점에 주의 — 서브청크 길이 워드는
**블롭 선두 기준 절대 끝 오프셋**이다. (⚠ 이 저장소 실물 28개에는 비어 있지 않은 서브청크가
하나도 없어 **바이트로는 확인 못 했다** — §4 참조.)

### 1.4 컨테이너 헤더 — `corpus_scan/mdl-format.md` 의 1바이트 어긋남 ✅ 정정

디스어셈블(`0x1402618ba`–`0x140261913`)이 말하는 실제 순서:

```
1402618ba  call 0x14009c4e0   ; Reader(data, size)
1402618c4  call 0x14009c500   ; magic = ReadCString()   "MDLV00NN" + NUL = 9바이트
1402618c9  mov  [r15], rax    ; 출력 구조체 +0 에 매직 포인터 보관
1402618cc  lea  rcx,[rax+4]
1402618d0  call 0x1402c82c0   ; version = atoi(magic+4) -> edi (이후 모든 게이트의 피연산자)
1402618e0  call 0x14009c560   ; formatFlag -> r10d / [rsp+0x60]
1402618f1  call 0x14009c560   ; skinCount  -> [r15+8]
1402618ff  call 0x14009c560   ; meshCount  -> [rbp-0x78]
140261913  je   0x14026232c   ; meshCount == 0 이면 곧장 종료
```

즉 파일 오프셋으로:

```
0x00  9B   "MDLV00NN\0"   매직 + 버전 (NUL 포함 9바이트)
0x09  u32  formatFlag     정점 속성 비트마스크
0x0D  u32  skinCount      메시마다 읽을 머티리얼 cstring 개수
0x11  u32  meshCount      메시 개수
0x15  ...  첫 메시 레코드
```

> **`mdl-format.md` 는 매직을 8바이트로 보고 `0x08` 부터 필드를 셌다.** 그 결과 매직의 NUL
> 바이트를 필드에 포함시켜 **모든 헤더 필드가 1바이트씩 밀렸다.** 그래서
> `0x08: 00 09 00 80` 을 `{lo:0x0900, hi:0x8000}` 두 u16 으로 읽었는데, 실제로는
> `0x08` 이 매직의 NUL 이고 `0x09` 부터 **u32 하나**(`0x01800009`)다.
> "`0x0900` vs `0x0f00`", "`0x8000` hi-bit" 서술은 전부 이 어긋남의 산물이다.

실물 대조: `audiophile/models/grid/grid.mdl` 은 `skinCount=2` 이고 머티리얼 cstring 이
정확히 2개(`materials/grid/grid.json`, `materials/grid/grid2.json`)다. 28파일 전수에서
헤더+메시 프레이밍이 파일 끝까지 정확히 맞는다(§1.8).

### 1.5 버전 게이트 (전부 디스어셈블 확인)

| 게이트 | 조건 | 명령 |
|---|---|---|
| `gateWord` u32 읽기 | `version >= 4` | `0x140261979 cmp edi,4 / jl 0x14026198a` |
| `gateWord` 뒤 여분 u32 1개 | `gateWord & 2` | `0x140261992 test al,2 / je 0x1402619a6` |
| AABB `float[6]` | `version >= 17` | `0x1402619a6 cmp edi,0x11 / jl 0x140261a19` |
| 메시별 `formatFlag` u32 | `version >= 15` | `0x140261a19 cmp edi,0xf / jl 0x140261a33` |
| 메시 트레일러(옵션 블롭 2개) | `version >= 21` | 디컴파일 `:327 if (0x14 < iVar11)` |
| v23 본 바인딩 레코드 | `version >= 23` | 디컴파일 `:345 if (0x16 < iVar11)` |
| 서브청크 섹션 루프 | `version >= 13` | 디컴파일 `:694 if (0xc < iVar11)` |

`version < 15` 이면 `0x140261a33 mov [rbp+0xa8], r10d` 로 **헤더 오프셋 9 의 `formatFlag` 를
메시 진입마다 그대로 되쓴다** — 메시별 리드가 아예 없다.

메시 레코드 순서(=엔진이 읽는 순서):

```
cstring material  × skinCount
u32 gateWord                       (v>=4)
u32                                (gateWord & 2)
float[6] AABB min/max              (v>=17)
u32 formatFlag                     (v>=15; 아니면 헤더 값)
blob  vertexBuffer                 (u32 byteLen + 바이트)
blob  indexBuffer                  (u32 byteLen + 바이트)
u8 gate -> { u32; blob }           (v>=21)
u8 gate -> { blob }                (v>=21)
u32 n -> n × { u64; cstring; u32; u32 k -> k×u32; u32 m -> m×u32 }   (v>=23)
```

`vertexBuffer`/`indexBuffer` 는 둘 다 **바이트 길이** 선행이다(원소 개수가 아니다).
메시 구조체는 200바이트다 — `0x1402622bf` 뒤 `param_3[3] += 200`(디컴파일 `:664`).

### 1.6 정점 포맷 플래그 — §4 의 미해결 항목 ✅ 해소

스트라이드 산식은 `0x140261a3a`–`0x140261b2b` 다. SSE 로 idx 0..23 을 4개씩 6묶음 누산하고,
남은 idx 24·25 는 스칼라 루프로 더한다. **스칼라 루프가 두 배열의 주소를 그대로 노출한다**:

```
140261b10  test dword ptr [r11 + rax*4 + 0x484a20], r10d   ; r11 = ImageBase, r10d = formatFlag
140261b18  je   0x140261b22
140261b1a  add  ecx, dword ptr [r11 + rax*4 + 0x4849b0]
140261b22  inc  rax
140261b25  cmp  rax, 0x1a                                   ; 26 엔트리
140261b29  jne  0x140261b10
140261b2b  mov  dword ptr [rbp + 0xac], ecx                 ; stride -> 메시 구조체
```

즉 산식은 정확히 이것이다:

```c
stride = 0;
for (int i = 0; i < 26; i++)
    if (formatFlag & mask[i]) stride += size[i];
```

`mask[26] @ 0x140484a20`, `size[26] @ 0x1404849b0`. 같은 자리에 평행 배열이 둘 더 있다:
속성 이름 `char*[26] @ 0x140484a90`, 그리고 **`D3D11_INPUT_ELEMENT_DESC[26] @ 0x140482af0`**
(엔트리 32바이트 = `{LPCSTR SemanticName; UINT SemanticIndex; DXGI_FORMAT Format; UINT InputSlot;
UINT AlignedByteOffset; UINT InputClassification; UINT InstanceDataStepRate}`).
네 배열을 나란히 덤프하면 표가 완성된다.

| idx | mask | size | 속성 이름 | 시맨틱 | DXGI_FORMAT |
|---:|---|---:|---|---|---|
| 0 | `0x00000001` | 12 | `a_Position` | POSITION0 | 6 = R32G32B32_FLOAT |
| 1 | `0x00010000` | 16 | `a_PositionVec4` | POSITION0 | 2 = R32G32B32A32_FLOAT |
| 2 | `0x02000000` | 12 | `a_PositionC1` | POSITION1 | 6 = R32G32B32_FLOAT |
| 3 | `0x00000002` | 12 | `a_Normal` | NORMAL0 | 6 = R32G32B32_FLOAT |
| 4 | `0x00000004` | 16 | `a_Tangent4` | TANGENT0 | 2 = R32G32B32A32_FLOAT |
| 5 | `0x00800000` | 16 | `a_BlendIndices` | BLENDINDICES0 | **3 = R32G32B32A32_UINT** |
| 6 | `0x01000000` | 16 | `a_BlendWeights` | BLENDWEIGHT0 | 2 = R32G32B32A32_FLOAT |
| 7 | `0x00000008` | 8 | `a_TexCoord` | TEXCOORD0 | 16 = R32G32_FLOAT |
| 8 | `0x00000010` | 12 | `a_TexCoordVec3` | TEXCOORD0 | 6 = R32G32B32_FLOAT |
| 9 | `0x00000020` | 16 | `a_TexCoordVec4` | TEXCOORD0 | 2 = R32G32B32A32_FLOAT |
| 10 | `0x00000040` | 8 | `a_TexCoordC1` | TEXCOORD1 | 16 |
| 11 | `0x00000080` | 12 | `a_TexCoordVec3C1` | TEXCOORD1 | 6 |
| 12 | `0x00000100` | 16 | `a_TexCoordVec4C1` | TEXCOORD1 | 2 |
| 13 | `0x00000200` | 8 | `a_TexCoordC2` | TEXCOORD2 | 16 |
| 14 | `0x00000400` | 12 | `a_TexCoordVec3C2` | TEXCOORD2 | 6 |
| 15 | `0x00000800` | 16 | `a_TexCoordVec4C2` | TEXCOORD2 | 2 |
| 16 | `0x00001000` | 8 | `a_TexCoordC3` | TEXCOORD3 | 16 |
| 17 | `0x00002000` | 12 | `a_TexCoordVec3C3` | TEXCOORD3 | 6 |
| 18 | `0x00004000` | 16 | `a_TexCoordVec4C3` | TEXCOORD3 | 2 |
| 19 | `0x00020000` | 8 | `a_TexCoordC4` | TEXCOORD4 | 16 |
| 20 | `0x00040000` | 12 | `a_TexCoordVec3C4` | TEXCOORD4 | 6 |
| 21 | `0x00080000` | 16 | `a_TexCoordVec4C4` | TEXCOORD4 | 2 |
| 22 | `0x00100000` | 8 | `a_TexCoordC5` | TEXCOORD5 | 16 |
| 23 | `0x00200000` | 12 | `a_TexCoordVec3C5` | TEXCOORD5 | 6 |
| 24 | `0x00400000` | 16 | `a_TexCoordVec4C5` | TEXCOORD5 | 2 |
| 25 | `0x00008000` | 16 | `a_Color` | COLOR0 | 2 = R32G32B32A32_FLOAT |

**자체 검산 3중**:
1. 26엔트리 전부에서 `size[i]` 가 그 엔트리 `DXGI_FORMAT` 의 바이트 크기와 일치한다
   (6→12, 2→16, 3→16, 16→8). 전수 일치.
2. `INPUT_ELEMENT_DESC` 의 `SemanticIndex` 가 이름 접미사(`C1`…`C5` → TEXCOORD1…5,
   `PositionC1` → POSITION1)와 전수 일치한다.
3. 마스크 26개를 OR 하면 정확히 `0x03FFFFFF`(하위 26비트)다. 상위 6비트는 루프가
   아예 돌지 않으므로(`cmp rax,0x1a`) **스트라이드에 0을 기여한다.**

읽어 낼 결론:

- **채널 오프셋은 비트 값 순이 아니라 테이블 인덱스 오름차순 누적**이다. 예: `a_BlendIndices`
  (idx5, `0x00800000`)가 `a_TexCoord`(idx7, `0x08`)보다 **앞**에 놓이고,
  `a_Color`(idx25, `0x8000`)는 항상 **맨 뒤**다.
- **팩·정규화 포맷이 하나도 없다.** 전부 32비트 원소이며 `a_Color` 도 `u8×4` 가 아니라 float4,
  `a_BlendIndices` 만 uint4 다.
- `mdl-format.md` 가 "puppet/bone 블록을 여는 hi-bit" 라고 적은 `0x8000` 은 실제로는
  **`a_Color`(COLOR0 float4)** 다. 스키닝을 여는 건 **`0x00800000 | 0x01000000`**
  (BLENDINDICES + BLENDWEIGHT)이고, 이 둘은 별도 블록이 아니라 **정점 스트라이드 안의
  두 채널**이다. 즉 `mdl-format.md` 의 퍼펫 예시 `0x01800009` = pos3(12) + uv2(8) +
  blendIdx4(16) + blendW4(16) = **stride 52**.

실물 대조 — 설치본 28파일 45메시의 `formatFlag` 분포와 산출 스트라이드:

| formatFlag | 채널 | stride | 메시 수 |
|---|---|---:|---:|
| `0x09` | pos3 + uv2 | 20 | 19 |
| `0x0b` | pos3 + normal3 + uv2 | 32 | 10 |
| `0x0f` | pos3 + normal3 + tangent4 + uv2 | 48 | 10 |
| `0x27` | pos3 + normal3 + tangent4 + **uv4** | 56 | 6 |

**45메시 전부에서 `vertexBlobLen % stride == 0`** 이다.

### 1.7 인덱스 폭 = **u16** (실물 반증으로 확정)

디코더 함수 자체는 인덱스 블롭을 원소 단위로 해석하지 않고 포인터+길이로 메시 구조체에
넘긴다. 대신 실물 산술이 u32 를 배제한다: 45메시 전부 `indexBlobLen % 6 == 0`(u16 삼각형)이고,
**5메시는 `indexBlobLen % 12 != 0`** 이라 u32 삼각형이 불가능하다.

```
camera.mdl 3342 / pistols.mdl 8082 / body.mdl 12630 / ricepod.mdl 3450 / ricepod.mdl 49998
```

가장 작은 예가 결정적이다 — `audiophile/models/audiophile/glow.mdl` 은 정점 4개(unit quad)에
인덱스 블롭 12바이트이고 그 내용이 `00 00 01 00 02 00 | 00 00 02 00 03 00`
= u16 인덱스 `0,1,2, 0,2,3` 이다.

### 1.8 프레이밍 전수 검증

위 모델(§1.4–§1.7)을 그대로 코드로 옮겨 실물 28파일을 파스했다.
**28/28 이 파일 끝에 정확히 착지한다**(남는 바이트 0, 모자란 바이트 0).
버전 분포: `MDLV0004` 8, `MDLV0014` 15, `MDLV0017` 1, `MDLV0023` 4.

착지 방식이 버전 게이트를 그대로 드러낸다:
- `MDLV0004`(v<13): 마지막 인덱스 바이트가 곧 EOF. 서브청크 섹션이 **한 바이트도 없다**.
- `MDLV0014`/`MDLV0017`: 끝에 `0x00` 1바이트 = 빈 cstring 태그 → 섹션 루프 즉시 종료.
- `MDLV0023`: 끝에 `00 00 00 00` + `0x00` = v23 본 바인딩 카운트 0 + 빈 태그.

### 1.9 서브청크 디스패치

메시를 다 읽은 뒤(v≥13) cstring 태그를 읽어 도는 루프다. **태그 비교 방식이 청크마다 다르다** —
그대로 옮겨야 한다.

| 태그 | 비교 | 버전 처리 |
|---|---|---|
| `MDLS0004` | `strncmp(tag,"MDLS0004",4)` — **접두 4자** | `atoi(tag+4)` |
| `MDLA0006` | `strncmp(tag,"MDLA0006",4)` — **접두 4자** | `atoi(tag+4)` |
| `MDAT0001` | `strncmp(tag,"MDAT0001",8)` — **완전 8바이트** | 없음 |
| `MDMP0001` | `strncmp(tag,"MDMP0001",8)` — **완전 8바이트** | 없음 |
| `MDLE0002` | `std::string == "MDLE0002"`(`0x14000d010`) — **완전 일치** | 없음 |
| 그 외 | — | `SetSectionLimit()` 로 길이만큼 건너뛴다 |

빈 문자열 태그를 만나면 루프가 끝난다.

`MDLS` 본 개수에는 **하드 상한 128** 이 있다. 초과를 거부하는 게 아니라 프로세스를 즉사시킨다:

```c
uVar14 = ReadU32();              // boneCount
if (0x80 < uVar14) { swi(0x29); }   // __fastfail(0)
```

(디컴파일 `0000000140261880__FUN_140261880.c:762-769`; `if (0x80 < uVar14)` 는 765행)

---

## 2. Waple MDL 파서와의 대조

Waple 저장소(`/home/user/Waple`, **읽기만 함**)의 MDL 파서는
`Sources/WapleCore/Model3DFormat.swift`(버전 게이트)와 `Sources/WapleCore/Model3D.swift`
(레이아웃·파스)에 있다.

**결론: Waple 은 이미 옳다. 낡은 것은 이 저장소의 문서 쪽이다.**

| 항목 | 엔진(이번 측정) | Waple | 판정 |
|---|---|---|---|
| 매직 = NUL 종결 cstring, 필드 `0x09/0x0D/0x11` | 확인 | 동일(`Model3D.swift:75`, `:134` 에 `mdl-format.md` 오류를 명시적으로 반박) | 일치 |
| `hasAABB` v≥17 | `0x1402619a6` | `version >= 17` | 일치 |
| `hasPerMeshFormatFlag` v≥15 | `0x140261a19` | `version >= 15` | 일치 |
| `hasMeshTrailer` v≥21 | 디컴파일 `:327` | `version >= 21` | 일치 |
| `hasSections` v≥13 | 디컴파일 `:694` | `version >= 13` | 일치 |
| `gateWord & 2` → 여분 u32 1개 | `0x140261992` | `extraMeshHeaderWords` | 일치 |
| `maxBoneCount = 128` | `0x1402624f9` 뒤 `cmp 0x80` | `maxBoneCount = 128` | 일치 |
| 정점 속성 26엔트리 표 | `0x140484a20` / `0x1404849b0` | `vertexLayoutTable` 26엔트리 | **mask·size 26/26 전부 일치** |
| skinMask | `0x00800000 \| 0x01000000` | `skinMask = 0x0180_0000` | 일치 |
| 상위 6비트 무시 | `cmp rax,0x1a` | `vertexLayoutKnownBits` | 일치 |
| 45메시 플래그 분포 | 0x09:19 / 0x0b:10 / 0x0f:10 / 0x27:6 | 주석에 동일 수치 | 일치 |

Waple 주석은 `0x140484a90`(이름) 과 `0x140482fa0`(16B 디스크립터)까지 짚어 뒀다. 이번에
추가로 확인한 것은 **`0x140482af0` 의 `D3D11_INPUT_ELEMENT_DESC[26]`** 로, 각 채널의
`DXGI_FORMAT` 과 `SemanticIndex` 를 직접 준다 — Waple 표의 시맨틱 해석을 바이트로 뒷받침한다
(§1.6 검산 1·2).

**Waple 쪽에 고칠 것은 이번 정독에서 나오지 않았다.** (Waple 파일은 읽기만 했고 수정하지 않았다.)

---

## 3. TEX 디코더 재판정 — `0x14015e580`

### 3.1 종전 서술이 어떻게 틀렸나

§5 표 3행은 TEX 디코더를 `FUN_140261950` 이라 적었다. 두 겹으로 틀렸다.

1. **복사·붙여넣기 오류가 맞다.** 그 좌표는 4행(MDL)에 적힌 것과 같은 값이고, MDL 쪽이
   구 코퍼스에서 실제로 MDL 디코더였다. TEX 와는 무관하다.
2. **좌표 자체도 폐기됐다.** `0x140261950` 은 재생성 코퍼스에도, 원본 `.pdata` 1차 함수
   목록에도 함수 시작으로 존재하지 않는다(§6).

`subsystems-identified.md` 가 지목한 `Texture::ReadTextureData`(RTTI @0x4e02d3)는
**틀린 건 아니지만 주소가 아니다** — §3.4 참조.

### 3.2 실제 TEX 디코더: `0x14015e580` (크기 1,155 B)

**근거 ①(유일 참조).** 원본 바이너리 전역 rip-상대 참조 역산 결과, TEX 매직 문자열 5개가
**전부 이 함수 한 곳에서만** 참조된다.

| 매직 | 문자열 VA | 참조 명령 |
|---|---|---|
| `TEXV0005` | `0x14048b910` | `0x14015e66e lea rdx,[rip+0x32d29b]` |
| `TEXV0004` | `0x14048b930` | `0x14015e8c5 lea rdx,[rip+0x32d064]` |
| `TEXI0001` | `0x14048b900` | `0x14015e75b lea rdx,[rip+0x32d19e]` |
| `TEXB0004` | `0x14048b8f0` | `0x14015e792 lea rdx,[rip+0x32d157]` |
| `TEXS0003` | `0x14048b8e0` | `0x14015e7e6 lea rdx,[rip+0x32d0f3]` |

(`0x1402787c0` 이 `TEXV0005` 를 한 번 더 참조하지만, 그건 `MDLV0023` 을 참조하는
`0x1402785a0`(536 B)와 크기·형태가 같은 짝으로, 컨테이너 매직 **기록** 쪽이다.)

재생성 코퍼스 `evidence-index.tsv` 도 같다: `14015e580 … TEXB;TEXI;TEXV`.

**근거 ②(본문 구조).** 디컴파일
`analysis/decompiled/all/000000014015e580__FUN_14015e580.c` 가 컨테이너 워커 그 자체다.

```c
name = ReadCString(blob);                     // 컨테이너 매직
if (len == 8 && memcmp(name, "TEXV0005", 8) == 0) {
    while (remaining != 0) {
        sec = ReadCString(blob);              // 섹션 태그
        ver = (len(sec) > 4) ? atoi(sec + 4) : 0;
        if      (_strnicmp(sec, "TEXI0001", 4) == 0) ok = ReadTEXI (ver, &cur, info);
        else if (_strnicmp(sec, "TEXB0004", 4) == 0) st = ReadTEXB (ver, &cur, ...);
        else if (_strnicmp(sec, "TEXS0003", 4) == 0) ok = ReadTEXS(ver, &cur, ...);  // 0x14015e1d0
    }
} else if (len == 8 && memcmp(name, "TEXV0004", 8) == 0) {
    ReadTEXI(0, &cur, info);                  // v4 는 섹션 태그가 없다 — 암묵 레이아웃
    ReadTEXB(0, &cur, ...);
}
```

핵심은 비교 방식이다 — **`_strnicmp(…, 4)` 로 4글자 태그만 보고, 버전 4자리는
`atoi(sec+4)` 로 숫자로 뽑아 하위 파서에 넘긴다.** 그래서 바이너리에는 `TEXB0004` 라는
리터럴 하나만 있는데도 실물에는 `TEXB0001/0002/0003/0004` 가 모두 존재한다(§3.3).

> **[2026-08-28 정정] 위 의사코드의 `TEXS0003` 팔이 정반대로 적혀 있었다.**
> 종전 판은 `break; // 종료 섹션` 이었고 `0x14015e1d0` 을 "TEXI/TEXB/TEXS 아무것도 아닌
> 태그가 가는 네 번째 핸들러(무엇을 파싱하는지 [미해결])" 로 적었다. 바이트가 반대다:
>
> ```
> 0x14015e7e0  41 b8 04 00 00 00      mov  r8d, 4
> 0x14015e7e6  48 8d 15 f3 d0 32 00   lea  rdx, [rip+0x32d0f3]  ; 0x14048B8E0 = "TEXS0003\0"
> 0x14015e7f2  e8 ..                  call 0x1402c9e60          ; _strnicmp(tag, "TEXS0003", 4)
> 0x14015e7f9  75 ..                  jnz  0x14015e86b          ; 불일치 → 빠져나간다
> 0x14015e811  e8 ..                  call 0x14015e1d0          ; 일치   → 파싱한다
> ```
>
> 즉 **빠져나가는 쪽이 불일치 팔**이고 **`0x14015e1d0` 을 부르는 쪽이 일치 팔**이다.
> 그리고 `0x14015e1d0` 은 미상 핸들러가 아니라 **스프라이트시트 파서**다 — `i32 frameCount`
> 뒤에 프레임 지오메트리가 오고 `v>=3` 이면 gif 폭·높이를 명시로 싣는다. 레이아웃 전문은
> Waple 리포 `docs/re/tex-format.md` §1.3 에 있고, `Sources/WapleCore/TexImage.swift:866-868`
> 이 같은 3분기를 같은 세 개의 `mov r8d, 4` 호출부와 함께 적어 뒀다.
> **Swift 디코더가 옳고 이 문서가 틀렸다** — 반대로 맞추지 마라.
> 같은 오기가 `corpus_scan/tex-format.md` §요약 에도 있었고 함께 고쳤다.

**근거 ③(하위 파서와 LZ4).** 디스패치 대상 3개는 전부 인접 주소의 전용 파서다.

| 대상 | 주소 | 역할 |
|---|---|---|
| TEXI | `0x14015c760` (360 B) | 이미지 메타데이터 |
| TEXB | `0x14015c8d0` (6,388 B) | 픽셀 본문 |
| 기타 | `0x14015e1d0` | 프레임/시퀀스 추정 |

문자열 `LZ4 error.`(파일 오프셋 `0x4851f8` → VA `0x1404863f8`)를 참조하는 함수는 둘뿐인데
그중 하나가 **`0x14015c8d0`**(`0x14015dd1f lea rcx,[rip+0x3286d2]`)다. §5 3행의
"LZ4 decoder code reachable from the TEX decoder" 가 이 경로로 확인된다.

**근거 ④(호출자).** `0x14015e580` 을 부르는 함수는 `0x1400ec220` 과 `0x14014d500` 두 곳이고,
둘 다 `bool` 을 받아 실패 시 텍스처 객체를 파기한다 — 텍스처 로드 경로다.

### 3.3 TEXI 레이아웃 정정 — 실물 440/440 검증

`0x14015c760` 이 읽는 실제 순서(디컴파일 전문 확인):

```
u32 format                  -> info[0]
u32 flags                   -> info[1] (|= 로 합쳐 넣는다)
u32 texWidth                -> info[2]
u32 texHeight               -> info[3]
u32 imageWidth              -> info[5]
u32 imageHeight             -> info[6]
u32 texDepth                -> info[4]   ※ (flags & 0x40) 일 때만
u32 borderColor             -> info[7]   ※ TEXI 버전 > 0 일 때만
```

`corpus_scan/tex-format.md` 는 `0x2A`/`0x2E` 를 **무조건 있는** `field6`(mip count 추정) /
`field7` 로 적었다. 실제로는 `0x2A` 자리의 u32 는 **하나뿐**이고(borderColor),
추가 u32 는 `flags & 0x40` 일 때만 그 **앞에** 끼어든다.

실물 대조: 이 저장소의 `.tex` **440개 전수**에서, 위 모델대로 TEXI 를 소비하면
다음 8바이트가 **항상 유효한 `TEX?000N` 태그 + NUL** 이다(440/440, 실패 0).

`flags & 0x40` 이 선 파일은 정확히 **28개**이고 전부 컬러그레이딩 LUT 다:

```
lutx32_*.tex 등 28개 — format=0, flags=66(0x42), tex=32×32, texDepth=32, image=1024×32
```

→ **비트 6(0x40) = 3D(볼륨) 텍스처**, `info[4]` = 깊이. 32³ LUT 를 1024×32 2D 로 펴서
저장한 것이다. 파일명 `lutx32_`(LUT 32³)와 완전히 부합한다.

나머지 412개에서는 `(texW,texH) >= (imageW,imageH)` 이고 텍스처 쪽이 2의 거듭제곱으로
패딩된다 — §3 의 alloc/orig 해석이 맞다. (전수: 72개가 두 쌍이 다르고, 그중 44개가
`texW>=imageW && texH>=imageH`, 나머지 28개가 위의 LUT 다.)

### 3.4 `Texture::ReadTextureData` 는 **이름**이지 **주소**가 아니다 ⚠

`.data` 파일 오프셋 `0x4e02c0`(VA `0x1404e22c0`)에 진짜 MSVC TypeDescriptor 가 있다
(vftable `0x140426e18` + spare + name):

```
.?AV<lambda_1>@?BP@??ReadTextureData@Texture@@IEAAPEAV?$RefBuffer@E@@PEBDAEAUTextureInfo@2@AEAUTextureReadState@@@Z@
```

= `protected: RefBuffer<unsigned char>* Texture::ReadTextureData(char const*, Texture::TextureInfo&, TextureReadState&)`
**안에 있는 람다**의 타입 디스크립터다. 그런데 이 TypeDescriptor 를 가리키는 참조는
**바이너리 전체에서 0회**다(RVA 4바이트 형태 0회, 절대 8바이트 형태 0회). §7 의 결론과 같다.

> 따라서 `subsystems-identified.md` 의 지목은 **클래스/메서드 이름으로는 옳지만 좌표를 주지 못한다.**
> 이름과 `0x14015e580` 이 같은 함수인지는 **[미해결]** 이다 — 오히려 반증이 하나 있다:
> 맹글링된 반환형은 `RefBuffer<unsigned char>*` 인데 `0x14015e580` 은 `bool` 을 돌려주고
> 호출자 두 곳 다 `!= 0` 으로만 검사한다. `0x14015e580` 은 `ReadTextureData` 가 부르는
> 컨테이너 워커일 가능성이 더 높다. **이름은 붙이지 않았다.**

### 3.5 TEXB 버전 실측

`.tex` 440개의 본문 섹션 태그 분포:

```
TEXI0001 440 | TEXB0001 42 | TEXB0002 29 | TEXB0003 242 | TEXB0004 127
```

§3 이 "TEXB0003/TEXB0004" 만 적은 것은 **네 가지 중 둘**이다. 컨테이너 매직은 440개 모두
`TEXV0005`. format enum 실측 분포: `0`:257, `4`:72, `8`:51, `9`:60.
flags 실측: `0,1,2,3,4,5,6,7,18,66,0x80000,0x80002,0x80004`.

---

## 4. 검증하지 못한 것 (전부 [미해결])

1. **서브청크 길이 워드의 의미.** `0x140261770` 은 `sectionEnd = base + len` 으로 계산한다
   (상대 길이가 아니라 블롭 선두 기준 **절대 끝 오프셋**). 이 저장소 실물 28개에는
   비어 있지 않은 서브청크가 하나도 없어 **바이트로 확인하지 못했다.** 워크샵 코퍼스의
   `MDLV0021/0023` 퍼펫 파일이 필요하다.
2. **MDLS/MDLA/MDAT/MDMP/MDLE 내부 레코드 레이아웃.** 디스패치와 본 128 상한까지만 확인했다.
   본 레코드가 `cstring 이름 → u32 → u32 → 고정폭 블록 → cstring` 이라는 것까지는 읽었지만,
   고정폭 블록이 64바이트 행렬이라는 Waple 의 서술은 **호출 인자를 바이트로 재확인하지 않았다.**
3. **v23 본 바인딩 레코드의 뒷부분.** `{u64; cstring; u32; u32 k → k×u32; u32 m → m×u32}`
   까지 모델링해 28파일이 정확히 착지했지만, **실물에서 `n`(카운트)이 전부 0** 이라
   레코드 본문은 한 번도 실행되지 않았다. 사실상 미검증이다.
4. **정점 포맷 상위 6비트**(`~0x03FFFFFF`)의 의미. 스트라이드에 0을 기여한다는 것만 확실하다.
   실물에서 관측된 적도 없다.
5. **인덱스 폭을 엔진이 어디서 정하는가.** u16 이라는 결론은 실물 산술 반증(§1.7)이고,
   디코더 함수 안에서 폭을 정하는 코드는 못 찾았다(블롭을 그대로 넘긴다).
   D3D11 `IASetIndexBuffer` 호출부를 봐야 확정된다.
6. **`0x14015e580` ↔ `Texture::ReadTextureData` 이름 결합**(§3.4).
7. **TEXB 본문 레이아웃**(6,388 B). 이번엔 읽지 않았다. §3 의 mip 테이블·LZ4 블록 압축
   추정은 **여전히 추정**이다. 다만 진입점이 `0x14015c8d0` 으로 확정됐으니 다음 정독 대상은
   분명하다.
8. **`0x14015e1d0`(TEXI/TEXB/TEXS 가 아닌 섹션 처리기)의 역할.** "프레임/시퀀스"는 추정이다.
9. **TEXI `format` enum → DXGI 매핑.** §3 의 표는 크기 산술 추정이고 이번에 건드리지 않았다.

## 5. 재현

### 5.1 전수 검증기 (이번 결론 전부를 한 번에 다시 돌린다)

```bash
python3 scripts/verify_mdl_tex.py          # 저장소 루트에서. 종료코드 0 = 전부 통과
```

출력이 확인하는 것: 정점 속성 26엔트리의 `size == DXGI_FORMAT 크기`(불일치 0),
마스크 OR `= 0x03FFFFFF`, `.mdl` 28파일 45메시가 EOF 에 정확히 착지 +
`vlen % stride == 0` + `ilen % 6 == 0`(실패 0), `ilen % 12 != 0` 인 메시 5개(u32 인덱스 반증),
`.tex` 440/440 TEXI 프레이밍, `flags & 0x40` 28개(전부 32³ LUT).

### 5.2 오라클과 속성 표만 따로 (외부 의존 없음)

`scripts/verify_mdl_tex.py` 의 `PE`/`attr_table` 두 조각이 그대로 이 일을 한다.
바이너리만 두고 확인하려면:

```bash
python3 -c "
import sys; sys.path.insert(0,'scripts')
from verify_mdl_tex import PE, attr_table, DXGI_SIZE
pe = PE('wallpaper_engine/wallpaper64.exe')
t  = attr_table(pe)
print('size == DXGI 크기 전수일치:', all(DXGI_SIZE[e[5]] == e[1] for e in t))
k = 0
for m, *_ in t: k |= m
print('mask OR = 0x%08X' % k)
for i, e in enumerate(t): print(i, hex(e[0]), e[1], e[2], e[3] + str(e[4]), 'DXGI=%d' % e[5])
"
```

### 5.3 디스어셈블 지점 (capstone 5.0.7)

| 무엇 | 범위 |
|---|---|
| MDL 헤더 3필드 + 버전 게이트 | `0x1402618d0`–`0x140261a40` |
| 스트라이드 산식(SSE 6묶음 + 스칼라 루프) | `0x140261a28`–`0x140261b60` |
| 정점/인덱스 블롭 리드 | `0x140261b31`–`0x140261b5a` |
| TEX 섹션 디스패치(`_strnicmp` 4자 + `atoi`) | `0x14015e640`–`0x14015e8e0` |

VA→파일 오프셋은 `.text` 가 `-0xC00`, `.rdata` 가 `-0x1200`, `.data` 가 `-0x2000`
(본문 §5 의 표와 같다).
