// Function: FUN_14000cc90
// Addr: 14000cc90
// Size: 410 bytes


void FUN_14000cc90(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar8 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar8 < 1) || (uVar8 <= uVar2)) {
    lVar10 = 0;
  }
  else {
    lVar10 = uVar8 - uVar2;
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  iVar9 = *(int *)(*param_1 + 4);
  if (*(int *)((longlong)iVar9 + 0x10 + (longlong)param_1) == 0) {
    plVar3 = *(longlong **)((longlong)iVar9 + 0x50 + (longlong)param_1);
    if ((plVar3 != (longlong *)0x0) && (plVar3 != param_1)) {
      FUN_140012ad0();
      iVar9 = *(int *)(*param_1 + 4);
      if (*(int *)((longlong)iVar9 + 0x10 + (longlong)param_1) != 0) goto LAB_14000ce22;
    }
    if ((*(uint *)((longlong)iVar9 + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
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
          goto LAB_14000cdb0;
        }
      }
    }
    plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar8 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,uVar2);
    if (uVar8 == uVar2) {
      uVar6 = 0;
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
LAB_14000cdb0:
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
        if (uVar7 == 0xffffffff) goto LAB_14000ce0e;
      }
    }
    else {
LAB_14000ce0e:
      uVar6 = 4;
    }
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
LAB_14000ce22:
    uVar6 = 4;
  }
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar7 = 4;
  if (*(longlong *)(lVar10 + 0x48) != 0) {
    uVar7 = 0;
  }
  func_0x000140013c20(lVar10,uVar7 | *(uint *)(lVar10 + 0x10) | uVar6,0);
  return;
}

