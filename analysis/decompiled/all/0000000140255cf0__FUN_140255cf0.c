// Function: FUN_140255cf0
// Addr: 140255cf0
// Size: 67 bytes


longlong FUN_140255cf0(longlong param_1,int param_2)

{
  if (3 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x12a);
  }
  return (longlong)param_2 * 0x10 + param_1;
}

