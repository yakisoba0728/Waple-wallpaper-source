// Function: FUN_1401167f0
// Addr: 1401167f0
// Size: 13 bytes


void FUN_1401167f0(longlong *param_1)

{
  ushort uVar1;
  
  if ((*(byte *)((longlong)param_1 + 0xe) & 0x10) == 0) {
    func_0x0001402cba34(L"IsNumber()",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x722);
  }
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  if ((uVar1 >> 9 & 1) != 0) {
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    return;
  }
  if ((char)uVar1 < '\0') {
    return;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    func_0x0001402cba34(L"(data_.f.flags & kUint64Flag) != 0",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x727);
  }
  if (-1 < *param_1) {
    return;
  }
  return;
}

