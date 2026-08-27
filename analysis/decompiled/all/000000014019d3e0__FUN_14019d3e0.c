// Function: FUN_14019d3e0
// Addr: 14019d3e0
// Size: 111 bytes


undefined8 * FUN_14019d3e0(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (3 < param_3) {
    FID_conflict__assert
              (L"index >= 0 && index < m.length()",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\matrix_access.inl",0x3a);
    FID_conflict__assert
              (L"(i) >= 0 && (i) < (this->length())",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x12a);
  }
  puVar1 = (undefined8 *)(param_2 + (longlong)param_3 * 0x10);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return param_1;
}

