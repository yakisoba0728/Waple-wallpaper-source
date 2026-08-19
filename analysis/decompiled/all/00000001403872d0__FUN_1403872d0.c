// Function: FUN_1403872d0
// Addr: 1403872d0
// Size: 126 bytes


undefined8 FUN_1403872d0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 < 0x80) && (cVar1 = FUN_1403c9500(), cVar1 != '\0')) {
    return 1;
  }
  iVar3 = 0;
  iVar4 = 0x7f;
  do {
    uVar2 = (uint)(iVar4 + iVar3) >> 1;
    if ((ushort)param_2 < *(ushort *)(&DAT_140470950 + (ulonglong)uVar2 * 4)) {
      iVar4 = uVar2 - 1;
    }
    else {
      if ((ushort)param_2 <= *(ushort *)(&DAT_140470950 + (ulonglong)uVar2 * 4)) {
        if ((&UNK_140470952)[(ulonglong)uVar2 * 4] == '\0') {
          return 0;
        }
        cVar1 = FUN_1403c9500(param_1,(&UNK_140470952)[(ulonglong)uVar2 * 4],param_3,0);
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      iVar3 = uVar2 + 1;
    }
    if (iVar4 < iVar3) {
      return 0;
    }
  } while( true );
}

