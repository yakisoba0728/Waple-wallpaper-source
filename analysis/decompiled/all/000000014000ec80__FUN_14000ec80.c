// Function: FUN_14000ec80
// Addr: 14000ec80
// Size: 207 bytes


longlong FUN_14000ec80(longlong *param_1,undefined2 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar4 = param_3; 0 < lVar4; lVar4 = lVar4 + lVar2) {
    if ((*(longlong *)param_1[8] == 0) || (iVar1 = *(int *)param_1[0xb], iVar1 < 1)) {
      sVar3 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
      if (sVar3 == -1) break;
      lVar2 = -1;
      lVar5 = 2;
    }
    else {
      lVar6 = lVar4;
      if (iVar1 <= lVar4) {
        lVar6 = (longlong)iVar1;
      }
      lVar5 = lVar6 * 2;
      FUN_1404210f0(*(longlong *)param_1[8],param_2,lVar5);
      lVar2 = -lVar6;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar6;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar6 * 2;
    }
    param_2 = (undefined2 *)((longlong)param_2 + lVar5);
  }
  return param_3 - lVar4;
}

