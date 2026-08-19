// Function: FUN_1401de270
// Addr: 1401de270
// Size: 52 bytes


undefined8 FUN_1401de270(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  FUN_1401de2b0();
  if ((param_2 & 1) != 0) {
    uVar1 = func_0x00014028b040(param_1,0x240);
    return uVar1;
  }
  return param_1;
}

