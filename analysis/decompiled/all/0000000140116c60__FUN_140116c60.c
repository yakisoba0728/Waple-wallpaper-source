// Function: FUN_140116c60
// Addr: 140116c60
// Size: 54 bytes


undefined1 FUN_140116c60(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 0xe) & 8) == 0) {
    uVar1 = func_0x0001402cba34(L"IsBool()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                                0x498);
    return uVar1;
  }
  return *(short *)(param_1 + 0xe) == 10;
}

