// Function: FUN_14018b230
// Addr: 14018b230
// Size: 133 bytes


void FUN_14018b230(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffdf7fe;
  puVar1 = *(undefined8 **)(param_1 + 0x160);
  for (puVar3 = *(undefined8 **)(param_1 + 0x158); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    uVar2 = (**(code **)(*(longlong *)*puVar3 + 0x58))();
    if ((uVar2 & 8) != 0) {
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
    }
    if ((uVar2 & 0x40) != 0) {
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x20000;
    }
  }
  return;
}

