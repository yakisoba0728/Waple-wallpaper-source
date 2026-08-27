// Function: FUN_1402842a0
// Addr: 1402842a0
// Size: 109 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402842a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) & _UNK_140492fd4,
                           (uint)*param_1 & _DAT_140492fd0);
  dVar3 = (double)CONCAT44((uint)((ulonglong)*param_2 >> 0x20) & _UNK_140492fd4,
                           (uint)*param_2 & _DAT_140492fd0);
  if ((dVar3 < dVar2) ||
     ((dVar3 == dVar2 &&
      ((double)param_2[1] <= (double)param_1[1] && (double)param_1[1] != (double)param_2[1])))) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  dVar2 = (double)param_2[2];
  if ((double)param_1[2] <= dVar2 && dVar2 != (double)param_1[2]) {
    param_1[2] = dVar2;
  }
  if ((double)param_2[3] < (double)param_1[3]) {
    param_1[3] = param_2[3];
  }
  return;
}

