// Function: FUN_140412b90
// Addr: 140412b90
// Size: 523 bytes


void FUN_140412b90(longlong param_1,char *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar5 = *(uint *)(param_1 + 0x1c);
  dVar9 = *(double *)(param_1 + 0x11c0);
  dVar11 = *(double *)(param_1 + 0x11c8);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else if (uVar5 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar6 = 1;
    DAT_1404e4ff0 = DAT_14045dde0;
    uVar5 = *(uint *)(param_1 + 0x1c);
    dVar9 = dVar9 + DAT_14045dde0;
  }
  else {
    dVar9 = dVar9 + *(double *)(param_1 + 0x20);
    uVar6 = 1;
  }
  if (uVar6 + 4 <= uVar5) {
    do {
      if (uVar6 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)uVar6 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar3 = &DAT_1404e4ff0;
      }
      dVar11 = dVar11 + *pdVar3;
      if (uVar6 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar3 = &DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar4 = &DAT_1404e4ff0;
      }
      dVar10 = dVar9 + *pdVar4;
      dVar2 = dVar11 + *pdVar3;
      if (uVar6 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar3 = &DAT_1404e4ff0;
      }
      dVar1 = *pdVar3;
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
      if (dVar9 < dVar8) {
        *(double *)(param_2 + 8) = dVar9;
        dVar8 = *(double *)(param_2 + 8);
      }
      dVar7 = *(double *)(param_2 + 0x18);
      if (dVar7 < dVar9) {
        *(double *)(param_2 + 0x18) = dVar9;
        dVar7 = *(double *)(param_2 + 0x18);
      }
      if (dVar11 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar11;
        dVar8 = *(double *)(param_2 + 8);
        dVar7 = *(double *)(param_2 + 0x18);
      }
      if (*(double *)(param_2 + 0x20) <= dVar11 && dVar11 != *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = dVar11;
      }
      if (dVar10 < dVar8) {
        *(double *)(param_2 + 8) = dVar10;
      }
      if (dVar7 < dVar10) {
        *(double *)(param_2 + 0x18) = dVar10;
      }
      if (dVar2 < *(double *)(param_2 + 0x10)) {
        *(double *)(param_2 + 0x10) = dVar2;
      }
      if (*(double *)(param_2 + 0x20) <= dVar2 && dVar2 != *(double *)(param_2 + 0x20)) {
        *(double *)(param_2 + 0x20) = dVar2;
      }
      *(double *)(param_1 + 0x11c0) = dVar10;
      *(double *)(param_1 + 0x11c8) = dVar2 + dVar1;
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
      dVar9 = *(double *)(param_1 + 0x11c0);
      dVar11 = *(double *)(param_1 + 0x11c8);
      uVar5 = uVar6 + 8;
      uVar6 = uVar6 + 4;
    } while (uVar5 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

