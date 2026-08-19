// Function: FUN_140412530
// Addr: 140412530
// Size: 427 bytes


void FUN_140412530(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar9 = *(uint *)(param_1 + 0x1c);
  pdVar2 = (double *)(param_1 + 0x11c0);
  uVar8 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x18);
  if (1 < uVar9) {
    do {
      dVar3 = *pdVar2;
      uVar7 = (uint)uVar8;
      if (uVar7 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(puVar1 + (uVar8 + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = (double *)&DAT_1404e4ff0;
      }
      dVar5 = *(double *)(param_1 + 0x11c8) + *pdVar6;
      if (*param_2 == '\0') {
        *param_2 = '\x01';
        if (*pdVar2 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *pdVar2) {
          *(double *)(param_2 + 8) = *pdVar2;
        }
        if (*(double *)(param_2 + 0x18) <= *pdVar2 && *pdVar2 != *(double *)(param_2 + 0x18)) {
          *(double *)(param_2 + 0x18) = *pdVar2;
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
      *pdVar2 = dVar3;
      *(double *)(param_1 + 0x11c8) = dVar5;
      dVar12 = *(double *)(param_2 + 8);
      if (dVar3 < dVar12) {
        dVar12 = *pdVar2;
        *(double *)(param_2 + 8) = dVar12;
      }
      dVar13 = *(double *)(param_2 + 0x18);
      if (dVar13 < *pdVar2) {
        dVar13 = *pdVar2;
        *(double *)(param_2 + 0x18) = dVar13;
      }
      dVar10 = *(double *)(param_2 + 0x10);
      if (*(double *)(param_1 + 0x11c8) <= dVar10 && dVar10 != *(double *)(param_1 + 0x11c8)) {
        dVar10 = *(double *)(param_1 + 0x11c8);
        *(double *)(param_2 + 0x10) = dVar10;
      }
      dVar11 = *(double *)(param_2 + 0x20);
      if (dVar11 < *(double *)(param_1 + 0x11c8)) {
        dVar11 = *(double *)(param_1 + 0x11c8);
        *(double *)(param_2 + 0x20) = dVar11;
      }
      if (uVar7 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar6 = (double *)(puVar1 + ((ulonglong)(uVar7 + 1) + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = (double *)&DAT_1404e4ff0;
        dVar12 = *(double *)(param_2 + 8);
        dVar13 = *(double *)(param_2 + 0x18);
        dVar10 = *(double *)(param_2 + 0x10);
        dVar11 = *(double *)(param_2 + 0x20);
      }
      dVar4 = *pdVar6;
      if (*param_2 == '\0') {
        *param_2 = '\x01';
        if (*pdVar2 <= dVar12 && dVar12 != *pdVar2) {
          *(double *)(param_2 + 8) = *pdVar2;
        }
        if (dVar13 < *pdVar2) {
          *(double *)(param_2 + 0x18) = *pdVar2;
        }
        if (*(double *)(param_1 + 0x11c8) <= dVar10 && dVar10 != *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
        }
        if (dVar11 < *(double *)(param_1 + 0x11c8)) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
        }
      }
      *pdVar2 = dVar3 + dVar4;
      *(double *)(param_1 + 0x11c8) = dVar5;
      if (dVar3 + dVar4 < *(double *)(param_2 + 8)) {
        *(double *)(param_2 + 8) = *pdVar2;
      }
      if (*(double *)(param_2 + 0x18) <= *pdVar2 && *pdVar2 != *(double *)(param_2 + 0x18)) {
        *(double *)(param_2 + 0x18) = *pdVar2;
      }
      if (*(double *)(param_1 + 0x11c8) <= *(double *)(param_2 + 0x10) &&
          *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0x11c8)) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x11c8);
      }
      if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0x11c8) &&
          *(double *)(param_1 + 0x11c8) != *(double *)(param_2 + 0x20)) {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x11c8);
      }
      uVar9 = *(uint *)(param_1 + 0x1c);
      uVar8 = (ulonglong)(uVar7 + 2);
    } while (uVar7 + 4 <= uVar9);
  }
  if ((uint)uVar8 < uVar9) {
    dVar3 = *(double *)(param_1 + 0x20 + uVar8 * 8);
    dVar5 = *(double *)(param_1 + 0x11c8);
    dVar12 = *pdVar2;
    if (*param_2 == '\0') {
      *param_2 = '\x01';
      if (*pdVar2 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *pdVar2) {
        *(double *)(param_2 + 8) = *pdVar2;
      }
      if (*(double *)(param_2 + 0x18) <= *pdVar2 && *pdVar2 != *(double *)(param_2 + 0x18)) {
        *(double *)(param_2 + 0x18) = *pdVar2;
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
    *pdVar2 = dVar12;
    *(double *)(param_1 + 0x11c8) = dVar3 + dVar5;
    if (dVar12 < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *pdVar2;
    }
    if (*(double *)(param_2 + 0x18) <= *pdVar2 && *pdVar2 != *(double *)(param_2 + 0x18)) {
      *(double *)(param_2 + 0x18) = *pdVar2;
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

