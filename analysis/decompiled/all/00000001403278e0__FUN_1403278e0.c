// Function: FUN_1403278e0
// Addr: 1403278e0
// Size: 66 bytes


ulonglong FUN_1403278e0(longlong *param_1)

{
  ulonglong uVar1;
  longlong local_res8;
  
  uVar1 = FUN_1402f2530(*(undefined8 *)(*param_1 + 0x2b8),&local_res8);
  if ((int)uVar1 == 0) {
    param_1[8] = local_res8;
    FUN_1402ef530();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

