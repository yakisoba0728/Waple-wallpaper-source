// Function: FUN_140309470
// Addr: 140309470
// Size: 14 bytes


longlong FUN_140309470(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1403094b0();
  lVar2 = (ulonglong)*(ushort *)(param_1 + 0x188) * (longlong)iVar1;
  return (lVar2 >> 0x3f) + 0x8000 + lVar2 >> 0x10;
}

