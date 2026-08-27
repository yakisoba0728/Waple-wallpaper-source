// Function: FUN_14040f510
// Addr: 14040f510
// Size: 3160 bytes


void FUN_14040f510(longlong param_1,char *param_2)

{
  uint uVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar5 & 7) < 4) {
    uVar6 = 0;
    if (7 < uVar5) {
      do {
        dVar12 = *(double *)(param_1 + 0x11c0);
        if (uVar6 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)uVar6 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar15 = *(double *)(param_1 + 0x11c8) + *pdVar3;
        if (uVar6 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar3 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar14 = dVar12 + *pdVar4;
        dVar13 = dVar15 + *pdVar3;
        if (uVar6 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar2 = dVar14 + *pdVar3;
        if (*param_2 == '\0') {
          *param_2 = '\x01';
          if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
              *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
          }
          if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
              *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
            *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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
        dVar10 = *(double *)(param_2 + 8);
        if (dVar12 < dVar10) {
          *(double *)(param_2 + 8) = dVar12;
          dVar10 = *(double *)(param_2 + 8);
        }
        dVar8 = *(double *)(param_2 + 0x18);
        if (dVar8 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar10 = *(double *)(param_2 + 8);
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar15;
        }
        if (dVar14 < dVar10) {
          *(double *)(param_2 + 8) = dVar14;
        }
        if (dVar8 < dVar14) {
          *(double *)(param_2 + 0x18) = dVar14;
        }
        if (dVar13 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar13;
        }
        if (*(double *)(param_2 + 0x20) <= dVar13 && dVar13 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar13;
        }
        *(double *)(param_1 + 0x11c0) = dVar2;
        *(double *)(param_1 + 0x11c8) = dVar13;
        if (dVar2 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
            *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
            *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
            *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (uVar6 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar2 = dVar2 + *pdVar3;
        if (uVar6 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar3 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar6 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar12 = dVar2 + *pdVar4;
        dVar15 = dVar13 + *pdVar3;
        if (uVar6 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        uVar5 = *(uint *)(param_1 + 0x1c);
        dVar14 = *pdVar3;
        dVar10 = dVar12;
        if ((uVar5 - uVar6 < 0x10) && ((uVar5 & 1) != 0)) {
          if (uVar6 + 8 < uVar5) {
            dVar10 = dVar12 + *(double *)(param_1 + ((ulonglong)(uVar6 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            dVar10 = dVar12 + DAT_14045dd10;
          }
        }
        if (*param_2 == '\0') {
          *param_2 = '\x01';
          if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
              *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
          }
          if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
              *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
            *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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
        dVar8 = *(double *)(param_2 + 8);
        if (dVar2 < dVar8) {
          *(double *)(param_2 + 8) = dVar2;
          dVar8 = *(double *)(param_2 + 8);
        }
        dVar9 = *(double *)(param_2 + 0x18);
        if (dVar9 < dVar2) {
          *(double *)(param_2 + 0x18) = dVar2;
          dVar9 = *(double *)(param_2 + 0x18);
        }
        if (dVar13 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar13;
          dVar8 = *(double *)(param_2 + 8);
          dVar9 = *(double *)(param_2 + 0x18);
        }
        if (*(double *)(param_2 + 0x20) <= dVar13 && dVar13 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar13;
        }
        if (dVar12 < dVar8) {
          *(double *)(param_2 + 8) = dVar12;
        }
        if (dVar9 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
        }
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
        }
        if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar15;
        }
        *(double *)(param_1 + 0x11c0) = dVar10;
        *(double *)(param_1 + 0x11c8) = dVar15 + dVar14;
        if (dVar10 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
            *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
            *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
            *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
        uVar5 = uVar6 + 0x10;
        uVar6 = uVar6 + 8;
      } while (uVar5 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    dVar12 = *(double *)(param_1 + 0x11c0);
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar3 = &DAT_1404e4f20;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x20);
    }
    dVar15 = *(double *)(param_1 + 0x11c8) + *pdVar3;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar3 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar4 = &DAT_1404e4f20;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x30);
    }
    dVar14 = dVar15 + *pdVar4;
    dVar13 = dVar12 + *pdVar3;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar3 = &DAT_1404e4f20;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x38);
    }
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar6 = 4;
    dVar2 = dVar13 + *pdVar3;
    uVar7 = uVar6;
    if (0xb < uVar5) {
      do {
        if (*param_2 == '\0') {
          *param_2 = '\x01';
          if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
              *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
          }
          if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
              *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
            *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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
        dVar10 = *(double *)(param_2 + 8);
        if (dVar12 < dVar10) {
          *(double *)(param_2 + 8) = dVar12;
          dVar10 = *(double *)(param_2 + 8);
        }
        dVar8 = *(double *)(param_2 + 0x18);
        if (dVar8 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar10 = *(double *)(param_2 + 8);
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar15;
        }
        if (dVar13 < dVar10) {
          *(double *)(param_2 + 8) = dVar13;
        }
        if (dVar8 < dVar13) {
          *(double *)(param_2 + 0x18) = dVar13;
        }
        if (dVar14 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar14;
        }
        if (*(double *)(param_2 + 0x20) <= dVar14 && dVar14 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar14;
        }
        *(double *)(param_1 + 0x11c0) = dVar2;
        *(double *)(param_1 + 0x11c8) = dVar14;
        if (dVar2 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
            *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
            *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
            *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
        dVar15 = *(double *)(param_1 + 0x11c8);
        if (uVar6 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)uVar6 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar13 = *(double *)(param_1 + 0x11c0) + *pdVar3;
        if (uVar6 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar3 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar14 = dVar15 + *pdVar3;
        dVar12 = dVar13 + *pdVar4;
        if (uVar6 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar2 = *pdVar3;
        if (*param_2 == '\0') {
          *param_2 = '\x01';
          if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
              *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
          }
          if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
              *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
            *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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
        dVar10 = *(double *)(param_2 + 8);
        if (dVar13 < dVar10) {
          *(double *)(param_2 + 8) = dVar13;
          dVar10 = *(double *)(param_2 + 8);
        }
        dVar8 = *(double *)(param_2 + 0x18);
        if (dVar8 < dVar13) {
          *(double *)(param_2 + 0x18) = dVar13;
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (dVar15 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar15;
          dVar10 = *(double *)(param_2 + 8);
          dVar8 = *(double *)(param_2 + 0x18);
        }
        if (*(double *)(param_2 + 0x20) <= dVar15 && dVar15 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar15;
        }
        if (dVar12 < dVar10) {
          *(double *)(param_2 + 8) = dVar12;
        }
        if (dVar8 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
        }
        if (dVar14 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar14;
        }
        if (*(double *)(param_2 + 0x20) <= dVar14 && dVar14 != *(double *)(param_2 + 0x20)) {
          *(double *)(param_2 + 0x20) = dVar14;
        }
        *(double *)(param_1 + 0x11c0) = dVar12;
        *(double *)(param_1 + 0x11c8) = dVar14 + dVar2;
        if (dVar12 < *(double *)(param_2 + 8)) {
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
            *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
        }
        if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
            *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
            *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (uVar6 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar15 = dVar14 + dVar2 + *pdVar3;
        if (uVar6 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar3 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar6 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar13 = dVar12 + *pdVar4;
        dVar14 = dVar15 + *pdVar3;
        if (uVar6 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        uVar5 = *(uint *)(param_1 + 0x1c);
        uVar7 = uVar6 + 8;
        dVar2 = dVar13 + *pdVar3;
        uVar1 = uVar6 + 0x10;
        uVar6 = uVar7;
      } while (uVar1 <= uVar5);
    }
    dVar10 = dVar14;
    if (uVar7 < uVar5) {
      dVar10 = dVar14 + *(double *)(param_1 + 0x20 + (ulonglong)uVar7 * 8);
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
      if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
          *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
      }
      if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
          *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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
    dVar8 = *(double *)(param_2 + 8);
    if (dVar12 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = dVar12;
      dVar8 = dVar12;
    }
    dVar9 = *(double *)(param_2 + 0x18);
    if (dVar9 < dVar12) {
      *(double *)(param_2 + 0x18) = dVar12;
      dVar9 = *(double *)(param_2 + 0x18);
    }
    dVar12 = *(double *)(param_2 + 0x10);
    if (dVar15 < dVar12) {
      *(double *)(param_2 + 0x10) = dVar15;
      dVar12 = *(double *)(param_2 + 0x10);
    }
    dVar11 = *(double *)(param_2 + 0x20);
    if (dVar11 < dVar15) {
      *(double *)(param_2 + 0x20) = dVar15;
      dVar11 = *(double *)(param_2 + 0x20);
    }
    if (dVar13 < dVar8) {
      *(double *)(param_2 + 8) = dVar13;
    }
    if (dVar9 < dVar13) {
      *(double *)(param_2 + 0x18) = dVar13;
    }
    if (dVar14 < dVar12) {
      *(double *)(param_2 + 0x10) = dVar14;
    }
    if (dVar11 < dVar14) {
      *(double *)(param_2 + 0x20) = dVar14;
    }
    *(double *)(param_1 + 0x11c0) = dVar2;
    *(double *)(param_1 + 0x11c8) = dVar10;
    if (dVar2 < *(double *)(param_2 + 8)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11c0);
    }
    if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x11c0) &&
        *(double *)(param_1 + 0x11c0) != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x11c0);
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

