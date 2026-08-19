// Function: FUN_1402f52b0
// Addr: 1402f52b0
// Size: 27 bytes


ulonglong FUN_1402f52b0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 < *(byte **)(param_1 + 0x40)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
    return (ulonglong)bVar1;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}

