// Function: FUN_1401a5b00
// Addr: 1401a5b00
// Size: 72 bytes


longlong FUN_1401a5b00(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (1 < param_2) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec2.inl",0x6c);
  }
  if ((param_2 == 0) || (lVar1 = param_1 + 4, param_2 != 1)) {
    lVar1 = param_1;
  }
  return lVar1;
}

