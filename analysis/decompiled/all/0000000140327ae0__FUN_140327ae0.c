// Function: FUN_140327ae0
// Addr: 140327ae0
// Size: 40 bytes


void FUN_140327ae0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x0001402f1300(*(longlong *)(*param_1 + 0x2b8) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    func_0x0001402efe60(param_1[8]);
    param_1[8] = 0;
  }
  return;
}

