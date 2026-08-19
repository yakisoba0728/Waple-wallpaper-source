// Function: FUN_140399840
// Addr: 140399840
// Size: 43 bytes


undefined8 FUN_140399840(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_140396370();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x70);
    return uVar1;
  }
  return param_1;
}

