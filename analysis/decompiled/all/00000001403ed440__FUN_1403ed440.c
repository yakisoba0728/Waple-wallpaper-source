// Function: FUN_1403ed440
// Addr: 1403ed440
// Size: 130 bytes


uint FUN_1403ed440(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 4);
  lVar1 = param_1 + 5;
  if (cVar3 == '\x01') {
    return (uint)*(byte *)((param_2 & 0xffffffff) + lVar1);
  }
  if (cVar3 == '\x02') {
    return (uint)*(byte *)(param_1 + 6 + (param_2 & 0xffffffff) * 2) +
           (uint)*(byte *)(lVar1 + (param_2 & 0xffffffff) * 2) * 0x100;
  }
  if (cVar3 == '\x03') {
    pbVar2 = (byte *)(lVar1 + (param_2 & 0xffffffff) * 3);
    return (uint)pbVar2[1] * 0x100 + (uint)*pbVar2 * 0x10000 + (uint)pbVar2[2];
  }
  if (cVar3 != '\x04') {
    return 0;
  }
  param_2 = param_2 & 0xffffffff;
  return (uint)*(byte *)(param_1 + 8 + param_2 * 4) +
         (uint)*(byte *)(param_1 + 6 + param_2 * 4) * 0x10000 +
         (uint)*(byte *)(param_1 + 7 + param_2 * 4) * 0x100 +
         (uint)*(byte *)(lVar1 + param_2 * 4) * 0x1000000;
}

