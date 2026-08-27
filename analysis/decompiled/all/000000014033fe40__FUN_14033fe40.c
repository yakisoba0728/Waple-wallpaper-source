// Function: FUN_14033fe40
// Addr: 14033fe40
// Size: 220 bytes


void FUN_14033fe40(uint *param_1,uint *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  
  pbVar10 = *(byte **)(param_2 + 2);
  uVar8 = 0;
  uVar6 = *param_2;
  uVar5 = 0;
  uVar7 = 0;
  lVar1 = *(longlong *)(param_1 + 2);
  for (uVar4 = *param_1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xfffffffb;
    *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    lVar1 = lVar1 + 0x28;
  }
  uVar9 = 0;
  if (uVar6 != 0) {
    do {
      if (uVar8 == 0) {
        uVar5 = (uint)*pbVar10;
        uVar8 = 0x80;
        pbVar10 = pbVar10 + 1;
      }
      if ((uVar8 & uVar5) != 0) {
        lVar1 = *(longlong *)(param_1 + 2) + uVar9 * 0x28;
        uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + 0x10 + uVar9 * 0x28);
        if ((uVar4 & 4) == 0) {
          *(uint *)(lVar1 + 0x10) = uVar4 | 4;
          if ((uint)uVar7 < *param_1) {
            *(longlong *)(*(longlong *)(param_1 + 4) + uVar7 * 8) = lVar1;
            uVar7 = (ulonglong)((uint)uVar7 + 1);
          }
        }
      }
      uVar8 = (int)uVar8 >> 1;
      uVar4 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  uVar9 = 1;
  uVar6 = (uint)uVar7;
  param_1[1] = uVar6;
  lVar1 = *(longlong *)(param_1 + 4);
  if (1 < uVar6) {
    do {
      uVar5 = (uint)uVar9;
      piVar2 = *(int **)(lVar1 + uVar9 * 8);
      uVar4 = uVar5;
      while (uVar8 = uVar4 - 1, uVar8 < uVar5) {
        piVar3 = *(int **)(lVar1 + (ulonglong)uVar8 * 8);
        if (*piVar3 < *piVar2) break;
        *(int **)(lVar1 + (ulonglong)uVar8 * 8) = piVar2;
        *(int **)(lVar1 + (ulonglong)uVar4 * 8) = piVar3;
        uVar4 = uVar8;
      }
      uVar9 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < uVar6);
  }
  return;
}

