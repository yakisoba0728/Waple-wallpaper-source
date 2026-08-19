// Function: FUN_14013b110
// Addr: 14013b110
// Size: 1158 bytes


longlong * FUN_14013b110(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong local_res8;
  undefined8 local_res10;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined4 *local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 ******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  puVar11 = auStack_128;
  plVar6 = param_1 + 4;
  uVar12 = 0xf;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  *plVar6 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)plVar6 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,&local_68);
  local_res10 = 0;
  iVar3 = (*DAT_140426b90)(&local_68,&local_res10);
  uVar7 = local_res10;
  if (iVar3 < 0) {
LAB_14013b385:
    local_res8 = 0;
    (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
    if (local_res8 == 0) {
      return param_1;
    }
    if (*(int *)(local_res8 + 4) != 0) {
      uVar7 = *(undefined8 *)(local_res8 + 0x10);
      local_d8 = 0;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_d0 = 0;
      uVar4 = FUN_1402d6b70(uVar7);
      FUN_140016240(&local_e8,uVar7,uVar4);
      if (local_d8 == 0) {
LAB_14013b48a:
        local_78 = 0;
        uStack_80 = 0;
        local_88 = 0;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        uStack_80._0_4_ = 0;
        uStack_80._4_4_ = 0;
        uStack_70 = 0xf;
        local_78._0_4_ = 0;
        local_78._4_4_ = 0;
        uStack_70._0_4_ = 0xf;
        uStack_70._4_4_ = 0;
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        uVar14 = (undefined4)local_78;
        uVar15 = local_78._4_4_;
        uVar16 = (undefined4)uStack_70;
        uVar17 = uStack_70._4_4_;
      }
      else {
        local_f0 = 0;
        pppppppuVar9 = &local_e8;
        if (7 < local_d0) {
          pppppppuVar9 = (undefined8 *******)local_e8;
        }
        local_f8 = 0;
        local_100 = 0;
        local_108 = (undefined4 *)0x0;
        iVar3 = (*DAT_140426608)(0xfde9,0,pppppppuVar9);
        if (iVar3 < 1) goto LAB_14013b48a;
        FUN_140016a10(&local_c8,(longlong)iVar3,0);
        local_108 = &local_c8;
        if (0xf < uStack_b0) {
          local_108 = (undefined4 *)CONCAT44(uStack_c4,local_c8);
        }
        local_f0 = 0;
        pppppppuVar9 = &local_e8;
        if (7 < local_d0) {
          pppppppuVar9 = (undefined8 *******)local_e8;
        }
        local_f8 = 0;
        local_100 = iVar3;
        (*DAT_140426608)(0xfde9,0,pppppppuVar9,local_d8 & 0xffffffff);
        local_88 = CONCAT44(uStack_c4,local_c8);
        uStack_80 = CONCAT44(uStack_bc,uStack_c0);
        uVar12 = uStack_b0;
        uVar14 = (int)local_b8;
        uVar15 = (int)((ulonglong)local_b8 >> 0x20);
        uVar16 = (int)uStack_b0;
        uVar17 = (int)(uStack_b0 >> 0x20);
      }
      if (plVar6 == &local_88) {
        if (0xf < uVar12) {
          uVar10 = uVar12 + 1;
          lVar8 = local_88;
          if (0xfff < uVar10) {
            lVar8 = *(longlong *)(local_88 + -8);
            uVar13 = (local_88 - lVar8) + -0x27 < 0;
            if (0x1f < (local_88 - lVar8) - 8U) goto LAB_14013b5c3;
            uVar10 = uVar12 + 0x28;
          }
          func_0x00014028b040(lVar8,uVar10);
        }
      }
      else {
        uVar12 = param_1[7];
        if (0xf < uVar12) {
          lVar8 = *plVar6;
          uVar10 = uVar12 + 1;
          if (uVar10 < 0x1000) {
LAB_14013b4e6:
            plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar10);
            return plVar6;
          }
          lVar5 = lVar8 - *(longlong *)(lVar8 + -8);
          uVar13 = lVar5 + -0x27 < 0;
          if (lVar5 - 8U < 0x20) {
            uVar10 = uVar12 + 0x28;
            lVar8 = *(longlong *)(lVar8 + -8);
            goto LAB_14013b4e6;
          }
          goto LAB_14013b5c3;
        }
        *(undefined4 *)plVar6 = local_c8;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
        *(undefined4 *)(param_1 + 5) = uStack_c0;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
        *(undefined4 *)(param_1 + 6) = uVar14;
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar15;
        *(undefined4 *)(param_1 + 7) = uVar16;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar17;
      }
      if (7 < local_d0) {
        uVar12 = local_d0 * 2 + 2;
        pppppppuVar9 = (undefined8 *******)local_e8;
        if (uVar12 < 0x1000) {
LAB_14013b56d:
          plVar6 = (longlong *)func_0x00014028b040(pppppppuVar9,uVar12);
          return plVar6;
        }
        pppppppuVar9 = (undefined8 *******)local_e8[-1];
        uVar13 = (longlong)local_e8 + (-0x27 - (longlong)pppppppuVar9) < 0;
        if ((ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar9)) < 0x20) {
          uVar12 = local_d0 * 2 + 0x29;
          goto LAB_14013b56d;
        }
        goto LAB_14013b5c3;
      }
    }
    lVar8 = local_res8;
    if (local_res8 == 0) {
      return param_1;
    }
    LOCK();
    piVar1 = (int *)(local_res8 + 0x18);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar13 = iVar3 + -1 < 0;
    if (iVar3 == 1) {
      uVar7 = FUN_1402ed5b4();
      func_0x0001402ed5a8(uVar7,0,lVar8);
      return param_1;
    }
  }
  else {
    local_d8 = 0;
    local_e8 = (undefined8 *******)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    uVar4 = FUN_1402d6b70(local_res10);
    FUN_140016240(&local_e8,uVar7,uVar4);
    if (local_d8 == 0) {
LAB_14013b282:
      local_98 = 0;
      uStack_a0 = 0;
      uVar10 = 0xf;
      local_a8 = 0;
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      uStack_90 = 0xf;
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      uStack_90._0_4_ = 0xf;
      uStack_90._4_4_ = 0;
      uVar14 = (undefined4)local_a8;
      uVar15 = local_a8._4_4_;
      uVar16 = (undefined4)uStack_a0;
      uVar17 = uStack_a0._4_4_;
      uVar18 = (undefined4)local_98;
      uVar19 = local_98._4_4_;
      uVar20 = (undefined4)uStack_90;
      uVar21 = uStack_90._4_4_;
    }
    else {
      local_f0 = 0;
      pppppppuVar9 = &local_e8;
      if (7 < local_d0) {
        pppppppuVar9 = (undefined8 *******)local_e8;
      }
      local_f8 = 0;
      local_100 = 0;
      local_108 = (undefined4 *)0x0;
      iVar3 = (*DAT_140426608)(0xfde9,0,pppppppuVar9);
      if (iVar3 < 1) goto LAB_14013b282;
      FUN_140016a10(&local_c8,(longlong)iVar3,0);
      local_108 = &local_c8;
      if (0xf < uStack_b0) {
        local_108 = (undefined4 *)CONCAT44(uStack_c4,local_c8);
      }
      local_f0 = 0;
      pppppppuVar9 = &local_e8;
      if (7 < local_d0) {
        pppppppuVar9 = (undefined8 *******)local_e8;
      }
      local_f8 = 0;
      local_100 = iVar3;
      (*DAT_140426608)(0xfde9,0,pppppppuVar9,local_d8 & 0xffffffff);
      local_a8 = CONCAT44(uStack_c4,local_c8);
      uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
      uVar10 = uStack_b0;
      uVar14 = local_c8;
      uVar15 = uStack_c4;
      uVar16 = uStack_c0;
      uVar17 = uStack_bc;
      uVar18 = (int)local_b8;
      uVar19 = (int)((ulonglong)local_b8 >> 0x20);
      uVar20 = (int)uStack_b0;
      uVar21 = (int)(uStack_b0 >> 0x20);
    }
    if (param_1 == &local_a8) {
      if (uVar10 < 0x10) goto LAB_14013b336;
      uVar12 = uVar10 + 1;
      lVar8 = local_a8;
      if (uVar12 < 0x1000) {
LAB_14013b331:
        plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar12);
        return plVar6;
      }
      lVar8 = *(longlong *)(local_a8 + -8);
      uVar13 = (local_a8 - lVar8) + -0x27 < 0;
      if ((local_a8 - lVar8) - 8U < 0x20) {
        uVar12 = uVar10 + 0x28;
        goto LAB_14013b331;
      }
    }
    else {
      uVar10 = param_1[3];
      if (uVar10 < 0x10) {
        *(undefined4 *)param_1 = uVar14;
        *(undefined4 *)((longlong)param_1 + 4) = uVar15;
        *(undefined4 *)(param_1 + 1) = uVar16;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar17;
        *(undefined4 *)(param_1 + 2) = uVar18;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar19;
        *(undefined4 *)(param_1 + 3) = uVar20;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar21;
LAB_14013b336:
        if (local_d0 < 8) {
          (*DAT_140426b80)(local_res10);
          goto LAB_14013b385;
        }
        uVar12 = local_d0 * 2 + 2;
        pppppppuVar9 = (undefined8 *******)local_e8;
        if (uVar12 < 0x1000) {
LAB_14013b376:
          plVar6 = (longlong *)func_0x00014028b040(pppppppuVar9,uVar12);
          return plVar6;
        }
        pppppppuVar9 = (undefined8 *******)local_e8[-1];
        uVar13 = (longlong)local_e8 + (-0x27 - (longlong)pppppppuVar9) < 0;
        if ((ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar9)) < 0x20) {
          uVar12 = local_d0 * 2 + 0x29;
          goto LAB_14013b376;
        }
      }
      else {
        lVar8 = *param_1;
        if (uVar10 + 1 < 0x1000) {
          plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar10 + 1,lVar8);
          return plVar6;
        }
        lVar5 = lVar8 - *(longlong *)(lVar8 + -8);
        uVar13 = lVar5 + -0x27 < 0;
        if (lVar5 - 8U < 0x20) {
          plVar6 = (longlong *)func_0x00014028b040(*(longlong *)(lVar8 + -8),uVar10 + 0x28);
          return plVar6;
        }
      }
    }
LAB_14013b5c3:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar11 = auStack_120;
  }
  if (!(bool)uVar13) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_14013b5d1;
  FUN_1402c98b4();
}

