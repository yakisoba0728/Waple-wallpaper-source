// Function: FUN_14040ee30
// Addr: 14040ee30
// Size: 184 bytes


void FUN_14040ee30(float *param_1,float *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar3 = param_2 + 2;
  if (*param_2 < *pfVar3) {
    if (param_2[1] < param_2[3]) {
      if (*param_1 < param_1[2]) {
        if (param_1[1] < param_1[3]) {
          pfVar2 = param_2;
          if (*param_1 <= *param_2) {
            pfVar2 = param_1;
          }
          *param_1 = *pfVar2;
          pfVar2 = param_2 + 1;
          if (param_1[1] <= param_2[1]) {
            pfVar2 = param_1 + 1;
          }
          param_1[1] = *pfVar2;
          if (*pfVar3 <= param_1[2]) {
            pfVar3 = param_1 + 2;
          }
          param_1[2] = *pfVar3;
          pfVar3 = param_2 + 3;
          if (param_2[3] <= param_1[3]) {
            pfVar3 = param_1 + 3;
          }
          param_1[3] = *pfVar3;
          return;
        }
      }
      uVar1 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = uVar1;
    }
  }
  return;
}

