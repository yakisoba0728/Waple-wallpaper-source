// Function: FUN_1402f3910
// Addr: 1402f3910
// Size: 133 bytes


undefined8 FUN_1402f3910(longlong param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
      return 0;
    }
  }
  else {
    if (param_2 != *(short *)(param_1 + 0x398)) {
      uVar1 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x110))(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(short *)(param_1 + 0x398) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x3a0);
    }
  }
  return 0;
}

