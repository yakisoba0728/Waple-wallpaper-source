// Function: FUN_140281750
// Addr: 140281750
// Size: 34 bytes


double * FUN_140281750(double *param_1,double *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar3 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850();
  }
  dVar3 = SQRT(dVar3);
  if (dVar3 == 0.0) {
    *param_2 = 0.0;
    param_2[1] = (double)(param_3 ^ 1);
  }
  else {
    *param_2 = dVar1 / dVar3;
    param_2[1] = dVar2 / dVar3;
  }
  return param_2;
}

