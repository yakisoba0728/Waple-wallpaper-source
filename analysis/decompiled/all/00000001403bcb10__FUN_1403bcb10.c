// Function: FUN_1403bcb10
// Addr: 1403bcb10
// Size: 442 bytes


void FUN_1403bcb10(longlong param_1,char *param_2,double *param_3,double *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
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
  if (*param_3 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *param_3) {
    *(double *)(param_2 + 8) = *param_3;
  }
  if (*(double *)(param_2 + 0x18) <= *param_3 && *param_3 != *(double *)(param_2 + 0x18)) {
    *(double *)(param_2 + 0x18) = *param_3;
  }
  dVar3 = *(double *)(param_2 + 0x10);
  if (param_3[1] <= dVar3 && dVar3 != param_3[1]) {
    *(double *)(param_2 + 0x10) = param_3[1];
    dVar3 = *(double *)(param_2 + 0x10);
  }
  dVar4 = *(double *)(param_2 + 0x20);
  if (dVar4 < param_3[1]) {
    *(double *)(param_2 + 0x20) = param_3[1];
    dVar4 = *(double *)(param_2 + 0x20);
  }
  if (*param_4 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *param_4) {
    dVar3 = *(double *)(param_2 + 0x10);
    dVar4 = *(double *)(param_2 + 0x20);
    *(double *)(param_2 + 8) = *param_4;
  }
  if (*(double *)(param_2 + 0x18) <= *param_4 && *param_4 != *(double *)(param_2 + 0x18)) {
    *(double *)(param_2 + 0x18) = *param_4;
  }
  if (param_4[1] <= dVar3 && dVar3 != param_4[1]) {
    *(double *)(param_2 + 0x10) = param_4[1];
  }
  if (dVar4 < param_4[1]) {
    *(double *)(param_2 + 0x20) = param_4[1];
  }
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(undefined8 *)(param_1 + 0x11c0) = uVar1;
  *(undefined8 *)(param_1 + 0x11c8) = uVar2;
  if (*(double *)(param_1 + 0x11c0) <= *(double *)(param_2 + 8) &&
      *(double *)(param_2 + 8) != *(double *)(param_1 + 0x11c0)) {
    *(undefined8 *)(param_2 + 8) = uVar1;
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
  return;
}

