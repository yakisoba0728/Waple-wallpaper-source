// Function: FUN_14000cbc0
// Addr: 14000cbc0
// Size: 541 bytes


longlong * FUN_14000cbc0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar9 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar9 < 1) || (uVar9 <= uVar2)) {
    lVar10 = 0;
  }
  else {
    lVar10 = uVar9 - uVar2;
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  iVar8 = *(int *)(*param_1 + 4);
  if (*(int *)((longlong)iVar8 + 0x10 + (longlong)param_1) == 0) {
    plVar3 = *(longlong **)((longlong)iVar8 + 0x50 + (longlong)param_1);
    if ((plVar3 != (longlong *)0x0) && (plVar3 != param_1)) {
      FUN_140012a00();
      iVar8 = *(int *)(*param_1 + 4);
      if (*(int *)((longlong)iVar8 + 0x10 + (longlong)param_1) != 0) goto LAB_14000cd52;
    }
    if ((*(uint *)((longlong)iVar8 + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        plVar3 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
        uVar6 = (uint)bVar1;
        if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
          uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar5 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        if (uVar6 == 0xffffffff) {
          uVar6 = 4;
          goto LAB_14000cce0;
        }
      }
    }
    plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar9 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,uVar2);
    if (uVar9 == uVar2) {
      uVar6 = 0;
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
LAB_14000cce0:
        plVar3 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
        uVar7 = (uint)bVar1;
        if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
          uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar5 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        if (uVar7 == 0xffffffff) goto LAB_14000cd3e;
      }
    }
    else {
LAB_14000cd3e:
      uVar6 = 4;
    }
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
LAB_14000cd52:
    uVar6 = 4;
  }
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar7 = 4;
  if (*(longlong *)(lVar10 + 0x48) != 0) {
    uVar7 = 0;
  }
  FUN_140013b50(lVar10,uVar7 | *(uint *)(lVar10 + 0x10) | uVar6,0);
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar10 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar10 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar8 = (**(code **)(**(longlong **)(lVar10 + 0x48 + (longlong)param_1) + 0x68))(),
     iVar8 == -1)) {
    lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    FUN_140013b50(lVar10,*(uint *)(lVar10 + 0x10) | 4,0);
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  return param_1;
}

