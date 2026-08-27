// Function: FUN_14003eb40
// Addr: 14003eb40
// Size: 166 bytes


double FUN_14003eb40(double param_1,int param_2)

{
  if (param_2 < -0x134) {
    return 0.0;
  }
  if (-1 < param_2) {
    if (0x134 < param_2) {
      FID_conflict__assert
                (L"n >= 0 && n <= 308",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\pow10.h",0x30);
    }
    return param_1 * *(double *)(&DAT_140475ef0 + (longlong)param_2 * 8);
  }
  if (0x134 < (uint)-param_2) {
    FID_conflict__assert
              (L"n >= 0 && n <= 308",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\pow10.h",0x30);
  }
  return param_1 / *(double *)(&DAT_140475ef0 + (longlong)-param_2 * 8);
}

