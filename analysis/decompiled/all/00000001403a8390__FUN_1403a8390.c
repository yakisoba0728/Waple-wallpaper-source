// Function: FUN_1403a8390
// Addr: 1403a8390
// Size: 183 bytes


ulonglong FUN_1403a8390(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = &DAT_14045dd10;
  lVar6 = param_3 + 0x200;
  if (param_3 == 0) {
    lVar6 = 0;
  }
  uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    puVar3 = &DAT_14045dd10;
  }
  else {
    puVar3 = (undefined8 *)((ulonglong)uVar4 + param_1);
  }
  uVar1 = FUN_1403c7250(puVar3,*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((uint)uVar1 == 0xffffffff) {
    return uVar1 & 0xffffffffffffff00;
  }
  if ((uint)uVar1 < (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100) {
    pbVar2 = (byte *)(param_1 + 6 + (uVar1 & 0xffffffff) * 2);
  }
  else {
    pbVar2 = (byte *)&DAT_14045dd10;
  }
  uVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (uVar4 != 0) {
    puVar5 = (undefined8 *)((ulonglong)uVar4 + param_1);
  }
  uVar1 = FUN_1403a7e20(puVar5,param_2,lVar6);
  return uVar1;
}

