// Function: FUN_14009aa20
// Addr: 14009aa20
// Size: 135 bytes


undefined8 * FUN_14009aa20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14028af20(0x170);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  FUN_14015eb90(puVar2,*(undefined8 *)(param_1 + 8));
  puVar2[0x27] = uVar1;
  *puVar2 = &PTR_FUN_140487088;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[0x2a] = 0;
  *(byte *)(puVar2 + 2) = *(byte *)(puVar2 + 2) | 8;
  puVar2[0x2b] = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0x57;
  puVar2[0x2d] = 0;
  FUN_1400ec220(puVar2,param_2);
  return puVar2;
}

