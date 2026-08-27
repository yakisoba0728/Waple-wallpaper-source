// Function: FUN_1400c4cd0
// Addr: 1400c4cd0
// Size: 40 bytes


undefined8 FUN_1400c4cd0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xb30) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x40))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

