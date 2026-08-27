// Function: FUN_1402f71a0
// Addr: 1402f71a0
// Size: 93 bytes


void FUN_1402f71a0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) != 0)) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

