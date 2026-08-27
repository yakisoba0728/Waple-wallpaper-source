// Function: FUN_1403f6e90
// Addr: 1403f6e90
// Size: 129 bytes


ulonglong FUN_1403f6e90(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  
  uVar5 = *(ulonglong *)(param_1 + 0x98);
  if ((*(byte *)(uVar5 + 0x28) & 2) != 0) {
    uVar3 = *(uint *)(param_3 + 0x60);
    uVar7 = 0;
    lVar4 = *(longlong *)(param_3 + 0x70);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        lVar1 = lVar4 + uVar5 * 0x14;
        if ((*(byte *)(lVar4 + 0xc + uVar5 * 0x14) & 0x40) != 0) {
          bVar2 = *(byte *)(lVar1 + 0xe);
          bVar6 = 0;
          if ((bVar2 & 0x10) == 0) {
            bVar6 = bVar2;
          }
          *(byte *)(lVar1 + 0x13) = bVar6 & 1 | 8;
          *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) | 0x1000000;
        }
        uVar7 = uVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar7 < uVar3);
    }
    return uVar5 & 0xffffffffffffff00;
  }
  return uVar5 & 0xffffffffffffff00;
}

