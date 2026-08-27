// Function: FUN_1400b83e0
// Addr: 1400b83e0
// Size: 79 bytes


ulonglong FUN_1400b83e0(longlong param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x60);
  if (bVar1 == 1) {
    return (ulonglong)(param_2 + 7 >> 3);
  }
  if (bVar1 == 2) {
    return (ulonglong)(param_2 + 3 >> 2);
  }
  if (bVar1 == 4) {
    return (ulonglong)(param_2 + 1 >> 1);
  }
  return (ulonglong)(byte)(&DAT_1404795f0)[*(byte *)(param_1 + 0x61)] * (ulonglong)(bVar1 >> 3) *
         (ulonglong)param_2;
}

