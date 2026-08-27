// Function: FUN_1400dc1d0
// Addr: 1400dc1d0
// Size: 118 bytes


undefined8 * FUN_1400dc1d0(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  
  if (2 < param_3) {
    FID_conflict__assert
              (L"index >= 0 && index < m.length()",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\matrix_access.inl",0x3a);
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat3x3.inl",0xfa);
  }
  uVar1 = *(undefined4 *)(param_2 + 8 + (longlong)param_3 * 0xc);
  *param_1 = *(undefined8 *)(param_2 + (longlong)param_3 * 0xc);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}

