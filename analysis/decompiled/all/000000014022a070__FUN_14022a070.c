// Function: FUN_14022a070
// Addr: 14022a070
// Size: 168 bytes


undefined8 FUN_14022a070(longlong param_1,uint param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  puVar4 = (undefined8 *)((ulonglong)param_2 * 0xd0 + *(longlong *)(param_1 + 0x400));
  if (((*(uint *)(puVar4 + 0x18) & 2) == 0) || (param_2 == 0)) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      puVar3 = local_88;
      goto LAB_14022a0b5;
    }
    if ((*(uint *)(puVar4 + 0x18) & 2) == 0) {
      return 0;
    }
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return 0;
  }
  FUN_1402290d0(param_3,local_88);
  param_3 = local_88;
  puVar3 = local_48;
LAB_14022a0b5:
  puVar2 = (undefined8 *)FUN_14024f0e0(puVar3,param_3,puVar4 + 0x10);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  uVar1 = puVar2[3];
  puVar4[2] = puVar2[2];
  puVar4[3] = uVar1;
  uVar1 = puVar2[5];
  puVar4[4] = puVar2[4];
  puVar4[5] = uVar1;
  uVar1 = puVar2[7];
  puVar4[6] = puVar2[6];
  puVar4[7] = uVar1;
  return 1;
}

