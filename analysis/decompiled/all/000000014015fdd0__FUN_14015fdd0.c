// Function: FUN_14015fdd0
// Addr: 14015fdd0
// Size: 240 bytes


float * FUN_14015fdd0(float param_1,longlong param_2,int *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = *param_3;
  if ((iVar3 < 0) ||
     ((ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 5) <=
      (ulonglong)(longlong)iVar3)) {
    pfVar2 = *(float **)(param_2 + 0x10);
  }
  else {
    pfVar2 = (float *)((longlong)iVar3 * 0x20 + *(longlong *)(param_2 + 0x10));
  }
  if (param_1 <= 0.0) {
    if (param_1 < 0.0) {
      param_1 = param_1 + (float)param_3[1];
      param_3[1] = (int)param_1;
      if (param_1 <= 0.0) {
        *param_3 = iVar3 + -1;
        if (iVar3 + -1 < 0) {
          iVar3 = (int)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 5);
          *param_3 = iVar3 + -1;
        }
        pfVar2 = (float *)(*(longlong *)(param_2 + 0x10) + ((longlong)iVar3 + -1) * 0x20);
        param_1 = param_1 + *pfVar2;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        param_3[1] = (int)param_1;
        return pfVar2;
      }
    }
  }
  else {
    param_1 = param_1 + (float)param_3[1];
    param_3[1] = (int)param_1;
    if (*pfVar2 <= param_1) {
      iVar3 = iVar3 + 1;
      param_1 = param_1 - *pfVar2;
      *param_3 = iVar3;
      param_3[1] = (int)param_1;
      if ((ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 5) <=
          (ulonglong)(longlong)iVar3) {
        *param_3 = 0;
        iVar3 = 0;
      }
      pfVar2 = (float *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar3 * 0x20);
      fVar1 = *pfVar2;
      if (fVar1 <= param_1) {
        param_1 = fVar1;
      }
      param_3[1] = (int)param_1;
      return pfVar2;
    }
  }
  return pfVar2;
}

