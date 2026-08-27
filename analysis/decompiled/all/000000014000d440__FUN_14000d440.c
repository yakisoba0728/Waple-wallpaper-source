// Function: FUN_14000d440
// Addr: 14000d440
// Size: 544 bytes


longlong * FUN_14000d440(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  short *psVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *local_28;
  char local_20;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar6 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar6 < 1) || (uVar6 <= uVar1)) {
    lVar9 = 0;
  }
  else {
    lVar9 = uVar6 - uVar1;
  }
  FUN_14000ffb0(&local_28,param_1);
  if (local_20 == '\0') {
    uVar8 = 4;
  }
  else {
    if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        plVar3 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        sVar4 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
        if (*(longlong *)plVar3[8] == 0) {
LAB_14000d50e:
          sVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar4);
        }
        else {
          iVar5 = *(int *)plVar3[0xb];
          if (iVar5 < 1) goto LAB_14000d50e;
          *(int *)plVar3[0xb] = iVar5 + -1;
          psVar2 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar2 + 1;
          *psVar2 = sVar4;
        }
        if (sVar4 == -1) {
          uVar8 = 4;
          goto LAB_14000d550;
        }
      }
    }
    plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar6 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,uVar1);
    if (uVar6 == uVar1) {
      uVar8 = 0;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
LAB_14000d550:
        plVar3 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        sVar4 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
        if (*(longlong *)plVar3[8] == 0) {
LAB_14000d592:
          sVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar4);
        }
        else {
          iVar5 = *(int *)plVar3[0xb];
          if (iVar5 < 1) goto LAB_14000d592;
          *(int *)plVar3[0xb] = iVar5 + -1;
          psVar2 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar2 + 1;
          *psVar2 = sVar4;
        }
        if (sVar4 == -1) goto LAB_14000d5b1;
      }
    }
    else {
LAB_14000d5b1:
      uVar8 = 4;
    }
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  lVar9 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar7 = 4;
  if (*(longlong *)(lVar9 + 0x48) != 0) {
    uVar7 = 0;
  }
  FUN_140013b50(lVar9,uVar7 | *(uint *)(lVar9 + 0x10) | uVar8,0);
  lVar9 = (longlong)*(int *)(*local_28 + 4);
  if (((*(int *)(lVar9 + 0x10 + (longlong)local_28) == 0) &&
      ((*(byte *)(lVar9 + 0x18 + (longlong)local_28) & 2) != 0)) &&
     (iVar5 = (**(code **)(**(longlong **)(lVar9 + 0x48 + (longlong)local_28) + 0x68))(),
     iVar5 == -1)) {
    lVar9 = (longlong)*(int *)(*local_28 + 4) + (longlong)local_28;
    FUN_140013b50(lVar9,*(uint *)(lVar9 + 0x10) | 4,0);
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*local_28 + 4) + 0x48 + (longlong)local_28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  return param_1;
}

