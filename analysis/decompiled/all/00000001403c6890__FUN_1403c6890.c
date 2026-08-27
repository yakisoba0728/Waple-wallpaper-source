// Function: FUN_1403c6890
// Addr: 1403c6890
// Size: 171 bytes


ulonglong FUN_1403c6890(undefined8 param_1,uint param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = FUN_1403c6780(param_1,param_2);
  }
  else {
    uVar1 = *(ushort *)(param_3 + (ulonglong)(byte)param_2 * 2);
    if ((uVar1 != 0xffff) && (((uVar1 ^ param_2) & 0xffffff00) == 0)) {
      return (ulonglong)(uVar1 & 0xff);
    }
    uVar2 = FUN_1403c6780(param_1,param_2);
    if (((param_2 & 0xffff0000) == 0) && ((uint)uVar2 < 0x100)) {
      *(ushort *)(param_3 + (ulonglong)(byte)param_2 * 2) = (ushort)param_2 & 0xff00 | (ushort)uVar2
      ;
      return uVar2;
    }
  }
  return uVar2;
}

