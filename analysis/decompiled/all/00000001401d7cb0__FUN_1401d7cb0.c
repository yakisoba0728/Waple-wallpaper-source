// Function: FUN_1401d7cb0
// Addr: 1401d7cb0
// Size: 27 bytes


void FUN_1401d7cb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000140421ed0(param_2);
  lVar1 = func_0x000140087560(param_1,param_2,lVar1 + param_2);
  if (lVar1 == 0) {
    lVar1 = func_0x000140421ed0(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,param_2,lVar1 + param_2);
  }
  return;
}

