// Function: FUN_1402dff38
// Addr: 1402dff38
// Size: 107 bytes


undefined8 FUN_1402dff38(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1402cacd4(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_1402c9b24();
    uVar1 = FUN_1402dffa4(param_1,param_2);
    FUN_1402c9b30(param_1);
  }
  return uVar1;
}

