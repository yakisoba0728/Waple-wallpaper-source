// Function: FUN_14027b940
// Addr: 14027b940
// Size: 237 bytes


longlong FUN_14027b940(float *param_1,float *param_2,int param_3)

{
  double dVar1;
  uint7 uVar2;
  float fVar3;
  double dVar4;
  float local_28 [10];
  
  dVar4 = ((double)param_1[param_3] - DAT_140492758) / (double)(param_1[param_3] - param_2[param_3])
  ;
  uVar2 = (uint7)(int3)((uint)param_3 >> 8);
  if ((0.0 < dVar4) && (dVar4 < DAT_140492778)) {
    dVar1 = DAT_140492778 - dVar4;
    local_28[0] = (float)((double)*param_1 * dVar1 + (double)*param_2 * dVar4);
    local_28[1] = (float)((double)param_1[1] * dVar1 + (double)param_2[1] * dVar4);
    fVar3 = local_28[1];
    if (local_28[1] <= local_28[0]) {
      fVar3 = local_28[0];
    }
    if (local_28[0] <= local_28[1]) {
      local_28[1] = local_28[0];
    }
    local_28[2] = (float)((double)param_1[2] * dVar1 + (double)param_2[2] * dVar4);
    if (fVar3 <= local_28[2]) {
      local_28[2] = fVar3;
    }
    if (local_28[2] <= local_28[1]) {
      local_28[2] = local_28[1];
    }
    if (local_28[2] == local_28[param_3]) {
      return CONCAT71(uVar2,1);
    }
  }
  return (ulonglong)uVar2 << 8;
}

