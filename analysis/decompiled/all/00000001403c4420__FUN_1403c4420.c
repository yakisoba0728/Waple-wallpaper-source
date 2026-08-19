// Function: FUN_1403c4420
// Addr: 1403c4420
// Size: 523 bytes


void FUN_1403c4420(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 uVar9;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  if (*(int *)(param_1 + 0x1c) == 0xd) {
    pdVar8 = (double *)&DAT_1404e4ff0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar6 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x20);
    }
    local_a8 = *(double *)(param_1 + 0x11c0) + *pdVar6;
    dStack_a0 = *(double *)(param_1 + 0x11c8) + *(double *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar7 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x30);
    }
    local_88 = local_a8 + *pdVar7;
    local_80 = dStack_a0 + *pdVar6;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x48);
    }
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar7 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x40);
    }
    dVar2 = local_88 + *pdVar7;
    local_90 = local_80 + *pdVar6;
    uVar9 = SUB84(local_90,0);
    uVar5 = (ulonglong)local_90 >> 0x20;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar7 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x50);
    }
    local_58 = dVar2 + *pdVar7;
    local_50 = local_90 + *pdVar6;
    if (*(uint *)(param_1 + 0x1c) < 10) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x68);
    }
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar7 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x60);
    }
    local_68 = local_58 + *pdVar7;
    local_60 = local_50 + *pdVar6;
    if (*(uint *)(param_1 + 0x1c) < 0xc) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar6 = (double *)(param_1 + 0x78);
    }
    if (*(uint *)(param_1 + 0x1c) < 0xb) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x70);
    }
    dVar3 = local_68 + *pdVar8;
    dVar4 = local_60 + *pdVar6;
    local_98 = dVar2;
    dStack_78 = dVar3;
    dStack_70 = dVar4;
    FUN_1403bca20(param_2,&local_a8,&local_88,&local_98);
    auVar1._8_4_ = uVar9;
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)uVar5;
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar1;
    FUN_1403bca20(param_2,&local_58,&local_68,&dStack_78);
    *(double *)(param_1 + 0x11c0) = dVar3;
    *(double *)(param_1 + 0x11c8) = dVar4;
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

