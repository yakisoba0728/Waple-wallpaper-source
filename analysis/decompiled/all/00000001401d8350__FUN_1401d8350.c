// Function: FUN_1401d8350
// Addr: 1401d8350
// Size: 1 bytes


void FUN_1401d8350(undefined8 param_1,longlong param_2)

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

