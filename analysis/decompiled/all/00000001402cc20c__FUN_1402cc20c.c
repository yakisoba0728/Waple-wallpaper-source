// Function: FUN_1402cc20c
// Addr: 1402cc20c
// Size: 155 bytes


undefined4 FUN_1402cc20c(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1402cada4(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1402c9bf4();
    uVar1 = FUN_1402cc3a4(param_1,param_2,param_3,param_4);
    FUN_1402c9c00(param_1);
  }
  return uVar1;
}

