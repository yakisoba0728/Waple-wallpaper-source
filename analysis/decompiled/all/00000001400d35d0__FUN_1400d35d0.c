// Function: FUN_1400d35d0
// Addr: 1400d35d0
// Size: 690 bytes


void FUN_1400d35d0(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  int aiStackX_8 [2];
  undefined4 local_res10;
  undefined8 uStackX_18;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_44;
  
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  iVar11 = 0;
  if ((uVar1 & 0x20) != 0) {
    iVar11 = *(int *)(*(longlong *)(param_1 + 8) + 0x1a8);
  }
  if ((uVar1 & 0x10) != 0) {
    uVar3 = *(ushort *)(param_1 + 0x14) - 1;
    uVar3 = (int)uVar3 >> 1 | uVar3;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    dVar13 = (double)FUN_14041d4f0((double)((int)(((int)uVar3 >> 0x10 | uVar3) + 1) >> 1));
    uVar3 = *(ushort *)(param_1 + 0x16) - 1;
    uVar3 = (int)uVar3 >> 1 | uVar3;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    dVar14 = (double)FUN_14041d4f0((double)((int)(((int)uVar3 >> 0x10 | uVar3) + 1) >> 1));
    iVar4 = (int)dVar13;
    if ((int)dVar14 < (int)dVar13) {
      iVar4 = (int)dVar14;
    }
    iVar7 = 1;
    if (1 < iVar4 + -2) {
      iVar7 = iVar4 + -2;
    }
    *(int *)(param_1 + 0x98) = iVar7;
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar12 = 3;
  if (uVar3 == 0) {
    uVar5 = 8;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x40);
    iStack_60 = *(int *)(param_1 + 0x98);
    local_res10 = 0;
    if ((0x37 < uVar3) ||
       (local_48 = 0x48, (0xa0318000000000U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) {
      local_48 = 0x28;
    }
    uStack_5c = 1;
    local_44 = (ulonglong)(1 < iStack_60) << 0x20;
    lVar9 = local_44;
    uStack_4c = 0;
    local_68 = (ulonglong)
               (CONCAT24((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10),
                         *(undefined4 *)(param_1 + 0x14)) & 0xffff0000ffff);
    local_44._4_4_ = (uint)(1 < iStack_60);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        uStack_4c = 3;
        local_48 = 0;
        local_44 = CONCAT44(local_44._4_4_,0x20000);
        lVar9 = local_44;
      }
    }
    else {
      uStack_4c = 2;
      local_44 = CONCAT44(local_44._4_4_,0x10000);
      local_48 = 8;
      lVar9 = local_44;
    }
    local_44 = lVar9;
    plVar8 = (longlong *)*puVar10;
    uStackX_18 = 0;
    uStack_58 = uVar3;
    if (iVar11 == 0) {
code_r0x0001400d381b:
      local_50 = 0;
      uStack_54 = 1;
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_68,0,&uStackX_18);
    }
    else {
      uVar2 = puVar10[7];
      uStack_54 = (undefined4)uVar2;
      local_50 = (undefined4)(uVar2 >> 0x20);
      aiStackX_8[0] = 0;
      iVar4 = (**(code **)(*plVar8 + 0xf0))(plVar8,(ulonglong)uVar3,uVar2 & 0xffffffff,aiStackX_8);
      if (((iVar4 < 0) || (aiStackX_8[0] == 0)) ||
         (iVar4 = (**(code **)(*(longlong *)*puVar10 + 0x28))
                            ((longlong *)*puVar10,&local_68,0,&uStackX_18), iVar4 < 0)) {
        plVar8 = (longlong *)*puVar10;
        goto code_r0x0001400d381b;
      }
    }
    *(undefined8 *)(param_1 + 0x60) = uStackX_18;
    uVar5 = local_res10;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar6 = FUN_1400d2bf0(*(int *)(param_1 + 0x94),*(undefined2 *)(param_1 + 0x14),
                          *(undefined2 *)(param_1 + 0x16),1,iVar11,*(undefined8 *)(param_1 + 0x40),0
                          ,uVar5);
    *(undefined8 *)(param_1 + 0x68) = uVar6;
  }
  if ((*(byte *)(param_1 + 0x28) & 6) != 0) goto UNWIND_INFO_1400d3918_UnwindCodes_24__UnwindOpCode;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x40) + 0x48))
              ((longlong *)**(undefined8 **)(param_1 + 0x40),*(longlong *)(param_1 + 0x60),0,
               param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x68) == 0) goto UNWIND_INFO_1400d3918_UnwindCodes_24__UnwindOpCode;
  uVar3 = *(uint *)(param_1 + 0x94);
  if ((uVar3 < 0x36) && ((0x20108000000000U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) {
    if (((*(byte *)(param_1 + 0x28) & 0x20) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 8) + 0x1a8) != 0)) {
      uVar12 = 5;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    local_68._0_4_ = 0;
    iStack_60 = 0;
    uStack_5c = 0;
    if (uVar3 == 0x27) {
      local_68._0_4_ = 0x28;
UNWIND_INFO_1400d3918_UnwindCodes_9__UnwindOpCode:
      local_68 = CONCAT44(uVar12,(undefined4)local_68);
      puVar10 = &local_68;
    }
    else if (uVar3 == 0x2c) {
      puVar10 = &local_68;
      local_68 = CONCAT44(uVar12,0x2d);
    }
    else {
      if (uVar3 != 0x35) goto UNWIND_INFO_1400d3918_UnwindCodes_9__UnwindOpCode;
      puVar10 = &local_68;
      local_68 = CONCAT44(uVar12,0x37);
    }
  }
  else {
    puVar10 = (undefined8 *)0x0;
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x40) + 0x50))
            ((longlong *)**(undefined8 **)(param_1 + 0x40),*(longlong *)(param_1 + 0x68),puVar10,
             param_1 + 0x50);
UNWIND_INFO_1400d3918_UnwindCodes_24__UnwindOpCode:
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x60);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x68);
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,lVar9);
    lVar9 = *(longlong *)(param_1 + 0x20);
    plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x140) + 0x10);
    if (plVar8 != (longlong *)0x0) {
      uVar12 = *(undefined4 *)(param_1 + 0x98);
      (**(code **)(*plVar8 + 0x10))();
      *(undefined8 *)(*(longlong *)(lVar9 + 0x140) + 0x10) = 0;
      *(undefined4 *)(lVar9 + 0xd0) = uVar12;
      func_0x0001400eb280(*(undefined8 *)(lVar9 + 0x138),*(undefined4 *)(lVar9 + 0x160),uVar12,
                          *(undefined4 *)(lVar9 + 0x1c),*(undefined8 *)(lVar9 + 0x140));
    }
  }
  return;
}

