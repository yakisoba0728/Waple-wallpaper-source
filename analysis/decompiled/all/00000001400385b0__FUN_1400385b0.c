// Function: FUN_1400385b0
// Addr: 1400385b0
// Size: 80 bytes


longlong FUN_1400385b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  *(longlong *)param_2[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_2[1];
  FUN_140017240(param_2 + 6);
  FUN_140017240(param_2 + 2);
  thunk_FUN_14028af80(param_2,0x50);
  return lVar1;
}

