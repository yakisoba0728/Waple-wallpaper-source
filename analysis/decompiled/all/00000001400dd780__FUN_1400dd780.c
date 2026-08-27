// Function: FUN_1400dd780
// Addr: 1400dd780
// Size: 65 bytes


longlong FUN_1400dd780(longlong param_1,int param_2)

{
  if (2 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat3x3.inl",0xfa);
  }
  return param_1 + (longlong)param_2 * 0xc;
}

