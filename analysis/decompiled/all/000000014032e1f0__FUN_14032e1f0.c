// Function: FUN_14032e1f0
// Addr: 14032e1f0
// Size: 128 bytes


undefined8
FUN_14032e1f0(longlong param_1,uint param_2,undefined8 param_3,longlong param_4,undefined8 *param_5)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_4 + 0x28);
  uVar6 = *(int *)(lVar1 + 0x28) * 2;
  pbVar5 = (byte *)((ulonglong)(uint)(*(int *)(lVar1 + 0x28) * *(int *)(param_4 + 8)) +
                   *(longlong *)(lVar1 + 0x20));
  if (param_2 < uVar6) {
    uVar6 = param_2;
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      bVar2 = (char)((*(uint *)(uVar4 + param_1) & 0x40) * 9 >> 6) + *(char *)(uVar4 + param_1);
      if ((uVar4 & 1) == 0) {
        *pbVar5 = bVar2 * '\x10';
      }
      else {
        *pbVar5 = *pbVar5 | bVar2 & 0xf;
        pbVar5 = pbVar5 + 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar6);
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  if ((uint)*(ushort *)(lVar1 + 0x12) <= *(uint *)(param_4 + 8)) {
    *param_5 = FUN_14032e270;
  }
  return 0;
}

