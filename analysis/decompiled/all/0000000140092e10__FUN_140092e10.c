// Function: FUN_140092e10
// Addr: 140092e10
// Size: 86 bytes


longlong FUN_140092e10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_1400975d0();
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400975d0(param_2);
  }
  lVar1 = *param_2;
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
LAB_140092e59:
      return CONCAT71(uVar2,1);
    }
  }
  else if (lVar1 != 0) goto LAB_140092e59;
  return (ulonglong)uVar2 << 8;
}

