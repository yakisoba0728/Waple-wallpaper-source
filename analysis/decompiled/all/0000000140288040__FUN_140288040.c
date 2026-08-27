// Function: FUN_140288040
// Addr: 140288040
// Size: 1049 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140288040(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double local_98 [12];
  
  iVar9 = 0;
  dVar1 = *(double *)(param_1 + 0x18);
  dVar11 = *(double *)(param_1 + 0x18);
  iVar6 = -1;
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  if (dVar11 <= param_4 && param_4 != dVar1) {
    iVar6 = 1;
  }
  iVar8 = iVar6;
  if ((dVar2 == param_4) &&
     ((dVar2 < *(double *)(param_1 + 0x28) ||
      ((iVar8 = 1, dVar2 == *(double *)(param_1 + 0x28) && (dVar2 < *(double *)(param_1 + 0x38))))))
     ) {
    *param_3 = 1;
    iVar9 = 1;
    iVar8 = iVar6;
  }
  dVar11 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar4 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar1 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28)) - dVar11;
  dVar2 = (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20)) - dVar4;
  iVar6 = FUN_140285390(local_98,param_2,dVar11 + dVar11);
  dVar3 = local_98[0];
  dVar5 = DAT_140492778;
  if ((1 < iVar6) && (local_98[1] < local_98[0])) {
    local_98[0] = local_98[1];
    local_98[1] = dVar3;
  }
  iVar7 = 0;
  if (3 < iVar6) {
    do {
      if (1 < iVar9) goto LAB_14028837f;
      dVar3 = local_98[iVar7];
      if ((0.0 <= dVar3) && (dVar3 <= dVar5)) {
        param_2[iVar9] =
             (dVar3 + dVar3) * dVar4 + *(double *)(param_1 + 0x10) + dVar3 * dVar3 * dVar2;
        if (0.0 <= (dVar3 * dVar1 + dVar11) * (double)iVar8) {
          param_3[iVar9] = iVar8;
          iVar9 = iVar9 + 1;
          iVar8 = -iVar8;
          if (1 < iVar9) goto LAB_14028837f;
        }
      }
      dVar3 = local_98[(longlong)iVar7 + 1];
      if ((0.0 <= dVar3) && (dVar3 <= dVar5)) {
        param_2[iVar9] =
             (dVar3 + dVar3) * dVar4 + *(double *)(param_1 + 0x10) + dVar3 * dVar3 * dVar2;
        if (0.0 <= (dVar3 * dVar1 + dVar11) * (double)iVar8) {
          param_3[iVar9] = iVar8;
          iVar9 = iVar9 + 1;
          iVar8 = -iVar8;
          if (1 < iVar9) goto LAB_14028837f;
        }
      }
      dVar3 = local_98[(longlong)iVar7 + 2];
      if ((0.0 <= dVar3) && (dVar3 <= dVar5)) {
        param_2[iVar9] =
             (dVar3 + dVar3) * dVar4 + *(double *)(param_1 + 0x10) + dVar3 * dVar3 * dVar2;
        if (0.0 <= (dVar3 * dVar1 + dVar11) * (double)iVar8) {
          param_3[iVar9] = iVar8;
          iVar9 = iVar9 + 1;
          iVar8 = -iVar8;
          if (1 < iVar9) goto LAB_14028837f;
        }
      }
      dVar3 = local_98[(longlong)iVar7 + 3];
      if ((0.0 <= dVar3) && (dVar3 <= dVar5)) {
        param_2[iVar9] =
             (dVar3 + dVar3) * dVar4 + *(double *)(param_1 + 0x10) + dVar3 * dVar3 * dVar2;
        if (0.0 <= (dVar3 * dVar1 + dVar11) * (double)iVar8) {
          param_3[iVar9] = iVar8;
          iVar8 = -iVar8;
          iVar9 = iVar9 + 1;
        }
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < iVar6 + -3);
  }
  while ((iVar7 < iVar6 && (iVar9 < 2))) {
    dVar3 = local_98[iVar7];
    iVar10 = iVar9;
    if ((0.0 <= dVar3) && (dVar3 <= dVar5)) {
      param_2[iVar9] = (dVar3 + dVar3) * dVar4 + *(double *)(param_1 + 0x10) + dVar3 * dVar3 * dVar2
      ;
      if (0.0 <= (dVar3 * dVar1 + dVar11) * (double)iVar8) {
        iVar10 = iVar9 + 1;
        param_3[iVar9] = iVar8;
        iVar8 = -iVar8;
      }
    }
    iVar7 = iVar7 + 1;
    iVar9 = iVar10;
  }
LAB_14028837f:
  dVar11 = *(double *)(param_1 + 0x38);
  if (dVar11 == param_4) {
    if ((0 < iVar8) && (0 < iVar9)) {
      iVar9 = iVar9 + -1;
      iVar8 = -1;
    }
    if (((dVar11 < *(double *)(param_1 + 0x28)) ||
        ((dVar11 == *(double *)(param_1 + 0x28) && (dVar11 < *(double *)(param_1 + 0x18))))) &&
       (iVar9 < 2)) {
      param_2[iVar9] = *(undefined8 *)(param_1 + 0x30);
      if (iVar8 < 0) {
        param_3[iVar9] = 0xffffffff;
        iVar9 = iVar9 + 1;
        iVar8 = 1;
      }
    }
  }
  iVar6 = -1;
  if (*(double *)(param_1 + 0x38) <= param_4) {
    iVar6 = 1;
  }
  if (iVar8 != iVar6) {
    if (iVar9 < 1) {
      dVar11 = *(double *)(param_1 + 0x38) - param_4;
      param_4 = *(double *)(param_1 + 0x18) - param_4;
      if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_140492fd4,
                           SUB84(dVar11,0) & _DAT_140492fd0) <
          (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & _UNK_140492fd4,
                           SUB84(param_4,0) & _DAT_140492fd0)) {
        param_2[iVar9] = *(undefined8 *)(param_1 + 0x30);
      }
      param_3[iVar9] = iVar8;
      iVar9 = iVar9 + 1;
    }
    else {
      iVar9 = iVar9 + -1;
    }
  }
  return iVar9;
}

