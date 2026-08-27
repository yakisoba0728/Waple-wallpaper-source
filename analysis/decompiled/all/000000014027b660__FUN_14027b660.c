// Function: FUN_14027b660
// Addr: 14027b660
// Size: 254 bytes


undefined8
FUN_14027b660(double *param_1,double param_2,double param_3,double param_4,float param_5,
             float param_6,float param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  if ((((DAT_1404926c0 < param_5) && (DAT_1404926c0 < param_6)) && (param_7 <= DAT_1404926c0)) ||
     (((param_5 < DAT_1404926c0 && (param_6 < DAT_1404926c0)) && (DAT_1404926c0 <= param_7)))) {
LAB_14027b6e5:
    dVar6 = (param_4 - param_2) * *param_1;
    dVar5 = (double)param_7;
    if (((double)param_5 - dVar6 <= dVar5) && (dVar5 <= (double)param_5 + dVar6)) {
      dVar6 = (param_3 - param_4) * *param_1;
      if ((double)param_6 - dVar6 <= dVar5) {
        if ((double)param_6 + dVar6 < dVar5) {
          return 3;
        }
        return 1;
      }
    }
    uVar1 = 3;
  }
  else {
    if (*(char *)(param_1 + 1) == '\0') {
      fVar2 = param_6;
      if (param_6 <= param_5) {
        fVar2 = param_5;
      }
      fVar4 = param_6;
      if (param_5 <= param_6) {
        fVar4 = param_5;
      }
      fVar3 = param_7;
      if (fVar2 <= param_7) {
        fVar3 = fVar2;
      }
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      if (fVar3 != param_7) goto LAB_14027b6e5;
    }
    uVar1 = 0;
  }
  return uVar1;
}

