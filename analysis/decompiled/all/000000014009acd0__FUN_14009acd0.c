// Function: FUN_14009acd0
// Addr: 14009acd0
// Size: 205 bytes


undefined8 * FUN_14009acd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puVar2 = (undefined8 *)FUN_14028af20(0x178);
  FUN_14015eb90(puVar2,uVar3);
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
  *(byte *)(puVar2 + 2) = *(byte *)(puVar2 + 2) | 4;
  *puVar2 = &PTR_FUN_140487018;
  puVar2[0x2e] = param_3;
  uVar3 = FUN_140099980(*(undefined8 *)(puVar2[0x27] + 0x18),*(uint *)(param_3 + 0x1c) | 0x4000000,1
                       );
  puVar2[0x2b] = uVar3;
  *(int *)(param_3 + 0xd4) = *(int *)(param_3 + 0xd4) + 1;
  return puVar2;
}

