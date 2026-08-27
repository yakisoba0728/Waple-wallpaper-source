// Function: FUN_1403093a0
// Addr: 1403093a0
// Size: 53 bytes


longlong FUN_1403093a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1403093e0();
  lVar2 = (ulonglong)*(ushort *)(param_1 + 0x188) * (longlong)iVar1;
  return (lVar2 >> 0x3f) + 0x8000 + lVar2 >> 0x10;
}

