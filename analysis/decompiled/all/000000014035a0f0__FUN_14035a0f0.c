// Function: FUN_14035a0f0
// Addr: 14035a0f0
// Size: 1341 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14035a0f0(int param_1,longlong param_2,uint param_3,longlong *param_4,uint *param_5,
             undefined *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined *local_d0;
  undefined *local_c8;
  int local_b0;
  undefined *local_a8;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  ushort auStack_88 [5];
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  ushort auStack_68 [4];
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  local_90 = param_5;
  local_a8 = param_6;
  uVar17 = 0;
  do {
    if (0x1f < uVar17 * 2) {
      local_b0 = param_1;
      local_a0 = param_4;
      local_98 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1402ed4d0();
    }
    uVar21 = (int)uVar17 + 1;
    auStack_88[uVar17] = 0;
    uVar17 = (ulonglong)uVar21;
  } while (uVar21 < 0x10);
  uVar17 = 0;
  if (param_3 != 0) {
    do {
      lVar16 = uVar17 * 2;
      uVar21 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar21;
      auStack_88[*(ushort *)(param_2 + lVar16)] = auStack_88[*(ushort *)(param_2 + lVar16)] + 1;
    } while (uVar21 < param_3);
  }
  uVar17 = 0xf;
  do {
    uVar8 = (uint)uVar17;
    uVar21 = uVar8;
    if ((((auStack_88[uVar17] != 0) || (uVar21 = uVar8 - 1, auStack_88[uVar21] != 0)) ||
        (uVar21 = uVar8 - 2, auStack_88[uVar21] != 0)) ||
       ((uVar21 = uVar8 - 3, auStack_88[uVar21] != 0 ||
        (uVar21 = uVar8 - 4, auStack_88[uVar21] != 0)))) goto LAB_14035a1da;
    uVar17 = (ulonglong)(uVar8 - 5);
  } while (uVar8 - 5 != 0);
  uVar21 = 0;
LAB_14035a1da:
  uVar8 = uVar21;
  if (*param_5 <= uVar21) {
    uVar8 = *param_5;
  }
  if (uVar21 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    uVar5 = 0;
    *param_5 = 1;
  }
  else {
    uVar17 = 1;
    if (1 < uVar21) {
      do {
        if (auStack_88[uVar17] != 0) break;
        uVar22 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar22;
      } while (uVar22 < uVar21);
    }
    uVar11 = 1;
    uVar22 = (uint)uVar17;
    if ((uint)uVar17 <= uVar8) {
      uVar22 = uVar8;
    }
    iVar18 = 1;
    do {
      iVar18 = iVar18 * 2 - (uint)auStack_88[uVar11];
      if (iVar18 < 0) goto LAB_14035a61e;
      uVar8 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar8;
    } while (uVar8 < 0x10);
    if ((iVar18 < 1) || ((param_1 != 0 && (uVar21 == 1)))) {
      uVar11 = 0;
      auStack_68[1] = 0;
      auStack_68[2] = auStack_88[1];
      auStack_68[3] = auStack_88[1] + auStack_88[2];
      local_60 = auStack_88[1] + auStack_88[2] + auStack_88[3];
      local_5e = local_60 + auStack_88[4];
      local_5c = local_5e + local_7e;
      local_5a = local_5c + local_7c;
      local_58 = local_5a + local_7a;
      local_56 = local_58 + local_78;
      local_54 = local_56 + local_76;
      local_52 = local_54 + local_74;
      local_50 = local_52 + local_72;
      local_4e = local_50 + local_70;
      local_4c = local_4e + local_6e;
      local_4a = local_4c + local_6c;
      if (param_3 != 0) {
        do {
          uVar12 = *(ushort *)(param_2 + uVar11 * 2);
          if (uVar12 != 0) {
            *(short *)(param_6 + (ulonglong)auStack_68[uVar12] * 2) = (short)uVar11;
            auStack_68[*(ushort *)(param_2 + uVar11 * 2)] =
                 auStack_68[*(ushort *)(param_2 + uVar11 * 2)] + 1;
          }
          uVar8 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar8;
        } while (uVar8 < param_3);
      }
      uVar8 = 1 << ((byte)uVar22 & 0x1f);
      if (param_1 == 0) {
        uVar10 = 0x14;
        local_d0 = param_6;
        local_e8 = 0x14;
        local_c8 = param_6;
LAB_14035a3f9:
        lVar16 = *param_4;
        local_dc = 0xffffffff;
        uVar11 = 0;
        local_e4 = 0;
        uVar1 = uVar8 - 1;
        local_e0 = 0;
        uVar19 = uVar22;
LAB_14035a423:
        do {
          do {
            cVar20 = (char)uVar17;
            bVar23 = (byte)local_e0;
            uVar12 = *(ushort *)(param_6 + (ulonglong)local_e4 * 2);
            if (uVar12 + 1 < uVar10) {
              uVar15 = 0;
            }
            else if (uVar12 < uVar10) {
              uVar15 = 0x60;
              uVar12 = 0;
            }
            else {
              uVar14 = (ulonglong)(uVar12 - uVar10);
              uVar15 = local_d0[uVar14 * 2];
              uVar12 = *(ushort *)(local_c8 + uVar14 * 2);
            }
            uVar7 = (uint)uVar11;
            uVar9 = 1 << ((byte)uVar19 & 0x1f);
            uVar10 = uVar9;
            do {
              uVar10 = uVar10 - (1 << (cVar20 - bVar23 & 0x1f));
              uVar11 = (ulonglong)((uVar7 >> (bVar23 & 0x1f)) + uVar10);
              *(undefined1 *)(lVar16 + uVar11 * 4) = uVar15;
              *(byte *)(lVar16 + 1 + uVar11 * 4) = cVar20 - bVar23;
              *(ushort *)(lVar16 + 2 + uVar11 * 4) = uVar12;
            } while (uVar10 != 0);
            for (uVar10 = 1 << (cVar20 - 1U & 0x1f); (uVar7 & uVar10) != 0; uVar10 = uVar10 >> 1) {
            }
            if (uVar10 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (ulonglong)((uVar7 & uVar10 - 1) + uVar10);
            }
            local_e4 = local_e4 + 1;
            puVar4 = auStack_88 + uVar17;
            *puVar4 = *puVar4 - 1;
            if (*puVar4 == 0) {
              if ((uint)uVar17 == uVar21) {
                if ((uint)uVar11 != 0) {
                  puVar2 = (undefined1 *)(lVar16 + uVar11 * 4);
                  *puVar2 = 0x40;
                  puVar2[1] = cVar20 - bVar23;
                  *(undefined2 *)(puVar2 + 2) = 0;
                }
                *param_4 = *param_4 + (ulonglong)uVar8 * 4;
                *param_5 = uVar22;
                return 0;
              }
              uVar17 = (ulonglong)
                       *(ushort *)
                        (param_2 + (ulonglong)*(ushort *)(param_6 + (ulonglong)local_e4 * 2) * 2);
            }
            uVar7 = (uint)uVar17;
            uVar10 = local_e8;
          } while (uVar7 <= uVar22);
          uVar13 = uVar1 & (uint)uVar11;
        } while (uVar13 == local_dc);
        if (local_e0 == 0) {
          local_e0 = uVar22;
        }
        uVar19 = uVar7 - local_e0;
        for (iVar18 = 1 << ((byte)uVar19 & 0x1f);
            (uVar7 < uVar21 &&
            (uVar6 = local_e0 + uVar19, 0 < (int)(iVar18 - (uint)auStack_88[uVar6])));
            iVar18 = (iVar18 - (uint)auStack_88[uVar6]) * 2) {
          uVar19 = uVar19 + 1;
          uVar7 = local_e0 + uVar19;
        }
        uVar8 = uVar8 + (1 << ((byte)uVar19 & 0x1f));
        if (param_1 == 1) {
          bVar24 = uVar8 < 0x354;
          bVar25 = uVar8 == 0x354;
LAB_14035a597:
          if (!bVar24 && !bVar25) goto LAB_14035a383;
        }
        else if (param_1 == 2) {
          bVar24 = uVar8 < 0x250;
          bVar25 = uVar8 == 0x250;
          goto LAB_14035a597;
        }
        lVar3 = (ulonglong)uVar13 * 4;
        lVar16 = lVar16 + (ulonglong)uVar9 * 4;
        *(byte *)(lVar3 + *param_4) = (byte)uVar19;
        *(byte *)(lVar3 + 1 + *param_4) = (byte)uVar22;
        *(short *)(lVar3 + 2 + *param_4) = (short)(lVar16 - *param_4 >> 2);
        local_dc = uVar13;
        goto LAB_14035a423;
      }
      if (param_1 == 1) {
        local_c8 = &DAT_140452538;
        local_d0 = &DAT_140452578;
        local_e8 = 0x101;
        if (uVar8 < 0x355) {
          uVar10 = 0x101;
          goto LAB_14035a3f9;
        }
      }
      else {
        local_c8 = &DAT_1404525c0;
        local_d0 = &DAT_140452600;
        local_e8 = 0;
        uVar10 = 0;
        if ((param_1 != 2) || (uVar10 = 0, uVar8 < 0x251)) goto LAB_14035a3f9;
      }
LAB_14035a383:
      uVar5 = 1;
    }
    else {
LAB_14035a61e:
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

