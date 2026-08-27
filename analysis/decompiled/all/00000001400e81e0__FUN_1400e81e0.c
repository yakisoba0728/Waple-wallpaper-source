// Function: FUN_1400e81e0
// Addr: 1400e81e0
// Size: 87 bytes


void FUN_1400e81e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14028af20(0x50);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_140486dc0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[1] = 7;
  FUN_1400e5e40(param_1,puVar1);
  return;
}

