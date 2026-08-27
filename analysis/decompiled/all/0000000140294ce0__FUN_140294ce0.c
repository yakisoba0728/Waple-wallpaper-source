// Function: FUN_140294ce0
// Addr: 140294ce0
// Size: 86 bytes


longlong FUN_140294ce0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60();
  }
  if ((char)param_2[1] == '\0') {
    FUN_1402a7e60(param_2);
  }
  lVar1 = *param_2;
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
LAB_140294d29:
      return CONCAT71(uVar2,1);
    }
  }
  else if (lVar1 != 0) goto LAB_140294d29;
  return (ulonglong)uVar2 << 8;
}

