// Function: FUN_140214f80
// Addr: 140214f80
// Size: 147 bytes


undefined8 * FUN_140214f80(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (3 < param_3) {
    FID_conflict__assert
              (L"index >= 0 && index < m.length()",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\matrix_access.inl",0x2c);
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  if (3 < param_3) {
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x123);
  }
  param_1[(longlong)param_3 * 2] = uVar1;
  (param_1 + (longlong)param_3 * 2)[1] = uVar2;
  return param_1;
}

