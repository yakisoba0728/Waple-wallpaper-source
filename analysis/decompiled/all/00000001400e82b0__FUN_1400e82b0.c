// Function: FUN_1400e82b0
// Addr: 1400e82b0
// Size: 14 bytes


undefined8 * FUN_1400e82b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x00014028aff0(0x50);
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = &UNK_140486e90;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[9] = 0;
  puVar2[1] = 7;
  puVar2[3] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (lVar1 != 0) {
    puVar2[2] = lVar1;
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar2;
  }
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2;
  return puVar2;
}

