// Function: FUN_1400dca50
// Addr: 1400dca50
// Size: 629 bytes


longlong * FUN_1400dca50(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  bVar7 = FUN_140013490((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  bVar5 = false;
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar9 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar8 = 0;
  if (*(uint *)(lVar9 + 0x10) == 0) {
    if (*(longlong *)(lVar9 + 0x50) != 0) {
      FUN_140012a00();
    }
    if (*(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0) {
      param_2[2] = 0;
      puVar10 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar10 = (undefined8 *)*param_2;
      }
      *(undefined1 *)puVar10 = 0;
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
        uVar8 = (**(code **)(*plVar2 + 0x30))();
      }
      else {
        uVar8 = (uint)**(byte **)plVar2[7];
      }
joined_r0x0001400dcb49:
      if (uVar8 != 0xffffffff) {
        if (uVar8 == bVar7) {
          bVar5 = true;
          plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
          uVar8 = 0;
          if (*(longlong *)plVar2[7] != 0) {
            iVar1 = *(int *)plVar2[10];
            if (0 < iVar1) {
              *(int *)plVar2[10] = iVar1 + -1;
              *(longlong *)plVar2[7] = *(longlong *)plVar2[7] + 1;
              bVar5 = true;
              goto LAB_1400dcc18;
            }
          }
          (**(code **)(*plVar2 + 0x38))();
          goto LAB_1400dcc18;
        }
        if (0x7ffffffffffffffe < (ulonglong)param_2[2]) {
          uVar8 = 2;
          goto LAB_1400dcc18;
        }
        FUN_1400534d0(param_2,uVar8 & 0xff);
        bVar6 = true;
        bVar5 = true;
        plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        if (*(longlong *)plVar2[7] == 0) {
LAB_1400dcbce:
          uVar8 = (**(code **)(*plVar2 + 0x38))(plVar2);
        }
        else {
          piVar3 = (int *)plVar2[10];
          iVar1 = *piVar3;
          if (1 < iVar1) {
            *piVar3 = iVar1 + -1;
            plVar2 = (longlong *)plVar2[7];
            *plVar2 = *plVar2 + 1;
            uVar8 = (uint)*(byte *)*plVar2;
            bVar5 = bVar6;
            goto joined_r0x0001400dcb49;
          }
          if (iVar1 < 1) goto LAB_1400dcbce;
          *piVar3 = iVar1 + -1;
          pbVar4 = *(byte **)plVar2[7];
          *(byte **)plVar2[7] = pbVar4 + 1;
          uVar8 = (uint)*pbVar4;
        }
        if (uVar8 == 0xffffffff) goto LAB_1400dcc08;
        if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
          uVar8 = (**(code **)(*plVar2 + 0x30))(plVar2);
          bVar5 = bVar6;
        }
        else {
          uVar8 = (uint)**(byte **)plVar2[7];
          bVar5 = bVar6;
        }
        goto joined_r0x0001400dcb49;
      }
LAB_1400dcc08:
      uVar8 = 1;
    }
  }
  else {
    uVar11 = 6;
    if (*(longlong *)(lVar9 + 0x48) != 0) {
      uVar11 = 2;
    }
    FUN_140013b50(lVar9,uVar11 | *(uint *)(lVar9 + 0x10),0);
  }
LAB_1400dcc18:
  lVar9 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar11 = uVar8 | 2;
  if (bVar5) {
    uVar11 = uVar8;
  }
  uVar8 = 4;
  if (*(longlong *)(lVar9 + 0x48) != 0) {
    uVar8 = 0;
  }
  FUN_140013b50(lVar9,uVar8 | *(uint *)(lVar9 + 0x10) | uVar11,0);
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}

