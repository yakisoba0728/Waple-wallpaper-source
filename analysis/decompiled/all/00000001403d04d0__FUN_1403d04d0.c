// Function: FUN_1403d04d0
// Addr: 1403d04d0
// Size: 125 bytes


ulonglong FUN_1403d04d0(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*(undefined8 **)(param_1 + 0x50) != &DAT_14045dd10) {
    uVar2 = FUN_1403ce4e0(*(undefined8 **)(param_1 + 0x50),param_2,*(undefined4 *)(param_1 + 0x128),
                          param_3);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    uVar3 = 0;
    if (param_2 < 0xe5) {
      uVar3 = param_2;
    }
  }
  else if (iVar1 == 1) {
    uVar3 = 0;
    if (param_2 < 0xa6) {
      return (ulonglong)*(ushort *)(&DAT_14045ca50 + (ulonglong)param_2 * 2);
    }
  }
  else {
    uVar3 = 0;
    if ((iVar1 == 2) && (uVar3 = 0, param_2 < 0x57)) {
      return (ulonglong)*(ushort *)(&DAT_14045cba0 + (ulonglong)param_2 * 2);
    }
  }
  return (ulonglong)uVar3;
}

