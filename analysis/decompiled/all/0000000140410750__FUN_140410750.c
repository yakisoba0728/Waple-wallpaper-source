// Function: FUN_140410750
// Addr: 140410750
// Size: 3103 bytes


void FUN_140410750(longlong param_1,char *param_2)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar4 & 7) < 4) {
    uVar5 = 0;
    if (7 < uVar4) {
      do {
        dVar11 = *(double *)(param_1 + 0x11c0);
        if (uVar5 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)uVar5 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar13 = *(double *)(param_1 + 0x11c8) + *pdVar2;
        if (uVar5 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar2 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar5 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar5 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar12 = dVar11 + *pdVar3;
        dVar10 = dVar13 + *pdVar2;
        if (uVar5 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar15 = dVar12 + *pdVar2;
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
        if (dVar11 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar11;
          dVar8 = dVar11;
        }
        dVar9 = *(double *)(param_2 + 0x18);
        if (dVar9 < dVar11) {
          *(double *)(param_2 + 0x18) = dVar11;
          dVar9 = dVar11;
        }
        dVar11 = *(double *)(param_2 + 0x10);
        if (dVar13 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar13;
          dVar11 = dVar13;
        }
        dVar14 = *(double *)(param_2 + 0x20);
        if (dVar14 < dVar13) {
          *(double *)(param_2 + 0x20) = dVar13;
          dVar14 = dVar13;
        }
        if (dVar12 < dVar8) {
          *(double *)(param_2 + 8) = dVar12;
        }
        if (dVar9 < dVar12) {
          *(double *)(param_2 + 0x18) = dVar12;
        }
        if (dVar10 < dVar11) {
          *(double *)(param_2 + 0x10) = dVar10;
        }
        if (dVar14 < dVar10) {
          *(double *)(param_2 + 0x20) = dVar10;
        }
        *(double *)(param_1 + 0x11c0) = dVar15;
        *(double *)(param_1 + 0x11c8) = dVar10;
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
        if (uVar5 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar15 = dVar15 + *pdVar2;
        if (uVar5 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar2 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar5 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar5 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar11 = dVar15 + *pdVar3;
        dVar13 = dVar10 + *pdVar2;
        if (uVar5 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        uVar4 = *(uint *)(param_1 + 0x1c);
        dVar12 = *pdVar2;
        dVar8 = dVar11;
        if ((uVar4 - uVar5 < 0x10) && ((uVar4 & 1) != 0)) {
          if (uVar5 + 8 < uVar4) {
            dVar8 = dVar11 + *(double *)(param_1 + ((ulonglong)(uVar5 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            dVar8 = dVar11 + DAT_14045dd10;
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
        dVar9 = *(double *)(param_2 + 8);
        if (dVar15 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar15;
          dVar9 = dVar15;
        }
        dVar14 = *(double *)(param_2 + 0x18);
        if (dVar14 < dVar15) {
          *(double *)(param_2 + 0x18) = dVar15;
          dVar14 = dVar15;
        }
        dVar15 = *(double *)(param_2 + 0x10);
        if (dVar10 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar10;
          dVar15 = dVar10;
        }
        dVar7 = *(double *)(param_2 + 0x20);
        if (dVar7 < dVar10) {
          *(double *)(param_2 + 0x20) = dVar10;
          dVar7 = dVar10;
        }
        if (dVar11 < dVar9) {
          *(double *)(param_2 + 8) = dVar11;
        }
        if (dVar14 < dVar11) {
          *(double *)(param_2 + 0x18) = dVar11;
        }
        if (dVar13 < dVar15) {
          *(double *)(param_2 + 0x10) = dVar13;
        }
        if (dVar7 < dVar13) {
          *(double *)(param_2 + 0x20) = dVar13;
        }
        *(double *)(param_1 + 0x11c0) = dVar8;
        *(double *)(param_1 + 0x11c8) = dVar13 + dVar12;
        if (dVar8 < *(double *)(param_2 + 8)) {
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
        uVar4 = uVar5 + 0x10;
        uVar5 = uVar5 + 8;
      } while (uVar4 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    dVar11 = *(double *)(param_1 + 0x11c0);
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar2 = &DAT_1404e4f20;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x20);
    }
    dVar13 = *(double *)(param_1 + 0x11c8) + *pdVar2;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar2 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar3 = &DAT_1404e4f20;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x30);
    }
    dVar12 = dVar13 + *pdVar3;
    dVar10 = dVar11 + *pdVar2;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar2 = &DAT_1404e4f20;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x38);
    }
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar6 = 4;
    dVar15 = dVar10 + *pdVar2;
    uVar5 = uVar6;
    if (0xb < uVar4) {
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
        dVar8 = *(double *)(param_2 + 8);
        if (dVar11 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar11;
          dVar8 = dVar11;
        }
        dVar9 = *(double *)(param_2 + 0x18);
        if (dVar9 < dVar11) {
          *(double *)(param_2 + 0x18) = dVar11;
          dVar9 = dVar11;
        }
        dVar11 = *(double *)(param_2 + 0x10);
        if (dVar13 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar13;
          dVar11 = dVar13;
        }
        dVar14 = *(double *)(param_2 + 0x20);
        if (dVar14 < dVar13) {
          *(double *)(param_2 + 0x20) = dVar13;
          dVar14 = dVar13;
        }
        if (dVar10 < dVar8) {
          *(double *)(param_2 + 8) = dVar10;
        }
        if (dVar9 < dVar10) {
          *(double *)(param_2 + 0x18) = dVar10;
        }
        if (dVar12 < dVar11) {
          *(double *)(param_2 + 0x10) = dVar12;
        }
        if (dVar14 < dVar12) {
          *(double *)(param_2 + 0x20) = dVar12;
        }
        *(double *)(param_1 + 0x11c0) = dVar15;
        *(double *)(param_1 + 0x11c8) = dVar12;
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
        dVar13 = *(double *)(param_1 + 0x11c8);
        if (uVar5 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)uVar5 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar10 = *(double *)(param_1 + 0x11c0) + *pdVar2;
        if (uVar5 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar2 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar5 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar5 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar12 = dVar13 + *pdVar2;
        dVar11 = dVar10 + *pdVar3;
        if (uVar5 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar15 = *pdVar2;
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
        if (dVar10 < *(double *)(param_2 + 8)) {
          *(double *)(param_2 + 8) = dVar10;
          dVar8 = dVar10;
        }
        dVar9 = *(double *)(param_2 + 0x18);
        if (dVar9 < dVar10) {
          *(double *)(param_2 + 0x18) = dVar10;
          dVar9 = dVar10;
        }
        dVar10 = *(double *)(param_2 + 0x10);
        if (dVar13 < *(double *)(param_2 + 0x10)) {
          *(double *)(param_2 + 0x10) = dVar13;
          dVar10 = dVar13;
        }
        dVar14 = *(double *)(param_2 + 0x20);
        if (dVar14 < dVar13) {
          *(double *)(param_2 + 0x20) = dVar13;
          dVar14 = dVar13;
        }
        if (dVar11 < dVar8) {
          *(double *)(param_2 + 8) = dVar11;
        }
        if (dVar9 < dVar11) {
          *(double *)(param_2 + 0x18) = dVar11;
        }
        if (dVar12 < dVar10) {
          *(double *)(param_2 + 0x10) = dVar12;
        }
        if (dVar14 < dVar12) {
          *(double *)(param_2 + 0x20) = dVar12;
        }
        *(double *)(param_1 + 0x11c0) = dVar11;
        *(double *)(param_1 + 0x11c8) = dVar12 + dVar15;
        if (dVar11 < *(double *)(param_2 + 8)) {
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
        if (uVar5 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        dVar13 = dVar12 + dVar15 + *pdVar2;
        if (uVar5 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar2 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar5 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar3 = (double *)(param_1 + ((ulonglong)(uVar5 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar3 = &DAT_1404e4f20;
        }
        dVar10 = dVar11 + *pdVar3;
        dVar12 = dVar13 + *pdVar2;
        if (uVar5 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar2 = (double *)(param_1 + ((ulonglong)(uVar5 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar2 = &DAT_1404e4f20;
        }
        uVar4 = *(uint *)(param_1 + 0x1c);
        uVar6 = uVar5 + 8;
        dVar15 = dVar10 + *pdVar2;
        uVar1 = uVar5 + 0x10;
        uVar5 = uVar6;
      } while (uVar1 <= uVar4);
    }
    dVar8 = dVar12;
    if (uVar6 < uVar4) {
      dVar8 = dVar12 + *(double *)(param_1 + 0x20 + (ulonglong)uVar6 * 8);
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
    dVar9 = *(double *)(param_2 + 8);
    if (dVar11 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = dVar11;
      dVar9 = dVar11;
    }
    dVar14 = *(double *)(param_2 + 0x18);
    if (dVar14 < dVar11) {
      *(double *)(param_2 + 0x18) = dVar11;
      dVar14 = dVar11;
    }
    dVar11 = *(double *)(param_2 + 0x10);
    if (dVar13 < *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = dVar13;
      dVar11 = dVar13;
    }
    dVar7 = *(double *)(param_2 + 0x20);
    if (dVar7 < dVar13) {
      *(double *)(param_2 + 0x20) = dVar13;
      dVar7 = *(double *)(param_2 + 0x20);
    }
    if (dVar10 < dVar9) {
      *(double *)(param_2 + 8) = dVar10;
    }
    if (dVar14 < dVar10) {
      *(double *)(param_2 + 0x18) = dVar10;
    }
    if (dVar12 < dVar11) {
      *(double *)(param_2 + 0x10) = dVar12;
    }
    if (dVar7 < dVar12) {
      *(double *)(param_2 + 0x20) = dVar12;
    }
    *(double *)(param_1 + 0x11c0) = dVar15;
    *(double *)(param_1 + 0x11c8) = dVar8;
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

