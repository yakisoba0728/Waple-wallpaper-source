// Function: FUN_140316e20
// Addr: 140316e20
// Size: 167 bytes


void FUN_140316e20(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  int aiStack_88 [4];
  undefined4 auStack_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  uVar10 = 4;
  if (param_2 < 5) {
    uVar10 = param_2;
  }
  uVar12 = 0;
  if (uVar10 != 0) {
    do {
      iVar8 = FUN_1402f4c30();
      uVar13 = (int)uVar12 + 1;
      aiStack_88[uVar12] = iVar8 >> 0x10;
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < uVar10);
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 != 0) {
    uVar13 = *(uint *)(lVar3 + 4);
    uVar6 = uVar13;
    if (uVar10 <= uVar13) {
      uVar6 = uVar10;
    }
    uVar12 = 0;
    uVar10 = 0;
    if (uVar13 != 0) {
      do {
        piVar4 = *(int **)(lVar3 + 8 + (uVar12 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar12 + 7) * 0x18);
        puVar5 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar12 < uVar6) {
          iVar8 = aiStack_88[uVar12];
        }
        else {
          iVar8 = (piVar4[(ulonglong)*pbVar1 - 1] - *piVar4) / 2;
        }
        bVar2 = *pbVar1;
        uVar7 = 0;
        uVar15 = 0xffffffff;
        if (bVar2 == 0) {
code_r0x000140316f52:
          uVar9 = *puVar5;
        }
        else {
          do {
            uVar11 = uVar7;
            if (iVar8 == piVar4[uVar11]) {
              uVar9 = puVar5[uVar11];
              goto code_r0x000140316f54;
            }
            if (iVar8 < piVar4[uVar11]) {
              iVar14 = (int)uVar15;
              if (iVar14 < 0) goto code_r0x000140316f52;
              uVar9 = FUN_1402f2180(iVar8 - piVar4[iVar14],puVar5[uVar11] - puVar5[iVar14],
                                    piVar4[uVar11] - piVar4[iVar14]);
              goto code_r0x000140316f54;
            }
            uVar10 = (int)uVar11 + 1;
            uVar7 = (ulonglong)uVar10;
            uVar15 = uVar11;
          } while ((int)uVar10 < (int)(uint)bVar2);
          uVar9 = puVar5[(ulonglong)bVar2 - 1];
        }
code_r0x000140316f54:
        uVar10 = *(uint *)(lVar3 + 4);
        uVar13 = (uint)uVar12 + 1;
        auStack_78[uVar12] = uVar9;
        uVar12 = (ulonglong)uVar13;
      } while (uVar13 < uVar10);
    }
    FUN_14031b210(param_1,uVar10,auStack_78);
  }
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_a8);
  return;
}

