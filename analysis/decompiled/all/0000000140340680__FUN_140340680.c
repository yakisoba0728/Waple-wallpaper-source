// Function: FUN_140340680
// Addr: 140340680
// Size: 197 bytes


undefined8 FUN_140340680(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined1 *)(param_1 + 10);
  if (*(undefined1 **)(param_2 + 0x108) < puVar2) {
    FUN_1402f9100(param_2,8);
  }
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar1 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  uVar3 = (uint)uVar1;
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar4 + param_1) || (uVar4 < uVar3 * 2 + 10)) {
    FUN_1402f9100(param_2,8);
  }
  if ((0 < *(int *)(param_2 + 0x110)) && (uVar1 != 0)) {
    do {
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar2,puVar2[1])) {
        FUN_1402f9100(param_2,0x10);
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 2;
    } while (uVar3 != 0);
  }
  return 0;
}

