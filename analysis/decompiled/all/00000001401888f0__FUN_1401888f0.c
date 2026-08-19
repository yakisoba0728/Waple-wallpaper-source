// Function: FUN_1401888f0
// Addr: 1401888f0
// Size: 52 bytes


undefined8 FUN_1401888f0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_140188930();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x500);
    return uVar1;
  }
  return param_1;
}

