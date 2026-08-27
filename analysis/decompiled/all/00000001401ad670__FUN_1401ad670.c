// Function: FUN_1401ad670
// Addr: 1401ad670
// Size: 1854 bytes


void FUN_1401ad670(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,uint *param_6,longlong param_7)

{
  ulonglong uVar1;
  uint uVar2;
  char *_Str;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *******pppppppuVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  size_t local_148;
  undefined8 ******local_140;
  int local_138;
  undefined8 local_130;
  undefined8 ******local_128;
  ulonglong *****pppppuStack_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  uint *local_100;
  longlong local_f8;
  undefined8 local_f0;
  uint *local_e8;
  longlong local_d8 [4];
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  ulonglong ******local_88;
  ulonglong ******local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  
  puVar13 = auStack_168;
  local_e8 = param_6;
  if (*param_6 == 0) {
    return;
  }
  local_130 = 0;
  local_108 = 0;
  puVar17 = param_6;
  puVar18 = param_6;
LAB_1401ad700:
  local_138 = 0;
  iVar14 = 0;
  local_100 = puVar18;
  local_f8 = local_108;
  local_f0 = local_130;
  do {
    iVar5 = local_138;
    lVar9 = *param_4;
    uVar12 = (ulonglong)iVar14;
    if ((ulonglong)((param_4[1] - lVar9 >> 3) * -0x5555555555555555) <= uVar12) {
      if (7 < (int)param_4[3]) goto LAB_1401adc02;
      FUN_1401ab7c0(local_80);
      uVar12 = local_70;
      iVar14 = (int)param_4[3];
      local_88 = local_80[0];
      goto LAB_1401ad790;
    }
    lVar16 = *(longlong *)(lVar9 + 8 + uVar12 * 0x18);
    local_f0 = *(undefined8 *)(lVar9 + 0x10 + uVar12 * 0x18);
    local_f8 = lVar16;
    local_138 = FUN_1402f0060(lVar16);
    iVar14 = iVar14 + 1;
  } while (local_138 == 0);
  goto LAB_1401ada04;
LAB_1401ad790:
  do {
    if (7 < iVar14) break;
    *(int *)(param_4 + 3) = (int)param_4[3] + 1;
    local_128 = (undefined8 *******)0x0;
    pppppuStack_120 = (ulonglong *****)0x0;
    if ((&DAT_140484c48)[(longlong)iVar14 * 0x10] == '\0') {
      local_118 = 0;
      local_110 = 0xf;
      local_128 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar7 = (undefined8 *******)0x0;
      local_118 = 0;
      pppppppuVar11 = local_80;
      if (0xf < local_68) {
        pppppppuVar11 = (ulonglong *******)local_88;
      }
      local_110 = 0;
      if (0x7fffffffffffffff < uVar12) goto LAB_1401adda4;
      if (uVar12 < 0x10) {
        local_118 = uVar12;
        local_110 = 0xf;
        local_128 = *pppppppuVar11;
        pppppuStack_120 = (ulonglong *****)pppppppuVar11[1];
      }
      else {
        uVar15 = uVar12 | 0xf;
        if (uVar15 < 0x8000000000000000) {
          if (uVar15 < 0x16) {
            uVar15 = 0x16;
          }
          uVar1 = uVar15 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar10 = uVar15 + 0x28;
              if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_1401ad853;
            }
            pppppppuVar7 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar15 = 0x7fffffffffffffff;
          uVar10 = 0x8000000000000027;
LAB_1401ad853:
          ppppppuVar6 = (undefined8 ******)FUN_14028af20(uVar10);
          if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_1401add9d;
          pppppppuVar7 = (undefined8 *******)((longlong)ppppppuVar6 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar7[-1] = ppppppuVar6;
        }
        local_118 = uVar12;
        local_128 = pppppppuVar7;
        local_110 = uVar15;
        FUN_1404210f0(pppppppuVar7,pppppppuVar11,uVar12 + 1);
      }
    }
    uVar1 = local_110;
    uVar15 = local_118;
    _Str = (&PTR_s_arial_ttf_140484c40)[(longlong)iVar14 * 2];
    sVar8 = strlen(_Str);
    if (uVar1 - uVar15 < sVar8) {
      local_148 = sVar8;
      FUN_140053110(&local_128,sVar8,param_6._0_1_,_Str);
    }
    else {
      local_118 = uVar15 + sVar8;
      pppppppuVar7 = &local_128;
      if (0xf < uVar1) {
        pppppppuVar7 = (undefined8 *******)local_128;
      }
      FUN_1404210f0(uVar15 + (longlong)pppppppuVar7,_Str,sVar8);
      *(undefined1 *)(sVar8 + uVar15 + (longlong)pppppppuVar7) = 0;
    }
    local_140 = &local_128;
    if (0xf < local_110) {
      local_140 = local_128;
    }
    local_148 = CONCAT44(local_148._4_4_,param_5);
    cVar4 = FUN_1401acaf0(param_2,param_1,param_3,param_4);
    puVar18 = local_100;
    if (cVar4 == '\0') {
      iVar5 = local_138;
      if (0xf < local_110) {
        pppppppuVar7 = (undefined8 *******)local_128;
        if ((0xfff < local_110 + 1) &&
           (pppppppuVar7 = (undefined8 *******)local_128[-1],
           0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar7))))
        goto LAB_1401add9d;
        thunk_FUN_14028af80(pppppppuVar7);
        puVar18 = local_100;
        iVar5 = local_138;
      }
    }
    else {
      local_f8 = *(longlong *)(param_4[1] + -0x10);
      local_f0 = *(undefined8 *)(param_4[1] + -8);
      iVar5 = FUN_1402f0060(local_f8,*local_100);
      local_138 = iVar5;
      if (0xf < local_110) {
        pppppppuVar7 = (undefined8 *******)local_128;
        if ((0xfff < local_110 + 1) &&
           (pppppppuVar7 = (undefined8 *******)local_128[-1],
           0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar7))))
        goto LAB_1401add9d;
        thunk_FUN_14028af80(pppppppuVar7);
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar5 == 0);
  if (0xf < local_68) {
    pppppppuVar11 = (ulonglong *******)local_88;
    if ((0xfff < local_68 + 1) &&
       (pppppppuVar11 = (ulonglong *******)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11)))) goto LAB_1401add9d;
    thunk_FUN_14028af80(pppppppuVar11);
  }
  lVar16 = local_f8;
  puVar17 = local_e8;
  if (iVar5 != 0) {
LAB_1401ada04:
    if (lVar16 != local_108) {
      uVar2 = *puVar18;
      if ((uVar2 != 0x200d) &&
         ((0x20 < uVar2 || ((0x100002600U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)))) {
        if ((local_108 != 0) && (puVar17 < puVar18)) {
          local_b0 = local_108;
          local_d8[2] = 0;
          local_d8[1] = 0;
          local_d8[0] = 0;
          local_a0 = 0;
          local_a8 = local_130;
          local_d8[3] = 3;
          local_98 = 0;
          lStack_90 = 0;
          FUN_1401b4de0(local_d8,puVar17,(longlong)puVar18 - (longlong)puVar17 >> 2);
          local_b8 = (undefined4)((longlong)puVar17 - (longlong)param_6 >> 2);
          if (*(longlong *)(param_7 + 8) == *(longlong *)(param_7 + 0x10)) {
            FUN_1401b6270(param_7,*(longlong *)(param_7 + 8),local_d8);
          }
          else {
            FUN_1401b6ea0();
            *(longlong *)(param_7 + 8) = *(longlong *)(param_7 + 8) + 0x50;
          }
          if (local_a0 != 0) {
            lVar9 = local_a0;
            if ((0xfff < (ulonglong)((lStack_90 - local_a0 >> 4) * 0x10)) &&
               (lVar9 = *(longlong *)(local_a0 + -8), 0x1f < (local_a0 - lVar9) - 8U))
            goto LAB_1401add9d;
            thunk_FUN_14028af80(lVar9);
          }
          if (3 < (ulonglong)local_d8[3]) {
            lVar9 = local_d8[0];
            if ((0xfff < local_d8[3] * 4 + 4U) &&
               (lVar9 = *(longlong *)(local_d8[0] + -8), 0x1f < (local_d8[0] - lVar9) - 8U))
            goto LAB_1401add9d;
            thunk_FUN_14028af80(lVar9);
          }
        }
        local_130 = local_f0;
        puVar17 = puVar18;
        local_108 = lVar16;
        local_e8 = puVar18;
      }
    }
  }
LAB_1401adc02:
  puVar18 = puVar18 + 1;
  if (*puVar18 == 0) goto code_r0x0001401adc15;
  goto LAB_1401ad700;
code_r0x0001401adc15:
  if (local_108 == 0) {
    return;
  }
  if (puVar18 <= puVar17) {
    return;
  }
  local_d8[2] = 0;
  local_d8[1] = 0;
  local_d8[0] = 0;
  local_a0 = 0;
  local_d8[3] = 3;
  local_98 = 0;
  lStack_90 = 0;
  local_100 = puVar18;
  local_b0 = local_108;
  local_a8 = local_130;
  FUN_1401b4de0(local_d8,puVar17,(longlong)puVar18 - (longlong)puVar17 >> 2);
  local_b8 = (undefined4)((longlong)puVar17 - (longlong)param_6 >> 2);
  if (*(longlong *)(param_7 + 8) == *(longlong *)(param_7 + 0x10)) {
    FUN_1401b6270(param_7,*(longlong *)(param_7 + 8),local_d8);
  }
  else {
    FUN_1401b6ea0();
    *(longlong *)(param_7 + 8) = *(longlong *)(param_7 + 8) + 0x50;
  }
  if (local_a0 != 0) {
    uVar12 = (lStack_90 - local_a0 >> 4) * 0x10;
    lVar9 = local_a0;
    if (0xfff < uVar12) {
      if (0x1f < (local_a0 - *(longlong *)(local_a0 + -8)) - 8U) goto LAB_1401add9d;
      uVar12 = uVar12 + 0x27;
      lVar9 = *(longlong *)(local_a0 + -8);
    }
    thunk_FUN_14028af80(lVar9,uVar12);
  }
  if ((ulonglong)local_d8[3] < 4) {
    return;
  }
  uVar12 = local_d8[3] * 4 + 4;
  lVar9 = local_d8[0];
  if (0xfff < uVar12) {
    lVar9 = *(longlong *)(local_d8[0] + -8);
    if (0x1f < (local_d8[0] - lVar9) - 8U) {
LAB_1401add9d:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar13 = auStack_160;
LAB_1401adda4:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -8) = &UNK_1401adda9;
      FUN_1400172e0();
    }
    uVar12 = local_d8[3] * 4 + 0x2b;
  }
  thunk_FUN_14028af80(lVar9,uVar12);
  return;
}

