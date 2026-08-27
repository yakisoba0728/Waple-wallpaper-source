// Function: FUN_1403254a0
// Addr: 1403254a0
// Size: 104 bytes


undefined8 FUN_1403254a0(ulonglong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar2 = (byte *)*param_1;
  pbVar4 = pbVar2 + 1;
  if (pbVar4 <= param_2) {
    uVar3 = (uint)*pbVar2;
    if (*pbVar2 == 0) {
      *param_1 = (ulonglong)pbVar4;
      return 0;
    }
    while ((pbVar1 = pbVar4 + 2, pbVar2 = pbVar4, pbVar1 <= param_2 &&
           (pbVar4 = pbVar1 + *pbVar4, pbVar2 = pbVar1, pbVar4 <= param_2))) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        *param_1 = (ulonglong)pbVar4;
        return 0;
      }
    }
  }
  *param_1 = (ulonglong)pbVar2;
  return 8;
}

