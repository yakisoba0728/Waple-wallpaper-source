// Function: FUN_140060150
// Addr: 140060150
// Size: 107 bytes


longlong * FUN_140060150(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_4 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar2 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  iVar1 = (int)plVar2[2];
  while( true ) {
    if (*param_3 == iVar1) {
      lVar3 = *plVar2;
      param_2[1] = (longlong)plVar2;
      *param_2 = lVar3;
      return param_2;
    }
    if (plVar2 == *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10)) break;
    plVar2 = (longlong *)plVar2[1];
    iVar1 = (int)plVar2[2];
  }
  *param_2 = (longlong)plVar2;
  param_2[1] = 0;
  return param_2;
}

