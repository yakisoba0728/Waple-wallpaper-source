// Function: FUN_140216140
// Addr: 140216140
// Size: 52 bytes


float * FUN_140216140(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar2 = param_2[2] * param_3[2] + *param_2 * *param_3 +
          param_2[3] * param_3[3] + param_2[1] * param_3[1];
  if (fVar2 < 0.0) {
    fVar4 = (float)((uint)fVar4 ^ DAT_1404930c0);
    fVar5 = (float)((uint)fVar5 ^ DAT_1404930c0);
    fVar6 = (float)((uint)fVar6 ^ DAT_1404930c0);
    fVar7 = (float)((uint)fVar7 ^ DAT_1404930c0);
    fVar2 = (float)((uint)fVar2 ^ DAT_1404930c0);
  }
  fVar3 = DAT_1404927d4 - param_4;
  if (DAT_1404927d0 < fVar2) {
    fVar2 = param_2[1];
    *param_1 = fVar3 * *param_2 + fVar4 * param_4;
    fVar4 = param_2[2];
    fVar1 = param_2[3];
    param_1[1] = fVar3 * fVar2 + fVar5 * param_4;
    param_1[2] = fVar3 * fVar4 + fVar6 * param_4;
    param_1[3] = fVar3 * fVar1 + fVar7 * param_4;
    return param_1;
  }
  FUN_14041c2f0(fVar2);
                    /* WARNING: Subroutine does not return */
  FUN_14041aa90();
}

