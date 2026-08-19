// Function: FUN_14004a680
// Addr: 14004a680
// Size: 246 bytes


int FUN_14004a680(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong local_res18;
  char *pcStackX_20;
  char cStack_38;
  undefined1 auStack_37 [7];
  undefined1 auStack_30 [32];
  undefined1 auStack_10 [8];
  
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = **(ulonglong **)(param_1 + 0x40);
  cVar8 = (char)param_2;
  if (uVar1 != 0) {
    iVar5 = **(int **)(param_1 + 0x58);
    if (uVar1 < uVar1 + (longlong)iVar5) {
      **(int **)(param_1 + 0x58) = iVar5 + -1;
      pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
      *pcVar2 = cVar8;
      return param_2;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar7 = *(longlong *)(param_1 + 0x88);
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar7;
      **(longlong **)(param_1 + 0x38) = lVar7;
      **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar7;
    }
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == (longlong *)0x0) {
LAB_14004a793:
      iVar5 = FUN_1402cd1a4((int)cVar8,*(undefined8 *)(param_1 + 0x80));
      if (iVar5 != -1) {
        return param_2;
      }
      return -1;
    }
    cStack_38 = cVar8;
    iVar5 = (**(code **)(*plVar4 + 0x38))
                      (plVar4,param_1 + 0x74,&cStack_38,auStack_37,&pcStackX_20,auStack_30,
                       auStack_10,&local_res18);
    if ((iVar5 == 0) || (iVar5 == 1)) {
      lVar7 = local_res18 - (longlong)auStack_30;
      if ((lVar7 == 0) ||
         (lVar6 = FUN_1402cc980(auStack_30,1,lVar7,*(undefined8 *)(param_1 + 0x80)), lVar7 == lVar6)
         ) {
        *(undefined1 *)(param_1 + 0x71) = 1;
        if (pcStackX_20 == &cStack_38) {
          return -1;
        }
        return param_2;
      }
    }
    else {
      cVar8 = cStack_38;
      if (iVar5 == 3) goto LAB_14004a793;
    }
  }
  return -1;
}

