// Function: FUN_140386970
// Addr: 140386970
// Size: 195 bytes


ulonglong FUN_140386970(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = (ulonglong)CONCAT11(*(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 5)) * 2;
  lVar2 = lVar1 + 6;
  if ((*(byte *)(param_2 + 3) & 0x10) == 0) {
    lVar2 = lVar1 + 4;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  uVar3 = param_2 + 2 + lVar2;
  if (param_2 <= uVar3) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar3 = uVar3 - lVar1;
    if ((uVar3 < 0x80000000) && ((longlong)uVar3 <= *(longlong *)(param_1 + 0x10) - lVar1)) {
      if ((int)uVar3 != 0) {
        FUN_1404217a0(lVar1,0,uVar3 & 0xffffffff);
      }
      lVar1 = *(longlong *)(param_1 + 8);
      *(ulonglong *)(param_1 + 8) = lVar1 + uVar3;
      if (lVar1 != 0) {
        return param_2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
  }
  return 0;
}

