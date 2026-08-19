// Function: FUN_14005ec50
// Addr: 14005ec50
// Size: 86 bytes


undefined8 * FUN_14005ec50(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)*param_2;
  fVar4 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
  if (0.0 <= fVar2) {
    fVar2 = DAT_1404927d4 / SQRT(fVar2);
    *(float *)(param_1 + 1) = fVar1 * fVar2;
    *param_1 = CONCAT44(fVar4 * fVar2,fVar3 * fVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar2);
}

