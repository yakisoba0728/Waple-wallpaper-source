// Function: FUN_1401538d0
// Addr: 1401538d0
// Size: 1620 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1401538d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined8 *******_Buf1;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined1 *puVar21;
  size_t sVar22;
  ulonglong unaff_R15;
  float fVar23;
  float fVar24;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *******local_48;
  undefined8 uStack_40;
  size_t local_38;
  ulonglong local_30;
  
  uVar11 = *(ulonglong *)(param_1 + 8);
  lVar15 = *(longlong *)(uVar11 + 0x278);
  uVar13 = (((((ulonglong)*(byte *)(param_2 + 4) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_2 + 5)) * 0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 6))
            * 0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 7)) * 0x100000001b3 &
           *(ulonglong *)(uVar11 + 0x2a0);
  lVar18 = *(longlong *)(*(longlong *)(uVar11 + 0x288) + 8 + uVar13 * 0x10);
  if (lVar18 == lVar15) {
LAB_140153970:
    lVar18 = 0;
  }
  else {
    iVar9 = *(int *)(lVar18 + 0x10);
    while (*(int *)(param_2 + 4) != iVar9) {
      if (lVar18 == *(longlong *)(*(longlong *)(uVar11 + 0x288) + uVar13 * 0x10))
      goto LAB_140153970;
      lVar18 = *(longlong *)(lVar18 + 8);
      iVar9 = *(int *)(lVar18 + 0x10);
    }
  }
  if (lVar18 == 0) {
    lVar18 = lVar15;
  }
  if (lVar18 == lVar15) {
    return;
  }
  if (*(char *)(param_3 + 8) == '\x04') {
    FUN_140085cc0(param_3,&local_48);
  }
  else {
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (undefined8 *******)0x0;
    local_30 = 0xf;
  }
  uVar13 = local_30;
  sVar22 = local_38;
  pppppppuVar19 = local_48;
  lVar15 = *(longlong *)(lVar18 + 0x18);
  pppppppuVar20 = (undefined8 *******)(lVar15 + 0x10);
  pppppppuVar16 = pppppppuVar20;
  if (0xf < *(ulonglong *)(lVar15 + 0x28)) {
    pppppppuVar16 = (undefined8 *******)*pppppppuVar20;
  }
  _Buf1 = &local_48;
  if (0xf < local_30) {
    _Buf1 = local_48;
  }
  if ((local_38 != *(size_t *)(lVar15 + 0x20)) ||
     ((unaff_R15 = unaff_R15 & 0xffffffffffffff00, local_38 != 0 &&
      (iVar9 = memcmp(_Buf1,pppppppuVar16,local_38), iVar9 != 0)))) {
    if ((undefined8 ********)pppppppuVar20 != &local_48) {
      pppppppuVar16 = &local_48;
      if (0xf < uVar13) {
        pppppppuVar16 = pppppppuVar19;
      }
      FUN_14000f880(pppppppuVar20,pppppppuVar16,sVar22);
      pppppppuVar19 = local_48;
      uVar13 = local_30;
    }
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
  }
  if (0xf < uVar13) {
    uVar17 = uVar13 + 1;
    pppppppuVar20 = pppppppuVar19;
    if (0xfff < uVar17) {
      pppppppuVar20 = (undefined8 *******)pppppppuVar19[-1];
      if (0x1f < (ulonglong)((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar20))) {
        puVar14 = (undefined8 *)&DAT_00000005;
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)();
        puVar21 = auStack_60;
        goto LAB_140153b6e;
      }
      uVar17 = uVar13 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar20,uVar17);
  }
  if ((char)unaff_R15 == '\0') {
    return;
  }
  sVar22 = *(size_t *)(uVar11 + 200);
  puVar14 = *(undefined8 **)(sVar22 + 0x1678);
  unaff_R15 = ((((((((uVar11 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar11 >> 8 & 0xff) *
                    0x100000001b3 ^ uVar11 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x18 & 0xff)
                  * 0x100000001b3 ^ uVar11 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x28 & 0xff)
                * 0x100000001b3 ^ uVar11 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x38) *
              0x100000001b3;
  uVar13 = unaff_R15 & *(ulonglong *)(sVar22 + 0x16a0);
  puVar10 = *(undefined8 **)(*(longlong *)(sVar22 + 0x1688) + 8 + uVar13 * 0x10);
  puVar21 = auStack_68;
  if (puVar10 != puVar14) {
    uVar17 = puVar10[2];
    puVar14 = puVar10;
    while( true ) {
      if (uVar11 == uVar17) {
        return;
      }
      puVar21 = auStack_68;
      if (puVar14 == *(undefined8 **)(*(longlong *)(sVar22 + 0x1688) + uVar13 * 0x10)) break;
      puVar14 = (undefined8 *)puVar14[1];
      uVar17 = puVar14[2];
    }
  }
LAB_140153b6e:
  if (*(longlong *)(sVar22 + 0x1680) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar21 + -8) = &UNK_140153f25;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar21 + -8) = 0x140153b8f;
  puVar10 = (undefined8 *)FUN_14028af20(0x18);
  puVar10[2] = uVar11;
  fVar23 = (float)(*(longlong *)(sVar22 + 0x1680) + 1);
  uVar11 = *(ulonglong *)(sVar22 + 0x16a8);
  fVar24 = *(float *)(sVar22 + 0x1670);
  if (fVar24 < fVar23 / (float)uVar11) {
    *(undefined8 *)(puVar21 + -8) = 0x140153c11;
    fVar24 = (float)FUN_140419fa0(fVar23 / fVar24);
    lVar15 = 0;
    if ((DAT_140492974 <= fVar24) && (fVar24 = fVar24 - DAT_140492974, fVar24 < DAT_140492974)) {
      lVar15 = -0x8000000000000000;
    }
    uVar13 = 8;
    if (8 < (ulonglong)((longlong)fVar24 + lVar15)) {
      uVar13 = (longlong)fVar24 + lVar15;
    }
    uVar17 = uVar11;
    if ((uVar11 < uVar13) && ((0x1ff < uVar11 || (uVar17 = uVar11 * 8, uVar11 * 8 < uVar13)))) {
      uVar17 = uVar13;
    }
    for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < uVar17) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_140153f18;
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar1 = *(longlong **)(sVar22 + 0x1678);
    uVar11 = uVar17 - 1 | 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    bVar12 = (char)lVar15 + 1;
    lVar15 = 1L << (bVar12 & 0x3f);
    *(undefined8 *)(puVar21 + -8) = 0x140153cb7;
    FUN_14004f190(sVar22 + 0x1688,2L << (bVar12 & 0x3f),plVar1);
    *(longlong *)(sVar22 + 0x16a8) = lVar15;
    *(longlong *)(sVar22 + 0x16a0) = lVar15 + -1;
    plVar8 = (longlong *)**(undefined8 **)(sVar22 + 0x1678);
joined_r0x000140153cd9:
    if (plVar8 != plVar1) {
      lVar15 = *(longlong *)(sVar22 + 0x1688);
      plVar2 = (longlong *)*plVar8;
      uVar11 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 &
               *(ulonglong *)(sVar22 + 0x16a0);
      plVar3 = *(longlong **)(lVar15 + uVar11 * 0x10);
      if (plVar3 == plVar1) {
        *(longlong **)(lVar15 + uVar11 * 0x10) = plVar8;
        *(longlong **)(lVar15 + 8 + uVar11 * 0x10) = plVar8;
        plVar8 = plVar2;
      }
      else {
        plVar4 = *(longlong **)(lVar15 + 8 + uVar11 * 0x10);
        if (plVar8[2] == plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar8) {
            plVar3 = (longlong *)plVar8[1];
            *plVar3 = (longlong)plVar2;
            puVar14 = (undefined8 *)plVar2[1];
            *puVar14 = plVar4;
            puVar5 = (undefined8 *)plVar4[1];
            *puVar5 = plVar8;
            plVar4[1] = (longlong)puVar14;
            plVar2[1] = (longlong)plVar3;
            plVar8[1] = (longlong)puVar5;
          }
          *(longlong **)(lVar15 + 8 + uVar11 * 0x10) = plVar8;
          plVar8 = plVar2;
        }
        else {
          do {
            if (plVar3 == plVar4) {
              plVar3 = (longlong *)plVar8[1];
              *plVar3 = (longlong)plVar2;
              puVar14 = (undefined8 *)plVar2[1];
              *puVar14 = plVar4;
              puVar5 = (undefined8 *)plVar4[1];
              *puVar5 = plVar8;
              plVar4[1] = (longlong)puVar14;
              plVar2[1] = (longlong)plVar3;
              plVar8[1] = (longlong)puVar5;
              *(longlong **)(lVar15 + uVar11 * 0x10) = plVar8;
              plVar8 = plVar2;
              goto joined_r0x000140153cd9;
            }
            plVar4 = (longlong *)plVar4[1];
          } while (plVar8[2] != plVar4[2]);
          lVar15 = *plVar4;
          plVar3 = (longlong *)plVar8[1];
          *plVar3 = (longlong)plVar2;
          plVar4 = (longlong *)plVar2[1];
          *plVar4 = lVar15;
          puVar14 = *(undefined8 **)(lVar15 + 8);
          *puVar14 = plVar8;
          *(longlong **)(lVar15 + 8) = plVar4;
          plVar2[1] = (longlong)plVar3;
          plVar8[1] = (longlong)puVar14;
          plVar8 = plVar2;
        }
      }
      goto joined_r0x000140153cd9;
    }
    *(undefined8 *)(puVar21 + 0x70) = 0;
    *(undefined8 *)(puVar21 + -8) = 0x140153e17;
    FUN_14005b0e0(puVar21 + 0x70);
    uVar11 = unaff_R15 & *(ulonglong *)(sVar22 + 0x16a0);
    puVar14 = *(undefined8 **)(sVar22 + 0x1678);
    puVar5 = *(undefined8 **)(*(longlong *)(sVar22 + 0x1688) + 8 + uVar11 * 0x10);
    if (puVar5 != puVar14) {
      lVar15 = puVar5[2];
      puVar14 = puVar5;
      while (puVar10[2] != lVar15) {
        if (puVar14 == *(undefined8 **)(*(longlong *)(sVar22 + 0x1688) + uVar11 * 0x10))
        goto LAB_140153e62;
        puVar14 = (undefined8 *)puVar14[1];
        lVar15 = puVar14[2];
      }
      puVar14 = (undefined8 *)*puVar14;
    }
  }
LAB_140153e62:
  puVar5 = (undefined8 *)puVar14[1];
  *(longlong *)(sVar22 + 0x1680) = *(longlong *)(sVar22 + 0x1680) + 1;
  *puVar10 = puVar14;
  puVar10[1] = puVar5;
  *puVar5 = puVar10;
  puVar14[1] = puVar10;
  lVar15 = *(longlong *)(sVar22 + 0x1688);
  uVar11 = *(ulonglong *)(sVar22 + 0x16a0) & unaff_R15;
  puVar6 = *(undefined8 **)(lVar15 + uVar11 * 0x10);
  if (puVar6 == *(undefined8 **)(sVar22 + 0x1678)) {
    *(undefined8 **)(lVar15 + uVar11 * 0x10) = puVar10;
  }
  else {
    if (puVar6 == puVar14) {
      *(undefined8 **)(lVar15 + uVar11 * 0x10) = puVar10;
      return;
    }
    if (*(undefined8 **)(lVar15 + 8 + uVar11 * 0x10) != puVar5) {
      return;
    }
  }
  *(undefined8 **)(lVar15 + 8 + uVar11 * 0x10) = puVar10;
  return;
}

