// Function: FUN_1401e2580
// Addr: 1401e2580
// Size: 71 bytes


float FUN_1401e2580(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[3] * param_1[3] + param_1[2] * param_1[2] +
          param_1[1] * param_1[1] + *param_1 * *param_1;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar1);
}

