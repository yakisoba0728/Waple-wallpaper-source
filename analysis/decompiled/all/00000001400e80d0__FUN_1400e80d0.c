// Function: FUN_1400e80d0
// Addr: 1400e80d0
// Size: 106 bytes


void FUN_1400e80d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14028af20(0x20);
  *puVar1 = &PTR_FUN_140486c30;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 8;
  uVar2 = FUN_1400e5e40(param_1 + 0x38,puVar1);
  FUN_1400e1650(param_1);
  FUN_1400e1a50(param_1 + 0x38,uVar2);
  return;
}

