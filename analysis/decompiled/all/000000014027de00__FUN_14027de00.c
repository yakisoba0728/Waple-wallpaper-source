// Function: FUN_14027de00
// Addr: 14027de00
// Size: 313 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027de00(undefined8 param_1,float param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_4[1];
  fVar5 = *param_4;
  fVar3 = fVar4;
  if (fVar4 <= fVar5) {
    fVar3 = fVar5;
  }
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar5 = param_4[2];
  if (fVar3 <= param_4[2]) {
    fVar5 = fVar3;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if ((float)((uint)(param_2 - DAT_1404926c0) & _DAT_140492fc0) <
      (float)((uint)(fVar5 - DAT_1404926c0) & _DAT_140492fc0)) {
LAB_14027df1d:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_14027ed10();
    if (cVar1 == '\0') {
      cVar1 = FUN_14027ed10(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_14027ed10(param_1);
        if (cVar1 == '\0') goto LAB_14027df1d;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

