// Function: FUN_14007d380
// Addr: 14007d380
// Size: 33 bytes


undefined8 FUN_14007d380(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x18);
    return uVar1;
  }
  return param_1;
}

