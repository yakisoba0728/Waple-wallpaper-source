// Function: FUN_14041ad10
// Addr: 14041ad10
// Size: 155 bytes


float FUN_14041ad10(float param_1)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)FUN_1402ecca0(param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_14041ad47;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_14041ad47:
  fVar1 = (float)FUN_1402ecb40("sqrtf",5,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar1;
}

