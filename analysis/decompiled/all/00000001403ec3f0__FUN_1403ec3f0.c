// Function: FUN_1403ec3f0
// Addr: 1403ec3f0
// Size: 317 bytes


void FUN_1403ec3f0(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar2 = (int *)(param_1 + 0xe0);
  *piVar2 = *piVar2 + (param_2 - param_3);
  if (*piVar2 < 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x78);
  uVar7 = *(uint *)(lVar4 + 8 + (ulonglong)param_2 * 0x14);
  uVar8 = param_2;
  while (uVar5 = uVar7, uVar8 = uVar8 + 1, uVar8 < param_3) {
    uVar7 = *(uint *)(lVar4 + 8 + (ulonglong)uVar8 * 0x14);
    if (uVar5 <= uVar7) {
      uVar7 = uVar5;
    }
  }
  do {
    uVar7 = param_2;
    if (uVar7 == 0) break;
    param_2 = uVar7 - 1;
  } while (*(int *)(lVar4 + 8 + (ulonglong)(uVar7 - 1) * 0x14) ==
           *(int *)(lVar4 + 8 + (ulonglong)uVar7 * 0x14));
  while ((param_3 < *(uint *)(param_1 + 100) &&
         (*(int *)(lVar4 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
          *(int *)(lVar4 + 8 + (ulonglong)param_3 * 0x14)))) {
    param_3 = param_3 + 1;
  }
  if ((param_3 == *(uint *)(param_1 + 100)) &&
     (uVar8 = *(uint *)(param_1 + 0x5c), uVar8 < *(uint *)(param_1 + 0x60))) {
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x70) + 8 + (ulonglong)uVar8 * 0x14);
      lVar4 = *(longlong *)(param_1 + 0x70) + (ulonglong)uVar8 * 0x14;
      if (uVar3 != *(uint *)((ulonglong)(param_3 - 1) * 0x14 + 8 + *(longlong *)(param_1 + 0x78)))
      break;
      if (uVar3 != uVar5) {
        puVar1 = (uint *)(lVar4 + 4);
        *puVar1 = *puVar1 & 0xfffffff8;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar4 + 8) = uVar5;
    } while (uVar8 < *(uint *)(param_1 + 0x60));
  }
  for (; uVar7 < param_3; uVar7 = uVar7 + 1) {
    uVar6 = (ulonglong)uVar7;
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (*(uint *)(lVar4 + 8 + uVar6 * 0x14) != uVar5) {
      puVar1 = (uint *)(lVar4 + 4 + uVar6 * 0x14);
      *puVar1 = *puVar1 & 0xfffffff8;
    }
    *(uint *)(lVar4 + 8 + uVar6 * 0x14) = uVar5;
  }
  return;
}

