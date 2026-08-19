// Function: FUN_1402c9c88
// Addr: 1402c9c88
// Size: 137 bytes


undefined4 FUN_1402c9c88(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1402cada4(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)(param_1 + 0x14) >> 0xd & 1) != 0) {
      uVar1 = func_0x0001402cbda4();
      __acrt_stdio_free_buffer_nolock(param_1);
      uVar2 = FUN_1402db68c(param_1);
      iVar3 = FUN_1402dda98(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1402d9110();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
    FUN_1402ddd1c(param_1);
  }
  return uVar1;
}

