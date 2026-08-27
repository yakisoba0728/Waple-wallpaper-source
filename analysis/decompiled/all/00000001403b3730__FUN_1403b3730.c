// Function: FUN_1403b3730
// Addr: 1403b3730
// Size: 97 bytes


void FUN_1403b3730(uint *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *param_1;
  uVar3 = 0;
  if (3 < uVar2) {
    do {
      param_1[uVar3 + 1] = 0x80000000;
      iVar1 = (int)uVar3;
      param_1[(ulonglong)(iVar1 + 1) + 1] = 0x80000000;
      param_1[(ulonglong)(iVar1 + 2) + 1] = 0x80000000;
      uVar3 = (ulonglong)(iVar1 + 4);
      param_1[(ulonglong)(iVar1 + 3) + 1] = 0x80000000;
      uVar2 = *param_1;
    } while (iVar1 + 7U < uVar2);
  }
  if ((uint)uVar3 < uVar2) {
    do {
      param_1[uVar3 + 1] = 0x80000000;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *param_1);
  }
  return;
}

