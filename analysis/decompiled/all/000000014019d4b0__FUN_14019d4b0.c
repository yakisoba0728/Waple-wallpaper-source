// Function: FUN_14019d4b0
// Addr: 14019d4b0
// Size: 61 bytes


undefined8 * FUN_14019d4b0(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (3 < param_3) {
    func_0x0001402cba34(&UNK_140486a50,
                        L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\matrix_access.inl",0x3a
                       );
    func_0x0001402cba34(L"(i) >= 0 && (i) < (this->length())",
                        L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",
                        0x12a);
  }
  puVar1 = (undefined8 *)(param_2 + (longlong)param_3 * 0x10);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return param_1;
}

