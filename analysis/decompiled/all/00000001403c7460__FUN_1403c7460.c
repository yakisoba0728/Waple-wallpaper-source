// Function: FUN_1403c7460
// Addr: 1403c7460
// Size: 232 bytes


undefined8
FUN_1403c7460(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulonglong)(param_2 >> 0x10);
  if (param_2 >> 0x10 < (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100) {
    puVar4 = &DAT_14045dd10;
    uVar1 = (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 4) * 0x100 +
            (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 5);
    if (uVar1 == 0) {
      puVar3 = &DAT_14045dd10;
    }
    else {
      puVar3 = (undefined8 *)((ulonglong)uVar1 + param_1);
    }
    uVar1 = (uint)*(byte *)(param_1 + 0xb + uVar2 * 4) +
            (uint)*(byte *)(param_1 + 9 + uVar2 * 4) * 0x10000 +
            (uint)*(byte *)(param_1 + 10 + uVar2 * 4) * 0x100 +
            (uint)*(byte *)(param_1 + 8 + uVar2 * 4) * 0x1000000;
    if (uVar1 != 0) {
      puVar4 = (undefined8 *)((ulonglong)uVar1 + param_1);
    }
    if ((ushort)((ushort)*(byte *)((longlong)puVar4 + 4) * 0x100 +
                (ushort)*(byte *)((longlong)puVar4 + 5)) != 0) {
      uVar5 = FUN_14039b070(puVar4,param_2 & 0xffff,param_3,param_4,puVar3,param_5);
      return uVar5;
    }
  }
  return 0;
}

