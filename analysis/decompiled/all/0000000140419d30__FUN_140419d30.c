// Function: FUN_140419d30
// Addr: 140419d30
// Size: 189 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140419d30(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  dVar1 = (double)param_1;
  dVar3 = (double)param_2;
  if ((ulonglong)ABS(dVar1) >> 0x34 == 0x7ff) {
    if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) goto LAB_140419e4f;
    if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) goto LAB_140419e31;
  }
  else if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) {
    dVar3 = SQRT(dVar3 * dVar3 + dVar1 * dVar1);
    if (_UNK_140471c18 < dVar3) {
      fVar2 = (float)FUN_1402ecc10(&UNK_140471c10,0x18,0x7f800000,3,0x11,0x22,param_1,param_2,2);
      return fVar2;
    }
    return (float)dVar3;
  }
  if (((ulonglong)dVar3 & 0xfffffffffffff) != 0) {
LAB_140419e31:
    return param_1 * param_1 + param_2 * param_2;
  }
LAB_140419e4f:
  FUN_1402dea10(0);
  return INFINITY;
}

