// Function: FUN_14008cd90
// Addr: 14008cd90
// Size: 613 bytes


longlong * FUN_14008cd90(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar8 = (uint)param_2;
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar10 = *param_1;
  iVar9 = *(int *)(lVar10 + 4);
  uVar12 = 0;
  if (*(int *)((longlong)iVar9 + 0x10 + (longlong)param_1) == 0) {
    plVar2 = *(longlong **)((longlong)iVar9 + 0x50 + (longlong)param_1);
    if ((plVar2 != (longlong *)0x0) && (plVar2 != param_1)) {
      FUN_140012a00();
      lVar10 = *param_1;
      iVar9 = *(int *)(lVar10 + 4);
      uVar12 = 0;
      if (*(int *)((longlong)iVar9 + 0x10 + (longlong)param_1) != 0) goto LAB_14008cf53;
    }
    lVar3 = *(longlong *)((longlong)iVar9 + 0x28 + (longlong)param_1);
    lVar11 = 0;
    if (1 < lVar3) {
      lVar11 = lVar3 + -1;
    }
    uVar12 = 0;
    if ((*(uint *)((longlong)iVar9 + 0x18 + (longlong)param_1) & 0x1c0) == 0x40) {
LAB_14008ce98:
      plVar2 = *(longlong **)((longlong)*(int *)(lVar10 + 4) + 0x48 + (longlong)param_1);
      if ((*(longlong *)plVar2[8] == 0) || (piVar4 = (int *)plVar2[0xb], *piVar4 < 1)) {
        uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar8);
      }
      else {
        *piVar4 = *piVar4 + -1;
        pbVar5 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar5 + 1;
        *pbVar5 = param_2;
      }
      uVar12 = 4;
      if (uVar8 != 0xffffffff) {
        uVar12 = 0;
        do {
          if (lVar11 < 1) break;
          plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
          bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
          uVar8 = (uint)bVar1;
          if ((*(longlong *)plVar2[8] == 0) || (piVar4 = (int *)plVar2[0xb], *piVar4 < 1)) {
            uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar5 = *(byte **)plVar2[8];
            *(byte **)plVar2[8] = pbVar5 + 1;
            *pbVar5 = bVar1;
          }
          uVar7 = 4;
          if (uVar8 != 0xffffffff) {
            uVar7 = uVar12;
          }
          uVar12 = uVar7;
          lVar11 = lVar11 + -1;
        } while (uVar12 == 0);
      }
    }
    else {
      do {
        lVar10 = *param_1;
        if (lVar11 < 1) goto LAB_14008ce98;
        bVar1 = *(byte *)((longlong)param_1 + (longlong)*(int *)(lVar10 + 4) + 0x58);
        uVar7 = (uint)bVar1;
        plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(lVar10 + 4) + 0x48);
        if ((*(longlong *)plVar2[8] == 0) || (piVar4 = (int *)plVar2[0xb], *piVar4 < 1)) {
          uVar7 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar5 = *(byte **)plVar2[8];
          *(byte **)plVar2[8] = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        uVar6 = 4;
        if (uVar7 != 0xffffffff) {
          uVar6 = uVar12;
        }
        uVar12 = uVar6;
        lVar11 = lVar11 + -1;
      } while (uVar12 == 0);
    }
  }
LAB_14008cf53:
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar8 = 4;
  if (*(longlong *)(lVar10 + 0x48) != 0) {
    uVar8 = 0;
  }
  FUN_140013b50(lVar10,uVar8 | *(uint *)(lVar10 + 0x10) | uVar12,0);
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar10 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar10 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar9 = (**(code **)(**(longlong **)(lVar10 + 0x48 + (longlong)param_1) + 0x68))(),
     iVar9 == -1)) {
    lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    FUN_140013b50(lVar10,*(uint *)(lVar10 + 0x10) | 4,0);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}

