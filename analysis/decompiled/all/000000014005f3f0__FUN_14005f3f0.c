// Function: FUN_14005f3f0
// Addr: 14005f3f0
// Size: 103 bytes


longlong FUN_14005f3f0(longlong param_1,int param_2)

{
  if (2 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl",0xbc);
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

