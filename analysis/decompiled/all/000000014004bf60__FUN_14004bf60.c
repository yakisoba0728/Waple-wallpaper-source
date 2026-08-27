// Function: FUN_14004bf60
// Addr: 14004bf60
// Size: 526 bytes


longlong * FUN_14004bf60(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *param_1 = (longlong)param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (longlong *)*param_1;
  lVar7 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
  if (*(uint *)(lVar7 + 0x10) != 0) {
    uVar6 = 6;
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      uVar6 = 2;
    }
    FUN_140013b50(lVar7,uVar6 | *(uint *)(lVar7 + 0x10),0);
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  if (*(longlong *)(lVar7 + 0x50) != 0) {
    FUN_140012a00();
  }
  if ((param_3 == '\0') &&
     ((*(byte *)((longlong)*(int *)(*plVar1 + 4) + 0x18 + (longlong)plVar1) & 1) != 0)) {
    plVar2 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*plVar1 + 4) + 0x40 + (longlong)plVar1) + 8);
    local_10 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    lVar7 = FUN_140013d40(local_18);
    if ((plVar2 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)(puVar8,1);
    }
    plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x48 + (longlong)plVar1);
    if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
      uVar9 = (**(code **)(*plVar2 + 0x30))();
    }
    else {
      uVar9 = (ulonglong)**(byte **)plVar2[7];
    }
    iVar5 = (int)uVar9;
    while (iVar5 != -1) {
      if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (uVar9 & 0xff) * 2) & 0x48) == 0)
      goto LAB_14004c149;
      plVar2 = *(longlong **)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x48);
      if (*(longlong *)plVar2[7] == 0) {
LAB_14004c0e3:
        uVar6 = (**(code **)(*plVar2 + 0x38))(plVar2);
LAB_14004c0ec:
        if (uVar6 == 0xffffffff) break;
        if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
          uVar9 = (**(code **)(*plVar2 + 0x30))(plVar2);
        }
        else {
          uVar9 = (ulonglong)**(byte **)plVar2[7];
        }
      }
      else {
        piVar3 = (int *)plVar2[10];
        iVar5 = *piVar3;
        if (iVar5 < 2) {
          if (iVar5 < 1) goto LAB_14004c0e3;
          *piVar3 = iVar5 + -1;
          pbVar4 = *(byte **)plVar2[7];
          *(byte **)plVar2[7] = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
          goto LAB_14004c0ec;
        }
        *piVar3 = iVar5 + -1;
        plVar2 = (longlong *)plVar2[7];
        *plVar2 = *plVar2 + 1;
        uVar9 = (ulonglong)*(byte *)*plVar2;
      }
      iVar5 = (int)uVar9;
    }
    lVar7 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
    uVar6 = 7;
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      uVar6 = 3;
    }
    FUN_140013b50(lVar7,uVar6 | *(uint *)(lVar7 + 0x10),0);
  }
LAB_14004c149:
  *(bool *)(param_1 + 1) = *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x10 + (longlong)plVar1) == 0;
  return param_1;
}

