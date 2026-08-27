// Function: FUN_1403df620
// Addr: 1403df620
// Size: 438 bytes


void FUN_1403df620(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  local_78 = *(double *)(param_1 + 0x11c0);
  dStack_70 = *(double *)(param_1 + 0x11c8);
  uVar5 = *(uint *)(param_1 + 0x1c);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar3 = (double *)&DAT_1404e4f20;
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
    else {
      pdVar3 = (double *)(param_1 + 0x20);
    }
    uVar6 = 1;
    dStack_70 = dStack_70 + *pdVar3;
  }
  if (uVar6 + 4 <= uVar5) {
    do {
      if (uVar6 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)uVar6 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar3 = (double *)&DAT_1404e4f20;
      }
      local_78 = local_78 + *pdVar3;
      if (uVar6 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar3 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      if (uVar6 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar4 = (double *)(param_1 + ((ulonglong)(uVar6 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar4 = (double *)&DAT_1404e4f20;
      }
      dVar2 = dStack_70 + *pdVar3;
      local_68 = local_78 + *pdVar4;
      if (uVar6 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar3 = (double *)(param_1 + ((ulonglong)(uVar6 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar3 = (double *)&DAT_1404e4f20;
      }
      dVar1 = local_68 + *pdVar3;
      dStack_60 = dVar2;
      local_58 = dVar1;
      local_50 = dVar2;
      FUN_1403bc950(param_2,&local_78,&local_68,&local_58);
      *(double *)(param_1 + 0x11c0) = dVar1;
      *(double *)(param_1 + 0x11c8) = dVar2;
      local_78 = *(double *)(param_1 + 0x11c0);
      dStack_70 = *(double *)(param_1 + 0x11c8);
      uVar5 = uVar6 + 8;
      uVar6 = uVar6 + 4;
    } while (uVar5 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

