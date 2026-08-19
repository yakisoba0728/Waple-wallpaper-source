// Function: FUN_14012c810
// Addr: 14012c810
// Size: 23 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012c810(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  int *piVar7;
  int **local_38;
  undefined8 uStack_30;
  int *piStack_28;
  int *piStack_20;
  undefined8 uStack_18;
  
  uStack_30 = 0;
  piStack_28 = (int *)0x0;
  piStack_20 = (int *)0x0;
  uStack_18 = 0;
  local_38 = &piStack_28;
  (*_UNK_140426858)(0,0,&UNK_14012bcd0,&local_38);
  piVar3 = piStack_20;
  piVar7 = piStack_28;
  if (piStack_28 != piStack_20) {
    do {
      piVar5 = *(int **)*param_1;
      piVar1 = (int *)((undefined8 *)*param_1)[1];
      if (piVar5 != piVar1) {
        do {
          if ((*piVar7 < piVar5[2] + *piVar5) && (*piVar5 < piVar7[2] + *piVar7)) {
            if ((piVar7[1] < piVar5[3] + piVar5[1]) &&
               (piVar2 = piVar7, piVar5[1] < piVar7[3] + piVar7[1])) {
              while (piVar2 = piVar2 + 0x22, piVar2 != piVar3) {
                *piVar7 = *piVar2;
                piVar7[1] = piVar2[1];
                piVar7[2] = piVar2[2];
                piVar7[3] = piVar2[3];
                piVar7[4] = piVar2[4];
                piVar7[5] = piVar2[5];
                FUN_14000df10(piVar7 + 6,piVar2 + 6);
                FUN_14000df10(piVar7 + 0xe,piVar2 + 0xe);
                FUN_14000df10(piVar7 + 0x16,piVar2 + 0x16);
                *(undefined8 *)(piVar7 + 0x1e) = *(undefined8 *)(piVar2 + 0x1e);
                piVar7[0x20] = piVar2[0x20];
                piVar7 = piVar7 + 0x22;
              }
                    /* WARNING: Subroutine does not return */
              FUN_140017310(piStack_20 + -0xc);
            }
          }
          piVar5 = piVar5 + 0x22;
        } while (piVar5 != piVar1);
      }
      piVar7 = piVar7 + 0x22;
      piVar5 = piStack_28;
    } while (piVar7 != piStack_20);
    for (; piVar5 != piVar3; piVar5 = piVar5 + 0x22) {
      if (DAT_1404e5388 == 2) {
        plVar6 = (longlong *)(piVar5 + 6);
        if (0xf < *(ulonglong *)(piVar5 + 0xc)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_140098bd0("Augmenting unknown monitor: %s, x %i y %i w %i h %i\n",plVar6,*piVar5,
                      piVar5[1],piVar5[2],piVar5[3]);
      }
      iVar4 = *piVar5;
      if (*(int *)(param_1 + 1) <= *piVar5) {
        iVar4 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar4;
      iVar4 = piVar5[1];
      if (*(int *)((longlong)param_1 + 0xc) <= piVar5[1]) {
        iVar4 = *(int *)((longlong)param_1 + 0xc);
      }
      *(int *)((longlong)param_1 + 0xc) = iVar4;
      func_0x000140130910(*param_1,piVar5);
    }
  }
  func_0x0001401310f0(&piStack_28);
  return;
}

