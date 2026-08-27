// Function: FUN_14012c740
// Addr: 14012c740
// Size: 548 bytes


void FUN_14012c740(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  int **local_38;
  undefined8 local_30;
  int *local_28;
  int *piStack_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = (int *)0x0;
  piStack_20 = (int *)0x0;
  local_18 = 0;
  local_38 = &local_28;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_14012bc00,(LPARAM)&local_38);
  piVar8 = local_28;
  piVar9 = piStack_20;
  if (local_28 != piStack_20) {
LAB_14012c7a1:
    piVar6 = *(int **)*param_1;
    piVar1 = (int *)((undefined8 *)*param_1)[1];
    if (piVar6 != piVar1) {
      do {
        if ((*piVar8 < piVar6[2] + *piVar6) && (*piVar6 < piVar8[2] + *piVar8)) {
          if ((piVar8[1] < piVar6[3] + piVar6[1]) &&
             (piVar2 = piVar8, piVar3 = piVar9, piVar4 = piVar8, piVar6[1] < piVar8[3] + piVar8[1]))
          goto joined_r0x00014012c8bf;
        }
        piVar6 = piVar6 + 0x22;
      } while (piVar6 != piVar1);
    }
    piVar8 = piVar8 + 0x22;
    goto LAB_14012c80e;
  }
LAB_14012c895:
  FUN_140131020(&local_28);
  return;
joined_r0x00014012c8bf:
  while (piVar4 = piVar4 + 0x22, piVar4 != piVar9) {
    *piVar2 = *piVar4;
    piVar2[1] = piVar4[1];
    piVar2[2] = piVar4[2];
    piVar2[3] = piVar4[3];
    piVar2[4] = piVar4[4];
    piVar2[5] = piVar4[5];
    FUN_14000de40(piVar2 + 6,piVar4 + 6);
    FUN_14000de40(piVar2 + 0xe,piVar4 + 0xe);
    FUN_14000de40(piVar2 + 0x16,piVar4 + 0x16);
    *(undefined8 *)(piVar2 + 0x1e) = *(undefined8 *)(piVar4 + 0x1e);
    piVar2[0x20] = piVar4[0x20];
    piVar2 = piVar2 + 0x22;
    piVar3 = piStack_20;
  }
  FUN_140017240(piVar3 + -0xc);
  FUN_140017240(piVar3 + -0x14);
  FUN_140017240(piVar3 + -0x1c);
  piVar9 = piStack_20 + -0x22;
  piStack_20 = piVar9;
LAB_14012c80e:
  piVar6 = local_28;
  if (piVar8 == piVar9) goto joined_r0x00014012c825;
  goto LAB_14012c7a1;
joined_r0x00014012c825:
  for (; piVar6 != piVar9; piVar6 = piVar6 + 0x22) {
    if (DAT_1404e52b8 == 2) {
      plVar7 = (longlong *)(piVar6 + 6);
      if (0xf < *(ulonglong *)(piVar6 + 0xc)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_140098b00("Augmenting unknown monitor: %s, x %i y %i w %i h %i\n",plVar7,*piVar6,piVar6[1]
                    ,piVar6[2],piVar6[3]);
    }
    iVar5 = *piVar6;
    if (*(int *)(param_1 + 1) <= *piVar6) {
      iVar5 = *(int *)(param_1 + 1);
    }
    *(int *)(param_1 + 1) = iVar5;
    iVar5 = piVar6[1];
    if (*(int *)((longlong)param_1 + 0xc) <= piVar6[1]) {
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    FUN_140130840(*param_1,piVar6);
  }
  goto LAB_14012c895;
}

