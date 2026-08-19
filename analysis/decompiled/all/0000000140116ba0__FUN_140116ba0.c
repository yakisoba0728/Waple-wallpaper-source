// Function: FUN_140116ba0
// Addr: 140116ba0
// Size: 36 bytes


longlong * FUN_140116ba0(uint *param_1,longlong *param_2)

{
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    func_0x0001402cba34(L"IsObject()",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd);
  }
  *param_2 = (ulonglong)*param_1 * 0x20 + (*(ulonglong *)(param_1 + 2) & 0xffffffffffff);
  return param_2;
}

