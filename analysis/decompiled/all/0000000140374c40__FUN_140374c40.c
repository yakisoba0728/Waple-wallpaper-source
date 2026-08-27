// Function: FUN_140374c40
// Addr: 140374c40
// Size: 252 bytes


undefined1 FUN_140374c40(longlong param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  cVar1 = FUN_140407cc0(param_2,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar5 = (uint)param_2[1] * 0x10000 + (uint)param_2[2] * 0x100 + (uint)*param_2 * 0x1000000 +
          (uint)param_2[3];
  if (uVar5 != 0) {
    do {
      cVar1 = FUN_140409580(param_2 + uVar4 * 4 + 4,param_1,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar3 = (uint)param_2[uVar4 * 4 + 5] * 0x10000 + (uint)param_2[uVar4 * 4 + 6] * 0x100 +
              (uint)param_2[uVar4 * 4 + 4] * 0x1000000 + (uint)param_2[uVar4 * 4 + 7];
      if (uVar3 != 0) {
        if ((0x3f < *(int *)(param_1 + 0x24)) ||
           (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 == 0)) {
          return 0;
        }
        cVar1 = FUN_14037a0b0(param_2 + uVar3,param_1);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        if (cVar1 == '\0') {
          return 0;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar5);
  }
  return 1;
}

