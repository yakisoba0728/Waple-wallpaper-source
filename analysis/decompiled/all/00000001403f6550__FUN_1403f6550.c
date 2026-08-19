// Function: FUN_1403f6550
// Addr: 1403f6550
// Size: 545 bytes


void FUN_1403f6550(longlong param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    pdVar4 = (double *)(param_1 + 0x11c0);
    puVar3 = (undefined1 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x1c) - 2;
    uVar12 = 0;
    pdVar11 = (double *)&DAT_1404e4ff0;
    uVar13 = uVar12;
    if (5 < uVar1) {
      do {
        if (uVar12 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(puVar3 + ((ulonglong)(uVar12 + 1) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar12 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)uVar12 + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar9 = (double *)&DAT_1404e4ff0;
        }
        dVar15 = *pdVar4 + *pdVar9;
        dVar8 = *(double *)(param_1 + 0x11c8) + *pdVar10;
        if (uVar12 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(puVar3 + ((ulonglong)(uVar12 + 3) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar12 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar12 + 2) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar9 = (double *)&DAT_1404e4ff0;
        }
        dVar17 = dVar15 + *pdVar9;
        dVar18 = dVar8 + *pdVar10;
        if (uVar12 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(puVar3 + ((ulonglong)(uVar12 + 5) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar12 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar12 + 4) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar9 = (double *)&DAT_1404e4ff0;
        }
        dVar5 = *pdVar9;
        dVar6 = *pdVar10;
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
        dVar14 = *(double *)(param_2 + 8);
        if (dVar15 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar15;
          dVar14 = dVar15;
        }
        dVar16 = *(double *)(param_2 + 0x18);
        if (dVar16 < dVar15) {
          *(double *)(param_2 + 0x18) = dVar15;
          dVar16 = dVar15;
        }
        dVar15 = *(double *)(param_2 + 0x10);
        if (dVar8 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar8;
          dVar15 = dVar8;
        }
        dVar7 = *(double *)(param_2 + 0x20);
        if (dVar7 < dVar8) {
          *(double *)(param_2 + 0x20) = dVar8;
          dVar7 = dVar8;
        }
        if (dVar17 < dVar14) {
          *(double *)(param_2 + 8) = dVar17;
        }
        if (dVar16 < dVar17) {
          *(double *)(param_2 + 0x18) = dVar17;
        }
        if (dVar18 < dVar15) {
          *(double *)(param_2 + 0x10) = dVar18;
        }
        if (dVar7 < dVar18) {
          *(double *)(param_2 + 0x20) = dVar18;
        }
        *pdVar4 = dVar17 + dVar5;
        *(double *)(param_1 + 0x11c8) = dVar18 + dVar6;
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
        uVar13 = uVar12 + 6;
        uVar2 = uVar12 + 0xc;
        uVar12 = uVar13;
      } while (uVar2 <= uVar1);
    }
    dVar8 = *pdVar4;
    dVar15 = *(double *)(param_1 + 0x11c8);
    if (uVar13 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar10 = (double *)(puVar3 + ((ulonglong)(uVar13 + 1) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar10 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar13 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(puVar3 + ((ulonglong)uVar13 + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    dVar17 = *pdVar11;
    dVar18 = *pdVar10;
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
    *pdVar4 = dVar8 + dVar17;
    *(double *)(param_1 + 0x11c8) = dVar15 + dVar18;
    if (dVar8 + dVar17 < *(double *)(param_2 + 8)) {
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

