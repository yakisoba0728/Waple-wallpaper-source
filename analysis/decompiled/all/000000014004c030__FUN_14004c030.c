// Function: FUN_14004c030
// Addr: 14004c030
// Size: 259 bytes


longlong * FUN_14004c030(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *param_1 = (longlong)param_2;
  plVar7 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = (longlong *)*param_1;
  lVar6 = (longlong)*(int *)(*plVar7 + 4) + (longlong)plVar7;
  if (*(uint *)(lVar6 + 0x10) != 0) {
    uVar5 = 6;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      uVar5 = 2;
    }
    plVar7 = (longlong *)func_0x000140013c20(lVar6,uVar5 | *(uint *)(lVar6 + 0x10),0);
    return plVar7;
  }
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    FUN_140012ad0();
  }
  if ((param_3 == '\0') &&
     ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x18 + (longlong)plVar7) & 1) != 0)) {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*plVar7 + 4) + 0x40 + (longlong)plVar7) + 8);
    local_10 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar6 = FUN_140013e10(local_18);
    if ((plVar1 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)(puVar8,1);
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*plVar7 + 4) + 0x48 + (longlong)plVar7);
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
      uVar9 = (**(code **)(*plVar1 + 0x30))();
    }
    else {
      uVar9 = (ulonglong)**(byte **)plVar1[7];
    }
    iVar4 = (int)uVar9;
    while (iVar4 != -1) {
      if ((*(byte *)(*(longlong *)(lVar6 + 0x18) + (uVar9 & 0xff) * 2) & 0x48) == 0)
      goto LAB_14004c219;
      plVar1 = *(longlong **)((longlong)plVar7 + (longlong)*(int *)(*plVar7 + 4) + 0x48);
      if (*(longlong *)plVar1[7] == 0) {
code_r0x00014004c1b3:
        uVar5 = (**(code **)(*plVar1 + 0x38))(plVar1);
code_r0x00014004c1bc:
        if (uVar5 == 0xffffffff) break;
        if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
          uVar9 = (**(code **)(*plVar1 + 0x30))(plVar1);
        }
        else {
          uVar9 = (ulonglong)**(byte **)plVar1[7];
        }
      }
      else {
        piVar2 = (int *)plVar1[10];
        iVar4 = *piVar2;
        if (iVar4 < 2) {
          if (iVar4 < 1) goto code_r0x00014004c1b3;
          *piVar2 = iVar4 + -1;
          pbVar3 = *(byte **)plVar1[7];
          *(byte **)plVar1[7] = pbVar3 + 1;
          uVar5 = (uint)*pbVar3;
          goto code_r0x00014004c1bc;
        }
        *piVar2 = iVar4 + -1;
        plVar1 = (longlong *)plVar1[7];
        *plVar1 = *plVar1 + 1;
        uVar9 = (ulonglong)*(byte *)*plVar1;
      }
      iVar4 = (int)uVar9;
    }
    lVar6 = (longlong)*(int *)(*plVar7 + 4) + (longlong)plVar7;
    uVar5 = 7;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      uVar5 = 3;
    }
    func_0x000140013c20(lVar6,uVar5 | *(uint *)(lVar6 + 0x10),0);
  }
LAB_14004c219:
  *(bool *)(param_1 + 1) = *(int *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) == 0;
  return param_1;
}

