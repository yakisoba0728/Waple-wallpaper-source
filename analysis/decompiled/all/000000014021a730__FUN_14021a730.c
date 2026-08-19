// Function: FUN_14021a730
// Addr: 14021a730
// Size: 52 bytes


undefined8 FUN_14021a730(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_14021a770();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,800);
    return uVar1;
  }
  return param_1;
}

