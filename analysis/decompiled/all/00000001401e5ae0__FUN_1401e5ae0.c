// Function: FUN_1401e5ae0
// Addr: 1401e5ae0
// Size: 130 bytes


undefined1 FUN_1401e5ae0(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = (float)(param_3 ^ DAT_1404930c0);
  if ((((fVar4 <= fVar1 * *param_1 + fVar2 * param_1[1] + fVar3 * param_1[2] + param_1[3]) &&
       (fVar4 <= fVar1 * param_1[4] + fVar2 * param_1[5] + fVar3 * param_1[6] + param_1[7])) &&
      (fVar4 <= fVar1 * param_1[8] + fVar2 * param_1[9] + fVar3 * param_1[10] + param_1[0xb])) &&
     (((fVar4 <= fVar1 * param_1[0xc] + fVar2 * param_1[0xd] + fVar3 * param_1[0xe] + param_1[0xf]
       && (fVar4 <= fVar1 * param_1[0x10] + fVar2 * param_1[0x11] + fVar3 * param_1[0x12] +
                    param_1[0x13])) &&
      (fVar4 <= fVar1 * param_1[0x14] + fVar2 * param_1[0x15] + fVar3 * param_1[0x16] +
                param_1[0x17])))) {
    return 0;
  }
  return 1;
}

