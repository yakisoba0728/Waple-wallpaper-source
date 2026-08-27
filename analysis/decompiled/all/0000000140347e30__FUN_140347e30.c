// Function: FUN_140347e30
// Addr: 140347e30
// Size: 179 bytes


undefined8 FUN_140347e30(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1402f9100(param_2,8);
  }
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((*(ulonglong *)(param_2 + 0x108) < param_1 + (ulonglong)uVar4) || (uVar4 < 0x106)) {
    FUN_1402f9100(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    pbVar3 = (byte *)(param_1 + 6);
    iVar2 = 0x100;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if (*(uint *)(param_2 + 0x120) <= (uint)bVar1) {
        FUN_1402f9100(param_2,0x10);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

