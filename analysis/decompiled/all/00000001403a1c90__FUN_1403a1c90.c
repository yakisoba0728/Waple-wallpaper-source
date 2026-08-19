// Function: FUN_1403a1c90
// Addr: 1403a1c90
// Size: 87 bytes


void FUN_1403a1c90(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,int param_5,
                  uint param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_4;
  if (param_3 == uVar5) {
    return;
  }
  piVar1 = (int *)(param_1 + 0xe0);
  *piVar1 = *piVar1 + (param_3 - uVar5);
  if (*piVar1 < 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 2) {
    iVar3 = *(int *)(param_2 + 8 + (ulonglong)param_3 * 0x14);
    if (param_5 == iVar3) {
      if (uVar5 <= param_3) {
        return;
      }
      do {
        uVar5 = (int)param_4 - 1;
        param_4 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 8 + param_4 * 0x14) == iVar3) {
          return;
        }
        puVar2 = (uint *)(param_2 + 4 + param_4 * 0x14);
        *puVar2 = *puVar2 | param_6;
      } while (param_3 < uVar5);
      return;
    }
    iVar3 = *(int *)(param_2 + 8 + (ulonglong)(uVar5 - 1) * 0x14);
    if (param_5 == iVar3) {
      if (uVar5 <= param_3) {
        return;
      }
      do {
        if (*(int *)(param_2 + 8 + (ulonglong)param_3 * 0x14) == iVar3) {
          return;
        }
        puVar2 = (uint *)(param_2 + 4 + (ulonglong)param_3 * 0x14);
        *puVar2 = *puVar2 | param_6;
        param_3 = param_3 + 1;
      } while (param_3 < uVar5);
      return;
    }
  }
  if (param_3 < uVar5) {
    uVar4 = (ulonglong)param_3;
    do {
      if (param_5 != *(int *)(param_2 + 8 + uVar4 * 0x14)) {
        puVar2 = (uint *)(param_2 + 4 + uVar4 * 0x14);
        *puVar2 = *puVar2 | param_6;
      }
      param_3 = param_3 + 1;
      uVar4 = uVar4 + 1;
    } while (param_3 < uVar5);
  }
  return;
}

