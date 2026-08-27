// Function: FUN_1403c7250
// Addr: 1403c7250
// Size: 226 bytes


ulonglong FUN_1403c7250(byte *param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  uVar1 = (ulonglong)param_2;
  if (((param_3 != 0) &&
      (uVar5 = *(ushort *)(param_3 + (ulonglong)(byte)param_2 * 2), uVar5 != 0xffff)) &&
     (((uVar5 ^ param_2) & 0xffffff00) == 0)) {
    uVar3 = uVar5 & 0xff;
    uVar1 = 0xffffffff;
    if (uVar3 < 0xff) {
      uVar1 = (ulonglong)uVar3;
    }
    return uVar1;
  }
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    uVar2 = FUN_1403c70f0(param_1,uVar1);
  }
  else if (iVar4 == 2) {
    uVar2 = FUN_1403c7170(param_1,uVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (param_3 != 0) {
    if ((uint)uVar2 == 0xffffffff) {
      uVar5 = (ushort)param_2 | 0xff;
    }
    else {
      if (0xfe < (uint)uVar2) {
        return uVar2;
      }
      uVar5 = (ushort)param_2 & 0xff00 | (ushort)uVar2;
    }
    *(ushort *)(param_3 + (uVar1 & 0xff) * 2) = uVar5;
  }
  return uVar2;
}

