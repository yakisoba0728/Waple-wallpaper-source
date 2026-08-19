// Function: FUN_1403c3e30
// Addr: 1403c3e30
// Size: 832 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c3e30(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(int *)(param_1 + 0x1c) == 0xb) {
    dVar6 = 0.0;
    pdVar3 = (double *)&DAT_1404e4ff0;
    dVar7 = 0.0;
    uVar2 = 0;
    uVar4 = 0xb;
    do {
      if (uVar2 + 1 < uVar4) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar2 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar5 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      uVar4 = *(uint *)(param_1 + 0x1c);
      if (uVar2 < uVar4) {
        pdVar1 = (double *)(param_1 + ((ulonglong)uVar2 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar1 = (double *)&DAT_1404e4ff0;
        uVar4 = *(uint *)(param_1 + 0x1c);
      }
      dVar6 = dVar6 + *pdVar1;
      dVar7 = dVar7 + *pdVar5;
      uVar2 = uVar2 + 2;
    } while (uVar2 < 10);
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x20);
    }
    local_68 = *(double *)(param_1 + 0x11c0) + *pdVar1;
    dStack_60 = *(double *)(param_1 + 0x11c8) + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x30);
    }
    local_38 = local_68 + *pdVar1;
    local_30 = dStack_60 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x48);
    }
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x40);
    }
    local_48 = local_38 + *pdVar1;
    local_40 = local_30 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x50);
    }
    local_18 = local_48 + *pdVar1;
    local_10 = local_40 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 10) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x68);
    }
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar1 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x60);
    }
    local_28 = local_18 + *pdVar1;
    local_20 = local_10 + *pdVar5;
    if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_1404930a4,
                         SUB84(dVar6,0) & _DAT_1404930a0) <=
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_1404930a4,
                         SUB84(dVar7,0) & _DAT_1404930a0)) {
      local_58 = *(double *)(param_1 + 0x11c0);
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar3 = (double *)(param_1 + 0x70);
      }
      local_50 = local_20 + *pdVar3;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar3 = (double *)(param_1 + 0x70);
      }
      local_58 = local_28 + *pdVar3;
      local_50 = *(double *)(param_1 + 0x11c8);
    }
    FUN_1403bcf60(param_1,param_2,&local_68,&local_38,&local_48);
    FUN_1403bcf60(param_1,param_2,&local_18,&local_28,&local_58);
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

