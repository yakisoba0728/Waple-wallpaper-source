// Function: FUN_14019e890
// Addr: 14019e890
// Size: 58 bytes


ulonglong FUN_14019e890(float *param_1)

{
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = *param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2];
  if (0.0 <= fVar2) {
    return (ulonglong)(uint)SQRT(fVar2);
  }
  uVar1 = FUN_14041ad10(fVar2);
  return uVar1;
}

