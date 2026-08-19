// Function: FUN_14004d920
// Addr: 14004d920
// Size: 2247 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14004d920(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar11 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
  while (0x20 < lVar11 >> 5) {
    lVar11 = (longlong)param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) {
      goto joined_r0x00014004debb;
    }
    plVar20 = param_2 + -4;
    plVar18 = param_1 + lVar11 * 4;
    lVar11 = (longlong)plVar20 - (longlong)param_1 >> 5;
    if (lVar11 < 0x29) {
      func_0x0001400506d0(param_1,plVar18,plVar20,param_4);
    }
    else {
      lVar11 = lVar11 + 1 >> 3;
      func_0x0001400506d0(local_res8,param_1 + lVar11 * 4,local_res8 + lVar11 * 8,param_4);
      func_0x0001400506d0(plVar18 + lVar11 * -4,plVar18,plVar18 + lVar11 * 4,param_4);
      func_0x0001400506d0(plVar20 + lVar11 * -8,plVar20 + lVar11 * -4,plVar20,param_4);
      func_0x0001400506d0(param_1 + lVar11 * 4,plVar18,plVar20 + lVar11 * -4,param_4);
      param_1 = local_res8;
    }
    plVar20 = plVar18 + 4;
    if (param_1 < plVar18) {
      while( true ) {
        plVar21 = plVar18 + -4;
        plVar19 = plVar18;
        if (7 < (ulonglong)plVar18[3]) {
          plVar19 = (longlong *)*plVar18;
        }
        plVar12 = plVar21;
        if (7 < (ulonglong)plVar18[-1]) {
          plVar12 = (longlong *)*plVar21;
        }
        iVar9 = func_0x000140015470(plVar12,plVar18[-2],plVar19,plVar18[2]);
        if (iVar9 < 0) break;
        plVar19 = plVar21;
        if (7 < (ulonglong)plVar18[-1]) {
          plVar19 = (longlong *)*plVar21;
        }
        plVar12 = plVar18;
        if (7 < (ulonglong)plVar18[3]) {
          plVar12 = (longlong *)*plVar18;
        }
        iVar9 = func_0x000140015470(plVar12,plVar18[2],plVar19,plVar18[-2]);
        if ((iVar9 < 0) || (plVar18 = plVar21, plVar21 <= param_1)) break;
      }
    }
    plVar19 = plVar20;
    plVar21 = plVar18;
    if (plVar20 < param_2) {
      while( true ) {
        plVar19 = plVar18;
        if (7 < (ulonglong)plVar18[3]) {
          plVar19 = (longlong *)*plVar18;
        }
        plVar12 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar12 = (longlong *)*plVar20;
        }
        iVar9 = func_0x000140015470(plVar12,plVar20[2],plVar19,plVar18[2]);
        plVar19 = plVar20;
        if (iVar9 < 0) break;
        plVar12 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar12 = (longlong *)*plVar20;
        }
        plVar13 = plVar18;
        if (7 < (ulonglong)plVar18[3]) {
          plVar13 = (longlong *)*plVar18;
        }
        iVar9 = func_0x000140015470(plVar13,plVar18[2],plVar12,plVar20[2]);
        if ((iVar9 < 0) || (plVar20 = plVar20 + 4, plVar19 = plVar20, param_2 <= plVar20)) break;
      }
    }
joined_r0x00014004db0a:
    plVar12 = plVar19;
    if (plVar20 < param_2) {
      plVar19 = plVar20;
      if (7 < (ulonglong)plVar20[3]) {
        plVar19 = (longlong *)*plVar20;
      }
      plVar13 = plVar21;
      if (7 < (ulonglong)plVar21[3]) {
        plVar13 = (longlong *)*plVar21;
      }
      iVar9 = func_0x000140015470(plVar13,plVar21[2],plVar19,plVar20[2]);
      if (-1 < iVar9) {
        plVar19 = plVar21;
        if (7 < (ulonglong)plVar21[3]) {
          plVar19 = (longlong *)*plVar21;
        }
        plVar13 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar13 = (longlong *)*plVar20;
        }
        iVar9 = func_0x000140015470(plVar13,plVar20[2],plVar19,plVar21[2]);
        if (iVar9 < 0) goto joined_r0x00014004dba3;
        if (plVar12 != plVar20) {
          uVar3 = *(undefined4 *)((longlong)plVar20 + 4);
          lVar8 = plVar20[1];
          uVar4 = *(undefined4 *)((longlong)plVar20 + 0xc);
          lVar11 = *plVar12;
          lVar5 = plVar12[1];
          lVar6 = plVar12[2];
          lVar7 = plVar12[3];
          *(int *)plVar12 = (int)*plVar20;
          *(undefined4 *)((longlong)plVar12 + 4) = uVar3;
          *(int *)(plVar12 + 1) = (int)lVar8;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar4;
          lVar8 = plVar20[3];
          plVar12[2] = plVar20[2];
          plVar12[3] = lVar8;
          *plVar20 = lVar11;
          plVar20[1] = lVar5;
          plVar20[2] = lVar6;
          plVar20[3] = lVar7;
        }
        plVar12 = plVar12 + 4;
      }
      plVar20 = plVar20 + 4;
      plVar19 = plVar12;
      goto joined_r0x00014004db0a;
    }
joined_r0x00014004dba3:
    while (local_res10 = plVar21, plVar13 = plVar18, plVar21 = local_res10, param_1 < plVar13) {
      plVar18 = plVar13 + -4;
      plVar19 = local_res10;
      if (7 < (ulonglong)local_res10[3]) {
        plVar19 = (longlong *)*local_res10;
      }
      plVar14 = plVar18;
      if (7 < (ulonglong)plVar13[-1]) {
        plVar14 = (longlong *)*plVar18;
      }
      iVar9 = func_0x000140015470(plVar14,plVar13[-2],plVar19,local_res10[2]);
      if (-1 < iVar9) {
        plVar19 = plVar18;
        if (7 < (ulonglong)plVar13[-1]) {
          plVar19 = (longlong *)*plVar18;
        }
        plVar14 = local_res10;
        if (7 < (ulonglong)local_res10[3]) {
          plVar14 = (longlong *)*local_res10;
        }
        iVar9 = func_0x000140015470(plVar14,local_res10[2],plVar19,plVar13[-2]);
        if (iVar9 < 0) break;
        plVar21 = local_res10 + -4;
        if (plVar21 != plVar18) {
          uVar3 = *(undefined4 *)((longlong)plVar13 + -0x1c);
          lVar8 = plVar13[-3];
          uVar4 = *(undefined4 *)((longlong)plVar13 + -0x14);
          lVar11 = *plVar21;
          lVar5 = local_res10[-3];
          lVar6 = local_res10[-2];
          lVar7 = local_res10[-1];
          *(int *)plVar21 = (int)*plVar18;
          *(undefined4 *)((longlong)local_res10 + -0x1c) = uVar3;
          *(int *)(local_res10 + -3) = (int)lVar8;
          *(undefined4 *)((longlong)local_res10 + -0x14) = uVar4;
          lVar8 = plVar13[-1];
          local_res10[-2] = plVar13[-2];
          local_res10[-1] = lVar8;
          *plVar18 = lVar11;
          plVar13[-3] = lVar5;
          plVar13[-2] = lVar6;
          plVar13[-1] = lVar7;
        }
      }
    }
    if (plVar13 != param_1) {
      plVar18 = plVar13 + -4;
      if (plVar20 == param_2) {
        plVar21 = local_res10 + -4;
        if (plVar13 != local_res10) {
          uVar3 = *(undefined4 *)((longlong)local_res10 + -0x1c);
          lVar8 = local_res10[-3];
          uVar4 = *(undefined4 *)((longlong)local_res10 + -0x14);
          lVar11 = *plVar18;
          lVar5 = plVar13[-3];
          lVar6 = plVar13[-2];
          lVar7 = plVar13[-1];
          *(int *)plVar18 = (int)*plVar21;
          *(undefined4 *)((longlong)plVar13 + -0x1c) = uVar3;
          *(int *)(plVar13 + -3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar13 + -0x14) = uVar4;
          lVar8 = local_res10[-1];
          plVar13[-2] = local_res10[-2];
          plVar13[-1] = lVar8;
          *plVar21 = lVar11;
          local_res10[-3] = lVar5;
          local_res10[-2] = lVar6;
          local_res10[-1] = lVar7;
        }
        plVar19 = plVar12 + -4;
        if (local_res10 != plVar12) {
          uVar3 = *(undefined4 *)((longlong)plVar12 + -0x1c);
          lVar8 = plVar12[-3];
          uVar4 = *(undefined4 *)((longlong)plVar12 + -0x14);
          lVar11 = *plVar21;
          lVar5 = local_res10[-3];
          lVar6 = local_res10[-2];
          lVar7 = local_res10[-1];
          *(int *)plVar21 = (int)*plVar19;
          *(undefined4 *)((longlong)local_res10 + -0x1c) = uVar3;
          *(int *)(local_res10 + -3) = (int)lVar8;
          *(undefined4 *)((longlong)local_res10 + -0x14) = uVar4;
          lVar8 = plVar12[-1];
          local_res10[-2] = plVar12[-2];
          local_res10[-1] = lVar8;
          *plVar19 = lVar11;
          plVar12[-3] = lVar5;
          plVar12[-2] = lVar6;
          plVar12[-1] = lVar7;
        }
      }
      else {
        if (plVar20 != plVar18) {
          uVar3 = *(undefined4 *)((longlong)plVar13 + -0x1c);
          lVar8 = plVar13[-3];
          uVar4 = *(undefined4 *)((longlong)plVar13 + -0x14);
          lVar11 = *plVar20;
          lVar5 = plVar20[1];
          lVar6 = plVar20[2];
          lVar7 = plVar20[3];
          *(int *)plVar20 = (int)*plVar18;
          *(undefined4 *)((longlong)plVar20 + 4) = uVar3;
          *(int *)(plVar20 + 1) = (int)lVar8;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uVar4;
          lVar8 = plVar13[-1];
          plVar20[2] = plVar13[-2];
          plVar20[3] = lVar8;
          *plVar18 = lVar11;
          plVar13[-3] = lVar5;
          plVar13[-2] = lVar6;
          plVar13[-1] = lVar7;
        }
        plVar20 = plVar20 + 4;
        plVar19 = plVar12;
      }
      goto joined_r0x00014004db0a;
    }
    if (plVar20 != param_2) {
      if ((plVar12 != plVar20) && (local_res10 != plVar12)) {
        uVar3 = *(undefined4 *)((longlong)plVar12 + 4);
        lVar8 = plVar12[1];
        uVar4 = *(undefined4 *)((longlong)plVar12 + 0xc);
        lVar11 = *local_res10;
        lVar5 = local_res10[1];
        lVar6 = local_res10[2];
        lVar7 = local_res10[3];
        *(int *)local_res10 = (int)*plVar12;
        *(undefined4 *)((longlong)local_res10 + 4) = uVar3;
        *(int *)(local_res10 + 1) = (int)lVar8;
        *(undefined4 *)((longlong)local_res10 + 0xc) = uVar4;
        lVar8 = plVar12[3];
        local_res10[2] = plVar12[2];
        local_res10[3] = lVar8;
        *plVar12 = lVar11;
        plVar12[1] = lVar5;
        plVar12[2] = lVar6;
        plVar12[3] = lVar7;
      }
      if (local_res10 != plVar20) {
        uVar3 = *(undefined4 *)((longlong)plVar20 + 4);
        lVar8 = plVar20[1];
        uVar4 = *(undefined4 *)((longlong)plVar20 + 0xc);
        lVar11 = *local_res10;
        lVar5 = local_res10[1];
        lVar6 = local_res10[2];
        lVar7 = local_res10[3];
        *(int *)local_res10 = (int)*plVar20;
        *(undefined4 *)((longlong)local_res10 + 4) = uVar3;
        *(int *)(local_res10 + 1) = (int)lVar8;
        *(undefined4 *)((longlong)local_res10 + 0xc) = uVar4;
        lVar8 = plVar20[3];
        local_res10[2] = plVar20[2];
        local_res10[3] = lVar8;
        *plVar20 = lVar11;
        plVar20[1] = lVar5;
        plVar20[2] = lVar6;
        plVar20[3] = lVar7;
      }
      plVar20 = plVar20 + 4;
      plVar19 = plVar12 + 4;
      plVar18 = plVar13;
      plVar21 = local_res10 + 4;
      goto joined_r0x00014004db0a;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)local_res10 - (longlong)param_1 >> 5 < (longlong)param_2 - (longlong)plVar12 >> 5)
    {
      FUN_14004d920(param_1,local_res10,param_3,param_4);
      param_1 = plVar12;
      local_res8 = plVar12;
      local_res10 = param_2;
    }
    else {
      FUN_14004d920(plVar12,param_2,param_3,param_4);
    }
    param_2 = local_res10;
    lVar11 = (longlong)local_res10 - (longlong)param_1;
  }
  plVar20 = param_1;
  if (param_1 != param_2) {
    while (plVar18 = plVar20 + 4, plVar18 != param_2) {
      local_80._0_4_ = (undefined4)*plVar18;
      local_80._4_4_ = *(undefined4 *)((longlong)plVar20 + 0x24);
      puVar16 = (undefined4 *)*plVar18;
      uStack_78 = (undefined4)plVar18[1];
      uStack_74 = *(undefined4 *)((longlong)plVar20 + 0x2c);
      local_70 = (undefined4)plVar18[2];
      uStack_6c = *(undefined4 *)((longlong)plVar20 + 0x34);
      lVar11 = plVar18[2];
      uStack_68 = (undefined4)plVar18[3];
      uStack_64 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar1 = plVar18[3];
      plVar18[2] = 0;
      plVar18[3] = 7;
      *(undefined2 *)plVar18 = 0;
      plVar20 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar20 = (longlong *)*param_1;
      }
      puVar15 = (undefined4 *)&local_80;
      if (7 < uVar1) {
        puVar15 = puVar16;
      }
      uVar10 = func_0x000140015470(puVar15,lVar11,plVar20,param_1[2]);
      plVar20 = plVar18;
      if (uVar10 < 0x80000000) {
        while( true ) {
          plVar19 = plVar18;
          plVar18 = plVar19 + -4;
          plVar21 = plVar18;
          if (7 < (ulonglong)plVar19[-1]) {
            plVar21 = (longlong *)*plVar18;
          }
          puVar16 = (undefined4 *)&local_80;
          if (7 < CONCAT44(uStack_64,uStack_68)) {
            puVar16 = (undefined4 *)CONCAT44(local_80._4_4_,(undefined4)local_80);
          }
          uVar10 = func_0x000140015470(puVar16,CONCAT44(uStack_6c,local_70),plVar21,plVar19[-2]);
          if (uVar10 < 0x80000000) break;
          if (plVar19 != plVar18) {
            uVar1 = plVar19[3];
            if (7 < uVar1) {
              lVar11 = *plVar19;
              uVar17 = uVar1 * 2 + 2;
              if (0xfff < uVar17) {
                if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14004e29b;
                uVar17 = uVar1 * 2 + 0x29;
                lVar11 = *(longlong *)(lVar11 + -8);
              }
              func_0x00014028b040(lVar11,uVar17);
              return;
            }
            plVar19[2] = 0;
            plVar19[3] = 7;
            *(undefined2 *)plVar19 = 0;
            *(int *)plVar19 = (int)*plVar18;
            *(undefined4 *)((longlong)plVar19 + 4) = *(undefined4 *)((longlong)plVar19 + -0x1c);
            *(int *)(plVar19 + 1) = (int)plVar19[-3];
            *(undefined4 *)((longlong)plVar19 + 0xc) = *(undefined4 *)((longlong)plVar19 + -0x14);
            plVar19[2] = plVar19[-2];
            plVar19[3] = plVar19[-1];
            plVar19[-2] = 0;
            plVar19[-1] = 7;
            *(undefined2 *)plVar18 = 0;
          }
        }
        if (plVar19 == &local_80) goto UNWIND_INFO_14004e1d2_UnwindCodes_57__UnwindOpCode;
        uVar1 = plVar19[3];
        if (7 < uVar1) {
          lVar11 = *plVar19;
          uVar17 = uVar1 * 2 + 2;
          if (0xfff < uVar17) {
            if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14004e29b;
            uVar17 = uVar1 * 2 + 0x29;
            lVar11 = *(longlong *)(lVar11 + -8);
          }
          func_0x00014028b040(lVar11,uVar17);
        }
        *plVar19 = CONCAT44(local_80._4_4_,(undefined4)local_80);
        plVar19[1] = CONCAT44(uStack_74,uStack_78);
        plVar19[2] = CONCAT44(uStack_6c,local_70);
        plVar19[3] = CONCAT44(uStack_64,uStack_68);
      }
      else {
        plVar21 = plVar18 + 4;
        while (plVar12 = plVar18, plVar19 = plVar21, param_1 != plVar12) {
          plVar18 = plVar12 + -4;
          plVar21 = plVar19 + -4;
          if (plVar21 != plVar18) {
            uVar1 = plVar19[-1];
            if (7 < uVar1) {
              lVar11 = *plVar21;
              uVar17 = uVar1 * 2 + 2;
              if (0xfff < uVar17) {
                if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14004e29b;
                uVar17 = uVar1 * 2 + 0x29;
                lVar11 = *(longlong *)(lVar11 + -8);
              }
              func_0x00014028b040(lVar11,uVar17);
              return;
            }
            plVar19[-2] = 0;
            plVar19[-1] = 7;
            *(undefined2 *)plVar21 = 0;
            uVar3 = *(undefined4 *)((longlong)plVar12 + -0x1c);
            lVar11 = plVar12[-3];
            uVar4 = *(undefined4 *)((longlong)plVar12 + -0x14);
            *(int *)plVar21 = (int)*plVar18;
            *(undefined4 *)((longlong)plVar19 + -0x1c) = uVar3;
            *(int *)(plVar19 + -3) = (int)lVar11;
            *(undefined4 *)((longlong)plVar19 + -0x14) = uVar4;
            lVar11 = plVar12[-1];
            plVar19[-2] = plVar12[-2];
            plVar19[-1] = lVar11;
            plVar12[-2] = 0;
            plVar12[-1] = 7;
            *(undefined2 *)plVar18 = 0;
          }
        }
        if (param_1 == &local_80) {
UNWIND_INFO_14004e1d2_UnwindCodes_57__UnwindOpCode:
          uVar1 = CONCAT44(uStack_64,uStack_68);
          if (7 < uVar1) {
            lVar5 = CONCAT44(local_80._4_4_,(undefined4)local_80);
            uVar17 = uVar1 * 2 + 2;
            lVar11 = lVar5;
            if (0xfff < uVar17) {
              lVar11 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar11) - 8U) goto LAB_14004e29b;
              uVar17 = uVar1 * 2 + 0x29;
            }
            func_0x00014028b040(lVar11,uVar17);
          }
        }
        else {
          uVar1 = param_1[3];
          if (7 < uVar1) {
            lVar11 = *param_1;
            uVar17 = uVar1 * 2 + 2;
            if (0xfff < uVar17) {
              if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14004e29b;
              uVar17 = uVar1 * 2 + 0x29;
              lVar11 = *(longlong *)(lVar11 + -8);
            }
            func_0x00014028b040(lVar11,uVar17);
            return;
          }
          *param_1 = CONCAT44(local_80._4_4_,(undefined4)local_80);
          param_1[1] = CONCAT44(uStack_74,uStack_78);
          param_1[2] = CONCAT44(uStack_6c,local_70);
          param_1[3] = CONCAT44(uStack_64,uStack_68);
        }
      }
    }
  }
  return;
joined_r0x00014004df60:
  if (lVar11 < 0x40) {
    return;
  }
  if (1 < (longlong)param_2 - (longlong)param_1 >> 5) {
    local_60 = (undefined4)param_2[-4];
    uStack_5c = *(undefined4 *)((longlong)param_2 + -0x1c);
    uStack_58 = (undefined4)param_2[-3];
    uStack_54 = *(undefined4 *)((longlong)param_2 + -0x14);
    plVar20 = param_2 + -4;
    local_50 = (undefined4)param_2[-2];
    uStack_4c = *(undefined4 *)((longlong)param_2 + -0xc);
    uStack_48 = (undefined4)param_2[-1];
    uStack_44 = *(undefined4 *)((longlong)param_2 + -4);
    param_2[-2] = 0;
    param_2[-1] = 7;
    *(undefined2 *)plVar20 = 0;
    if (plVar20 != param_1) {
      param_2[-2] = 0;
      param_2[-1] = 7;
      *(undefined2 *)plVar20 = 0;
      uVar3 = *(undefined4 *)((longlong)param_1 + 4);
      lVar11 = param_1[1];
      uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
      *(int *)plVar20 = (int)*param_1;
      *(undefined4 *)((longlong)param_2 + -0x1c) = uVar3;
      *(int *)(param_2 + -3) = (int)lVar11;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar4;
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar11 = param_1[3];
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(int *)(param_2 + -2) = (int)param_1[2];
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
      *(int *)(param_2 + -1) = (int)lVar11;
      *(undefined4 *)((longlong)param_2 + -4) = uVar4;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
    }
    FUN_14004fd10(param_1,0,(longlong)plVar20 - (longlong)param_1 >> 5,&local_60,param_4);
    uVar1 = CONCAT44(uStack_44,uStack_48);
    if (7 < uVar1) {
      lVar5 = CONCAT44(uStack_5c,local_60);
      uVar17 = uVar1 * 2 + 2;
      lVar11 = lVar5;
      if (0xfff < uVar17) {
        lVar11 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) goto LAB_14004e29b;
        uVar17 = uVar1 * 2 + 0x29;
      }
      func_0x00014028b040(lVar11,uVar17);
      return;
    }
  }
  param_2 = param_2 + -4;
  lVar11 = (longlong)param_2 - (longlong)param_1;
  goto joined_r0x00014004df60;
  while( true ) {
    plVar20 = param_1 + lVar11 * 4 + -4;
    local_60 = (undefined4)*plVar20;
    uStack_5c = *(undefined4 *)((longlong)plVar20 + 4);
    uStack_58 = (undefined4)plVar20[1];
    uStack_54 = *(undefined4 *)((longlong)plVar20 + 0xc);
    plVar20 = param_1 + lVar11 * 4 + -2;
    local_50 = (undefined4)*plVar20;
    uStack_4c = *(undefined4 *)((longlong)plVar20 + 4);
    uStack_48 = (undefined4)plVar20[1];
    uStack_44 = *(undefined4 *)((longlong)plVar20 + 0xc);
    param_1[lVar11 * 4 + -2] = 0;
    param_1[lVar11 * 4 + -1] = 7;
    *(undefined2 *)(param_1 + lVar11 * 4 + -4) = 0;
    FUN_14004fd10(param_1,lVar11 + -1,(longlong)param_2 - (longlong)param_1 >> 5,&local_60,param_4);
    uVar1 = CONCAT44(uStack_44,uStack_48);
    lVar11 = lVar11 + -1;
    if (7 < uVar1) break;
joined_r0x00014004debb:
    if (lVar11 < 1) {
      lVar11 = (longlong)param_2 - (longlong)param_1;
      goto joined_r0x00014004df60;
    }
  }
  lVar5 = CONCAT44(uStack_5c,local_60);
  uVar17 = uVar1 * 2 + 2;
  lVar11 = lVar5;
  if (0xfff < uVar17) {
    lVar11 = *(longlong *)(lVar5 + -8);
    if (0x1f < (lVar5 - lVar11) - 8U) {
LAB_14004e29b:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar17 = uVar1 * 2 + 0x29;
  }
  func_0x00014028b040(lVar11,uVar17);
  return;
}

