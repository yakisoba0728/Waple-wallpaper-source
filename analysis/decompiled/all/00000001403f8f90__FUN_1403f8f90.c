// Function: FUN_1403f8f90
// Addr: 1403f8f90
// Size: 1065 bytes


void FUN_1403f8f90(longlong param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    pdVar4 = (double *)(param_1 + 0x11c0);
    puVar3 = (undefined1 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x1c) - 6;
    uVar9 = 0;
    pdVar8 = (double *)&DAT_1404e4f20;
    uVar10 = uVar9;
    if (1 < uVar1) {
      do {
        dVar12 = *pdVar4;
        dVar13 = *(double *)(param_1 + 0x11c8);
        if (uVar9 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(puVar3 + ((ulonglong)(uVar9 + 1) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar11 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar9 < *(uint *)(param_1 + 0x1c)) {
          pdVar7 = (double *)(puVar3 + ((ulonglong)uVar9 + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar7 = (double *)&DAT_1404e4f20;
        }
        dVar14 = *pdVar7;
        dVar15 = *pdVar11;
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
        *pdVar4 = dVar12 + dVar14;
        *(double *)(param_1 + 0x11c8) = dVar13 + dVar15;
        if (dVar12 + dVar14 < *(double *)(param_2 + 8)) {
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
        uVar10 = uVar9 + 2;
        uVar2 = uVar9 + 4;
        uVar9 = uVar10;
      } while (uVar2 <= uVar1);
    }
    if (uVar10 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(puVar3 + ((ulonglong)(uVar10 + 1) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar11 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar10 < *(uint *)(param_1 + 0x1c)) {
      pdVar7 = (double *)(puVar3 + ((ulonglong)uVar10 + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar7 = (double *)&DAT_1404e4f20;
    }
    dVar12 = *pdVar4 + *pdVar7;
    dVar13 = *(double *)(param_1 + 0x11c8) + *pdVar11;
    if (uVar10 + 3 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(puVar3 + ((ulonglong)(uVar10 + 3) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar11 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar10 + 2 < *(uint *)(param_1 + 0x1c)) {
      pdVar7 = (double *)(puVar3 + ((ulonglong)(uVar10 + 2) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar7 = (double *)&DAT_1404e4f20;
    }
    dVar15 = dVar12 + *pdVar7;
    dVar14 = dVar13 + *pdVar11;
    if (uVar10 + 5 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(puVar3 + ((ulonglong)(uVar10 + 5) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar11 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar10 + 4 < *(uint *)(param_1 + 0x1c)) {
      pdVar8 = (double *)(puVar3 + ((ulonglong)(uVar10 + 4) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    dVar5 = *pdVar8;
    dVar6 = *pdVar11;
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
    if (dVar12 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = dVar12;
    }
    if (*(double *)(param_2 + 0x18) <= dVar12 && dVar12 != *(double *)(param_2 + 0x18)) {
      *(double *)(param_2 + 0x18) = dVar12;
    }
    dVar12 = *(double *)(param_2 + 0x10);
    if (dVar13 < dVar12) {
      *(double *)(param_2 + 0x10) = dVar13;
      dVar12 = *(double *)(param_2 + 0x10);
    }
    dVar16 = *(double *)(param_2 + 0x20);
    if (dVar16 < dVar13) {
      *(double *)(param_2 + 0x20) = dVar13;
      dVar16 = *(double *)(param_2 + 0x20);
    }
    if (dVar15 < *(double *)(param_2 + 8)) {
      dVar12 = *(double *)(param_2 + 0x10);
      dVar16 = *(double *)(param_2 + 0x20);
      *(double *)(param_2 + 8) = dVar15;
    }
    if (*(double *)(param_2 + 0x18) <= dVar15 && dVar15 != *(double *)(param_2 + 0x18)) {
      *(double *)(param_2 + 0x18) = dVar15;
    }
    if (dVar14 < dVar12) {
      *(double *)(param_2 + 0x10) = dVar14;
    }
    if (dVar16 < dVar14) {
      *(double *)(param_2 + 0x20) = dVar14;
    }
    *pdVar4 = dVar15 + dVar5;
    *(double *)(param_1 + 0x11c8) = dVar14 + dVar6;
    if (dVar15 + dVar5 < *(double *)(param_2 + 8)) {
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

