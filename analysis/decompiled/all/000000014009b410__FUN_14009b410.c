// Function: FUN_14009b410
// Addr: 14009b410
// Size: 792 bytes


void FUN_14009b410(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (3 < param_4) {
    do {
      lVar2 = (longlong)(int)(uVar3 * 0xc);
      lVar4 = (longlong)(int)uVar3 * 0x40;
      *(undefined4 *)(param_2 + lVar2 * 4) = *(undefined4 *)(param_3 + lVar4);
      *(undefined4 *)(param_2 + 4 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      *(undefined4 *)(param_2 + 8 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x20 + lVar4);
      *(undefined4 *)(param_2 + 0xc + lVar2 * 4) = *(undefined4 *)(param_3 + 0x30 + lVar4);
      *(undefined4 *)(param_2 + 0x10 + lVar2 * 4) = *(undefined4 *)(param_3 + 4 + lVar4);
      *(undefined4 *)(param_2 + 0x14 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x14 + lVar4);
      *(undefined4 *)(param_2 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x24 + lVar4);
      *(undefined4 *)(param_2 + 0x1c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x34 + lVar4);
      *(undefined4 *)(param_2 + 0x20 + lVar2 * 4) = *(undefined4 *)(param_3 + 8 + lVar4);
      *(undefined4 *)(param_2 + 0x24 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar4);
      *(undefined4 *)(param_2 + 0x28 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x28 + lVar4);
      *(undefined4 *)(param_2 + 0x2c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x38 + lVar4);
      *(undefined4 *)(param_2 + 0x30 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x40 + lVar4);
      *(undefined4 *)(param_2 + 0x34 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x50 + lVar4);
      *(undefined4 *)(param_2 + 0x38 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x60 + lVar4);
      *(undefined4 *)(param_2 + 0x3c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x70 + lVar4);
      *(undefined4 *)(param_2 + 0x40 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x44 + lVar4);
      *(undefined4 *)(param_2 + 0x44 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x54 + lVar4);
      *(undefined4 *)(param_2 + 0x48 + lVar2 * 4) = *(undefined4 *)(param_3 + 100 + lVar4);
      *(undefined4 *)(param_2 + 0x4c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x74 + lVar4);
      *(undefined4 *)(param_2 + 0x50 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x48 + lVar4);
      *(undefined4 *)(param_2 + 0x54 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x58 + lVar4);
      *(undefined4 *)(param_2 + 0x58 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x68 + lVar4);
      *(undefined4 *)(param_2 + 0x5c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x78 + lVar4);
      lVar2 = (longlong)(int)((uVar3 + 2) * 0xc);
      *(undefined4 *)(param_2 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x80 + lVar4);
      *(undefined4 *)(param_2 + 4 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x90 + lVar4);
      *(undefined4 *)(param_2 + 8 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xa0 + lVar4);
      *(undefined4 *)(param_2 + 0xc + lVar2 * 4) = *(undefined4 *)(param_3 + 0xb0 + lVar4);
      *(undefined4 *)(param_2 + 0x10 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x84 + lVar4);
      *(undefined4 *)(param_2 + 0x14 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x94 + lVar4);
      *(undefined4 *)(param_2 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xa4 + lVar4);
      *(undefined4 *)(param_2 + 0x1c + lVar2 * 4) = *(undefined4 *)(param_3 + 0xb4 + lVar4);
      *(undefined4 *)(param_2 + 0x20 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x88 + lVar4);
      *(undefined4 *)(param_2 + 0x24 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x98 + lVar4);
      *(undefined4 *)(param_2 + 0x28 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xa8 + lVar4);
      *(undefined4 *)(param_2 + 0x2c + lVar2 * 4) = *(undefined4 *)(param_3 + 0xb8 + lVar4);
      iVar1 = uVar3 + 3;
      uVar3 = uVar3 + 4;
      lVar2 = (longlong)(iVar1 * 0xc);
      *(undefined4 *)(param_2 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xc0 + lVar4);
      *(undefined4 *)(param_2 + 4 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xd0 + lVar4);
      *(undefined4 *)(param_2 + 8 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xe0 + lVar4);
      *(undefined4 *)(param_2 + 0xc + lVar2 * 4) = *(undefined4 *)(param_3 + 0xf0 + lVar4);
      *(undefined4 *)(param_2 + 0x10 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xc4 + lVar4);
      *(undefined4 *)(param_2 + 0x14 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xd4 + lVar4);
      *(undefined4 *)(param_2 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xe4 + lVar4);
      *(undefined4 *)(param_2 + 0x1c + lVar2 * 4) = *(undefined4 *)(param_3 + 0xf4 + lVar4);
      *(undefined4 *)(param_2 + 0x20 + lVar2 * 4) = *(undefined4 *)(param_3 + 200 + lVar4);
      *(undefined4 *)(param_2 + 0x24 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xd8 + lVar4);
      *(undefined4 *)(param_2 + 0x28 + lVar2 * 4) = *(undefined4 *)(param_3 + 0xe8 + lVar4);
      *(undefined4 *)(param_2 + 0x2c + lVar2 * 4) = *(undefined4 *)(param_3 + 0xf8 + lVar4);
    } while (uVar3 < param_4 - 3);
  }
  for (; uVar3 < param_4; uVar3 = uVar3 + 1) {
    lVar2 = (longlong)(int)(uVar3 * 0xc);
    lVar4 = (longlong)(int)uVar3 * 0x40;
    *(undefined4 *)(param_2 + lVar2 * 4) = *(undefined4 *)(param_3 + lVar4);
    *(undefined4 *)(param_2 + 4 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar4);
    *(undefined4 *)(param_2 + 8 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x20 + lVar4);
    *(undefined4 *)(param_2 + 0xc + lVar2 * 4) = *(undefined4 *)(param_3 + 0x30 + lVar4);
    *(undefined4 *)(param_2 + 0x10 + lVar2 * 4) = *(undefined4 *)(param_3 + 4 + lVar4);
    *(undefined4 *)(param_2 + 0x14 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x14 + lVar4);
    *(undefined4 *)(param_2 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x24 + lVar4);
    *(undefined4 *)(param_2 + 0x1c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x34 + lVar4);
    *(undefined4 *)(param_2 + 0x20 + lVar2 * 4) = *(undefined4 *)(param_3 + 8 + lVar4);
    *(undefined4 *)(param_2 + 0x24 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar4);
    *(undefined4 *)(param_2 + 0x28 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x28 + lVar4);
    *(undefined4 *)(param_2 + 0x2c + lVar2 * 4) = *(undefined4 *)(param_3 + 0x38 + lVar4);
  }
  return;
}

