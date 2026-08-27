// Function: FUN_1400300a0
// Addr: 1400300a0
// Size: 558 bytes


longlong * FUN_1400300a0(longlong *param_1,undefined8 param_2)

{
  short *psVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *local_18;
  char local_10;
  
  lVar5 = FUN_1402d6aa0(param_2);
  lVar8 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((lVar8 < 1) || (lVar8 <= lVar5)) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar8 - lVar5;
  }
  FUN_14000ffb0(&local_18,param_1);
  if (local_10 == '\0') {
    uVar7 = 4;
    goto LAB_14003023d;
  }
  if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
    for (; 0 < lVar8; lVar8 = lVar8 + -1) {
      plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
      sVar3 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
      if (*(longlong *)plVar2[8] == 0) {
LAB_14003016e:
        sVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar3);
      }
      else {
        iVar4 = *(int *)plVar2[0xb];
        if (iVar4 < 1) goto LAB_14003016e;
        *(int *)plVar2[0xb] = iVar4 + -1;
        psVar1 = *(short **)plVar2[8];
        *(short **)plVar2[8] = psVar1 + 1;
        *psVar1 = sVar3;
      }
      if (sVar3 == -1) goto LAB_140030203;
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  lVar6 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,lVar5);
  uVar7 = 4;
  if (lVar6 == lVar5) {
    for (; 0 < lVar8; lVar8 = lVar8 + -1) {
      plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
      sVar3 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
      if (*(longlong *)plVar2[8] == 0) {
LAB_140030207:
        sVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar3);
      }
      else {
        iVar4 = *(int *)plVar2[0xb];
        if (iVar4 < 1) goto LAB_140030207;
        *(int *)plVar2[0xb] = iVar4 + -1;
        psVar1 = *(short **)plVar2[8];
        *(short **)plVar2[8] = psVar1 + 1;
        *psVar1 = sVar3;
      }
      if (sVar3 == -1) goto LAB_140030203;
    }
    uVar7 = 0;
  }
LAB_140030228:
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
LAB_14003023d:
  lVar8 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar9 = 4;
  if (*(longlong *)(lVar8 + 0x48) != 0) {
    uVar9 = 0;
  }
  FUN_140013b50(lVar8,uVar7 | uVar9 | *(uint *)(lVar8 + 0x10),0);
  lVar8 = (longlong)*(int *)(*local_18 + 4);
  if (((*(int *)(lVar8 + 0x10 + (longlong)local_18) == 0) &&
      ((*(byte *)(lVar8 + 0x18 + (longlong)local_18) & 2) != 0)) &&
     (iVar4 = (**(code **)(**(longlong **)(lVar8 + 0x48 + (longlong)local_18) + 0x68))(),
     iVar4 == -1)) {
    lVar8 = (longlong)*(int *)(*local_18 + 4) + (longlong)local_18;
    FUN_140013b50(lVar8,*(uint *)(lVar8 + 0x10) | 4,0);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*local_18 + 4) + 0x48 + (longlong)local_18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
LAB_140030203:
  uVar7 = 4;
  goto LAB_140030228;
}

