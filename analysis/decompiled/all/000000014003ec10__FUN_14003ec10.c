// Function: FUN_14003ec10
// Addr: 14003ec10
// Size: 91 bytes


double FUN_14003ec10(double param_1,int param_2)

{
  double dVar1;
  
  if (param_2 < -0x134) {
    return 0.0;
  }
  if (-1 < param_2) {
    if (0x134 < param_2) {
      dVar1 = (double)func_0x0001402cba34(L"n >= 0 && n <= 308",
                                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\pow10.h"
                                          ,0x30);
      return dVar1;
    }
    return param_1 * *(double *)(&DAT_140475fc0 + (longlong)param_2 * 8);
  }
  if (0x134 < (uint)-param_2) {
    func_0x0001402cba34(L"n >= 0 && n <= 308",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\pow10.h",
                        0x30);
  }
  return param_1 / *(double *)(&DAT_140475fc0 + (longlong)-param_2 * 8);
}

