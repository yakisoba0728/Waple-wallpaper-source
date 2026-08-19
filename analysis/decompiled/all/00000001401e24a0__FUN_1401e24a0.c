// Function: FUN_1401e24a0
// Addr: 1401e24a0
// Size: 16 bytes


void FUN_1401e24a0(undefined4 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_14041c530(param_1[1],*param_1);
  fVar2 = (float)param_1[6] * (float)param_1[6] + (float)param_1[10] * (float)param_1[10];
  if (0.0 <= fVar2) {
    FUN_14041c530(param_1[2] ^ DAT_1404930c0,SQRT(fVar2));
                    /* WARNING: Subroutine does not return */
    FUN_14041aa90(uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0();
}

