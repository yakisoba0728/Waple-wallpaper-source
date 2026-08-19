// Function: FUN_1403f5e80
// Addr: 1403f5e80
// Size: 554 bytes


void FUN_1403f5e80(longlong param_1,char *param_2)

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
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    pdVar4 = (double *)(param_1 + 0x11c0);
    puVar3 = (undefined1 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x1c) - 2;
    uVar11 = 0;
    pdVar10 = (double *)&DAT_1404e4ff0;
    uVar12 = uVar11;
    if (5 < uVar1) {
      do {
        if (uVar11 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar11 + 1) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar9 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar11 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(puVar3 + ((ulonglong)uVar11 + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar8 = (double *)&DAT_1404e4ff0;
        }
        dVar15 = *pdVar4 + *pdVar8;
        dVar7 = *(double *)(param_1 + 0x11c8) + *pdVar9;
        if (uVar11 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar11 + 3) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar9 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar11 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(puVar3 + ((ulonglong)(uVar11 + 2) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar8 = (double *)&DAT_1404e4ff0;
        }
        dVar16 = dVar15 + *pdVar8;
        dVar17 = dVar7 + *pdVar9;
        if (uVar11 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar11 + 5) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          pdVar9 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar11 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(puVar3 + ((ulonglong)(uVar11 + 4) + 1) * 8);
        }
        else {
          *puVar3 = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar8 = (double *)&DAT_1404e4ff0;
        }
        dVar5 = *pdVar8;
        dVar6 = *pdVar9;
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
        if (dVar15 < dVar14) {
          *(double *)(param_2 + 8) = dVar15;
          dVar14 = *(double *)(param_2 + 8);
        }
        dVar13 = *(double *)(param_2 + 0x18);
        if (dVar13 < dVar15) {
          *(double *)(param_2 + 0x18) = dVar15;
          dVar13 = *(double *)(param_2 + 0x18);
        }
        if (dVar7 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar7;
          dVar14 = *(double *)(param_2 + 8);
          dVar13 = *(double *)(param_2 + 0x18);
        }
        if (*(double *)(param_2 + 0x20) <= dVar7 && dVar7 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar7;
        }
        if (dVar16 < dVar14) {
          *(double *)(param_2 + 8) = dVar16;
        }
        if (dVar13 < dVar16) {
          *(double *)(param_2 + 0x18) = dVar16;
        }
        if (dVar17 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar17;
        }
        if (*(double *)(param_2 + 0x20) <= dVar17 && dVar17 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar17;
        }
        *pdVar4 = dVar16 + dVar5;
        *(double *)(param_1 + 0x11c8) = dVar17 + dVar6;
        if (dVar16 + dVar5 < *(double *)(param_2 + 8)) {
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
        uVar12 = uVar11 + 6;
        uVar2 = uVar11 + 0xc;
        uVar11 = uVar12;
      } while (uVar2 <= uVar1);
    }
    dVar7 = *pdVar4;
    dVar15 = *(double *)(param_1 + 0x11c8);
    if (uVar12 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar9 = (double *)(puVar3 + ((ulonglong)(uVar12 + 1) + 1) * 8);
    }
    else {
      *puVar3 = 1;
      pdVar9 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar12 < *(uint *)(param_1 + 0x1c)) {
      pdVar10 = (double *)(puVar3 + ((ulonglong)uVar12 + 1) * 8);
    }
    else {
      *puVar3 = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    dVar16 = *pdVar10;
    dVar17 = *pdVar9;
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
    *pdVar4 = dVar7 + dVar16;
    *(double *)(param_1 + 0x11c8) = dVar15 + dVar17;
    if (dVar7 + dVar16 < *(double *)(param_2 + 8)) {
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

