// Function: FUN_140153760
// Addr: 140153760
// Size: 52 bytes


undefined8 FUN_140153760(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_1401a3c30();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x48);
    return uVar1;
  }
  return param_1;
}

