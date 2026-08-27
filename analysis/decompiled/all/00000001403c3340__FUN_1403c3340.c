// Function: FUN_1403c3340
// Addr: 1403c3340
// Size: 851 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c3340(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
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
    pdVar2 = (double *)&DAT_1404e4f20;
    dVar7 = 0.0;
    uVar4 = 0;
    do {
      if (uVar4 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar4 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar5 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      uVar3 = *(uint *)(param_1 + 0x1c);
      if (uVar4 < uVar3) {
        pdVar1 = (double *)(param_1 + ((ulonglong)uVar4 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar1 = (double *)&DAT_1404e4f20;
        uVar3 = *(uint *)(param_1 + 0x1c);
      }
      dVar6 = dVar6 + *pdVar1;
      dVar7 = dVar7 + *pdVar5;
      uVar4 = uVar4 + 2;
    } while (uVar4 < 10);
    if (uVar3 < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x20);
    }
    local_68 = *(double *)(param_1 + 0x11c0) + *pdVar1;
    dStack_60 = *(double *)(param_1 + 0x11c8) + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x38);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x30);
    }
    local_38 = local_68 + *pdVar1;
    local_30 = dStack_60 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 6) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x48);
    }
    if (*(uint *)(param_1 + 0x1c) < 5) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x40);
    }
    local_48 = local_38 + *pdVar1;
    local_40 = local_30 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 8) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x58);
    }
    if (*(uint *)(param_1 + 0x1c) < 7) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x50);
    }
    local_18 = local_48 + *pdVar1;
    local_10 = local_40 + *pdVar5;
    if (*(uint *)(param_1 + 0x1c) < 10) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar5 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar5 = (double *)(param_1 + 0x68);
    }
    if (*(uint *)(param_1 + 0x1c) < 9) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar1 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar1 = (double *)(param_1 + 0x60);
    }
    local_28 = local_18 + *pdVar1;
    local_20 = local_10 + *pdVar5;
    if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_140492fd4,
                         SUB84(dVar6,0) & _DAT_140492fd0) <=
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_140492fd4,
                         SUB84(dVar7,0) & _DAT_140492fd0)) {
      local_58 = *(double *)(param_1 + 0x11c0);
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      else {
        pdVar2 = (double *)(param_1 + 0x70);
      }
      local_50 = local_20 + *pdVar2;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 0xb) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      else {
        pdVar2 = (double *)(param_1 + 0x70);
      }
      local_58 = local_28 + *pdVar2;
      local_50 = *(double *)(param_1 + 0x11c8);
    }
    FUN_1403bcb10(param_1,param_2,&local_68,&local_38,&local_48);
    FUN_1403bcb10(param_1,param_2,&local_18,&local_28,&local_58);
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  return;
}

