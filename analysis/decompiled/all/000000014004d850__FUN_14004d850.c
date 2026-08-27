// Function: FUN_14004d850
// Addr: 14004d850
// Size: 2435 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14004d850(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
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
  
  lVar10 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
  while (0x20 < lVar10 >> 5) {
    lVar10 = (longlong)param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) {
      goto joined_r0x00014004ddeb;
    }
    plVar20 = param_2 + -4;
    plVar17 = param_1 + lVar10 * 4;
    lVar10 = (longlong)plVar20 - (longlong)param_1 >> 5;
    if (lVar10 < 0x29) {
      FUN_140050600(param_1,plVar17,plVar20,param_4);
    }
    else {
      lVar10 = lVar10 + 1 >> 3;
      FUN_140050600(local_res8,param_1 + lVar10 * 4,local_res8 + lVar10 * 8,param_4);
      FUN_140050600(plVar17 + lVar10 * -4,plVar17,plVar17 + lVar10 * 4,param_4);
      FUN_140050600(plVar20 + lVar10 * -8,plVar20 + lVar10 * -4,plVar20,param_4);
      FUN_140050600(param_1 + lVar10 * 4,plVar17,plVar20 + lVar10 * -4,param_4);
      param_1 = local_res8;
    }
    plVar20 = plVar17 + 4;
    if (param_1 < plVar17) {
      while( true ) {
        plVar21 = plVar17 + -4;
        plVar19 = plVar17;
        if (7 < (ulonglong)plVar17[3]) {
          plVar19 = (longlong *)*plVar17;
        }
        plVar11 = plVar21;
        if (7 < (ulonglong)plVar17[-1]) {
          plVar11 = (longlong *)*plVar21;
        }
        iVar8 = FUN_1400153a0(plVar11,plVar17[-2],plVar19,plVar17[2]);
        if (iVar8 < 0) break;
        plVar19 = plVar21;
        if (7 < (ulonglong)plVar17[-1]) {
          plVar19 = (longlong *)*plVar21;
        }
        plVar11 = plVar17;
        if (7 < (ulonglong)plVar17[3]) {
          plVar11 = (longlong *)*plVar17;
        }
        iVar8 = FUN_1400153a0(plVar11,plVar17[2],plVar19,plVar17[-2]);
        if ((iVar8 < 0) || (plVar17 = plVar21, plVar21 <= param_1)) break;
      }
    }
    plVar19 = plVar20;
    plVar21 = plVar17;
    if (plVar20 < param_2) {
      while( true ) {
        plVar19 = plVar17;
        if (7 < (ulonglong)plVar17[3]) {
          plVar19 = (longlong *)*plVar17;
        }
        plVar11 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar11 = (longlong *)*plVar20;
        }
        iVar8 = FUN_1400153a0(plVar11,plVar20[2],plVar19,plVar17[2]);
        plVar19 = plVar20;
        if (iVar8 < 0) break;
        plVar11 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar11 = (longlong *)*plVar20;
        }
        plVar12 = plVar17;
        if (7 < (ulonglong)plVar17[3]) {
          plVar12 = (longlong *)*plVar17;
        }
        iVar8 = FUN_1400153a0(plVar12,plVar17[2],plVar11,plVar20[2]);
        if ((iVar8 < 0) || (plVar20 = plVar20 + 4, plVar19 = plVar20, param_2 <= plVar20)) break;
      }
    }
joined_r0x00014004da3a:
    plVar11 = plVar19;
    if (plVar20 < param_2) {
      plVar19 = plVar20;
      if (7 < (ulonglong)plVar20[3]) {
        plVar19 = (longlong *)*plVar20;
      }
      plVar12 = plVar21;
      if (7 < (ulonglong)plVar21[3]) {
        plVar12 = (longlong *)*plVar21;
      }
      iVar8 = FUN_1400153a0(plVar12,plVar21[2],plVar19,plVar20[2]);
      if (-1 < iVar8) {
        plVar19 = plVar21;
        if (7 < (ulonglong)plVar21[3]) {
          plVar19 = (longlong *)*plVar21;
        }
        plVar12 = plVar20;
        if (7 < (ulonglong)plVar20[3]) {
          plVar12 = (longlong *)*plVar20;
        }
        iVar8 = FUN_1400153a0(plVar12,plVar20[2],plVar19,plVar21[2]);
        if (iVar8 < 0) goto joined_r0x00014004dad3;
        if (plVar11 != plVar20) {
          uVar3 = *(undefined4 *)((longlong)plVar20 + 4);
          lVar7 = plVar20[1];
          uVar4 = *(undefined4 *)((longlong)plVar20 + 0xc);
          lVar10 = *plVar11;
          lVar18 = plVar11[1];
          lVar5 = plVar11[2];
          lVar6 = plVar11[3];
          *(int *)plVar11 = (int)*plVar20;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar3;
          *(int *)(plVar11 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar4;
          lVar7 = plVar20[3];
          plVar11[2] = plVar20[2];
          plVar11[3] = lVar7;
          *plVar20 = lVar10;
          plVar20[1] = lVar18;
          plVar20[2] = lVar5;
          plVar20[3] = lVar6;
        }
        plVar11 = plVar11 + 4;
      }
      plVar20 = plVar20 + 4;
      plVar19 = plVar11;
      goto joined_r0x00014004da3a;
    }
joined_r0x00014004dad3:
    while (local_res10 = plVar21, plVar12 = plVar17, plVar21 = local_res10, param_1 < plVar12) {
      plVar17 = plVar12 + -4;
      plVar19 = local_res10;
      if (7 < (ulonglong)local_res10[3]) {
        plVar19 = (longlong *)*local_res10;
      }
      plVar13 = plVar17;
      if (7 < (ulonglong)plVar12[-1]) {
        plVar13 = (longlong *)*plVar17;
      }
      iVar8 = FUN_1400153a0(plVar13,plVar12[-2],plVar19,local_res10[2]);
      if (-1 < iVar8) {
        plVar19 = plVar17;
        if (7 < (ulonglong)plVar12[-1]) {
          plVar19 = (longlong *)*plVar17;
        }
        plVar13 = local_res10;
        if (7 < (ulonglong)local_res10[3]) {
          plVar13 = (longlong *)*local_res10;
        }
        iVar8 = FUN_1400153a0(plVar13,local_res10[2],plVar19,plVar12[-2]);
        if (iVar8 < 0) break;
        plVar21 = local_res10 + -4;
        if (plVar21 != plVar17) {
          uVar3 = *(undefined4 *)((longlong)plVar12 + -0x1c);
          lVar7 = plVar12[-3];
          uVar4 = *(undefined4 *)((longlong)plVar12 + -0x14);
          lVar10 = *plVar21;
          lVar18 = local_res10[-3];
          lVar5 = local_res10[-2];
          lVar6 = local_res10[-1];
          *(int *)plVar21 = (int)*plVar17;
          *(undefined4 *)((longlong)local_res10 + -0x1c) = uVar3;
          *(int *)(local_res10 + -3) = (int)lVar7;
          *(undefined4 *)((longlong)local_res10 + -0x14) = uVar4;
          lVar7 = plVar12[-1];
          local_res10[-2] = plVar12[-2];
          local_res10[-1] = lVar7;
          *plVar17 = lVar10;
          plVar12[-3] = lVar18;
          plVar12[-2] = lVar5;
          plVar12[-1] = lVar6;
        }
      }
    }
    if (plVar12 != param_1) {
      plVar17 = plVar12 + -4;
      if (plVar20 == param_2) {
        plVar21 = local_res10 + -4;
        if (plVar12 != local_res10) {
          uVar3 = *(undefined4 *)((longlong)local_res10 + -0x1c);
          lVar7 = local_res10[-3];
          uVar4 = *(undefined4 *)((longlong)local_res10 + -0x14);
          lVar10 = *plVar17;
          lVar18 = plVar12[-3];
          lVar5 = plVar12[-2];
          lVar6 = plVar12[-1];
          *(int *)plVar17 = (int)*plVar21;
          *(undefined4 *)((longlong)plVar12 + -0x1c) = uVar3;
          *(int *)(plVar12 + -3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar12 + -0x14) = uVar4;
          lVar7 = local_res10[-1];
          plVar12[-2] = local_res10[-2];
          plVar12[-1] = lVar7;
          *plVar21 = lVar10;
          local_res10[-3] = lVar18;
          local_res10[-2] = lVar5;
          local_res10[-1] = lVar6;
        }
        plVar19 = plVar11 + -4;
        if (local_res10 != plVar11) {
          uVar3 = *(undefined4 *)((longlong)plVar11 + -0x1c);
          lVar7 = plVar11[-3];
          uVar4 = *(undefined4 *)((longlong)plVar11 + -0x14);
          lVar10 = *plVar21;
          lVar18 = local_res10[-3];
          lVar5 = local_res10[-2];
          lVar6 = local_res10[-1];
          *(int *)plVar21 = (int)*plVar19;
          *(undefined4 *)((longlong)local_res10 + -0x1c) = uVar3;
          *(int *)(local_res10 + -3) = (int)lVar7;
          *(undefined4 *)((longlong)local_res10 + -0x14) = uVar4;
          lVar7 = plVar11[-1];
          local_res10[-2] = plVar11[-2];
          local_res10[-1] = lVar7;
          *plVar19 = lVar10;
          plVar11[-3] = lVar18;
          plVar11[-2] = lVar5;
          plVar11[-1] = lVar6;
        }
      }
      else {
        if (plVar20 != plVar17) {
          uVar3 = *(undefined4 *)((longlong)plVar12 + -0x1c);
          lVar7 = plVar12[-3];
          uVar4 = *(undefined4 *)((longlong)plVar12 + -0x14);
          lVar10 = *plVar20;
          lVar18 = plVar20[1];
          lVar5 = plVar20[2];
          lVar6 = plVar20[3];
          *(int *)plVar20 = (int)*plVar17;
          *(undefined4 *)((longlong)plVar20 + 4) = uVar3;
          *(int *)(plVar20 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uVar4;
          lVar7 = plVar12[-1];
          plVar20[2] = plVar12[-2];
          plVar20[3] = lVar7;
          *plVar17 = lVar10;
          plVar12[-3] = lVar18;
          plVar12[-2] = lVar5;
          plVar12[-1] = lVar6;
        }
        plVar20 = plVar20 + 4;
        plVar19 = plVar11;
      }
      goto joined_r0x00014004da3a;
    }
    if (plVar20 != param_2) {
      if ((plVar11 != plVar20) && (local_res10 != plVar11)) {
        uVar3 = *(undefined4 *)((longlong)plVar11 + 4);
        lVar7 = plVar11[1];
        uVar4 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar10 = *local_res10;
        lVar18 = local_res10[1];
        lVar5 = local_res10[2];
        lVar6 = local_res10[3];
        *(int *)local_res10 = (int)*plVar11;
        *(undefined4 *)((longlong)local_res10 + 4) = uVar3;
        *(int *)(local_res10 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)local_res10 + 0xc) = uVar4;
        lVar7 = plVar11[3];
        local_res10[2] = plVar11[2];
        local_res10[3] = lVar7;
        *plVar11 = lVar10;
        plVar11[1] = lVar18;
        plVar11[2] = lVar5;
        plVar11[3] = lVar6;
      }
      if (local_res10 != plVar20) {
        uVar3 = *(undefined4 *)((longlong)plVar20 + 4);
        lVar7 = plVar20[1];
        uVar4 = *(undefined4 *)((longlong)plVar20 + 0xc);
        lVar10 = *local_res10;
        lVar18 = local_res10[1];
        lVar5 = local_res10[2];
        lVar6 = local_res10[3];
        *(int *)local_res10 = (int)*plVar20;
        *(undefined4 *)((longlong)local_res10 + 4) = uVar3;
        *(int *)(local_res10 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)local_res10 + 0xc) = uVar4;
        lVar7 = plVar20[3];
        local_res10[2] = plVar20[2];
        local_res10[3] = lVar7;
        *plVar20 = lVar10;
        plVar20[1] = lVar18;
        plVar20[2] = lVar5;
        plVar20[3] = lVar6;
      }
      plVar20 = plVar20 + 4;
      plVar19 = plVar11 + 4;
      plVar17 = plVar12;
      plVar21 = local_res10 + 4;
      goto joined_r0x00014004da3a;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)local_res10 - (longlong)param_1 >> 5 < (longlong)param_2 - (longlong)plVar11 >> 5)
    {
      FUN_14004d850(param_1,local_res10,param_3,param_4);
      param_1 = plVar11;
      local_res8 = plVar11;
      local_res10 = param_2;
    }
    else {
      FUN_14004d850(plVar11,param_2,param_3,param_4);
    }
    param_2 = local_res10;
    lVar10 = (longlong)local_res10 - (longlong)param_1;
  }
  plVar20 = param_1;
  if (param_1 != param_2) {
    while (plVar17 = plVar20 + 4, plVar17 != param_2) {
      local_80._0_4_ = (undefined4)*plVar17;
      local_80._4_4_ = *(undefined4 *)((longlong)plVar20 + 0x24);
      puVar15 = (undefined4 *)*plVar17;
      uStack_78 = (undefined4)plVar17[1];
      uStack_74 = *(undefined4 *)((longlong)plVar20 + 0x2c);
      local_70 = (undefined4)plVar17[2];
      uStack_6c = *(undefined4 *)((longlong)plVar20 + 0x34);
      lVar10 = plVar17[2];
      uStack_68 = (undefined4)plVar17[3];
      uStack_64 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar1 = plVar17[3];
      plVar17[2] = 0;
      plVar17[3] = 7;
      *(undefined2 *)plVar17 = 0;
      plVar20 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar20 = (longlong *)*param_1;
      }
      puVar14 = (undefined4 *)&local_80;
      if (7 < uVar1) {
        puVar14 = puVar15;
      }
      uVar9 = FUN_1400153a0(puVar14,lVar10,plVar20,param_1[2]);
      plVar20 = plVar17;
      if (uVar9 < 0x80000000) {
        while( true ) {
          plVar19 = plVar17;
          plVar17 = plVar19 + -4;
          plVar21 = plVar17;
          if (7 < (ulonglong)plVar19[-1]) {
            plVar21 = (longlong *)*plVar17;
          }
          puVar15 = (undefined4 *)&local_80;
          if (7 < CONCAT44(uStack_64,uStack_68)) {
            puVar15 = (undefined4 *)CONCAT44(local_80._4_4_,(undefined4)local_80);
          }
          uVar9 = FUN_1400153a0(puVar15,CONCAT44(uStack_6c,local_70),plVar21,plVar19[-2]);
          if (uVar9 < 0x80000000) break;
          if (plVar19 != plVar17) {
            uVar1 = plVar19[3];
            if (7 < uVar1) {
              lVar10 = *plVar19;
              uVar16 = uVar1 * 2 + 2;
              if (0xfff < uVar16) {
                if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14004e1cb;
                uVar16 = uVar1 * 2 + 0x29;
                lVar10 = *(longlong *)(lVar10 + -8);
              }
              thunk_FUN_14028af80(lVar10,uVar16);
            }
            plVar19[2] = 0;
            plVar19[3] = 7;
            *(undefined2 *)plVar19 = 0;
            *(int *)plVar19 = (int)*plVar17;
            *(undefined4 *)((longlong)plVar19 + 4) = *(undefined4 *)((longlong)plVar19 + -0x1c);
            *(int *)(plVar19 + 1) = (int)plVar19[-3];
            *(undefined4 *)((longlong)plVar19 + 0xc) = *(undefined4 *)((longlong)plVar19 + -0x14);
            plVar19[2] = plVar19[-2];
            plVar19[3] = plVar19[-1];
            plVar19[-2] = 0;
            plVar19[-1] = 7;
            *(undefined2 *)plVar17 = 0;
          }
        }
        if (plVar19 == &local_80) goto LAB_14004e179;
        uVar1 = plVar19[3];
        if (7 < uVar1) {
          lVar10 = *plVar19;
          uVar16 = uVar1 * 2 + 2;
          if (0xfff < uVar16) {
            if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14004e1cb;
            uVar16 = uVar1 * 2 + 0x29;
            lVar10 = *(longlong *)(lVar10 + -8);
          }
          thunk_FUN_14028af80(lVar10,uVar16);
        }
        *plVar19 = CONCAT44(local_80._4_4_,(undefined4)local_80);
        plVar19[1] = CONCAT44(uStack_74,uStack_78);
        plVar19[2] = CONCAT44(uStack_6c,local_70);
        plVar19[3] = CONCAT44(uStack_64,uStack_68);
      }
      else {
        plVar21 = plVar17 + 4;
        while (plVar11 = plVar17, plVar19 = plVar21, param_1 != plVar11) {
          plVar17 = plVar11 + -4;
          plVar21 = plVar19 + -4;
          if (plVar21 != plVar17) {
            uVar1 = plVar19[-1];
            if (7 < uVar1) {
              lVar10 = *plVar21;
              uVar16 = uVar1 * 2 + 2;
              if (0xfff < uVar16) {
                if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14004e1cb;
                uVar16 = uVar1 * 2 + 0x29;
                lVar10 = *(longlong *)(lVar10 + -8);
              }
              thunk_FUN_14028af80(lVar10,uVar16);
            }
            plVar19[-2] = 0;
            plVar19[-1] = 7;
            *(undefined2 *)plVar21 = 0;
            uVar3 = *(undefined4 *)((longlong)plVar11 + -0x1c);
            lVar10 = plVar11[-3];
            uVar4 = *(undefined4 *)((longlong)plVar11 + -0x14);
            *(int *)plVar21 = (int)*plVar17;
            *(undefined4 *)((longlong)plVar19 + -0x1c) = uVar3;
            *(int *)(plVar19 + -3) = (int)lVar10;
            *(undefined4 *)((longlong)plVar19 + -0x14) = uVar4;
            lVar10 = plVar11[-1];
            plVar19[-2] = plVar11[-2];
            plVar19[-1] = lVar10;
            plVar11[-2] = 0;
            plVar11[-1] = 7;
            *(undefined2 *)plVar17 = 0;
          }
        }
        if (param_1 == &local_80) {
LAB_14004e179:
          uVar1 = CONCAT44(uStack_64,uStack_68);
          if (7 < uVar1) {
            lVar18 = CONCAT44(local_80._4_4_,(undefined4)local_80);
            uVar16 = uVar1 * 2 + 2;
            lVar10 = lVar18;
            if (0xfff < uVar16) {
              lVar10 = *(longlong *)(lVar18 + -8);
              if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_14004e1cb;
              uVar16 = uVar1 * 2 + 0x29;
            }
            thunk_FUN_14028af80(lVar10,uVar16);
          }
        }
        else {
          uVar1 = param_1[3];
          if (7 < uVar1) {
            lVar10 = *param_1;
            uVar16 = uVar1 * 2 + 2;
            if (0xfff < uVar16) {
              if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) {
LAB_14004e1cb:
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar16 = uVar1 * 2 + 0x29;
              lVar10 = *(longlong *)(lVar10 + -8);
            }
            thunk_FUN_14028af80(lVar10,uVar16);
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
joined_r0x00014004ddeb:
  if (0 < lVar10) {
    lVar18 = lVar10 + -1;
    plVar20 = param_1 + lVar10 * 4 + -4;
    local_60 = (undefined4)*plVar20;
    uStack_5c = *(undefined4 *)((longlong)plVar20 + 4);
    uStack_58 = (undefined4)plVar20[1];
    uStack_54 = *(undefined4 *)((longlong)plVar20 + 0xc);
    plVar20 = param_1 + lVar10 * 4 + -2;
    local_50 = (undefined4)*plVar20;
    uStack_4c = *(undefined4 *)((longlong)plVar20 + 4);
    uStack_48 = (undefined4)plVar20[1];
    uStack_44 = *(undefined4 *)((longlong)plVar20 + 0xc);
    param_1[lVar10 * 4 + -2] = 0;
    param_1[lVar10 * 4 + -1] = 7;
    *(undefined2 *)(param_1 + lVar10 * 4 + -4) = 0;
    FUN_14004fc40(param_1,lVar18,(longlong)param_2 - (longlong)param_1 >> 5,&local_60,param_4);
    uVar1 = CONCAT44(uStack_44,uStack_48);
    lVar10 = lVar18;
    if (7 < uVar1) {
      lVar5 = CONCAT44(uStack_5c,local_60);
      uVar16 = uVar1 * 2 + 2;
      lVar18 = lVar5;
      if (0xfff < uVar16) {
        lVar18 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar18) - 8U) goto LAB_14004e1cb;
        uVar16 = uVar1 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar18,uVar16);
    }
    goto joined_r0x00014004ddeb;
  }
  lVar10 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar10 < 0x40) {
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
        lVar10 = param_1[1];
        uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
        *(int *)plVar20 = (int)*param_1;
        *(undefined4 *)((longlong)param_2 + -0x1c) = uVar3;
        *(int *)(param_2 + -3) = (int)lVar10;
        *(undefined4 *)((longlong)param_2 + -0x14) = uVar4;
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
        lVar10 = param_1[3];
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(int *)(param_2 + -2) = (int)param_1[2];
        *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
        *(int *)(param_2 + -1) = (int)lVar10;
        *(undefined4 *)((longlong)param_2 + -4) = uVar4;
        param_1[2] = 0;
        param_1[3] = 7;
        *(undefined2 *)param_1 = 0;
      }
      FUN_14004fc40(param_1,0,(longlong)plVar20 - (longlong)param_1 >> 5,&local_60,param_4);
      if (7 < CONCAT44(uStack_44,uStack_48)) {
        lVar18 = CONCAT44(uStack_5c,local_60);
        lVar10 = lVar18;
        if ((0xfff < CONCAT44(uStack_44,uStack_48) * 2 + 2) &&
           (lVar10 = *(longlong *)(lVar18 + -8), 0x1f < (lVar18 - lVar10) - 8U)) goto LAB_14004e1cb;
        thunk_FUN_14028af80(lVar10);
      }
    }
    param_2 = param_2 + -4;
    lVar10 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}

