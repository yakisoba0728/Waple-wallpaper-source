// Function: FUN_1403fac00
// Addr: 1403fac00
// Size: 543 bytes


void FUN_1403fac00(longlong param_1,char *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar8 = 0;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    do {
      if (uVar8 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar7 = (double *)(param_1 + ((ulonglong)(uVar8 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar7 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar8 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)uVar8 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = (double *)&DAT_1404e4ff0;
      }
      dVar10 = *(double *)(param_1 + 0x11c0) + *pdVar6;
      dVar5 = *(double *)(param_1 + 0x11c8) + *pdVar7;
      if (uVar8 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar7 = (double *)(param_1 + ((ulonglong)(uVar8 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar7 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar8 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)(uVar8 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = (double *)&DAT_1404e4ff0;
      }
      dVar12 = dVar10 + *pdVar6;
      dVar13 = dVar5 + *pdVar7;
      if (uVar8 + 5 < *(uint *)(param_1 + 0x1c)) {
        pdVar7 = (double *)(param_1 + ((ulonglong)(uVar8 + 5) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar7 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar8 + 4 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)(uVar8 + 4) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = (double *)&DAT_1404e4ff0;
      }
      dVar2 = *pdVar6;
      dVar3 = *pdVar7;
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
      if (dVar10 < *(double *)(param_2 + 8)) {
        *(double *)(param_2 + 8) = dVar10;
        dVar9 = dVar10;
      }
      dVar11 = *(double *)(param_2 + 0x18);
      if (dVar11 < dVar10) {
        *(double *)(param_2 + 0x18) = dVar10;
        dVar11 = dVar10;
      }
      dVar10 = *(double *)(param_2 + 0x10);
      if (dVar5 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar5;
        dVar10 = dVar5;
      }
      dVar4 = *(double *)(param_2 + 0x20);
      if (dVar4 < dVar5) {
        *(double *)(param_2 + 0x20) = dVar5;
        dVar4 = dVar5;
      }
      if (dVar12 < dVar9) {
        *(double *)(param_2 + 8) = dVar12;
      }
      if (dVar11 < dVar12) {
        *(double *)(param_2 + 0x18) = dVar12;
      }
      if (dVar13 < dVar10) {
        *(double *)(param_2 + 0x10) = dVar13;
      }
      if (dVar4 < dVar13) {
        *(double *)(param_2 + 0x20) = dVar13;
      }
      *(double *)(param_1 + 0x11c0) = dVar12 + dVar2;
      *(double *)(param_1 + 0x11c8) = dVar13 + dVar3;
      if (dVar12 + dVar2 < *(double *)(param_2 + 8)) {
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
      uVar1 = uVar8 + 0xc;
      uVar8 = uVar8 + 6;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

