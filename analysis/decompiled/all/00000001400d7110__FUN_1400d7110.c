// Function: FUN_1400d7110
// Addr: 1400d7110
// Size: 52 bytes


undefined8 FUN_1400d7110(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_1400d7150();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x1b0);
    return uVar1;
  }
  return param_1;
}

