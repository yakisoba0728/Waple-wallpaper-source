// Function: FUN_1403caf20
// Addr: 1403caf20
// Size: 139 bytes


longlong FUN_1403caf20(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0xc) * 0x100 <= param_2) {
    return 0;
  }
  uVar1 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  if (uVar1 == 0) {
    puVar2 = &DAT_14045dd10;
  }
  else {
    puVar2 = (undefined8 *)((ulonglong)uVar1 + param_1);
  }
  return (longlong)puVar2 +
         (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) * 0x14 +
         (ulonglong)
         (((uint)*(byte *)(param_1 + 0xe) * 0x100 + (uint)*(byte *)(param_1 + 0xf)) * param_2);
}

