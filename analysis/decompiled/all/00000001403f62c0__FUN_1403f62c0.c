// Function: FUN_1403f62c0
// Addr: 1403f62c0
// Size: 271 bytes


void FUN_1403f62c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 0x1c) - 2;
    pdVar7 = (double *)&DAT_1404e4ff0;
    uVar8 = 0;
    uVar9 = uVar8;
    if (5 < uVar1) {
      do {
        if (uVar8 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar6 = (double *)(param_1 + ((ulonglong)(uVar8 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar6 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar8 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)uVar8 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar5 = (double *)&DAT_1404e4ff0;
        }
        local_58 = *(double *)(param_1 + 0x11c0) + *pdVar5;
        dStack_50 = *(double *)(param_1 + 0x11c8) + *pdVar6;
        if (uVar8 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar6 = (double *)(param_1 + ((ulonglong)(uVar8 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar6 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar8 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar8 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar5 = (double *)&DAT_1404e4ff0;
        }
        dStack_38 = local_58 + *pdVar5;
        dStack_30 = dStack_50 + *pdVar6;
        if (uVar8 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar6 = (double *)(param_1 + ((ulonglong)(uVar8 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar6 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar8 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar5 = (double *)(param_1 + ((ulonglong)(uVar8 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar5 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = dStack_30 + *pdVar6;
        dVar3 = dStack_38 + *pdVar5;
        dStack_48 = dVar3;
        dStack_40 = dVar4;
        FUN_1403bca20(param_2,&local_58,&dStack_38,&dStack_48);
        uVar9 = uVar8 + 6;
        *(double *)(param_1 + 0x11c0) = dVar3;
        *(double *)(param_1 + 0x11c8) = dVar4;
        uVar2 = uVar8 + 0xc;
        uVar8 = uVar9;
      } while (uVar2 <= uVar1);
    }
    if (uVar9 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar6 = (double *)(param_1 + ((ulonglong)(uVar9 + 1) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar6 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar9 < *(uint *)(param_1 + 0x1c)) {
      pdVar7 = (double *)(param_1 + ((ulonglong)uVar9 + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    dStack_50 = *(double *)(param_1 + 0x11c8) + *pdVar6;
    local_58 = *(double *)(param_1 + 0x11c0) + *pdVar7;
    FUN_1403eae30(param_1,param_2,&local_58);
  }
  return;
}

