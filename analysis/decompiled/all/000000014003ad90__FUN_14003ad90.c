// Function: FUN_14003ad90
// Addr: 14003ad90
// Size: 84 bytes


undefined8 FUN_14003ad90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  while ((*(short *)(param_2 + 0x2c) == 0x2e &&
         ((*(short *)(param_2 + 0x2e) == 0 ||
          ((*(short *)(param_2 + 0x2e) == 0x2e && (*(short *)(param_2 + 0x30) == 0))))))) {
    uVar1 = FUN_14028fdd0(param_1,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}

