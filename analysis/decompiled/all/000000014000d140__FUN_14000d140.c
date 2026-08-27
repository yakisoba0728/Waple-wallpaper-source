// Function: FUN_14000d140
// Addr: 14000d140
// Size: 768 bytes


longlong * FUN_14000d140(longlong *param_1,char *param_2)

{
  short *psVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *local_48;
  char local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  sVar5 = strlen(param_2);
  lVar8 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((lVar8 < 1) || (lVar8 <= (longlong)sVar5)) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar8 - sVar5;
  }
  FUN_14000ffb0(&local_48,param_1);
  if (local_40 == '\0') {
    uVar9 = 4;
    goto LAB_14000d39c;
  }
  plVar2 = *(longlong **)
            (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
  local_30 = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar6 = (longlong *)FUN_14000f450(local_38);
  if ((plVar2 != (longlong *)0x0) &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7,1);
  }
  if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
    for (; 0 < lVar8; lVar8 = lVar8 + -1) {
      plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
      sVar3 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
      if (*(longlong *)plVar2[8] == 0) {
LAB_14000d26e:
        sVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar3);
      }
      else {
        iVar4 = *(int *)plVar2[0xb];
        if (iVar4 < 1) goto LAB_14000d26e;
        *(int *)plVar2[0xb] = iVar4 + -1;
        psVar1 = *(short **)plVar2[8];
        *(short **)plVar2[8] = psVar1 + 1;
        *psVar1 = sVar3;
      }
      if (sVar3 == -1) goto LAB_14000d37f;
    }
  }
  uVar9 = 0;
  do {
    if ((longlong)sVar5 < 1) goto joined_r0x00014000d316;
    plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
    sVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,*param_2);
    if (*(longlong *)plVar2[8] == 0) {
LAB_14000d2e2:
      sVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar3);
    }
    else {
      iVar4 = *(int *)plVar2[0xb];
      if (iVar4 < 1) goto LAB_14000d2e2;
      *(int *)plVar2[0xb] = iVar4 + -1;
      psVar1 = *(short **)plVar2[8];
      *(short **)plVar2[8] = psVar1 + 1;
      *psVar1 = sVar3;
    }
    uVar10 = 4;
    if (sVar3 != -1) {
      uVar10 = uVar9;
    }
    uVar9 = uVar10;
    sVar5 = sVar5 - 1;
    param_2 = param_2 + 1;
  } while (uVar9 == 0);
LAB_14000d382:
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
LAB_14000d39c:
  lVar8 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar10 = 4;
  if (*(longlong *)(lVar8 + 0x48) != 0) {
    uVar10 = 0;
  }
  FUN_140013b50(lVar8,uVar10 | *(uint *)(lVar8 + 0x10) | uVar9,0);
  lVar8 = (longlong)*(int *)(*local_48 + 4);
  if (((*(int *)(lVar8 + 0x10 + (longlong)local_48) == 0) &&
      ((*(byte *)(lVar8 + 0x18 + (longlong)local_48) & 2) != 0)) &&
     (iVar4 = (**(code **)(**(longlong **)(lVar8 + 0x48 + (longlong)local_48) + 0x68))(),
     iVar4 == -1)) {
    lVar8 = (longlong)*(int *)(*local_48 + 4) + (longlong)local_48;
    FUN_140013b50(lVar8,*(uint *)(lVar8 + 0x10) | 4,0);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*local_48 + 4) + 0x48 + (longlong)local_48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
joined_r0x00014000d316:
  if (lVar8 < 1) goto LAB_14000d382;
  plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  sVar3 = *(short *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
  if (*(longlong *)plVar2[8] == 0) {
LAB_14000d35e:
    sVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,sVar3);
  }
  else {
    iVar4 = *(int *)plVar2[0xb];
    if (iVar4 < 1) goto LAB_14000d35e;
    *(int *)plVar2[0xb] = iVar4 + -1;
    psVar1 = *(short **)plVar2[8];
    *(short **)plVar2[8] = psVar1 + 1;
    *psVar1 = sVar3;
  }
  if (sVar3 == -1) goto LAB_14000d37f;
  lVar8 = lVar8 + -1;
  goto joined_r0x00014000d316;
LAB_14000d37f:
  uVar9 = 4;
  goto LAB_14000d382;
}

