// Function: FUN_1402cc13c
// Addr: 1402cc13c
// Size: 155 bytes


undefined4 FUN_1402cc13c(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1402cacd4(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1402c9b24();
    uVar1 = FUN_1402cc2d4(param_1,param_2,param_3,param_4);
    FUN_1402c9b30(param_1);
  }
  return uVar1;
}

