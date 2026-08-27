// Function: FUN_140289000
// Addr: 140289000
// Size: 644 bytes


void FUN_140289000(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double local_a8 [2];
  undefined1 local_98 [96];
  
  dVar1 = (double)param_1[2];
  dVar2 = (double)param_1[3];
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (dVar2 < *param_3) {
    *param_3 = dVar2;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  if (*param_5 <= dVar2 && dVar2 != *param_5) {
    *param_5 = dVar2;
  }
  dVar1 = (double)param_1[8];
  dVar2 = (double)param_1[9];
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (dVar2 < *param_3) {
    *param_3 = dVar2;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  if (*param_5 <= dVar2 && dVar2 != *param_5) {
    *param_5 = dVar2;
  }
  dVar1 = (double)param_1[5];
  dVar2 = (double)param_1[4];
  dVar3 = (double)param_1[3];
  dVar4 = (double)param_1[9];
  dVar12 = (double)param_1[7] * DAT_1404927c8;
  dVar7 = dVar1 - dVar3;
  dVar13 = dVar1 * DAT_1404927c8;
  dVar6 = ((double)param_1[6] - dVar2) - (dVar2 - (double)param_1[2]);
  dVar1 = ((double)param_1[7] - dVar1) - dVar7;
  iVar8 = FUN_140285390(local_a8,(((double)param_1[8] - (double)param_1[6] * DAT_1404927c8) +
                                 dVar2 * DAT_1404927c8) - (double)param_1[2],dVar6 + dVar6);
  dVar2 = DAT_140492778;
  uVar11 = 0;
  if (0 < iVar8) {
    do {
      if ((0.0 < local_a8[uVar11]) && (local_a8[uVar11] < dVar2)) {
        pdVar9 = (double *)(**(code **)(*param_1 + 0x20))(param_1,local_98);
        dVar6 = *pdVar9;
        dVar5 = pdVar9[1];
        if (dVar6 < *param_2) {
          *param_2 = dVar6;
        }
        if (dVar5 < *param_3) {
          *param_3 = dVar5;
        }
        if (*param_4 <= dVar6 && dVar6 != *param_4) {
          *param_4 = dVar6;
        }
        if (*param_5 <= dVar5 && dVar5 != *param_5) {
          *param_5 = dVar5;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar8);
  }
  iVar8 = FUN_140285390(local_a8,((dVar4 - dVar12) + dVar13) - dVar3,dVar1 + dVar1,dVar7);
  uVar11 = 0;
  if (0 < iVar8) {
    do {
      if ((0.0 < local_a8[uVar11]) && (local_a8[uVar11] < dVar2)) {
        pdVar9 = (double *)(**(code **)(*param_1 + 0x20))(param_1,local_98);
        dVar1 = *pdVar9;
        dVar3 = pdVar9[1];
        if (dVar1 < *param_2) {
          *param_2 = dVar1;
        }
        if (dVar3 < *param_3) {
          *param_3 = dVar3;
        }
        if (*param_4 <= dVar1 && dVar1 != *param_4) {
          *param_4 = dVar1;
        }
        if (*param_5 <= dVar3 && dVar3 != *param_5) {
          *param_5 = dVar3;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar8);
  }
  return;
}

