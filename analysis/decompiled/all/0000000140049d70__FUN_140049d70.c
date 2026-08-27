// Function: FUN_140049d70
// Addr: 140049d70
// Size: 281 bytes


longlong FUN_140049d70(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_3;
  if (param_1[0xd] != 0) {
    for (; 0 < lVar3; lVar3 = lVar3 + lVar2) {
      if ((*(longlong *)param_1[8] == 0) || (iVar1 = *(int *)param_1[0xb], iVar1 < 1)) {
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
        if (iVar1 == -1) break;
        lVar2 = -1;
        lVar4 = 1;
      }
      else {
        lVar4 = lVar3;
        if (iVar1 <= lVar3) {
          lVar4 = (longlong)iVar1;
        }
        FUN_1404210f0(*(longlong *)param_1[8],param_2,lVar4);
        lVar2 = -lVar4;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar4;
      }
      param_2 = param_2 + lVar4;
    }
    return param_3 - lVar3;
  }
  if (*(longlong *)param_1[8] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1[0xb];
  }
  if (0 < param_3) {
    if (0 < iVar1) {
      lVar2 = (longlong)iVar1;
      if (param_3 < iVar1) {
        lVar2 = param_3;
      }
      FUN_1404210f0(*(longlong *)param_1[8],param_2,lVar2);
      lVar3 = param_3 - lVar2;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar2;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar2;
      if (lVar3 < 1) goto LAB_140049e78;
      param_2 = param_2 + lVar2;
    }
    if (param_1[0x10] != 0) {
      lVar2 = FUN_1402cc8b0(param_2,1,lVar3);
      lVar3 = lVar3 - lVar2;
    }
  }
LAB_140049e78:
  return param_3 - lVar3;
}

