// Function: FUN_1403deed0
// Addr: 1403deed0
// Size: 551 bytes


void FUN_1403deed0(longlong param_1,undefined8 param_2)

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
  double local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(int *)(param_1 + 0x1c) == 9) {
    pdVar3 = (double *)&DAT_1404e4f20;
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x20);
    }
    local_68 = *(double *)(param_1 + 0x11c0) + *pdVar1;
    dStack_60 = *(double *)(param_1 + 0x11c8) + *(double *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar1 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar2 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x30);
    }
    local_50 = dStack_60 + *pdVar1;
    local_48 = local_68 + *pdVar2;
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x40);
    }
    local_58 = local_48 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x48);
    }
    local_18 = local_58 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar1 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar2 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar2 = (double *)(param_1 + 0x50);
    }
    local_28 = local_18 + *pdVar2;
    local_20 = local_50 + *pdVar1;
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar3 = (double *)(param_1 + 0x60);
    }
    local_38 = local_28 + *pdVar3;
    local_30 = *(undefined8 *)(param_1 + 0x11c8);
    local_40 = local_50;
    local_10 = local_50;
    FUN_1403bccd0(param_1,param_2,&local_68,&local_48,&local_58);
    FUN_1403bccd0(param_1,param_2,&local_18,&local_28,&local_38);
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

