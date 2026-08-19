// Function: FUN_14026aaa0
// Addr: 14026aaa0
// Size: 66 bytes


undefined4 * FUN_14026aaa0(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    puVar1 = (undefined4 *)func_0x00014028aff0(0x20);
    return puVar1;
  }
  return param_1;
}

