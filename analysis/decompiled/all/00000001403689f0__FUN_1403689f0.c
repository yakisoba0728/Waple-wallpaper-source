// Function: FUN_1403689f0
// Addr: 1403689f0
// Size: 748 bytes


void FUN_1403689f0(uint *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint *local_48;
  uint *local_40;
  
  uVar4 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar4 & 0xfffffffffffffffc) < 0x81) {
      if (param_1 != param_2) {
        for (puVar6 = param_1 + 1; puVar6 != param_2; puVar6 = puVar6 + 1) {
          uVar1 = *puVar6;
          if (uVar1 < *param_1) {
            FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar6 - (longlong)param_1);
            *param_1 = uVar1;
          }
          else {
            uVar2 = puVar6[-1];
            puVar3 = puVar6;
            while (uVar1 < uVar2) {
              *puVar3 = uVar2;
              uVar2 = puVar3[-2];
              puVar3 = puVar3 + -1;
            }
            *puVar3 = uVar1;
          }
        }
      }
      return;
    }
    lVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (param_3 < 1) break;
    puVar6 = param_1 + lVar9;
    FUN_140362ab0(param_1,puVar6,param_2 + -1,param_4);
    FUN_1403657c0(&local_48,param_1,puVar6,param_2,param_4);
    puVar3 = local_40;
    puVar6 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_48 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_40 & 0xfffffffffffffffcU)) {
      FUN_1403689f0(param_1,local_48,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar3;
    }
    else {
      FUN_1403689f0(local_40,param_2,param_3,param_4);
    }
    uVar4 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  }
  uVar4 = (longlong)param_2 - (longlong)param_1 >> 2;
  if (0 < lVar9) {
    lVar8 = (longlong)(uVar4 - 1) >> 1;
    do {
      uVar1 = param_1[lVar9 + -1];
      lVar9 = lVar9 + -1;
      lVar10 = lVar9;
      while (lVar10 < lVar8) {
        lVar5 = lVar10 * 2;
        lVar7 = lVar5 + 2;
        if (param_1[lVar5 + 2] < param_1[lVar5 + 1]) {
          lVar7 = lVar5 + 1;
        }
        param_1[lVar10] = param_1[lVar7];
        lVar10 = lVar7;
      }
      if ((lVar10 == lVar8) && ((uVar4 & 1) == 0)) {
        param_1[lVar10] = param_1[uVar4 - 1];
        lVar10 = uVar4 - 1;
      }
      while (lVar9 < lVar10) {
        lVar5 = lVar10 + -1 >> 1;
        if (uVar1 <= param_1[lVar5]) break;
        param_1[lVar10] = param_1[lVar5];
        lVar10 = lVar5;
      }
      param_1[lVar10] = uVar1;
    } while (0 < lVar9);
  }
  if ((longlong)uVar4 < 2) {
    return;
  }
  do {
    puVar6 = param_2 + -1;
    if (7 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
      uVar1 = *puVar6;
      lVar9 = 0;
      *puVar6 = *param_1;
      uVar4 = (longlong)puVar6 - (longlong)param_1 >> 2;
      lVar10 = (longlong)(uVar4 - 1) >> 1;
      lVar8 = lVar9;
      if (0 < lVar10) {
        do {
          lVar5 = lVar8 * 2;
          lVar9 = lVar5 + 2;
          if (param_1[lVar5 + 2] < param_1[lVar5 + 1]) {
            lVar9 = lVar5 + 1;
          }
          param_1[lVar8] = param_1[lVar9];
          lVar8 = lVar9;
        } while (lVar9 < lVar10);
      }
      if ((lVar9 == lVar10) && ((uVar4 & 1) == 0)) {
        param_1[lVar9] = param_1[uVar4 - 1];
        lVar9 = uVar4 - 1;
      }
      while (0 < lVar9) {
        lVar8 = lVar9 + -1 >> 1;
        if (uVar1 <= param_1[lVar8]) break;
        param_1[lVar9] = param_1[lVar8];
        lVar9 = lVar8;
      }
      param_1[lVar9] = uVar1;
    }
    param_2 = puVar6;
    if ((longlong)((longlong)puVar6 - (longlong)param_1 & 0xfffffffffffffffcU) < 8) {
      return;
    }
  } while( true );
}

