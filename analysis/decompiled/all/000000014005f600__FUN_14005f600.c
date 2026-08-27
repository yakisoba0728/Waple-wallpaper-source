// Function: FUN_14005f600
// Addr: 14005f600
// Size: 67 bytes


longlong FUN_14005f600(longlong param_1,uint param_2)

{
  if (3 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x123);
  }
  return (longlong)(int)param_2 * 0x10 + param_1;
}

