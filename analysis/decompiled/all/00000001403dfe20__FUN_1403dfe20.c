// Function: FUN_1403dfe20
// Addr: 1403dfe20
// Size: 835 bytes


void FUN_1403dfe20(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  double *pdVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  uVar8 = *(uint *)(param_1 + 0x1c);
  pdVar2 = (double *)(param_1 + 0x11c0);
  uVar7 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x18);
  if (1 < uVar8) {
    do {
      dVar10 = *(double *)(param_1 + 0x11c8);
      uVar6 = (uint)uVar7;
      if (uVar6 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(puVar1 + (uVar7 + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar5 = (double *)&DAT_1404e4f20;
      }
      dVar9 = *pdVar2 + *pdVar5;
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
      *pdVar2 = dVar9;
      *(double *)(param_1 + 0x11c8) = dVar10;
      if (dVar9 < *(double *)(param_2 + 8)) {
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
      if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(puVar1 + ((ulonglong)(uVar6 + 1) + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar5 = (double *)&DAT_1404e4f20;
      }
      dVar3 = *pdVar5;
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
      *pdVar2 = dVar9;
      *(double *)(param_1 + 0x11c8) = dVar10 + dVar3;
      if (dVar9 < *(double *)(param_2 + 8)) {
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
      uVar8 = *(uint *)(param_1 + 0x1c);
      uVar7 = (ulonglong)(uVar6 + 2);
    } while (uVar6 + 4 <= uVar8);
  }
  if ((uint)uVar7 < uVar8) {
    dVar10 = *(double *)(param_1 + 0x20 + uVar7 * 8) + *pdVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x11c8);
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
    *pdVar2 = dVar10;
    *(undefined8 *)(param_1 + 0x11c8) = uVar4;
    if (dVar10 < *(double *)(param_2 + 8)) {
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

