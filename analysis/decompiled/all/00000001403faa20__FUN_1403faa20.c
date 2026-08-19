// Function: FUN_1403faa20
// Addr: 1403faa20
// Size: 265 bytes


void FUN_1403faa20(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  uVar6 = 0;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    do {
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
      local_58 = *(double *)(param_1 + 0x11c0) + *pdVar4;
      dStack_50 = *(double *)(param_1 + 0x11c8) + *pdVar5;
      if (uVar6 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar6 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar5 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar6 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar4 = (double *)&DAT_1404e4ff0;
      }
      dStack_38 = local_58 + *pdVar4;
      dStack_30 = dStack_50 + *pdVar5;
      if (uVar6 + 5 < *(uint *)(param_1 + 0x1c)) {
        pdVar5 = (double *)(param_1 + ((ulonglong)(uVar6 + 5) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar5 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar6 + 4 < *(uint *)(param_1 + 0x1c)) {
        pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 4) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar4 = (double *)&DAT_1404e4ff0;
      }
      dVar3 = dStack_30 + *pdVar5;
      dVar2 = dStack_38 + *pdVar4;
      dStack_48 = dVar2;
      dStack_40 = dVar3;
      FUN_1403bca20(param_2,&local_58,&dStack_38,&dStack_48);
      *(double *)(param_1 + 0x11c0) = dVar2;
      *(double *)(param_1 + 0x11c8) = dVar3;
      uVar1 = uVar6 + 0xc;
      uVar6 = uVar6 + 6;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

