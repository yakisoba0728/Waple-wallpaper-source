// Function: FUN_1403fa720
// Addr: 1403fa720
// Size: 553 bytes


void FUN_1403fa720(longlong param_1,char *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar7 = 0;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    do {
      if (uVar7 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)(uVar7 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar6 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar7 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)uVar7 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = (double *)&DAT_1404e4ff0;
      }
      dVar10 = *(double *)(param_1 + 0x11c0) + *pdVar5;
      dVar4 = *(double *)(param_1 + 0x11c8) + *pdVar6;
      if (uVar7 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)(uVar7 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar6 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar7 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = (double *)&DAT_1404e4ff0;
      }
      dVar11 = dVar10 + *pdVar5;
      dVar12 = dVar4 + *pdVar6;
      if (uVar7 + 5 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(param_1 + ((ulonglong)(uVar7 + 5) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar6 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar7 + 4 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar7 + 4) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = (double *)&DAT_1404e4ff0;
      }
      dVar2 = *pdVar5;
      dVar3 = *pdVar6;
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
      if (dVar10 < dVar9) {
        *(double *)(param_2 + 8) = dVar10;
        dVar9 = *(double *)(param_2 + 8);
      }
      dVar8 = *(double *)(param_2 + 0x18);
      if (dVar8 < dVar10) {
        *(double *)(param_2 + 0x18) = dVar10;
        dVar8 = *(double *)(param_2 + 0x18);
      }
      if (dVar4 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar4;
        dVar9 = *(double *)(param_2 + 8);
        dVar8 = *(double *)(param_2 + 0x18);
      }
      if (*(double *)(param_2 + 0x20) <= dVar4 && dVar4 != *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = dVar4;
      }
      if (dVar11 < dVar9) {
        *(double *)(param_2 + 8) = dVar11;
      }
      if (dVar8 < dVar11) {
        *(double *)(param_2 + 0x18) = dVar11;
      }
      if (dVar12 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar12;
      }
      if (*(double *)(param_2 + 0x20) <= dVar12 && dVar12 != *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = dVar12;
      }
      *(double *)(param_1 + 0x11c0) = dVar11 + dVar2;
      *(double *)(param_1 + 0x11c8) = dVar12 + dVar3;
      if (dVar11 + dVar2 < *(double *)(param_2 + 8)) {
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
      uVar1 = uVar7 + 0xc;
      uVar7 = uVar7 + 6;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

