// Function: FUN_1403dec50
// Addr: 1403dec50
// Size: 626 bytes


void FUN_1403dec50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  ulonglong uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 uVar10;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  if (*(int *)(param_1 + 0x1c) == 9) {
    pdVar9 = (double *)&DAT_1404e4f20;
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar7 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x20);
    }
    local_a8 = *(double *)(param_1 + 0x11c0) + *pdVar7;
    dStack_a0 = *(double *)(param_1 + 0x11c8) + *(double *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar7 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x30);
    }
    local_90 = dStack_a0 + *pdVar7;
    uVar10 = SUB84(local_90,0);
    uVar6 = (ulonglong)local_90 >> 0x20;
    local_88 = local_a8 + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar7 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x40);
    }
    dVar3 = local_88 + *pdVar7;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar7 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x48);
    }
    local_58 = dVar3 + *pdVar7;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar7 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar7 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x50);
    }
    local_60 = local_90 + *pdVar7;
    local_68 = local_58 + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar9 = (double *)(param_1 + 0x60);
    }
    dVar5 = local_68 + *pdVar9;
    uVar1 = *(undefined8 *)(param_1 + 0x11c8);
    local_98 = dVar3;
    local_80 = local_90;
    local_78 = dVar5;
    local_70 = uVar1;
    local_50 = local_90;
    FUN_1403bc950(param_2,&local_a8,&local_88,&local_98);
    auVar2._8_4_ = uVar10;
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)uVar6;
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar2;
    FUN_1403bc950(param_2,&local_58,&local_68,&local_78);
    auVar4._8_4_ = (int)uVar1;
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar4;
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

