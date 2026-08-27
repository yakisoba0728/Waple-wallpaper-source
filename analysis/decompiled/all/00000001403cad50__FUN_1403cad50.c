// Function: FUN_1403cad50
// Addr: 1403cad50
// Size: 452 bytes


undefined8 FUN_1403cad50(byte *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  *param_5 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 == 1) {
    uVar1 = (ulonglong)(param_2 + 1);
    uVar2 = (ulonglong)param_2;
    uVar4 = (uint)param_1[uVar2 * 4 + 10] * 0x100 + (uint)param_1[uVar2 * 4 + 9] * 0x10000 +
            (uint)param_1[uVar2 * 4 + 8] * 0x1000000 + (uint)param_1[uVar2 * 4 + 0xb];
    if (uVar4 < (uint)param_1[uVar1 * 4 + 9] * 0x10000 + (uint)param_1[uVar1 * 4 + 8] * 0x1000000 +
                (uint)param_1[uVar1 * 4 + 10] * 0x100 + (uint)param_1[uVar1 * 4 + 0xb]) {
      *param_3 = (uint)param_1[7] +
                 (uint)param_1[4] * 0x1000000 + uVar4 +
                 (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100;
      *param_4 = (((uint)param_1[uVar1 * 4 + 9] * 0x10000 + (uint)param_1[uVar2 * 4 + 10] * -0x100 +
                   (uint)param_1[uVar2 * 4 + 9] * -0x10000 +
                   (uint)param_1[uVar2 * 4 + 8] * -0x1000000 +
                   (uint)param_1[uVar1 * 4 + 8] * 0x1000000 + (uint)param_1[uVar1 * 4 + 10] * 0x100)
                 - (uint)param_1[uVar2 * 4 + 0xb]) + (uint)param_1[uVar1 * 4 + 0xb];
      return 1;
    }
  }
  else if (iVar3 == 3) {
    uVar1 = (ulonglong)(param_2 + 1);
    uVar2 = (ulonglong)param_2;
    uVar4 = (uint)param_1[uVar2 * 2 + 8] * 0x100 + (uint)param_1[uVar2 * 2 + 9];
    if (uVar4 < (uint)param_1[uVar1 * 2 + 8] * 0x100 + (uint)param_1[uVar1 * 2 + 9]) {
      *param_3 = (uint)param_1[7] +
                 (uint)param_1[4] * 0x1000000 + uVar4 +
                 (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100;
      *param_4 = (((uint)param_1[uVar1 * 2 + 8] * 0x100 + (uint)param_1[uVar2 * 2 + 8] * -0x100) -
                 (uint)param_1[uVar2 * 2 + 9]) + (uint)param_1[uVar1 * 2 + 9];
      return 1;
    }
  }
  return 0;
}

