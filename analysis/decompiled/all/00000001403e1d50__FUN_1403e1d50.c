// Function: FUN_1403e1d50
// Addr: 1403e1d50
// Size: 3134 bytes


void FUN_1403e1d50(longlong param_1,char *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar6 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar6 & 7) < 4) {
    uVar7 = 0;
    if (7 < uVar6) {
      do {
        dVar2 = *(double *)(param_1 + 0x11c8);
        if (uVar7 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)uVar7 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar13 = *(double *)(param_1 + 0x11c0) + *pdVar4;
        if (uVar7 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar4 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar7 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar5 = &DAT_1404e4f20;
        }
        dVar12 = dVar13 + *pdVar5;
        dVar14 = dVar2 + *pdVar4;
        if (uVar7 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar3 = *pdVar4;
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
        dVar15 = *(double *)(param_2 + 8);
        if (dVar13 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar13;
          dVar15 = dVar13;
        }
        dVar11 = *(double *)(param_2 + 0x18);
        if (dVar11 < dVar13) {
          *(double *)(param_2 + 0x18) = dVar13;
          dVar11 = dVar13;
        }
        dVar13 = *(double *)(param_2 + 0x10);
        if (dVar2 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar2;
          dVar13 = dVar2;
        }
        dVar10 = *(double *)(param_2 + 0x20);
        if (dVar10 < dVar2) {
          *(double *)(param_2 + 0x20) = dVar2;
          dVar10 = dVar2;
        }
        if (dVar12 < dVar15) {
          *(double *)(param_2 + 8) = dVar12;
        }
        if (dVar11 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
        }
        if (dVar14 < dVar13) {
          *(double *)(param_2 + 0x10) = dVar14;
        }
        if (dVar10 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
        }
        *(double *)(param_1 + 0x11c0) = dVar12;
        *(double *)(param_1 + 0x11c8) = dVar14 + dVar3;
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
        if (uVar7 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar2 = dVar14 + dVar3 + *pdVar4;
        if (uVar7 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar4 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar7 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar5 = &DAT_1404e4f20;
        }
        dVar13 = dVar12 + *pdVar5;
        dVar14 = dVar2 + *pdVar4;
        if (uVar7 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        uVar6 = *(uint *)(param_1 + 0x1c);
        dVar3 = *pdVar4;
        dVar15 = dVar14;
        if ((uVar6 - uVar7 < 0x10) && ((uVar6 & 1) != 0)) {
          if (uVar7 + 8 < uVar6) {
            dVar15 = dVar14 + *(double *)(param_1 + ((ulonglong)(uVar7 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            dVar15 = dVar14 + DAT_14045dd10;
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
        dVar11 = *(double *)(param_2 + 8);
        if (dVar12 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar12;
          dVar11 = dVar12;
        }
        dVar10 = *(double *)(param_2 + 0x18);
        if (dVar10 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
          dVar10 = dVar12;
        }
        dVar12 = *(double *)(param_2 + 0x10);
        if (dVar2 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar2;
          dVar12 = dVar2;
        }
        dVar9 = *(double *)(param_2 + 0x20);
        if (dVar9 < dVar2) {
          *(double *)(param_2 + 0x20) = dVar2;
          dVar9 = dVar2;
        }
        if (dVar13 < dVar11) {
          *(double *)(param_2 + 8) = dVar13;
        }
        if (dVar10 < dVar13) {
          *(double *)(param_2 + 0x18) = dVar13;
        }
        if (dVar14 < dVar12) {
          *(double *)(param_2 + 0x10) = dVar14;
        }
        if (dVar9 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
        }
        *(double *)(param_1 + 0x11c0) = dVar13 + dVar3;
        *(double *)(param_1 + 0x11c8) = dVar15;
        if (dVar13 + dVar3 < *(double *)(param_2 + 8)) {
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
        uVar6 = uVar7 + 0x10;
        uVar7 = uVar7 + 8;
      } while (uVar6 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    dVar2 = *(double *)(param_1 + 0x11c8);
    if (uVar6 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar4 = &DAT_1404e4f20;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x20);
    }
    dVar13 = *(double *)(param_1 + 0x11c0) + *pdVar4;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar4 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar5 = &DAT_1404e4f20;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x30);
    }
    dVar12 = dVar13 + *pdVar4;
    dVar14 = dVar2 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar4 = &DAT_1404e4f20;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x38);
    }
    uVar6 = *(uint *)(param_1 + 0x1c);
    uVar8 = 4;
    dVar3 = dVar14 + *pdVar4;
    uVar7 = uVar8;
    if (0xb < uVar6) {
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
        dVar15 = *(double *)(param_2 + 8);
        if (dVar13 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar13;
          dVar15 = dVar13;
        }
        dVar11 = *(double *)(param_2 + 0x18);
        if (dVar11 < dVar13) {
          *(double *)(param_2 + 0x18) = dVar13;
          dVar11 = dVar13;
        }
        dVar13 = *(double *)(param_2 + 0x10);
        if (dVar2 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar2;
          dVar13 = dVar2;
        }
        dVar10 = *(double *)(param_2 + 0x20);
        if (dVar10 < dVar2) {
          *(double *)(param_2 + 0x20) = dVar2;
          dVar10 = dVar2;
        }
        if (dVar12 < dVar15) {
          *(double *)(param_2 + 8) = dVar12;
        }
        if (dVar11 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
        }
        if (dVar14 < dVar13) {
          *(double *)(param_2 + 0x10) = dVar14;
        }
        if (dVar10 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
        }
        *(double *)(param_1 + 0x11c0) = dVar12;
        *(double *)(param_1 + 0x11c8) = dVar3;
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
        dVar12 = *(double *)(param_1 + 0x11c0);
        if (uVar7 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)uVar7 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar14 = *(double *)(param_1 + 0x11c8) + *pdVar4;
        if (uVar7 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar4 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar7 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar5 = &DAT_1404e4f20;
        }
        dVar3 = dVar12 + *pdVar5;
        dVar2 = dVar14 + *pdVar4;
        if (uVar7 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar13 = dVar3 + *pdVar4;
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
        dVar15 = *(double *)(param_2 + 8);
        if (dVar12 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar12;
          dVar15 = dVar12;
        }
        dVar11 = *(double *)(param_2 + 0x18);
        if (dVar11 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
          dVar11 = dVar12;
        }
        dVar12 = *(double *)(param_2 + 0x10);
        if (dVar14 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar14;
          dVar12 = dVar14;
        }
        dVar10 = *(double *)(param_2 + 0x20);
        if (dVar10 < dVar14) {
          *(double *)(param_2 + 0x20) = dVar14;
          dVar10 = dVar14;
        }
        if (dVar3 < dVar15) {
          *(double *)(param_2 + 8) = dVar3;
        }
        if (dVar11 < dVar3) {
          *(double *)(param_2 + 0x18) = dVar3;
        }
        if (dVar2 < dVar12) {
          *(double *)(param_2 + 0x10) = dVar2;
        }
        if (dVar10 < dVar2) {
          *(double *)(param_2 + 0x20) = dVar2;
        }
        *(double *)(param_1 + 0x11c0) = dVar13;
        *(double *)(param_1 + 0x11c8) = dVar2;
        if (dVar13 < *(double *)(param_2 + 8)) {
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
        if (uVar7 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        dVar13 = dVar13 + *pdVar4;
        if (uVar7 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar4 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar7 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar5 = &DAT_1404e4f20;
        }
        dVar12 = dVar13 + *pdVar5;
        dVar14 = dVar2 + *pdVar4;
        if (uVar7 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar4 = (double *)(param_1 + ((ulonglong)(uVar7 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar4 = &DAT_1404e4f20;
        }
        uVar6 = *(uint *)(param_1 + 0x1c);
        uVar8 = uVar7 + 8;
        dVar3 = dVar14 + *pdVar4;
        uVar1 = uVar7 + 0x10;
        uVar7 = uVar8;
      } while (uVar1 <= uVar6);
    }
    dVar15 = dVar12;
    if (uVar8 < uVar6) {
      dVar15 = dVar12 + *(double *)(param_1 + 0x20 + (ulonglong)uVar8 * 8);
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
    dVar11 = *(double *)(param_2 + 8);
    if (dVar13 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = dVar13;
      dVar11 = dVar13;
    }
    dVar10 = *(double *)(param_2 + 0x18);
    if (dVar10 < dVar13) {
      *(double *)(param_2 + 0x18) = dVar13;
      dVar10 = dVar13;
    }
    dVar13 = *(double *)(param_2 + 0x10);
    if (dVar2 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar2;
      dVar13 = dVar2;
    }
    dVar9 = *(double *)(param_2 + 0x20);
    if (dVar9 < dVar2) {
      *(double *)(param_2 + 0x20) = dVar2;
      dVar9 = *(double *)(param_2 + 0x20);
    }
    if (dVar12 < dVar11) {
      *(double *)(param_2 + 8) = dVar12;
    }
    if (dVar10 < dVar12) {
      *(double *)(param_2 + 0x18) = dVar12;
    }
    if (dVar14 < dVar13) {
      *(double *)(param_2 + 0x10) = dVar14;
    }
    if (dVar9 < dVar14) {
      *(double *)(param_2 + 0x20) = dVar14;
    }
    *(double *)(param_1 + 0x11c0) = dVar15;
    *(double *)(param_1 + 0x11c8) = dVar3;
    if (dVar15 < *(double *)(param_2 + 8)) {
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

