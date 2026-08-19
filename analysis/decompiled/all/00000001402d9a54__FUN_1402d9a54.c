// Function: FUN_1402d9a54
// Addr: 1402d9a54
// Size: 36 bytes


longlong FUN_1402d9a54(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = lVar2;
  if (DAT_1404dc650 != -1) {
    lVar1 = func_0x0001402dc1c8();
  }
  if ((lVar1 != -1) && ((lVar1 != 0 || (lVar1 = FUN_1402d9844(), lVar1 != 0)))) {
    lVar2 = param_2 * 0x3c8 + lVar1;
  }
  return lVar2;
}

