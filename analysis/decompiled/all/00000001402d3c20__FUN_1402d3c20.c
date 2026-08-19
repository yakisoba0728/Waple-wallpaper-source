// Function: FUN_1402d3c20
// Addr: 1402d3c20
// Size: 149 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1402d3c20(double param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = ABS(param_1);
  if (0x433fffffffffffff < (ulonglong)dVar1) {
    *param_2 = param_1;
    if ((ulonglong)dVar1 < 0x7ff0000000000001) {
      return (double)((ulonglong)param_1 & 0x8000000000000000);
    }
    return param_1 + param_1;
  }
  if (0x3fefffffffffffff < (ulonglong)dVar1) {
    dVar1 = (double)(-(1L << (0x33U - (char)((ulonglong)param_1 >> 0x34) & 0x3f)) &
                    (ulonglong)param_1);
    *param_2 = dVar1;
    if ((param_1 == dVar1) && (param_1 < 0.0)) {
      return _UNK_14042eac8;
    }
    return param_1 - dVar1;
  }
  *param_2 = (double)((ulonglong)param_1 & 0x8000000000000000);
  return param_1;
}

