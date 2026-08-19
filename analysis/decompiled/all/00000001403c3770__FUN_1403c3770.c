// Function: FUN_1403c3770
// Addr: 1403c3770
// Size: 642 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c3770(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  ulonglong uVar3;
  double *pdVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double local_30;
  
  if (*(int *)(param_1 + 0x1c) == 0xb) {
    pdVar6 = (double *)&DAT_1404e4ff0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    uVar5 = 0;
    do {
      if (uVar5 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar8 = (double *)(param_1 + ((ulonglong)(uVar5 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar8 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      uVar7 = *(uint *)(param_1 + 0x1c);
      if (uVar5 < uVar7) {
        pdVar4 = (double *)(param_1 + ((ulonglong)uVar5 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar4 = (double *)&DAT_1404e4ff0;
        uVar7 = *(uint *)(param_1 + 0x1c);
      }
      dVar9 = dVar9 + *pdVar4;
      dVar10 = dVar10 + *pdVar8;
      uVar5 = uVar5 + 2;
    } while (uVar5 < 10);
    if (uVar7 < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar4 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x20);
    }
    local_88 = *(double *)(param_1 + 0x11c0) + *pdVar4;
    dStack_80 = *(double *)(param_1 + 0x11c8) + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar4 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x30);
    }
    local_58 = local_88 + *pdVar4;
    local_50 = dStack_80 + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x48);
    }
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar4 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x40);
    }
    dVar2 = local_58 + *pdVar4;
    local_60 = local_50 + *pdVar8;
    uVar11 = SUB84(local_60,0);
    uVar3 = (ulonglong)local_60 >> 0x20;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar4 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x50);
    }
    local_38 = dVar2 + *pdVar4;
    local_30 = local_60 + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 10) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x68);
    }
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar4 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar4 = (double *)(param_1 + 0x60);
    }
    dStack_48 = local_38 + *pdVar4;
    dStack_40 = local_30 + *pdVar8;
    if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_1404930a4,
                         SUB84(dVar9,0) & _DAT_1404930a0) <=
        (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_1404930a4,
                         SUB84(dVar10,0) & _DAT_1404930a0)) {
      dStack_78 = *(double *)(param_1 + 0x11c0);
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar6 = (double *)(param_1 + 0x70);
      }
      dStack_70 = dStack_40 + *pdVar6;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar6 = (double *)(param_1 + 0x70);
      }
      dStack_78 = dStack_48 + *pdVar6;
      dStack_70 = *(double *)(param_1 + 0x11c8);
    }
    local_68 = dVar2;
    FUN_1403bca20(param_2,&local_88,&local_58,&local_68);
    auVar1._8_4_ = uVar11;
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)uVar3;
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar1;
    FUN_1403bca20(param_2,&local_38,&dStack_48,&dStack_78);
    *(double *)(param_1 + 0x11c0) = dStack_78;
    *(double *)(param_1 + 0x11c8) = dStack_70;
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

