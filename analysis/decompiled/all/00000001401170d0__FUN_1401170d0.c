// Function: FUN_1401170d0
// Addr: 1401170d0
// Size: 88 bytes


ulonglong FUN_1401170d0(ulonglong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0xe) & 0x400) == 0) {
    uVar1 = func_0x0001402cba34(L"IsString()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                                0x73d);
    return uVar1;
  }
  if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
    return param_1;
  }
  return *(ulonglong *)(param_1 + 8) & 0xffffffffffff;
}

