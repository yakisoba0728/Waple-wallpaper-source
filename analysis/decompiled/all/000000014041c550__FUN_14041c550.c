// Function: FUN_14041c550
// Addr: 14041c550
// Size: 810 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041c550(float param_1,float param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  
  dVar6 = (double)param_2;
  uVar13 = (uint)((ulonglong)dVar6 >> 0x20);
  dVar11 = (double)param_1;
  uVar1 = (uint)((ulonglong)dVar11 >> 0x20);
  iVar3 = (uVar1 >> 0x14 & 0x7ff) - (uVar13 >> 0x14 & 0x7ff);
  dVar4 = ABS(dVar6);
  dVar2 = ABS(dVar11);
  if ((0x7ff0000000000000 < (ulonglong)dVar4) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar2)) {
    uVar5 = FUN_1402ecd70(param_2);
    return uVar5;
  }
  if (dVar2 == 0.0) {
    if ((longlong)dVar6 < 0) {
joined_r0x00014041c785:
      if (-1 < (longlong)dVar11) {
        FUN_1402dea10(0x20);
        return (ulonglong)DAT_140492904;
      }
      FUN_1402dea10(0x20);
      return (ulonglong)DAT_140492ad0;
    }
LAB_14041c762:
    return (ulonglong)(uint)(float)dVar11;
  }
  if (dVar4 == 0.0) {
    if ((longlong)dVar11 < 0) goto LAB_14041c63e;
    FUN_1402dea10(0x20);
  }
  if (0x1a < iVar3) {
    if (-1 < (longlong)dVar11) {
      FUN_1402dea10(0x20);
      return (ulonglong)DAT_140492814;
    }
LAB_14041c63e:
    FUN_1402dea10(0x20);
    return (ulonglong)DAT_140492a8c;
  }
  if ((iVar3 < -0xd) && (-1 < (longlong)dVar6)) {
    if (iVar3 < -0x96) {
      FUN_1402dea10(0x30);
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_140492a70;
      }
      return 0;
    }
    if (-0x7f < iVar3) {
      return (ulonglong)(uint)(float)(dVar11 / dVar6);
    }
    dVar6 = (dVar11 * 1.2676506002282294e+30) / dVar6;
    uVar5 = (ulonglong)ABS(dVar6) >> 0x34;
    uVar1 = (uint)((ulonglong)ABS(dVar6) >> 0x34);
    if (uVar1 < 0x65) {
      if ((int)(0x65 - uVar1) < 0x37) {
        uVar5 = ((ulonglong)dVar6 & 0x1fffffffffffff | 0x10000000000000) >>
                (100U - (char)uVar5 & 0x3f);
        uVar5 = (uVar5 >> 1) + (ulonglong)((uint)uVar5 & 1);
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = uVar5 - 100 << 0x34 | (ulonglong)dVar6 & 0xfffffffffffff;
    }
    dVar11 = (double)((ulonglong)dVar6 & 0x8000000000000000 | uVar5);
    if ((uVar5 & 0x7ff0000000000000) == 0) {
      FUN_1402dea10(0x30);
    }
    goto LAB_14041c762;
  }
  if ((iVar3 < -0x1a) && ((longlong)dVar6 < 0)) goto joined_r0x00014041c785;
  if ((dVar2 == INFINITY) && (dVar4 == INFINITY)) {
    FUN_1402dea10(0x20);
    if (-1 < (longlong)dVar6) {
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_1404939f8;
      }
      return (ulonglong)DAT_1404927b0;
    }
    if ((longlong)dVar11 < 0) {
      return (ulonglong)DAT_1404939fc;
    }
    return (ulonglong)DAT_1404939e8;
  }
  uVar9 = (uint)DAT_1404930b0;
  uVar10 = (uint)((ulonglong)DAT_1404930b0 >> 0x20);
  dVar2 = dVar6;
  if ((longlong)dVar6 < 0) {
    dVar2 = (double)CONCAT44(uVar13 ^ uVar10,SUB84(dVar6,0) ^ uVar9);
  }
  dVar4 = dVar11;
  if ((longlong)dVar11 < 0) {
    dVar4 = (double)CONCAT44(uVar1 ^ uVar10,SUB84(dVar11,0) ^ uVar9);
  }
  dVar12 = dVar4;
  dVar7 = dVar2;
  if (dVar2 < dVar4) {
    dVar12 = dVar2;
    dVar7 = dVar4;
  }
  dVar8 = dVar12 / dVar7;
  if (dVar8 <= _DAT_1404939c0) {
    if (dVar8 < _UNK_1404939b8) goto code_r0x00014041c8eb;
    dVar7 = dVar8 * dVar8;
    dVar7 = (_UNK_1404939e0 - (_UNK_1404939d0 - dVar7 * _UNK_1404939c8) * dVar7) * dVar7 * dVar8;
  }
  else {
    uVar1 = (uint)(dVar8 * DAT_1404939f0 + DAT_140492828);
    dVar8 = (double)uVar1;
    dVar7 = (dVar12 * DAT_1404939f0 - dVar8 * dVar7) / (dVar8 * dVar12 + dVar7 * DAT_1404939f0);
    dVar8 = dVar7 + *(double *)(&DAT_140493230 + (ulonglong)(uVar1 - 0x10) * 8);
    dVar7 = dVar7 * dVar7 * dVar7 * _UNK_1404939d8;
  }
  dVar8 = dVar8 - dVar7;
code_r0x00014041c8eb:
  if (dVar2 < dVar4) {
    dVar8 = _UNK_140471c68 - dVar8;
  }
  if ((longlong)dVar6 < 0) {
    dVar8 = _UNK_1404928a0 - dVar8;
  }
  if ((longlong)dVar11 < 0) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9);
  }
  return (ulonglong)(uint)(float)dVar8;
}

