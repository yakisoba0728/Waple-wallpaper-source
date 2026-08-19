// Function: FUN_140139670
// Addr: 140139670
// Size: 1137 bytes


longlong * FUN_140139670(longlong *param_1,longlong *param_2)

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
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong local_res8;
  undefined8 local_res10;
  longlong *local_res18;
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
  
  puVar12 = auStack_128;
  plVar6 = param_1 + 4;
  uVar13 = 0xf;
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
LAB_1401398e5:
    local_res18 = (longlong *)0x0;
    (**(code **)*param_2)(param_2,&DAT_14048b1e8,&local_res18);
    if (local_res18 == (longlong *)0x0) {
      return param_1;
    }
    local_res8 = 0;
    (**(code **)(*local_res18 + 0x28))(local_res18,&local_res8);
    puVar11 = auStack_128;
    if (local_res8 == 0) goto LAB_140139b1c;
    if (*(int *)(local_res8 + 4) != 0) {
      uVar7 = *(undefined8 *)(local_res8 + 0x10);
      local_d8 = 0;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_d0 = 0;
      uVar4 = FUN_1402d6b70(uVar7);
      FUN_140016240(&local_e8,uVar7,uVar4);
      if (local_d8 == 0) {
LAB_140139a0b:
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
        uVar15 = (undefined4)local_78;
        uVar16 = local_78._4_4_;
        uVar17 = (undefined4)uStack_70;
        uVar18 = uStack_70._4_4_;
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
        if (iVar3 < 1) goto LAB_140139a0b;
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
        uVar13 = uStack_b0;
        uVar15 = (int)local_b8;
        uVar16 = (int)((ulonglong)local_b8 >> 0x20);
        uVar17 = (int)uStack_b0;
        uVar18 = (int)(uStack_b0 >> 0x20);
      }
      if (plVar6 == &local_88) {
        if (0xf < uVar13) {
          uVar10 = uVar13 + 1;
          lVar8 = local_88;
          if (0xfff < uVar10) {
            lVar8 = *(longlong *)(local_88 + -8);
            uVar14 = (local_88 - lVar8) + -0x27 < 0;
            if (0x1f < (local_88 - lVar8) - 8U)
            goto UNWIND_INFO_140139b29_UnwindCodes_19__OffsetInProlog;
            uVar10 = uVar13 + 0x28;
          }
          func_0x00014028b040(lVar8,uVar10);
        }
      }
      else {
        uVar13 = param_1[7];
        if (0xf < uVar13) {
          lVar8 = *plVar6;
          uVar10 = uVar13 + 1;
          if (uVar10 < 0x1000) {
LAB_140139a67:
            plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar10);
            return plVar6;
          }
          lVar5 = lVar8 - *(longlong *)(lVar8 + -8);
          uVar14 = lVar5 + -0x27 < 0;
          if (lVar5 - 8U < 0x20) {
            uVar10 = uVar13 + 0x28;
            lVar8 = *(longlong *)(lVar8 + -8);
            goto LAB_140139a67;
          }
          goto UNWIND_INFO_140139b29_UnwindCodes_19__OffsetInProlog;
        }
        *(undefined4 *)plVar6 = local_c8;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
        *(undefined4 *)(param_1 + 5) = uStack_c0;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
        *(undefined4 *)(param_1 + 6) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar16;
        *(undefined4 *)(param_1 + 7) = uVar17;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar18;
      }
      if (7 < local_d0) {
        uVar13 = local_d0 * 2 + 2;
        pppppppuVar9 = (undefined8 *******)local_e8;
        if (0xfff < uVar13) {
          pppppppuVar9 = (undefined8 *******)local_e8[-1];
          uVar14 = (longlong)local_e8 + (-0x27 - (longlong)pppppppuVar9) < 0;
          if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar9)))
          goto UNWIND_INFO_140139b29_UnwindCodes_19__OffsetInProlog;
          uVar13 = local_d0 * 2 + 0x29;
        }
        func_0x00014028b040(pppppppuVar9,uVar13);
      }
    }
    lVar8 = local_res8;
    puVar11 = auStack_128;
    if (local_res8 == 0) goto LAB_140139b1c;
    LOCK();
    piVar1 = (int *)(local_res8 + 0x18);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar14 = iVar3 + -1 < 0;
    if (iVar3 == 1) {
      uVar7 = FUN_1402ed5b4();
      func_0x0001402ed5a8(uVar7,0,lVar8);
      puVar11 = auStack_128;
      goto LAB_140139b1c;
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
LAB_1401397e2:
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
      uVar15 = (undefined4)local_a8;
      uVar16 = local_a8._4_4_;
      uVar17 = (undefined4)uStack_a0;
      uVar18 = uStack_a0._4_4_;
      uVar19 = (undefined4)local_98;
      uVar20 = local_98._4_4_;
      uVar21 = (undefined4)uStack_90;
      uVar22 = uStack_90._4_4_;
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
      if (iVar3 < 1) goto LAB_1401397e2;
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
      uVar15 = local_c8;
      uVar16 = uStack_c4;
      uVar17 = uStack_c0;
      uVar18 = uStack_bc;
      uVar19 = (int)local_b8;
      uVar20 = (int)((ulonglong)local_b8 >> 0x20);
      uVar21 = (int)uStack_b0;
      uVar22 = (int)(uStack_b0 >> 0x20);
    }
    if (param_1 == &local_a8) {
      if (uVar10 < 0x10) goto LAB_140139896;
      uVar13 = uVar10 + 1;
      lVar8 = local_a8;
      if (uVar13 < 0x1000) {
LAB_140139891:
        plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar13);
        return plVar6;
      }
      lVar8 = *(longlong *)(local_a8 + -8);
      uVar14 = (local_a8 - lVar8) + -0x27 < 0;
      if ((local_a8 - lVar8) - 8U < 0x20) {
        uVar13 = uVar10 + 0x28;
        goto LAB_140139891;
      }
    }
    else {
      uVar10 = param_1[3];
      if (uVar10 < 0x10) {
        *(undefined4 *)param_1 = uVar15;
        *(undefined4 *)((longlong)param_1 + 4) = uVar16;
        *(undefined4 *)(param_1 + 1) = uVar17;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar18;
        *(undefined4 *)(param_1 + 2) = uVar19;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar20;
        *(undefined4 *)(param_1 + 3) = uVar21;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar22;
LAB_140139896:
        if (local_d0 < 8) {
          (*DAT_140426b80)(local_res10);
          goto LAB_1401398e5;
        }
        uVar13 = local_d0 * 2 + 2;
        pppppppuVar9 = (undefined8 *******)local_e8;
        if (uVar13 < 0x1000) {
LAB_1401398d6:
          plVar6 = (longlong *)func_0x00014028b040(pppppppuVar9,uVar13);
          return plVar6;
        }
        pppppppuVar9 = (undefined8 *******)local_e8[-1];
        uVar14 = (longlong)local_e8 + (-0x27 - (longlong)pppppppuVar9) < 0;
        if ((ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar9)) < 0x20) {
          uVar13 = local_d0 * 2 + 0x29;
          goto LAB_1401398d6;
        }
      }
      else {
        lVar8 = *param_1;
        if (uVar10 + 1 < 0x1000) {
          plVar6 = (longlong *)func_0x00014028b040(lVar8,uVar10 + 1,lVar8);
          return plVar6;
        }
        lVar5 = lVar8 - *(longlong *)(lVar8 + -8);
        uVar14 = lVar5 + -0x27 < 0;
        if (lVar5 - 8U < 0x20) {
          plVar6 = (longlong *)func_0x00014028b040(*(longlong *)(lVar8 + -8),uVar10 + 0x28);
          return plVar6;
        }
      }
    }
UNWIND_INFO_140139b29_UnwindCodes_19__OffsetInProlog:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar12 = auStack_120;
  }
  puVar11 = puVar12;
  if ((bool)uVar14) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar12 + -8) = 0x140139b61;
    FUN_1402c98b4();
  }
LAB_140139b1c:
  if (local_res18 != (longlong *)0x0) {
    pcVar2 = *(code **)(*local_res18 + 0x10);
    *(undefined8 *)(puVar11 + -8) = 0x140139b2b;
    (*pcVar2)();
  }
  return param_1;
}

