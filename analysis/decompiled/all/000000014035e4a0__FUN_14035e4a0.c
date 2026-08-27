// Function: FUN_14035e4a0
// Addr: 14035e4a0
// Size: 112 bytes


void FUN_14035e4a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0xc0;
  uVar5 = 0;
  uVar2 = *(uint *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (uVar2 != 0) {
    lVar6 = 0;
    do {
      lVar1 = lVar3 + lVar6 * 0x14;
      uVar4 = FUN_1403d3c00(*(undefined4 *)(lVar3 + lVar6 * 0x14));
      *(char *)(lVar1 + 0x12) = (char)uVar4;
      lVar6 = lVar6 + 1;
      uVar5 = uVar5 + 1;
      *(char *)(lVar1 + 0x13) = (char)((ushort)uVar4 >> 8);
    } while (uVar5 < uVar2);
  }
  return;
}

