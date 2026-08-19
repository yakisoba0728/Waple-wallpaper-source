// Function: FUN_140421e50
// Addr: 140421e50
// Size: 87 bytes


ulonglong FUN_140421e50(ulonglong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 - (longlong)param_1;
  while( true ) {
    if (((ulonglong)param_1 & 7) == 0) {
      while ((((int)param_2 + (int)param_1 & 0xfffU) < 0xff9 &&
             (uVar2 = *param_1, uVar2 == *(ulonglong *)(param_2 + (longlong)param_1)))) {
        param_1 = param_1 + 1;
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*param_1;
    if (bVar1 != *(byte *)(param_2 + (longlong)param_1)) break;
    param_1 = (ulonglong *)((longlong)param_1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(ulonglong)(bVar1 < *(byte *)(param_2 + (longlong)param_1)) | 1;
}

