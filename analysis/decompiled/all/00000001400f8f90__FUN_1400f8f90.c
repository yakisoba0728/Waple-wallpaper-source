// Function: FUN_1400f8f90
// Addr: 1400f8f90
// Size: 58 bytes


ulonglong FUN_1400f8f90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  if ((ulonglong)param_2[1] <= (ulonglong)param_1[2]) {
    iVar1 = memcmp(_Buf1,(void *)*param_2,param_2[1]);
    _Buf1 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)_Buf1 >> 8),1);
    }
  }
  return (ulonglong)_Buf1 & 0xffffffffffffff00;
}

