// Function: FUN_1402c9b3c
// Addr: 1402c9b3c
// Size: 122 bytes


undefined4 FUN_1402c9b3c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1402cacd4(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_1402c9b24();
      uVar1 = FUN_1402c9bb8(param_1,param_2);
      FUN_1402c9b30(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

