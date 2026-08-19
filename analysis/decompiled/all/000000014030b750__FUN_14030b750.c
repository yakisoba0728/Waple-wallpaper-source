// Function: FUN_14030b750
// Addr: 14030b750
// Size: 94 bytes


undefined8 FUN_14030b750(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = func_0x0001402f5d20(lVar1,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1402f50b0(lVar1,param_4);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = 0;
    }
  }
  return uVar2;
}

