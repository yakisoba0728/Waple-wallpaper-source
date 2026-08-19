// Function: FUN_1402e0008
// Addr: 1402e0008
// Size: 107 bytes


undefined8 FUN_1402e0008(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1402cada4(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_1402c9bf4();
    uVar1 = FUN_1402e0074(param_1,param_2);
    FUN_1402c9c00(param_1);
  }
  return uVar1;
}

