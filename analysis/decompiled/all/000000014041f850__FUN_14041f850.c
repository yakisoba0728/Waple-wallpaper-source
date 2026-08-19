// Function: FUN_14041f850
// Addr: 14041f850
// Size: 184 bytes


double FUN_14041f850(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_1402ecd50(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_14041f898;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_14041f898:
  dVar1 = (double)FUN_1402ecad0(&DAT_14043060c,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}

