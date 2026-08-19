// Function: FUN_1403b33a0
// Addr: 1403b33a0
// Size: 80 bytes


undefined8 * FUN_1403b33a0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar8 = (uint)*(byte *)(param_1 + 4);
  iVar5 = (uint)*(byte *)(param_1 + 5) * 0x10000;
  iVar11 = (uint)*(byte *)(param_1 + 6) * 0x100;
  uVar7 = uVar8 * 0x1000000 + iVar5 + iVar11 + (uint)*(byte *)(param_1 + 7);
  if (uVar7 == 0) {
    return &DAT_14045dde0;
  }
  uVar10 = *(uint *)(param_2 + 0x6c);
  if (*(uint *)(param_2 + 0x6c) <= *(uint *)(param_2 + 0x68)) {
    uVar10 = *(uint *)(param_2 + 0x68);
  }
  if (uVar10 == 0) {
    uVar10 = 0x40000000;
  }
  if (uVar7 == 0) {
    return &DAT_14045dde0;
  }
  uVar6 = 0;
  bVar2 = *(byte *)(param_1 + 0x35);
  if (*(byte *)(param_1 + 0x35) <= *(byte *)(param_1 + 0x34)) {
    bVar2 = *(byte *)(param_1 + 0x34);
  }
  if (1 < uVar7) {
    uVar9 = (uint)bVar2;
    uVar4 = 1;
    do {
      if (uVar4 < uVar8 * 0x1000000 + iVar11 + iVar5 + (uint)*(byte *)(param_1 + 7)) {
        pbVar1 = (byte *)(param_1 + 0x35 + (ulonglong)uVar4 * 0x30);
        pbVar3 = (byte *)((ulonglong)uVar4 * 0x30 + 0x34 + param_1);
      }
      else {
        pbVar1 = &UNK_14045de0d;
        pbVar3 = &UNK_14045de0c;
      }
      bVar2 = *pbVar1;
      if (*pbVar1 <= *pbVar3) {
        bVar2 = *pbVar3;
      }
      if (((uVar10 <= bVar2) && (bVar2 < uVar9)) || ((uVar9 < uVar10 && (uVar9 < bVar2)))) {
        uVar8 = (uint)*(byte *)(param_1 + 4);
        uVar6 = (ulonglong)uVar4;
        uVar9 = (uint)bVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
    if (uVar7 <= (uint)uVar6) {
      return &DAT_14045dde0;
    }
  }
  return (undefined8 *)(uVar6 * 0x30 + 8 + param_1);
}

