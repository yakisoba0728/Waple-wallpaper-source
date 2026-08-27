// Function: FUN_1403ec280
// Addr: 1403ec280
// Size: 356 bytes


void FUN_1403ec280(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  piVar1 = (int *)(param_1 + 0xe0);
  *piVar1 = *piVar1 + (param_2 - param_3);
  if (*piVar1 < 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar8 = *(uint *)(lVar4 + 8 + (ulonglong)param_2 * 0x14);
  uVar3 = uVar8;
  uVar6 = param_2;
  while (uVar5 = uVar3, uVar6 = uVar6 + 1, uVar6 < param_3) {
    uVar3 = *(uint *)(lVar4 + 8 + (ulonglong)uVar6 * 0x14);
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
  }
  if (uVar5 != *(uint *)(lVar4 + 8 + (ulonglong)(param_3 - 1) * 0x14)) {
    while ((param_3 < *(uint *)(param_1 + 0x60) &&
           (*(int *)(lVar4 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
            *(int *)(lVar4 + 8 + (ulonglong)param_3 * 0x14)))) {
      param_3 = param_3 + 1;
    }
  }
  if (uVar5 != uVar8) {
    uVar8 = param_2;
    do {
      param_2 = uVar8;
      if (param_2 <= *(uint *)(param_1 + 0x5c)) break;
      uVar8 = param_2 - 1;
    } while (*(int *)(lVar4 + 8 + (ulonglong)(param_2 - 1) * 0x14) ==
             *(int *)(lVar4 + 8 + (ulonglong)param_2 * 0x14));
  }
  if (((*(uint *)(param_1 + 0x5c) == param_2) &&
      (*(uint *)(lVar4 + 8 + (ulonglong)param_2 * 0x14) != uVar5)) &&
     (uVar7 = (ulonglong)*(uint *)(param_1 + 100), *(uint *)(param_1 + 100) != 0)) {
    do {
      uVar8 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar8;
      lVar4 = *(longlong *)(param_1 + 0x78) + uVar7 * 0x14;
      if (*(uint *)(lVar4 + 8) !=
          *(uint *)((ulonglong)param_2 * 0x14 + 8 + *(longlong *)(param_1 + 0x70))) break;
      if (*(uint *)(lVar4 + 8) != uVar5) {
        *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) & 0xfffffff8;
      }
      *(uint *)(lVar4 + 8) = uVar5;
    } while (uVar8 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar7 = (ulonglong)param_2;
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (*(uint *)(lVar4 + 8 + uVar7 * 0x14) != uVar5) {
      puVar2 = (uint *)(lVar4 + 4 + uVar7 * 0x14);
      *puVar2 = *puVar2 & 0xfffffff8;
    }
    *(uint *)(lVar4 + 8 + uVar7 * 0x14) = uVar5;
  }
  return;
}

