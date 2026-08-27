// Function: FUN_140419c60
// Addr: 140419c60
// Size: 318 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140419c60(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  dVar1 = (double)param_1;
  dVar3 = (double)param_2;
  if ((ulonglong)ABS(dVar1) >> 0x34 == 0x7ff) {
    if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) goto LAB_140419d7f;
    if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) goto LAB_140419d61;
  }
  else if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) {
    dVar3 = SQRT(dVar3 * dVar3 + dVar1 * dVar1);
    if (_DAT_140471b48 < dVar3) {
      fVar2 = (float)FUN_1402ecb40("_hypotf",0x18,0x7f800000,3,0x11,0x22,param_1,param_2,2);
      return fVar2;
    }
    return (float)dVar3;
  }
  if (((ulonglong)dVar3 & 0xfffffffffffff) != 0) {
LAB_140419d61:
    return param_1 * param_1 + param_2 * param_2;
  }
LAB_140419d7f:
  FUN_1402de940(0);
  return INFINITY;
}

