// Function: FUN_14000c990
// Addr: 14000c990
// Size: 558 bytes


longlong * FUN_14000c990(longlong *param_1,char *param_2)

{
  byte bVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  uint uVar9;
  longlong lVar10;
  
  sVar7 = strlen(param_2);
  lVar10 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((lVar10 < 1) || (lVar10 <= (longlong)sVar7)) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar10 - sVar7;
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  iVar6 = *(int *)(*param_1 + 4);
  if (*(int *)((longlong)iVar6 + 0x10 + (longlong)param_1) != 0) {
LAB_14000cb37:
    uVar5 = 4;
    goto LAB_14000cb3e;
  }
  plVar2 = *(longlong **)((longlong)iVar6 + 0x50 + (longlong)param_1);
  if ((plVar2 != (longlong *)0x0) && (plVar2 != param_1)) {
    FUN_140012a00();
    iVar6 = *(int *)(*param_1 + 4);
    if (*(int *)((longlong)iVar6 + 0x10 + (longlong)param_1) != 0) goto LAB_14000cb37;
  }
  if ((*(uint *)((longlong)iVar6 + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
    for (; 0 < lVar10; lVar10 = lVar10 + -1) {
      plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
      bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
      uVar5 = (uint)bVar1;
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
      }
      if (uVar5 == 0xffffffff) goto LAB_14000cb02;
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  sVar8 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,sVar7);
  uVar5 = 4;
  if (sVar8 == sVar7) {
    for (; 0 < lVar10; lVar10 = lVar10 + -1) {
      plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
      bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
      uVar5 = (uint)bVar1;
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
      }
      if (uVar5 == 0xffffffff) goto LAB_14000cb02;
    }
    uVar5 = 0;
  }
LAB_14000cb25:
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
LAB_14000cb3e:
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar9 = 4;
  if (*(longlong *)(lVar10 + 0x48) != 0) {
    uVar9 = 0;
  }
  FUN_140013b50(lVar10,uVar5 | uVar9 | *(uint *)(lVar10 + 0x10),0);
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar10 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar10 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x48 + (longlong)param_1) + 0x68))(),
     iVar6 == -1)) {
    lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    FUN_140013b50(lVar10,*(uint *)(lVar10 + 0x10) | 4,0);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
LAB_14000cb02:
  uVar5 = 4;
  goto LAB_14000cb25;
}

