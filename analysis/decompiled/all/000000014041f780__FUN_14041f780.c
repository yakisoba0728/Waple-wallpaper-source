// Function: FUN_14041f780
// Addr: 14041f780
// Size: 184 bytes


double FUN_14041f780(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_1402ecc80(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_14041f7c8;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_14041f7c8:
  dVar1 = (double)FUN_1402eca00(&DAT_14043053c,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}

