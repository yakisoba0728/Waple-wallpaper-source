// Function: FUN_1403fa010
// Addr: 1403fa010
// Size: 220 bytes


void FUN_1403fa010(longlong param_1,char *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  double dVar7;
  
  uVar6 = 0;
  if (1 < *(uint *)(param_1 + 0x1c)) {
    do {
      dVar2 = *(double *)(param_1 + 0x11c8);
      if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar6 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar5 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar6 < *(uint *)(param_1 + 0x1c)) {
        pdVar4 = (double *)(param_1 + ((ulonglong)uVar6 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar4 = (double *)&DAT_1404e4ff0;
      }
      dVar7 = *(double *)(param_1 + 0x11c0) + *pdVar4;
      dVar3 = *pdVar5;
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
      *(double *)(param_1 + 0x11c0) = dVar7;
      *(double *)(param_1 + 0x11c8) = dVar2 + dVar3;
      if (dVar7 < *(double *)(param_2 + 8)) {
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
      uVar1 = uVar6 + 4;
      uVar6 = uVar6 + 2;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

