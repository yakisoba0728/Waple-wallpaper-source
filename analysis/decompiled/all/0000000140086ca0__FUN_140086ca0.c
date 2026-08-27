// Function: FUN_140086ca0
// Addr: 140086ca0
// Size: 140 bytes


void FUN_140086ca0(longlong param_1,undefined1 param_2,byte param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | (uint)param_3 << 8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_140017240(lVar1 + 0x40);
    FUN_140017240(lVar1 + 0x20);
    FUN_140017240(lVar1);
    thunk_FUN_14028af80(lVar1,0x60);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

