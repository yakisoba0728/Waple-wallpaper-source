// Function: FUN_1402617c0
// Addr: 1402617c0
// Size: 189 bytes


undefined8 FUN_1402617c0(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  *param_3 = -3.4028235e+38;
  param_3[1] = -3.4028235e+38;
  param_3[2] = -3.4028235e+38;
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == lVar4) {
    return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                    *param_2 <= DAT_140492a24 && DAT_140492a24 != *param_2);
  }
  do {
    fVar7 = *(float *)(lVar5 + 0x24);
    if (param_2[1] <= *(float *)(lVar5 + 0x24)) {
      fVar7 = param_2[1];
    }
    fVar6 = *(float *)(lVar5 + 0x20);
    if (*param_2 <= *(float *)(lVar5 + 0x20)) {
      fVar6 = *param_2;
    }
    fVar8 = *(float *)(lVar5 + 0x28);
    if (param_2[2] <= *(float *)(lVar5 + 0x28)) {
      fVar8 = param_2[2];
    }
    param_2[1] = fVar7;
    *param_2 = fVar6;
    param_2[2] = fVar8;
    pfVar1 = (float *)(lVar5 + 0x34);
    pfVar2 = (float *)(lVar5 + 0x30);
    pfVar3 = (float *)(lVar5 + 0x2c);
    lVar5 = lVar5 + 200;
    fVar7 = *pfVar1;
    if (*pfVar1 <= param_3[2]) {
      fVar7 = param_3[2];
    }
    fVar6 = *pfVar2;
    if (*pfVar2 <= param_3[1]) {
      fVar6 = param_3[1];
    }
    fVar8 = *pfVar3;
    if (*pfVar3 <= *param_3) {
      fVar8 = *param_3;
    }
    param_3[2] = fVar7;
    param_3[1] = fVar6;
    *param_3 = fVar8;
  } while (lVar5 != lVar4);
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),*param_2 <= fVar8 && fVar8 != *param_2);
}

