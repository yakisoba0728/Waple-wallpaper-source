// Function: FUN_1403c64f0
// Addr: 1403c64f0
// Size: 203 bytes


byte * FUN_1403c64f0(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar2 == 0) {
    puVar3 = &DAT_140452e6c;
  }
  else {
    puVar3 = (undefined *)((ulonglong)uVar2 + param_1);
  }
  pbVar1 = (byte *)FUN_1403cf3f0(puVar3,param_2,param_4);
  if ((pbVar1 != (byte *)0x0) &&
     (pbVar1 = (byte *)(((ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) * 0x100
                         + (ulonglong)*(byte *)(param_1 + 10) + (ulonglong)*pbVar1) * 0x100 +
                        (ulonglong)*(byte *)(param_1 + 0xb) + param_1 + (ulonglong)pbVar1[1]),
     param_3 < (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
               (uint)pbVar1[3])) {
    return pbVar1 + ((ulonglong)param_3 + 1) * 4;
  }
  return (byte *)&DAT_14045dd10;
}

