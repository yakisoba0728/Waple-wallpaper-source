// Function: FUN_1400d2d30
// Addr: 1400d2d30
// Size: 1277 bytes


undefined8 *
FUN_1400d2d30(undefined8 *param_1,int param_2,int param_3,int param_4,undefined1 *param_5,
             longlong param_6,undefined4 param_7,int param_8,uint param_9,uint param_10,
             undefined8 param_11,undefined8 param_12,longlong *param_13)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar21;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar22;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined8 local_54;
  
  iVar7 = param_8;
  uVar5 = param_7;
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  puVar18 = param_1 + 0xe;
  param_1[1] = param_6;
  *(undefined4 *)(param_1 + 2) = param_7;
  *(short *)(param_1 + 3) = (short)param_2;
  *(short *)((longlong)param_1 + 0x1a) = (short)param_3;
  *(int *)((longlong)param_1 + 0x1c) = param_4;
  uVar14 = 2;
  if (2 < (int)((longlong)param_2 / (longlong)param_4)) {
    uVar14 = (undefined2)((longlong)param_2 / (longlong)param_4);
  }
  *(undefined2 *)((longlong)param_1 + 0x14) = uVar14;
  iVar17 = 2;
  if (2 < param_3 / param_4) {
    iVar17 = param_3 / param_4;
  }
  *(short *)(param_1 + 5) = (short)param_10;
  *(short *)((longlong)param_1 + 0x16) = (short)iVar17;
  *param_1 = &PTR_UNWIND_INFO_1400d3219_UnwindCodes_1__UnwindOpCode_140486838;
  param_1[8] = param_11;
  param_1[9] = param_12;
  *(bool *)(param_1 + 0xb) = param_8 == 0x1a;
  param_1[4] = 0;
  iVar17 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  puVar11 = &DAT_140474550;
  if (param_5 != (undefined1 *)0x0) {
    puVar11 = param_5;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *puVar18 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar8 = func_0x000140421ed0(puVar11,(longlong)param_3 % (longlong)param_4 & 0xffffffff);
  func_0x000140017550(puVar18,puVar11,uVar8);
  uVar6 = 1;
  *(undefined4 *)(param_1 + 0x13) = 1;
  uVar4 = func_0x0001400d2af0(uVar5);
  *(uint *)(param_1 + 0x12) = uVar4;
  uVar5 = func_0x0001400d2af0(iVar7);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  if ((param_10 & 0x20) != 0) {
    iVar17 = *(int *)(param_6 + 0x1a8);
  }
  if ((param_5 == (undefined1 *)0x0) || ((iVar17 != 0 && ((param_9 & 0x2000000) == 0)))) {
    bVar15 = 0;
  }
  else {
    bVar15 = (byte)uVar6;
  }
  param_7 = CONCAT31(param_7._1_3_,bVar15);
  uVar12 = (uint)bVar15 * 8;
  uVar3 = *(ushort *)(param_1 + 5);
  uVar16 = uVar6;
  if ((uVar3 & 0x10) != 0) {
    uVar6 = *(ushort *)((longlong)param_1 + 0x14) - 1;
    uVar6 = (int)uVar6 >> 1 | uVar6;
    uVar6 = (int)uVar6 >> 2 | uVar6;
    uVar6 = (int)uVar6 >> 4 | uVar6;
    uVar6 = (int)uVar6 >> 8 | uVar6;
    dVar19 = (double)FUN_14041d4f0((double)((int)(((int)uVar6 >> 0x10 | uVar6) + 1) >> 1));
    uVar6 = *(ushort *)((longlong)param_1 + 0x16) - 1;
    uVar6 = (int)uVar6 >> 1 | uVar6;
    uVar6 = (int)uVar6 >> 2 | uVar6;
    uVar6 = (int)uVar6 >> 4 | uVar6;
    uVar6 = (int)uVar6 >> 8 | uVar6;
    dVar20 = (double)FUN_14041d4f0((double)((int)(((int)uVar6 >> 0x10 | uVar6) + 1) >> 1));
    uVar16 = 1;
    iVar7 = (int)dVar19;
    if ((int)dVar20 < (int)dVar19) {
      iVar7 = (int)dVar20;
    }
    uVar6 = 1;
    if (1 < (int)(iVar7 - 2U)) {
      uVar6 = iVar7 - 2U;
    }
    uVar3 = *(ushort *)(param_1 + 5);
    *(uint *)(param_1 + 0x13) = uVar6;
  }
  if (uVar4 == 0) goto LAB_1400d306b;
  puVar13 = (undefined8 *)param_1[8];
  if ((uVar4 < 0x38) && ((0xa0318000000000U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)) {
    local_58 = uVar12 | 0x40;
  }
  else {
    local_58 = uVar12 | 0x20;
  }
  local_54._4_4_ = 0;
  uVar12 = local_54._4_4_;
  if (1 < (int)uVar6) {
    uVar12 = uVar16;
  }
  uStack_5c = 0;
  local_54 = (ulonglong)uVar12 << 0x20;
  local_78 = (ulonglong)
             (CONCAT24((short)((uint)*(undefined4 *)((longlong)param_1 + 0x14) >> 0x10),
                       *(undefined4 *)((longlong)param_1 + 0x14)) & 0xffff0000ffff);
  uStack_70 = CONCAT44(uVar16,uVar6);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) != 0) {
      uStack_5c = 3;
      local_58 = 0;
      local_54 = CONCAT44(uVar12,0x20000);
    }
  }
  else {
    uStack_5c = 2;
    local_54 = CONCAT44(uVar12,0x10000);
    local_58 = 8;
  }
  plVar10 = (longlong *)*puVar13;
  param_5 = (undefined1 *)0x0;
  local_68 = uVar4;
  uStack_64 = uVar16;
  if (iVar17 == 0) {
LAB_1400d304b:
    local_60 = 0;
    (**(code **)(*plVar10 + 0x28))(plVar10,&local_78,0,&param_5);
  }
  else {
    uVar1 = puVar13[7];
    uStack_64 = (uint)uVar1;
    local_60 = (undefined4)(uVar1 >> 0x20);
    param_8 = 0;
    iVar7 = (**(code **)(*plVar10 + 0xf0))(plVar10,uVar4,uVar1 & 0xffffffff,&param_8);
    if (((iVar7 < 0) || (param_8 == 0)) ||
       (iVar7 = (**(code **)(*(longlong *)*puVar13 + 0x28))
                          ((longlong *)*puVar13,&local_78,0,&param_5), iVar7 < 0)) {
      plVar10 = (longlong *)*puVar13;
      uStack_64 = 1;
      goto LAB_1400d304b;
    }
  }
  param_1[0xc] = param_5;
  uVar12 = 0;
LAB_1400d306b:
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    uVar8 = param_1[8];
    uVar9 = FUN_1400d2bf0(*(int *)((longlong)param_1 + 0x94),
                          *(undefined2 *)((longlong)param_1 + 0x14),
                          *(undefined2 *)((longlong)param_1 + 0x16),1,iVar17,uVar8,
                          in_stack_ffffffffffffff78 & 0xffffffff00000000,CONCAT44(uVar22,uVar12));
    uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
    param_1[0xd] = uVar9;
  }
  if ((*(byte *)(param_1 + 5) & 6) == 0) {
    if (param_1[0xc] != 0) {
      (**(code **)(**(longlong **)param_1[8] + 0x48))
                (*(longlong **)param_1[8],param_1[0xc],0,param_1 + 9);
    }
    if (param_1[0xd] != 0) {
      uVar6 = *(uint *)((longlong)param_1 + 0x94);
      if ((uVar6 < 0x36) && ((0x20108000000000U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) {
        if (((*(byte *)(param_1 + 5) & 0x20) == 0) || (*(int *)(param_1[1] + 0x1a8) == 0)) {
          bVar15 = 0;
        }
        else {
          bVar15 = 1;
        }
        local_68 = 0;
        uStack_64 = 0;
        local_78._0_4_ = 0;
        uStack_70 = 0;
        if (uVar6 == 0x27) {
          local_78._0_4_ = 0x28;
        }
        else if (uVar6 == 0x2c) {
          local_78._0_4_ = 0x2d;
        }
        else if (uVar6 == 0x35) {
          local_78._0_4_ = 0x37;
        }
        puVar13 = &local_78;
        local_78 = CONCAT44((uint)bVar15 * 2 + 3,(undefined4)local_78);
      }
      else {
        puVar13 = (undefined8 *)0x0;
      }
      (**(code **)(**(longlong **)param_1[8] + 0x50))
                (*(longlong **)param_1[8],param_1[0xd],puVar13,param_1 + 10);
    }
  }
  if (param_13 != (longlong *)0x0) {
    param_1[0xc] = param_13;
    (**(code **)(*param_13 + 0x50))(param_13,&local_78);
    *(uint *)(param_1 + 0x12) = local_68;
  }
  if (((char)param_7 != '\0') || ((param_10 & 6) != 0)) {
    if (param_1[0xc] == 0) {
      uVar8 = func_0x00014028aff0(0x170);
      iVar7 = *(int *)((longlong)param_1 + 0x94);
      if (iVar7 == 0x27) {
        iVar17 = 0x29;
      }
      else if (iVar7 == 0x2c) {
        iVar17 = 0x2e;
      }
      else {
        iVar17 = 0x38;
        if (iVar7 != 0x35) {
          iVar17 = iVar7;
        }
      }
      if (0xf < (ulonglong)param_1[0x11]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      uVar9 = param_1[0xd];
    }
    else {
      uVar8 = func_0x00014028aff0(0x170);
      if (0xf < (ulonglong)param_1[0x11]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      uVar9 = param_1[0xc];
      iVar17 = *(int *)(param_1 + 0x12);
    }
    lVar2 = param_6;
    uVar8 = func_0x0001400eb510(uVar8,puVar18,uVar9,iVar17,param_9,
                                CONCAT44(uVar21,*(undefined4 *)(param_1 + 0x13)),param_6,param_11);
    param_1[4] = uVar8;
    if (param_1[0x10] != 0) {
      FUN_14014c9c0(lVar2 + 0x1520,param_1 + 4);
    }
    *(uint *)(param_1[4] + 0x20) = (uint)*(ushort *)((longlong)param_1 + 0x14);
    *(uint *)(param_1[4] + 0x2c) = (uint)*(ushort *)((longlong)param_1 + 0x14);
    *(uint *)(param_1[4] + 0x24) = (uint)*(ushort *)((longlong)param_1 + 0x16);
    *(uint *)(param_1[4] + 0x30) = (uint)*(ushort *)((longlong)param_1 + 0x16);
    lVar2 = param_1[4];
    puVar18 = *(undefined8 **)(lVar2 + 0xf8);
    for (puVar13 = (undefined8 *)*puVar18; puVar13 != puVar18; puVar13 = (undefined8 *)*puVar13) {
      plVar10 = (longlong *)puVar13[10];
      param_6 = lVar2;
      if (plVar10 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c390();
      }
      (**(code **)(*plVar10 + 0x10))(plVar10,&param_6);
    }
  }
  return param_1;
}

