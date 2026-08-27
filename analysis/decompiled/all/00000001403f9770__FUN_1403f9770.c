// Function: FUN_1403f9770
// Addr: 1403f9770
// Size: 1071 bytes


void FUN_1403f9770(longlong param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    pdVar4 = (double *)(param_1 + 0x11c0);
    puVar3 = (undefined1 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x1c) - 6;
    uVar10 = 0;
    pdVar9 = (double *)&DAT_1404e4f20;
    uVar11 = uVar10;
    if (1 < uVar1) {
      do {
        dVar14 = *pdVar4;
        dVar15 = *(double *)(param_1 + 0x11c8);
        if (uVar10 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar12 = (double *)(puVar3 + ((ulonglong)(uVar10 + 1) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar12 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar10 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(puVar3 + ((ulonglong)uVar10 + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar16 = *pdVar8;
        dVar17 = *pdVar12;
        if (*param_2 == '\0') {
          *param_2 = '\x01';
          if (*pdVar4 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *pdVar4) {
            *(double *)(param_2 + 8) = *pdVar4;
          }
          if (*(double *)(param_2 + 0x18) <= *pdVar4 && *pdVar4 != *(double *)(param_2 + 0x18)) {
            *(double *)(param_2 + 0x18) = *pdVar4;
          }
          if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
              *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
            *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
          }
          if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
              *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
            *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
          }
        }
        *pdVar4 = dVar14 + dVar16;
        *(double *)(param_1 + 0x11c8) = dVar15 + dVar17;
        if (dVar14 + dVar16 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = *pdVar4;
        }
        if (*(double *)(param_2 + 0x18) <= *pdVar4 && *pdVar4 != *(double *)(param_2 + 0x18)) {
          *(double *)(param_2 + 0x18) = *pdVar4;
        }
        if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
            *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
            *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
        uVar11 = uVar10 + 2;
        uVar2 = uVar10 + 4;
        uVar10 = uVar11;
      } while (uVar2 <= uVar1);
    }
    if (uVar11 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(puVar3 + ((ulonglong)(uVar11 + 1) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar12 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar11 < *(uint *)(param_1 + 0x1c)) {
      pdVar8 = (double *)(puVar3 + ((ulonglong)uVar11 + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    dVar14 = *pdVar4 + *pdVar8;
    dVar15 = *(double *)(param_1 + 0x11c8) + *pdVar12;
    if (uVar11 + 3 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(puVar3 + ((ulonglong)(uVar11 + 3) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar12 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar11 + 2 < *(uint *)(param_1 + 0x1c)) {
      pdVar8 = (double *)(puVar3 + ((ulonglong)(uVar11 + 2) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    dVar17 = dVar14 + *pdVar8;
    dVar16 = dVar15 + *pdVar12;
    if (uVar11 + 5 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(puVar3 + ((ulonglong)(uVar11 + 5) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar12 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar11 + 4 < *(uint *)(param_1 + 0x1c)) {
      pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar11 + 4) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    dVar5 = *pdVar9;
    dVar6 = *pdVar12;
    if (*param_2 == '\0') {
      *param_2 = '\x01';
      if (*pdVar4 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *pdVar4) {
        *(double *)(param_2 + 8) = *pdVar4;
      }
      if (*(double *)(param_2 + 0x18) <= *pdVar4 && *pdVar4 != *(double *)(param_2 + 0x18)) {
        *(double *)(param_2 + 0x18) = *pdVar4;
      }
      if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
          *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
      }
      if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
          *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
      }
    }
    dVar13 = *(double *)(param_2 + 8);
    if (dVar14 < dVar13) {
      *(double *)(param_2 + 8) = dVar14;
      dVar13 = *(double *)(param_2 + 8);
    }
    dVar18 = *(double *)(param_2 + 0x18);
    if (dVar18 < dVar14) {
      *(double *)(param_2 + 0x18) = dVar14;
      dVar18 = *(double *)(param_2 + 0x18);
    }
    dVar14 = *(double *)(param_2 + 0x10);
    if (dVar15 < dVar14) {
      *(double *)(param_2 + 0x10) = dVar15;
      dVar14 = *(double *)(param_2 + 0x10);
    }
    dVar7 = *(double *)(param_2 + 0x20);
    uVar19 = SUB84(dVar7,0);
    uVar20 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (dVar7 < dVar15) {
      *(double *)(param_2 + 0x20) = dVar15;
      uVar19 = (undefined4)*(undefined8 *)(param_2 + 0x20);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    }
    if (dVar17 < dVar13) {
      *(double *)(param_2 + 8) = dVar17;
    }
    if (dVar18 < dVar17) {
      *(double *)(param_2 + 0x18) = dVar17;
    }
    if (dVar16 < dVar14) {
      *(double *)(param_2 + 0x10) = dVar16;
    }
    if ((double)CONCAT44(uVar20,uVar19) <= dVar16 && dVar16 != (double)CONCAT44(uVar20,uVar19)) {
      *(double *)(param_2 + 0x20) = dVar16;
    }
    *pdVar4 = dVar17 + dVar5;
    *(double *)(param_1 + 0x11c8) = dVar16 + dVar6;
    if (dVar17 + dVar5 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *pdVar4;
    }
    if (*(double *)(param_2 + 0x18) <= *pdVar4 && *pdVar4 != *(double *)(param_2 + 0x18)) {
      *(double *)(param_2 + 0x18) = *pdVar4;
    }
    if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
        *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
    }
    if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
        *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
    }
  }
  return;
}

