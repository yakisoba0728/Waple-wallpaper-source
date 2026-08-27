// Function: FUN_140363c30
// Addr: 140363c30
// Size: 521 bytes


void FUN_140363c30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar15 = param_2 - param_1 >> 4;
  lVar12 = param_2 - param_1 >> 5;
  if (0 < lVar12) {
    lVar14 = (longlong)(uVar15 - 1) >> 1;
    do {
      lVar12 = lVar12 + -1;
      piVar11 = (int *)(lVar12 * 0x10 + param_1);
      iVar3 = piVar11[2];
      iVar4 = *piVar11;
      uVar5 = piVar11[1];
      uVar6 = piVar11[3];
      lVar9 = lVar12;
      while (lVar9 < lVar14) {
        lVar13 = lVar9 * 2 + 2;
        iVar7 = *(int *)(param_1 + -0x10 + lVar13 * 0x10);
        piVar11 = (int *)(param_1 + lVar13 * 0x10);
        if (*piVar11 == iVar7) {
          if ((char)piVar11[2] == '\0') {
            if (((piVar11[-3] ^ piVar11[1]) & 0xfffffffeU) != 0) {
              uVar10 = 1;
              if (piVar11[1] < piVar11[-3]) {
                uVar10 = 0xffffffff;
              }
              goto LAB_140363d1c;
            }
          }
          if ((uint)piVar11[3] < (uint)piVar11[-1]) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)((uint)piVar11[-1] < (uint)piVar11[3]);
          }
        }
        else {
          uVar10 = 1;
          if (*piVar11 < iVar7) {
            uVar10 = 0xffffffff;
          }
        }
LAB_140363d1c:
        if ((int)uVar10 < 0) {
          lVar13 = lVar9 * 2 + 1;
        }
        puVar1 = (undefined8 *)(param_1 + lVar13 * 0x10);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + lVar9 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lVar9 = lVar13;
      }
      if ((lVar9 == lVar14) && ((uVar15 & 1) == 0)) {
        puVar2 = (undefined8 *)(param_1 + -0x10 + uVar15 * 0x10);
        uVar8 = puVar2[1];
        puVar1 = (undefined8 *)(param_1 + lVar9 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        lVar9 = uVar15 - 1;
      }
      while (lVar12 < lVar9) {
        lVar13 = lVar9 + -1 >> 1;
        piVar11 = (int *)(lVar13 * 0x10 + param_1);
        if (*piVar11 == iVar4) {
          if (((char)piVar11[2] == '\0') && (((piVar11[1] ^ uVar5) & 0xfffffffe) != 0)) {
            uVar10 = 1;
            if (piVar11[1] < (int)uVar5) {
              uVar10 = 0xffffffff;
            }
          }
          else if ((uint)piVar11[3] < uVar6) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)(uVar6 < (uint)piVar11[3]);
          }
        }
        else {
          uVar10 = 1;
          if (*piVar11 < iVar4) {
            uVar10 = 0xffffffff;
          }
        }
        if (-1 < (int)uVar10) break;
        uVar8 = *(undefined8 *)(piVar11 + 2);
        puVar1 = (undefined8 *)(param_1 + lVar9 * 0x10);
        *puVar1 = *(undefined8 *)piVar11;
        puVar1[1] = uVar8;
        lVar9 = lVar13;
      }
      *(int *)(param_1 + lVar9 * 0x10) = iVar4;
      *(uint *)(param_1 + 4 + lVar9 * 0x10) = uVar5;
      *(int *)(param_1 + 8 + lVar9 * 0x10) = iVar3;
      *(uint *)(param_1 + 0xc + lVar9 * 0x10) = uVar6;
    } while (0 < lVar12);
  }
  return;
}

