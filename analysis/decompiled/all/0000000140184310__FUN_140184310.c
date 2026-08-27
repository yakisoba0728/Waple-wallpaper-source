// Function: FUN_140184310
// Addr: 140184310
// Size: 304 bytes


undefined8 * FUN_140184310(undefined8 *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (3 < param_3) {
    FID_conflict__assert
              (L"index >= 0 && index < m[0].length()",
               L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\matrix_access.inl",0x1c);
  }
  uVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_140184351:
  do {
    if (3 < uVar1) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x12a);
    }
    lVar2 = (longlong)(int)uVar1;
    if (3 < param_3) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec4.inl",499);
    }
    if (param_3 == 0) {
LAB_1401843c3:
      uVar3 = *(undefined4 *)(param_2 + lVar2 * 0x10);
      if (3 < uVar1) {
        FID_conflict__assert
                  (L"(i) >= 0 && (i) < (this->length())",
                   L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec4.inl",0x1e1);
      }
    }
    else if (param_3 == 1) {
      uVar3 = *(undefined4 *)(param_2 + 4 + lVar2 * 0x10);
    }
    else if (param_3 == 2) {
      uVar3 = *(undefined4 *)(param_2 + 8 + lVar2 * 0x10);
    }
    else {
      if (param_3 != 3) goto LAB_1401843c3;
      uVar3 = *(undefined4 *)(param_2 + 0xc + lVar2 * 0x10);
    }
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(undefined4 *)((longlong)param_1 + 4) = uVar3;
        uVar1 = 2;
        goto LAB_140184351;
      }
      if (uVar1 == 2) {
        *(undefined4 *)(param_1 + 1) = uVar3;
        uVar1 = 3;
        goto LAB_140184351;
      }
      if (uVar1 == 3) {
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        return param_1;
      }
    }
    uVar1 = uVar1 + 1;
    *(undefined4 *)param_1 = uVar3;
    if (3 < (int)uVar1) {
      return param_1;
    }
  } while( true );
}

