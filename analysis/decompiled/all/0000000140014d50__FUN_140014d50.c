// Function: FUN_140014d50
// Addr: 140014d50
// Size: 152 bytes


longlong FUN_140014d50(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  for (lVar3 = param_3; 0 < lVar3; lVar3 = lVar3 + lVar1) {
    if ((*(longlong *)param_1[8] == 0) || (iVar2 = *(int *)param_1[0xb], iVar2 < 1)) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
      if (iVar2 == -1) break;
      lVar1 = -1;
      lVar4 = 1;
    }
    else {
      lVar4 = lVar3;
      if (iVar2 <= lVar3) {
        lVar4 = (longlong)iVar2;
      }
      FUN_1404210f0(*(longlong *)param_1[8],param_2,lVar4);
      lVar1 = -lVar4;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar4;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar4;
    }
    param_2 = param_2 + lVar4;
  }
  return param_3 - lVar3;
}

