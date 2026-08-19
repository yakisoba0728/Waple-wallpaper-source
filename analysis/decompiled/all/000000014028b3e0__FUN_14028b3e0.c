// Function: FUN_14028b3e0
// Addr: 14028b3e0
// Size: 38 bytes


ulonglong FUN_14028b3e0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (DAT_140000080._80_2_ == 0x5a4d) {
    lVar4 = (longlong)(int)DAT_140000080._140_4_;
    if ((*(int *)(&DAT_140000080.field_0x50 + lVar4) == 0x4550) &&
       (uVar1 = 0x20b, *(short *)(&DAT_140000080.field_0x68 + lVar4) == 0x20b)) {
      uVar2 = (ulonglong)*(ushort *)(&DAT_140000080.field_0x64 + lVar4) + 0x18 +
              (longlong)(&DAT_140000080.field_0x50 + lVar4);
      uVar1 = uVar2 + (ulonglong)*(ushort *)(&DAT_140000080.field_0x56 + lVar4) * 0x28;
      while( true ) {
        uVar3 = (uint7)(uVar2 >> 8);
        if (uVar2 == uVar1) {
          return (ulonglong)uVar3 << 8;
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x1400000d0U) &&
           (param_1 - 0x1400000d0U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return uVar2 & 0xffffffffffffff00;
      }
      return CONCAT71(uVar3,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}

