// Function: FUN_1401618d0
// Addr: 1401618d0
// Size: 108 bytes


longlong * FUN_1401618d0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  param_4 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  lVar2 = plVar1[2];
  while( true ) {
    if (*param_3 == lVar2) {
      lVar2 = *plVar1;
      param_2[1] = (longlong)plVar1;
      *param_2 = lVar2;
      return param_2;
    }
    if (plVar1 == *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10)) break;
    plVar1 = (longlong *)plVar1[1];
    lVar2 = plVar1[2];
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = 0;
  return param_2;
}

