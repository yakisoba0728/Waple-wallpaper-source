// Function: FUN_14019e6b0
// Addr: 14019e6b0
// Size: 127 bytes


float * FUN_14019e6b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2[3] * param_2[3] + param_2[2] * param_2[2] +
          param_2[1] * param_2[1] + *param_2 * *param_2;
  if (0.0 <= fVar4) {
    fVar3 = DAT_1404927d4 / SQRT(fVar4);
    fVar4 = param_2[1];
    fVar1 = param_2[2];
    fVar2 = param_2[3];
    *param_1 = *param_2 * fVar3;
    param_1[1] = fVar4 * fVar3;
    param_1[2] = fVar1 * fVar3;
    param_1[3] = fVar2 * fVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar4);
}

