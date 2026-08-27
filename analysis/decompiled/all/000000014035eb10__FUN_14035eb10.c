// Function: FUN_14035eb10
// Addr: 14035eb10
// Size: 96 bytes


void FUN_14035eb10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x40;
  uVar6 = 0;
  uVar2 = *(uint *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (uVar2 != 0) {
    do {
      lVar1 = uVar6 * 0x14;
      uVar4 = FUN_1403d3c00(*(undefined4 *)(lVar3 + uVar6 * 0x14));
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *(undefined1 *)(lVar3 + lVar1 + 0x12) = uVar4;
    } while (uVar5 < uVar2);
  }
  return;
}

