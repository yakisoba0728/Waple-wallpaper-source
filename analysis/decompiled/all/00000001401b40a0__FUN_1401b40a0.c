// Function: FUN_1401b40a0
// Addr: 1401b40a0
// Size: 84 bytes


longlong * FUN_1401b40a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_14028cf70(param_2,param_3,*param_4);
  if (lVar1 != param_3) {
    lVar1 = FUN_14028ef80(lVar1,param_3,*param_4);
  }
  *param_1 = lVar1;
  return param_1;
}

