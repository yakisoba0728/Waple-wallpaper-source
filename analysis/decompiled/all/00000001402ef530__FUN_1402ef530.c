// Function: FUN_1402ef530
// Addr: 1402ef530
// Size: 45 bytes


undefined8 FUN_1402ef530(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
    *(longlong **)(lVar1 + 0x80) = param_1;
    return 0;
  }
  return 0x23;
}

