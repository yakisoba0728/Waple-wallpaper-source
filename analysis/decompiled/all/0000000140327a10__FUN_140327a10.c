// Function: FUN_140327a10
// Addr: 140327a10
// Size: 63 bytes


void FUN_140327a10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402f1230(*(longlong *)(*param_1 + 0x2b8) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    FUN_1402efd90(param_1[8]);
    param_1[8] = 0;
  }
  return;
}

