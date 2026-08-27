// Function: FUN_14019e8e0
// Addr: 14019e8e0
// Size: 65 bytes


longlong FUN_14019e8e0(longlong param_1,int param_2)

{
  if (2 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat3x3.inl",0xf3);
  }
  return param_1 + (longlong)param_2 * 0xc;
}

