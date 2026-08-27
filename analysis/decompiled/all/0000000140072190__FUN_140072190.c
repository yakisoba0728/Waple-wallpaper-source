// Function: FUN_140072190
// Addr: 140072190
// Size: 2265 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140072190(ulonglong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 ******ppppppuVar10;
  ulonglong uVar11;
  char cVar12;
  BOOL BVar13;
  int iVar14;
  DWORD DVar15;
  HMODULE pHVar16;
  HMODULE hModule;
  FARPROC pFVar17;
  FARPROC pFVar18;
  INT_PTR IVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *******pppppppuVar23;
  HMODULE _Buf1;
  ulonglong uVar24;
  HMODULE pHVar25;
  HMODULE _Buf2;
  int iVar26;
  longlong lVar27;
  HMODULE pHVar28;
  undefined1 *puVar29;
  HMODULE pHVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  HMODULE pHVar34;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  uint local_res20;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  int local_1e8;
  int local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  int local_1c8;
  int local_1c0;
  int local_1b8;
  uint local_1b0;
  int local_1a8;
  HMODULE local_1a0;
  tagRECT local_198;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  longlong local_178;
  FARPROC local_170;
  HMODULE local_168;
  longlong local_160;
  undefined8 uStack_158;
  longlong local_150;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 ******local_128 [2];
  ulonglong local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [56];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  undefined1 local_78 [56];
  
  puVar29 = auStack_208;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  BVar13 = GetClientRect(DAT_1404e52a0,&local_198);
  if (((BVar13 == 0) || (local_1a8 = local_198.bottom - local_198.top, local_1a8 < 8)) ||
     (local_res20 = local_198.right - local_198.left, (int)local_res20 < 8)) {
    return 0;
  }
  lVar27 = (longlong)(int)(local_1a8 * local_res20 * 4);
  local_178 = thunk_FUN_14028af20(lVar27);
  FUN_1404217a0(local_178,0,lVar27);
  hModule = DAT_1404e5330;
  local_180 = 0;
  pHVar30 = *(HMODULE *)DAT_1404e5330;
  if (pHVar30 == DAT_1404e5330) {
LAB_140072a51:
    thunk_FUN_14028af80(local_178);
    return 0;
  }
  do {
    FUN_14002f980(local_128);
    uVar11 = local_110;
    uVar7 = local_118;
    ppppppuVar10 = local_128[0];
    uVar22 = 0xcbf29ce484222325;
    pppppppuVar23 = local_128;
    if (0xf < local_110) {
      pppppppuVar23 = (undefined8 *******)local_128[0];
    }
    uVar24 = 0;
    if (local_118 != 0) {
      do {
        pbVar1 = (byte *)((longlong)pppppppuVar23 + uVar24);
        uVar24 = uVar24 + 1;
        uVar22 = (uVar22 ^ *pbVar1) * 0x100000001b3;
      } while (uVar24 < local_118);
    }
    pHVar28 = *(HMODULE *)(DAT_1404e5380 + 8 + (uVar22 & _DAT_1404e5398) * 0x10);
    if (pHVar28 != DAT_1404e5370) {
      pHVar34 = *(HMODULE *)(DAT_1404e5380 + (uVar22 & _DAT_1404e5398) * 0x10);
      while( true ) {
        pHVar25 = pHVar28 + 4;
        if (0xf < *(ulonglong *)(pHVar28 + 10)) {
          pHVar25 = *(HMODULE *)pHVar25;
        }
        pppppppuVar23 = local_128;
        if (0xf < uVar11) {
          pppppppuVar23 = (undefined8 *******)ppppppuVar10;
        }
        if ((uVar7 == *(ulonglong *)(pHVar28 + 8)) &&
           ((uVar7 == 0 || (iVar14 = memcmp(pppppppuVar23,pHVar25,uVar7), iVar14 == 0))))
        goto LAB_14007232e;
        if (pHVar28 == pHVar34) break;
        pHVar28 = *(HMODULE *)(pHVar28 + 2);
      }
    }
    pHVar28 = (HMODULE)0x0;
LAB_14007232e:
    pHVar34 = DAT_1404e5370;
    if (pHVar28 != (HMODULE)0x0) {
      pHVar34 = pHVar28;
    }
    local_168 = pHVar34;
    if ((pHVar34 != DAT_1404e5370) && (iVar14 = pHVar34[0x16].unused, local_198.left <= iVar14)) {
      iVar26 = local_1a8 - pHVar34[0x19].unused;
      if (((local_198.top <= iVar26) &&
          (((iVar33 = pHVar34[0x18].unused, iVar33 <= local_198.right &&
            (iVar31 = pHVar34[0x19].unused - pHVar34[0x17].unused,
            iVar31 + iVar26 <= local_198.bottom)) && (local_108 != (longlong *)0x0)))) &&
         (cVar12 = (**(code **)(*local_108 + 0x60))(local_108,&local_184,&local_188,&local_170),
         cVar12 != '\0')) {
        local_1c0 = iVar33 - iVar14;
        local_1b0 = local_res20;
        local_1d8 = local_178;
        local_1e0 = local_184;
        local_1e8 = local_188;
        local_1d0 = iVar14;
        local_1c8 = iVar26;
        local_1b8 = iVar31;
        FUN_140109180(local_170,0,0);
        pHVar28 = DAT_1404e5370;
        if (DAT_1404e52e0 == 2) {
          for (pHVar34 = *(HMODULE *)DAT_1404e5370; pHVar34 != pHVar28;
              pHVar34 = *(HMODULE *)pHVar34) {
            bVar2 = *(byte *)((longlong)&pHVar34[0x14].unused + 3);
            uVar7 = local_res8 >> 8;
            local_res8 = CONCAT71((int7)uVar7,bVar2);
            if (((bVar2 & 1) != 0) &&
               (local_17c = pHVar34[0x16].unused, local_198.left <= local_17c)) {
              iVar14 = local_1a8 - pHVar34[0x19].unused;
              if ((local_198.top <= iVar14) &&
                 ((pHVar34[0x18].unused <= local_198.right &&
                  (iVar26 = pHVar34[0x19].unused - pHVar34[0x17].unused,
                  iVar26 + iVar14 <= local_198.bottom)))) {
                iVar33 = pHVar34[0x18].unused - local_17c;
                local_150 = 0;
                local_160 = 0;
                uStack_158 = 0;
                FUN_14005ae80(&local_160,iVar26 * iVar33 * 4);
                local_1d8 = CONCAT71(local_1d8._1_7_,(byte)local_res8 >> 2) & 0xffffffffffffff01;
                local_1e8 = iVar33;
                local_1e0 = iVar26;
                FUN_140109ba0(local_170,local_160,local_184,local_188);
                FUN_140109aa0(local_160,iVar33,iVar26);
                local_1b0 = local_res20;
                local_1d0 = local_17c;
                local_1d8 = local_178;
                local_1e8 = iVar26;
                local_1e0 = iVar33;
                local_1c8 = iVar14;
                local_1c0 = iVar33;
                local_1b8 = iVar26;
                FUN_140109180(local_160,0,0,iVar33);
                if (local_160 != 0) {
                  lVar27 = local_160;
                  if ((0xfff < (ulonglong)(local_150 - local_160)) &&
                     (lVar27 = *(longlong *)(local_160 + -8), 0x1f < (local_160 - lVar27) - 8U))
                  goto LAB_140072828;
                  thunk_FUN_14028af80(lVar27);
                }
              }
            }
          }
        }
        else if (DAT_1404e52e0 == 0) {
          local_140 = pHVar34[0x17].unused;
          iVar14 = pHVar34[0x16].unused;
          local_17c = pHVar34[0x18].unused;
          pHVar25 = *(HMODULE *)DAT_1404e5370;
          local_13c = pHVar34[0x19].unused;
          local_res8 = CONCAT44(local_res8._4_4_,iVar14);
          if (pHVar25 != DAT_1404e5370) {
            pHVar16 = pHVar34 + 4;
            local_1a0 = pHVar16;
            do {
              _Buf2 = pHVar16;
              if (0xf < *(ulonglong *)(pHVar34 + 10)) {
                _Buf2 = *(HMODULE *)pHVar16;
              }
              _Size = *(size_t *)(pHVar25 + 8);
              if (*(ulonglong *)(pHVar25 + 10) < 0x10) {
                _Buf1 = pHVar25 + 4;
              }
              else {
                _Buf1 = *(HMODULE *)(pHVar25 + 4);
              }
              if (_Size == *(size_t *)(pHVar34 + 8)) {
                if (_Size != 0) {
                  iVar26 = memcmp(_Buf1,_Buf2,_Size);
                  if (iVar26 != 0) goto LAB_1400725f1;
                  goto LAB_14007277b;
                }
              }
              else {
LAB_1400725f1:
                cVar12 = (char)pHVar25[0x14].unused;
                if (((cVar12 != -1) && (cVar12 == (char)pHVar34[0x14].unused)) &&
                   (cVar12 = FUN_1400755f0(), cVar12 == '\0')) {
                  local_134 = pHVar25[0x16].unused;
                  iVar26 = pHVar25[0x18].unused;
                  iVar33 = pHVar25[0x19].unused;
                  if ((((local_134 != iVar14) || (iVar26 != local_17c)) ||
                      ((pHVar25[0x17].unused != local_140 || (iVar33 != local_13c)))) &&
                     (local_198.left <= local_134)) {
                    iVar14 = local_1a8 - iVar33;
                    if (((local_198.top <= iVar14) && (iVar26 <= local_198.right)) &&
                       (iVar33 = iVar33 - pHVar25[0x17].unused, iVar33 + iVar14 <= local_198.bottom)
                       ) {
                      bVar2 = *(byte *)((longlong)&pHVar25[0x14].unused + 3);
                      local_138 = iVar26 - local_134;
                      local_150 = 0;
                      local_160 = 0;
                      uStack_158 = 0;
                      FUN_14005ae80(&local_160,iVar33 * local_138 * 4);
                      iVar26 = local_138;
                      local_1d8 = CONCAT71(local_1d8._1_7_,bVar2 >> 2) & 0xffffffffffffff01;
                      local_1e8 = local_138;
                      local_1e0 = iVar33;
                      FUN_140109ba0(local_170,local_160,local_184,local_188);
                      FUN_140109aa0(local_160,iVar26,iVar33);
                      local_1b0 = local_res20;
                      local_1c0 = iVar26;
                      local_1d0 = local_134;
                      local_1d8 = local_178;
                      local_1e0 = iVar26;
                      local_1e8 = iVar33;
                      local_1c8 = iVar14;
                      local_1b8 = iVar33;
                      FUN_140109180(local_160,0,0,iVar26);
                      if (local_160 != 0) {
                        lVar27 = local_160;
                        if ((0xfff < (ulonglong)(local_150 - local_160)) &&
                           (lVar27 = *(longlong *)(local_160 + -8), 0x1f < (local_160 - lVar27) - 8U
                           )) goto LAB_140072828;
                        thunk_FUN_14028af80(lVar27);
                      }
                      pHVar16 = local_1a0;
                      pHVar34 = local_168;
                      iVar14 = (int)local_res8;
                      goto LAB_14007277f;
                    }
                    iVar14 = (int)local_res8;
                  }
                }
LAB_14007277b:
                pHVar16 = pHVar34 + 4;
              }
LAB_14007277f:
              pHVar25 = *(HMODULE *)pHVar25;
            } while (pHVar25 != pHVar28);
          }
        }
        local_180 = local_180 + 1;
        thunk_FUN_14028af80(local_170);
      }
    }
    FUN_140017240(local_78);
    FUN_140017240(local_98);
    FUN_140031b80(local_b0);
    FUN_140031170(local_e8);
    FUN_140031170(local_100);
    FUN_140017240(local_128);
    pHVar30 = *(HMODULE *)pHVar30;
  } while (pHVar30 != hModule);
  if (local_180 == 0) goto LAB_140072a51;
  hModule = LoadLibraryExW(L"resourceutil64.dll",(HANDLE)0x0,0x1000);
  local_168 = hModule;
  if (hModule == (HMODULE)0x0) {
    DVar15 = GetLastError();
    FUN_140098760("Error loading library %S (%i).\n",L"resourceutil64.dll",DVar15);
    puVar29 = auStack_208;
    goto LAB_140072a05;
  }
LAB_14007282f:
  *(undefined8 *)(puVar29 + -8) = 0x14007283f;
  pFVar17 = GetProcAddress(hModule,"SaveRGBAToJPEG");
  *(undefined8 *)(puVar29 + -8) = 0x140072856;
  local_170 = pFVar17;
  pFVar18 = GetProcAddress(hModule,"FreeImageBits");
  uVar32 = local_res20;
  lVar27 = local_res10;
  if ((pFVar17 != (FARPROC)0x0) && (pFVar18 != (FARPROC)0x0)) {
    uVar3 = *(uint *)(puVar29 + 0x60);
    if (local_res10 != 0) {
      *(ulonglong **)(puVar29 + 0x20) = &local_res8;
      *(undefined8 *)(puVar29 + -8) = 0x14007289f;
      IVar19 = (*pFVar17)((ulonglong)local_res20,(ulonglong)uVar3,local_178,puVar29 + 0x68);
      uVar7 = local_res8;
      if ((char)IVar19 != '\0') {
        uVar5 = *(undefined8 *)(puVar29 + 0x68);
        *(undefined8 *)(puVar29 + -8) = 0x1400728ba;
        puVar20 = (undefined8 *)FUN_140060990(&local_160,lVar27);
        if (7 < (ulonglong)puVar20[3]) {
          puVar20 = (undefined8 *)*puVar20;
        }
        *(undefined8 *)(puVar29 + -8) = 0x1400728d2;
        FUN_140060610(puVar20,uVar5,uVar7 & 0xffffffff);
        *(undefined8 *)(puVar29 + -8) = 0x1400728db;
        FUN_140016770(&local_160);
        *(undefined8 *)(puVar29 + -8) = 0x1400728e3;
        (*pFVar18)(*(undefined8 *)(puVar29 + 0x68));
        uVar32 = local_res20;
      }
    }
    piVar8 = DAT_1404e8ec8;
    if (((local_res18 != 0) && (iVar14 = DAT_1404e8ec8[3], DAT_1404e8ec8[1] + iVar14 <= (int)uVar3))
       && (iVar26 = DAT_1404e8ec8[2], *DAT_1404e8ec8 + iVar26 <= (int)uVar32)) {
      *(undefined8 *)(puVar29 + -8) = 0x14007292f;
      lVar21 = thunk_FUN_14028af20((longlong)(iVar14 * iVar26 * 4));
      lVar27 = local_178;
      uVar9 = local_res20;
      uVar32 = piVar8[3];
      iVar26 = 0;
      iVar33 = uVar3 - uVar32;
      iVar14 = piVar8[1];
      if (0 < (int)uVar32) {
        do {
          iVar31 = piVar8[2];
          iVar4 = *piVar8;
          *(undefined8 *)(puVar29 + -8) = 0x140072981;
          FUN_1404210f0(iVar31 * iVar26 * 4 + lVar21,
                        (int)(((iVar26 + (iVar33 - iVar14)) * uVar9 + iVar4) * 4) + lVar27,
                        (longlong)(iVar31 * 4));
          uVar32 = piVar8[3];
          iVar26 = iVar26 + 1;
          pFVar17 = local_170;
          hModule = local_168;
        } while (iVar26 < (int)uVar32);
      }
      uVar3 = piVar8[2];
      *(ulonglong **)(puVar29 + 0x20) = &local_res8;
      *(undefined8 *)(puVar29 + -8) = 0x1400729ac;
      IVar19 = (*pFVar17)((ulonglong)uVar3,(ulonglong)uVar32,lVar21,puVar29 + 0x68);
      uVar7 = local_res8;
      if ((char)IVar19 != '\0') {
        uVar5 = *(undefined8 *)(puVar29 + 0x68);
        *(undefined8 *)(puVar29 + -8) = 0x1400729cb;
        puVar20 = (undefined8 *)FUN_140060990(&local_160,local_res18);
        if (7 < (ulonglong)puVar20[3]) {
          puVar20 = (undefined8 *)*puVar20;
        }
        *(undefined8 *)(puVar29 + -8) = 0x1400729e3;
        FUN_140060610(puVar20,uVar5,uVar7 & 0xffffffff);
        *(undefined8 *)(puVar29 + -8) = 0x1400729ec;
        FUN_140016770(&local_160);
        *(undefined8 *)(puVar29 + -8) = 0x1400729f4;
        (*pFVar18)(*(undefined8 *)(puVar29 + 0x68));
      }
      *(undefined8 *)(puVar29 + -8) = 0x1400729fc;
      thunk_FUN_14028af80(lVar21);
    }
  }
  *(undefined8 *)(puVar29 + -8) = 0x140072a05;
  FreeLibrary(hModule);
LAB_140072a05:
  *(undefined8 *)(puVar29 + -8) = 0x140072a0e;
  thunk_FUN_14028af80(local_178);
  return 1;
LAB_140072828:
  pcVar6 = (code *)swi(0x29);
  (*pcVar6)(5);
  puVar29 = auStack_200;
  goto LAB_14007282f;
}

