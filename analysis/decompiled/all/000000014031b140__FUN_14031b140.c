// Function: FUN_14031b140
// Addr: 14031b140
// Size: 251 bytes


int FUN_14031b140(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  puVar1 = *(uint **)(param_1 + 0x2e0);
  if (puVar1 == (uint *)0x0) {
    return 6;
  }
  bVar2 = 0;
  if (puVar1[1] < param_2) {
    param_2 = puVar1[1];
  }
  uVar10 = 0;
  bVar3 = 0;
  if (*puVar1 != 0) {
    do {
      bVar2 = bVar3;
      uVar4 = 0x10000;
      iVar8 = 0x10000;
      if (puVar1[1] != 0) {
        uVar7 = 0;
        uVar9 = 1;
        do {
          if ((uint)uVar7 < param_2) {
            iVar8 = 0x10000 - *(int *)(param_3 + uVar7 * 4);
            if (((uint)uVar10 & uVar9) != 0) {
              iVar8 = *(int *)(param_3 + uVar7 * 4);
            }
            if (iVar8 < 1) {
              iVar8 = 0;
              break;
            }
            if (iVar8 < 0x10000) {
              lVar5 = (longlong)iVar8 * (longlong)(int)uVar4;
              uVar4 = (lVar5 >> 0x3f) + 0x8000 + lVar5 >> 0x10;
            }
          }
          else {
            uVar4 = (ulonglong)(uint)((int)uVar4 >> 1);
          }
          iVar8 = (int)uVar4;
          uVar6 = (uint)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        } while (uVar6 < puVar1[1]);
      }
      if (*(int *)(*(longlong *)(puVar1 + 0x42) + uVar10 * 4) != iVar8) {
        *(int *)(*(longlong *)(puVar1 + 0x42) + uVar10 * 4) = iVar8;
        bVar2 = 1;
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      bVar3 = bVar2;
    } while (uVar9 < *puVar1);
  }
  return bVar2 - 1;
}

