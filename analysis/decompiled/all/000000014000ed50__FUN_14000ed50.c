// Function: FUN_14000ed50
// Addr: 14000ed50
// Size: 207 bytes


longlong FUN_14000ed50(longlong *param_1,short *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar4 = param_3; 0 < lVar4; lVar4 = lVar4 + lVar2) {
    if ((*(longlong *)param_1[7] == 0) || (iVar1 = *(int *)param_1[10], iVar1 < 1)) {
      sVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      if (sVar3 == -1) break;
      *param_2 = sVar3;
      lVar2 = -1;
      lVar5 = 2;
    }
    else {
      lVar6 = lVar4;
      if (iVar1 <= lVar4) {
        lVar6 = (longlong)iVar1;
      }
      lVar5 = lVar6 * 2;
      FUN_1404210f0(param_2,*(longlong *)param_1[7],lVar5);
      lVar2 = -lVar6;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)lVar6;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)lVar6 * 2;
    }
    param_2 = (short *)((longlong)param_2 + lVar5);
  }
  return param_3 - lVar4;
}

