// Function: FUN_14005f4c0
// Addr: 14005f4c0
// Size: 59 bytes


longlong FUN_14005f4c0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (2 < param_2) {
    lVar1 = func_0x0001402cba34(L"(i) >= 0 && (i) < (this->length())",
                                L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl"
                                ,0xbc);
    return lVar1;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      return param_1 + 4;
    }
    if (param_2 == 2) {
      return param_1 + 8;
    }
  }
  return param_1;
}

