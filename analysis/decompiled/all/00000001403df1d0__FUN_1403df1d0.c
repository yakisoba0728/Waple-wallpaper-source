// Function: FUN_1403df1d0
// Addr: 1403df1d0
// Size: 368 bytes


void FUN_1403df1d0(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double dStack_38;
  undefined8 uStack_30;
  double dStack_28;
  double dStack_20;
  double local_18;
  double local_10;
  
  if (*(int *)(param_1 + 0x1c) == 9) {
    pdVar3 = (double *)&DAT_1404e4ff0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x20);
    }
    local_68 = *(double *)(param_1 + 0x11c0) + *pdVar1;
    dStack_60 = *(double *)(param_1 + 0x11c8) + *(double *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar1 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar2 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x30);
    }
    local_50 = dStack_60 + *pdVar1;
    local_48 = local_68 + *pdVar2;
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x40);
    }
    local_58 = local_48 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x48);
    }
    local_18 = local_58 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar1 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar2 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x50);
    }
    dStack_28 = local_18 + *pdVar2;
    dStack_20 = local_50 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x60);
    }
    dStack_38 = dStack_28 + *pdVar3;
    uStack_30 = *(undefined8 *)(param_1 + 0x11c8);
    local_40 = local_50;
    local_10 = local_50;
    FUN_1403bcf60(param_1,param_2,&local_68,&local_48,&local_58);
    FUN_1403bcf60(param_1,param_2,&local_18,&dStack_28,&dStack_38);
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

