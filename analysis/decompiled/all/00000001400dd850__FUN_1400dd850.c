// Function: FUN_1400dd850
// Addr: 1400dd850
// Size: 46 bytes


longlong FUN_1400dd850(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (2 < param_2) {
    lVar1 = func_0x0001402cba34(L"(i) >= 0 && (i) < (this->length())",
                                L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat3x3.inl"
                                ,0xfa);
    return lVar1;
  }
  return param_1 + (longlong)param_2 * 0xc;
}

