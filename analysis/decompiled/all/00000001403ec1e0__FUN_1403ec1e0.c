// Function: FUN_1403ec1e0
// Addr: 1403ec1e0
// Size: 147 bytes


void FUN_1403ec1e0(double *param_1,double *param_2)

{
  double dVar1;
  
  if (*param_1 < param_1[2]) {
    dVar1 = param_1[1];
    if (dVar1 < param_1[3]) {
      if (param_2[2] <= *param_2) {
        return;
      }
      if (param_2[3] < param_2[1] || param_2[3] == param_2[1]) {
        return;
      }
      if (*param_2 < *param_1) {
        *param_1 = *param_2;
      }
      if (param_1[2] < param_2[2]) {
        param_1[2] = param_2[2];
      }
      if (param_2[1] <= dVar1 && dVar1 != param_2[1]) {
        param_1[1] = param_2[1];
      }
      if (param_2[3] <= param_1[3]) {
        return;
      }
      param_1[3] = param_2[3];
      return;
    }
  }
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  dVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = dVar1;
  return;
}

