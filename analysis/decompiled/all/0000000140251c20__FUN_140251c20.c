// Function: FUN_140251c20
// Addr: 140251c20
// Size: 123 bytes


longlong FUN_140251c20(longlong param_1,int param_2)

{
  if (3 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec4.inl",0x1e1);
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      return param_1 + 4;
    }
    if (param_2 == 2) {
      return param_1 + 8;
    }
    if (param_2 == 3) {
      return param_1 + 0xc;
    }
  }
  return param_1;
}

