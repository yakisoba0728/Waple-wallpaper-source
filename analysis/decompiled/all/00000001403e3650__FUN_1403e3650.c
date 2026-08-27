// Function: FUN_1403e3650
// Addr: 1403e3650
// Size: 125 bytes


void FUN_1403e3650(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar2 = *(byte *)(param_2 + 6);
  bVar3 = *(byte *)(param_2 + 7);
  *param_1 = param_2 + 0xe;
  uVar5 = (uint)bVar3 + (uint)bVar2 * 0x100 >> 1;
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_1 + 5) = uVar5;
  param_1[1] = param_2 + 0x10 + uVar6 * 2;
  param_1[2] = param_2 + 0x10 + uVar6 * 4;
  lVar1 = param_2 + 0x10 + uVar6 * 6;
  param_1[3] = lVar1;
  param_1[4] = lVar1 + uVar6 * 2;
  uVar4 = uVar5 * 8 + 0x10;
  uVar5 = 0;
  if (uVar4 < param_3) {
    uVar5 = param_3 - uVar4 >> 1;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  return;
}

