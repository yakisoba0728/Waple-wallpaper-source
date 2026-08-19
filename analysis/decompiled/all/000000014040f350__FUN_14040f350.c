// Function: FUN_14040f350
// Addr: 14040f350
// Size: 142 bytes


void FUN_14040f350(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  puVar7 = *(uint **)(param_1 + 0x70);
  uVar4 = uVar3;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (*(uint *)(param_1 + 0x60) != 0) {
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 5;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 | 1L << (uVar1 >> 4 & 0x3f);
      *(ulonglong *)(param_1 + 0xb8) = uVar4;
      uVar6 = uVar6 | 1L << (uVar1 >> 6 & 0x3f);
      uVar5 = uVar5 | 1L << (uVar1 & 0x3f);
      *(ulonglong *)(param_1 + 200) = uVar6;
      *(ulonglong *)(param_1 + 0xc0) = uVar5;
    } while (uVar2 < *(uint *)(param_1 + 0x60));
  }
  return;
}

