// Function: FUN_1400864d0
// Addr: 1400864d0
// Size: 99 bytes


void FUN_1400864d0(longlong *param_1)

{
  longlong lVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  if (((char)param_1[1] == '\x06') || ((char)param_1[1] == '\a')) {
    param_1 = (longlong *)*param_1;
    lVar1 = *param_1;
    FUN_1400891b0(param_1,param_1,*(undefined8 *)(lVar1 + 8));
    *(longlong *)(lVar1 + 8) = lVar1;
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar1 + 0x10) = lVar1;
    param_1[1] = 0;
  }
  return;
}

