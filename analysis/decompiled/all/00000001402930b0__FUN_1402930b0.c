// Function: FUN_1402930b0
// Addr: 1402930b0
// Size: 33 bytes


undefined8 FUN_1402930b0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0xb0);
    return uVar1;
  }
  return param_1;
}

