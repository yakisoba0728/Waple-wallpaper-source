// Function: FUN_14007aeb0
// Addr: 14007aeb0
// Size: 2832 bytes


void FUN_14007aeb0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_48;
  
  lVar7 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
joined_r0x00014007aef4:
  if (0xc5f < lVar7) {
    lVar7 = ((longlong)param_2 - (longlong)param_1) / 6 +
            ((longlong)param_2 - (longlong)param_1 >> 0x3f);
    lVar13 = (lVar7 >> 4) - (lVar7 >> 0x3f);
    lVar7 = lVar13 >> 1;
    if (0 < param_3) {
      plVar10 = param_2 + -0xc;
      lVar13 = ((longlong)plVar10 - (longlong)param_1 >> 5) * -0x5555555555555555;
      plVar8 = param_1 + lVar7 * 0xc;
      if (lVar13 < 0x29) {
        if (*(uint *)(plVar8 + 8) < *(uint *)(param_1 + 8)) {
          FUN_14007e490(plVar8,param_1);
        }
        if ((*(uint *)(plVar8 + 8) <= *(uint *)(param_2 + -4)) ||
           (FUN_14007e490(plVar10,plVar8), plVar9 = param_1,
           *(uint *)(param_1 + 8) <= *(uint *)(plVar8 + 8))) goto LAB_14007b0e8;
      }
      else {
        lVar13 = lVar13 + 1 >> 3;
        local_90 = lVar13 * 0xc0;
        local_98 = lVar13 * 0x60;
        plVar9 = param_1 + lVar13 * 0xc;
        if (*(uint *)(plVar9 + 8) < *(uint *)(param_1 + 8)) {
          FUN_14007e490(plVar9,param_1);
        }
        if ((*(uint *)(param_1 + lVar13 * 0x18 + 8) < *(uint *)(plVar9 + 8)) &&
           (FUN_14007e490(param_1 + lVar13 * 0x18,plVar9),
           *(uint *)(plVar9 + 8) < *(uint *)(param_1 + 8))) {
          FUN_14007e490(plVar9,param_1);
        }
        lVar15 = local_98;
        lVar14 = (longlong)plVar8 - local_98;
        if (*(uint *)(plVar8 + 8) < *(uint *)(lVar14 + 0x40)) {
          FUN_14007e490(plVar8,lVar14);
        }
        if ((*(uint *)(param_1 + (lVar13 + lVar7) * 0xc + 8) < *(uint *)(plVar8 + 8)) &&
           (FUN_14007e490(param_1 + (lVar13 + lVar7) * 0xc,plVar8),
           *(uint *)(plVar8 + 8) < *(uint *)(lVar14 + 0x40))) {
          FUN_14007e490(plVar8,lVar14);
        }
        lVar15 = (longlong)plVar10 - lVar15;
        lVar7 = (longlong)plVar10 - local_90;
        if (*(uint *)(lVar15 + 0x40) < *(uint *)(lVar7 + 0x40)) {
          FUN_14007e490(lVar15,lVar7);
        }
        if ((*(uint *)(param_2 + -4) < *(uint *)(lVar15 + 0x40)) &&
           (FUN_14007e490(plVar10,lVar15), *(uint *)(lVar15 + 0x40) < *(uint *)(lVar7 + 0x40))) {
          FUN_14007e490(lVar15,lVar7);
        }
        if (*(uint *)(plVar8 + 8) < *(uint *)(plVar9 + 8)) {
          FUN_14007e490(plVar8,plVar9);
        }
        if ((*(uint *)(plVar8 + 8) <= *(uint *)(lVar15 + 0x40)) ||
           (FUN_14007e490(lVar15,plVar8), *(uint *)(plVar9 + 8) <= *(uint *)(plVar8 + 8)))
        goto LAB_14007b0e8;
      }
      FUN_14007e490(plVar8,plVar9);
LAB_14007b0e8:
      plVar10 = plVar8 + 0xc;
      for (; ((param_1 < plVar8 && (*(uint *)(plVar8 + 8) <= *(uint *)(plVar8 + -4))) &&
             (*(uint *)(plVar8 + -4) == *(uint *)(plVar8 + 8))); plVar8 = plVar8 + -0xc) {
      }
      plVar9 = plVar10;
      local_res10 = plVar8;
      if (plVar10 < param_2) {
        do {
          plVar9 = plVar10;
          if ((*(uint *)(plVar10 + 8) < *(uint *)(plVar8 + 8)) ||
             (*(uint *)(plVar10 + 8) != *(uint *)(plVar8 + 8))) break;
          plVar10 = plVar10 + 0xc;
          plVar9 = plVar10;
        } while (plVar10 < param_2);
      }
joined_r0x00014007b12a:
      do {
        if (param_2 <= plVar10) {
joined_r0x00014007b166:
          while (plVar6 = plVar8, param_1 < plVar6) {
            plVar8 = plVar6 + -0xc;
            if (*(uint *)(local_res10 + 8) <= *(uint *)(plVar6 + -4)) {
              if (*(uint *)(plVar6 + -4) != *(uint *)(local_res10 + 8)) break;
              local_res10 = local_res10 + -0xc;
              if (local_res10 != plVar8) {
                FUN_14007e490(local_res10,plVar8);
              }
            }
          }
          if (plVar6 == param_1) {
            if (plVar10 == param_2) goto LAB_14007b231;
            if (plVar9 != plVar10) {
              FUN_14007e490(local_res10,plVar9);
            }
            plVar9 = plVar9 + 0xc;
            plVar8 = plVar10;
            plVar16 = local_res10 + 0xc;
            plVar17 = local_res10;
            plVar18 = plVar6;
          }
          else {
            plVar8 = plVar6 + -0xc;
            plVar16 = local_res10;
            plVar17 = plVar10;
            plVar18 = plVar8;
            if (plVar10 == param_2) {
              plVar16 = local_res10 + -0xc;
              if (plVar6 != local_res10) {
                FUN_14007e490(plVar8,plVar16);
              }
              FUN_14007e490(plVar16,plVar9 + -0xc);
              plVar9 = plVar9 + -0xc;
              local_res10 = plVar16;
              goto joined_r0x00014007b12a;
            }
          }
          plVar10 = plVar10 + 0xc;
          FUN_14007e490(plVar17,plVar8);
          plVar8 = plVar18;
          local_res10 = plVar16;
          goto joined_r0x00014007b12a;
        }
        if (*(uint *)(plVar10 + 8) <= *(uint *)(local_res10 + 8)) {
          if (*(uint *)(local_res10 + 8) != *(uint *)(plVar10 + 8)) goto joined_r0x00014007b166;
          if (plVar9 != plVar10) {
            FUN_14007e490(plVar9,plVar10);
          }
          plVar9 = plVar9 + 0xc;
        }
        plVar10 = plVar10 + 0xc;
      } while( true );
    }
    goto joined_r0x00014007b487;
  }
  plVar10 = param_1;
  if (param_1 != param_2) {
    while (plVar8 = plVar10 + 0xc, plVar8 != param_2) {
      local_f8 = *plVar8;
      local_f0 = plVar10[0xd];
      local_e8 = plVar10[0xe];
      local_e0 = plVar10[0xf];
      plVar10[0xe] = 0;
      plVar10[0xf] = 0xf;
      *(undefined1 *)plVar8 = 0;
      local_d8 = plVar10[0x10];
      lStack_d0 = plVar10[0x11];
      local_c8 = plVar10[0x12];
      local_c0 = plVar10[0x13];
      plVar10[0x12] = 0;
      plVar10[0x13] = 0xf;
      *(undefined1 *)(plVar10 + 0x10) = 0;
      uVar2 = *(uint *)(plVar10 + 0x14);
      local_b4 = *(undefined4 *)((longlong)plVar10 + 0xa4);
      local_b0 = (undefined4)plVar10[0x15];
      local_ac = *(undefined4 *)((longlong)plVar10 + 0xac);
      local_a8 = (undefined4)plVar10[0x16];
      local_a4 = *(undefined4 *)((longlong)plVar10 + 0xb4);
      local_a0 = (undefined4)plVar10[0x17];
      local_b8 = uVar2;
      if (uVar2 < *(uint *)(param_1 + 8)) {
        plVar10 = plVar10 + 0x18;
        plVar9 = plVar8;
        if (plVar8 != param_1) {
          do {
            local_48 = plVar9 + -0xc;
            local_88 = plVar10 + -0xc;
            FUN_14000de40(local_88,local_48);
            FUN_14000de40(plVar10 + -8,plVar9 + -8);
            *(int *)(plVar10 + -4) = (int)plVar9[-4];
            *(undefined4 *)((longlong)plVar10 + -0x1c) = *(undefined4 *)((longlong)plVar9 + -0x1c);
            *(int *)(plVar10 + -3) = (int)plVar9[-3];
            *(undefined4 *)((longlong)plVar10 + -0x14) = *(undefined4 *)((longlong)plVar9 + -0x14);
            *(int *)(plVar10 + -2) = (int)plVar9[-2];
            *(undefined4 *)((longlong)plVar10 + -0xc) = *(undefined4 *)((longlong)plVar9 + -0xc);
            *(int *)(plVar10 + -1) = (int)plVar9[-1];
            plVar9 = local_48;
            plVar10 = local_88;
            param_1 = local_res8;
          } while (local_48 != local_res8);
        }
        FUN_14000de40(param_1,&local_f8);
        FUN_14000de40(param_1 + 4,&local_d8);
        *(uint *)(param_1 + 8) = local_b8;
        *(undefined4 *)((longlong)param_1 + 0x44) = local_b4;
        *(undefined4 *)(param_1 + 9) = local_b0;
        *(undefined4 *)((longlong)param_1 + 0x4c) = local_ac;
        *(undefined4 *)(param_1 + 10) = local_a8;
        *(undefined4 *)((longlong)param_1 + 0x54) = local_a4;
        *(undefined4 *)(param_1 + 0xb) = local_a0;
      }
      else {
        uVar1 = *(uint *)(plVar10 + 8);
        plVar10 = plVar8;
        while (uVar2 < uVar1) {
          FUN_14000de40(plVar10,plVar10 + -0xc);
          FUN_14000de40(plVar10 + 4,plVar10 + -8);
          *(int *)(plVar10 + 8) = (int)plVar10[-4];
          *(undefined4 *)((longlong)plVar10 + 0x44) = *(undefined4 *)((longlong)plVar10 + -0x1c);
          *(int *)(plVar10 + 9) = (int)plVar10[-3];
          *(undefined4 *)((longlong)plVar10 + 0x4c) = *(undefined4 *)((longlong)plVar10 + -0x14);
          *(int *)(plVar10 + 10) = (int)plVar10[-2];
          *(undefined4 *)((longlong)plVar10 + 0x54) = *(undefined4 *)((longlong)plVar10 + -0xc);
          *(int *)(plVar10 + 0xb) = (int)plVar10[-1];
          uVar1 = *(uint *)(plVar10 + -0x10);
          plVar10 = plVar10 + -0xc;
        }
        FUN_14000de40(plVar10,&local_f8);
        FUN_14000de40(plVar10 + 4,&local_d8);
        *(uint *)(plVar10 + 8) = local_b8;
        *(undefined4 *)((longlong)plVar10 + 0x44) = local_b4;
        *(undefined4 *)(plVar10 + 9) = local_b0;
        *(undefined4 *)((longlong)plVar10 + 0x4c) = local_ac;
        *(undefined4 *)(plVar10 + 10) = local_a8;
        *(undefined4 *)((longlong)plVar10 + 0x54) = local_a4;
        *(undefined4 *)(plVar10 + 0xb) = local_a0;
      }
      if (0xf < local_c0) {
        uVar12 = local_c0 + 1;
        lVar7 = local_d8;
        if (0xfff < uVar12) {
          lVar7 = *(longlong *)(local_d8 + -8);
          if (0x1f < (local_d8 - lVar7) - 8U) {
LAB_14007b9b8:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar12 = local_c0 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar12);
      }
      plVar10 = plVar8;
      if (0xf < local_e0) {
        uVar12 = local_e0 + 1;
        lVar7 = local_f8;
        if (0xfff < uVar12) {
          lVar7 = *(longlong *)(local_f8 + -8);
          if (0x1f < (local_f8 - lVar7) - 8U) goto LAB_14007b9b8;
          uVar12 = local_e0 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar12);
      }
    }
  }
  return;
joined_r0x00014007b487:
  if (0 < lVar7) {
    lVar14 = lVar7 + -1;
    lVar15 = lVar7 * 0x60;
    local_f8 = param_1[lVar7 * 0xc + -0xc];
    local_f0 = param_1[lVar7 * 0xc + -0xb];
    local_e8 = param_1[lVar7 * 0xc + -10];
    local_e0 = param_1[lVar7 * 0xc + -9];
    param_1[lVar7 * 0xc + -10] = 0;
    param_1[lVar7 * 0xc + -9] = 0xf;
    *(undefined1 *)(param_1 + lVar7 * 0xc + -0xc) = 0;
    local_d8 = param_1[lVar7 * 0xc + -8];
    lStack_d0 = param_1[lVar7 * 0xc + -7];
    local_c8 = param_1[lVar7 * 0xc + -6];
    local_c0 = param_1[lVar7 * 0xc + -5];
    param_1[lVar7 * 0xc + -6] = 0;
    param_1[lVar7 * 0xc + -5] = 0xf;
    *(undefined1 *)(param_1 + lVar7 * 0xc + -8) = 0;
    local_b8 = *(uint *)(param_1 + lVar7 * 0xc + -4);
    local_b4 = *(undefined4 *)(lVar15 + -0x1c + (longlong)param_1);
    local_b0 = (undefined4)param_1[lVar7 * 0xc + -3];
    local_ac = *(undefined4 *)(lVar15 + -0x14 + (longlong)param_1);
    local_a8 = (undefined4)param_1[lVar7 * 0xc + -2];
    local_a4 = *(undefined4 *)(lVar15 + -0xc + (longlong)param_1);
    local_a0 = (undefined4)param_1[lVar7 * 0xc + -1];
    FUN_14007d400(param_1,lVar14,lVar13,&local_f8,param_4);
    if (0xf < local_c0) {
      uVar12 = local_c0 + 1;
      lVar7 = local_d8;
      if (0xfff < uVar12) {
        lVar7 = *(longlong *)(local_d8 + -8);
        if (0x1f < (local_d8 - lVar7) - 8U) goto LAB_14007b9b8;
        uVar12 = local_c0 + 0x28;
      }
      thunk_FUN_14028af80(lVar7,uVar12);
    }
    lVar7 = lVar14;
    if (0xf < local_e0) {
      uVar12 = local_e0 + 1;
      lVar15 = local_f8;
      if (0xfff < uVar12) {
        lVar15 = *(longlong *)(local_f8 + -8);
        if (0x1f < (local_f8 - lVar15) - 8U) goto LAB_14007b9b8;
        uVar12 = local_e0 + 0x28;
      }
      thunk_FUN_14028af80(lVar15,uVar12);
    }
    goto joined_r0x00014007b487;
  }
  local_res10 = param_2;
  if (lVar13 < 2) {
    return;
  }
  do {
    if (1 < ((longlong)local_res10 - (longlong)param_1 >> 5) * -0x5555555555555555) {
      local_f8 = local_res10[-0xc];
      plVar10 = local_res10 + -0xc;
      local_f0 = local_res10[-0xb];
      local_e8 = local_res10[-10];
      local_e0 = local_res10[-9];
      local_res10[-10] = 0;
      local_res10[-9] = 0xf;
      *(undefined1 *)plVar10 = 0;
      local_d8 = local_res10[-8];
      lStack_d0 = local_res10[-7];
      local_c8 = local_res10[-6];
      local_c0 = local_res10[-5];
      local_res10[-6] = 0;
      local_res10[-5] = 0xf;
      *(undefined1 *)(local_res10 + -8) = 0;
      local_b8 = *(uint *)(local_res10 + -4);
      local_b4 = *(undefined4 *)((longlong)local_res10 + -0x1c);
      local_b0 = (undefined4)local_res10[-3];
      local_ac = *(undefined4 *)((longlong)local_res10 + -0x14);
      local_a8 = (undefined4)local_res10[-2];
      local_a4 = *(undefined4 *)((longlong)local_res10 + -0xc);
      local_a0 = (undefined4)local_res10[-1];
      if (plVar10 != param_1) {
        local_res10[-10] = 0;
        local_res10[-9] = 0xf;
        *(undefined1 *)plVar10 = 0;
        uVar4 = *(undefined4 *)((longlong)param_1 + 4);
        lVar7 = param_1[1];
        uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
        *(int *)plVar10 = (int)*param_1;
        *(undefined4 *)((longlong)local_res10 + -0x5c) = uVar4;
        *(int *)(local_res10 + -0xb) = (int)lVar7;
        *(undefined4 *)((longlong)local_res10 + -0x54) = uVar5;
        lVar7 = param_1[3];
        local_res10[-10] = param_1[2];
        local_res10[-9] = lVar7;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
      }
      if (local_res10 != param_1 + 0xc) {
        uVar12 = local_res10[-5];
        if (0xf < uVar12) {
          lVar7 = local_res10[-8];
          uVar11 = uVar12 + 1;
          if (0xfff < uVar11) {
            if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) goto LAB_14007b9b8;
            uVar11 = uVar12 + 0x28;
            lVar7 = *(longlong *)(lVar7 + -8);
          }
          thunk_FUN_14028af80(lVar7,uVar11);
        }
        local_res10[-6] = 0;
        local_res10[-5] = 0xf;
        *(undefined1 *)(local_res10 + -8) = 0;
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
        lVar7 = param_1[5];
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x2c);
        *(int *)(local_res10 + -8) = (int)param_1[4];
        *(undefined4 *)((longlong)local_res10 + -0x3c) = uVar4;
        *(int *)(local_res10 + -7) = (int)lVar7;
        *(undefined4 *)((longlong)local_res10 + -0x34) = uVar5;
        lVar7 = param_1[7];
        local_res10[-6] = param_1[6];
        local_res10[-5] = lVar7;
        param_1[6] = 0;
        param_1[7] = 0xf;
        *(undefined1 *)(param_1 + 4) = 0;
      }
      *(int *)(local_res10 + -4) = (int)param_1[8];
      *(undefined4 *)((longlong)local_res10 + -0x1c) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(int *)(local_res10 + -3) = (int)param_1[9];
      *(undefined4 *)((longlong)local_res10 + -0x14) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(int *)(local_res10 + -2) = (int)param_1[10];
      *(undefined4 *)((longlong)local_res10 + -0xc) = *(undefined4 *)((longlong)param_1 + 0x54);
      *(int *)(local_res10 + -1) = (int)param_1[0xb];
      FUN_14007d400(param_1,0,((longlong)plVar10 - (longlong)param_1 >> 5) * -0x5555555555555555,
                    &local_f8,param_4);
      if (0xf < local_c0) {
        uVar12 = local_c0 + 1;
        lVar7 = local_d8;
        if (0xfff < uVar12) {
          lVar7 = *(longlong *)(local_d8 + -8);
          if (0x1f < (local_d8 - lVar7) - 8U) goto LAB_14007b9b8;
          uVar12 = local_c0 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar12);
      }
      if (0xf < local_e0) {
        lVar7 = local_f8;
        if ((0xfff < local_e0 + 1) &&
           (lVar7 = *(longlong *)(local_f8 + -8), 0x1f < (local_f8 - lVar7) - 8U))
        goto LAB_14007b9b8;
        thunk_FUN_14028af80(lVar7);
      }
    }
    local_res10 = local_res10 + -0xc;
    if ((longlong)local_res10 - (longlong)param_1 < 0xc0) {
      return;
    }
  } while( true );
LAB_14007b231:
  param_3 = (param_3 >> 2) + (param_3 >> 1);
  if (((longlong)local_res10 - (longlong)param_1 >> 5) * -0x5555555555555555 <
      ((longlong)param_2 - (longlong)plVar9 >> 5) * -0x5555555555555555) {
    FUN_14007aeb0(param_1,local_res10,param_3,param_4);
    param_1 = plVar9;
    local_res8 = plVar9;
    local_res10 = param_2;
  }
  else {
    FUN_14007aeb0(plVar9,param_2,param_3,param_4);
  }
  lVar7 = (longlong)local_res10 - (longlong)param_1;
  param_2 = local_res10;
  goto joined_r0x00014007aef4;
}

