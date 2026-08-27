// Function: FUN_14041c480
// Addr: 14041c480
// Size: 1018 bytes


ulonglong FUN_14041c480(float param_1,float param_2)

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
    uVar5 = FUN_1402ecca0(param_2);
    return uVar5;
  }
  if (dVar2 == 0.0) {
    if ((longlong)dVar6 < 0) {
joined_r0x00014041c6b5:
      if (-1 < (longlong)dVar11) {
        FUN_1402de940(0x20);
        return (ulonglong)DAT_140492834;
      }
      FUN_1402de940(0x20);
      return (ulonglong)DAT_140492a00;
    }
LAB_14041c692:
    return (ulonglong)(uint)(float)dVar11;
  }
  if (dVar4 == 0.0) {
    if ((longlong)dVar11 < 0) goto LAB_14041c56e;
    FUN_1402de940(0x20);
  }
  if (0x1a < iVar3) {
    if (-1 < (longlong)dVar11) {
      FUN_1402de940(0x20);
      return (ulonglong)DAT_140492744;
    }
LAB_14041c56e:
    FUN_1402de940(0x20);
    return (ulonglong)DAT_1404929bc;
  }
  if ((iVar3 < -0xd) && (-1 < (longlong)dVar6)) {
    if (iVar3 < -0x96) {
      FUN_1402de940(0x30);
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_1404929a0;
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
      FUN_1402de940(0x30);
    }
    goto LAB_14041c692;
  }
  if ((iVar3 < -0x1a) && ((longlong)dVar6 < 0)) goto joined_r0x00014041c6b5;
  if ((dVar2 == INFINITY) && (dVar4 == INFINITY)) {
    FUN_1402de940(0x20);
    if (-1 < (longlong)dVar6) {
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_140493928;
      }
      return (ulonglong)DAT_1404926e0;
    }
    if ((longlong)dVar11 < 0) {
      return (ulonglong)DAT_14049392c;
    }
    return (ulonglong)DAT_140493918;
  }
  uVar9 = (uint)DAT_140492fe0;
  uVar10 = (uint)((ulonglong)DAT_140492fe0 >> 0x20);
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
  if (dVar8 <= DAT_1404938f0) {
    if (dVar8 < DAT_1404938e8) goto LAB_14041c81b;
    dVar7 = dVar8 * dVar8;
    dVar7 = (DAT_140493910 - (DAT_140493900 - dVar7 * DAT_1404938f8) * dVar7) * dVar7 * dVar8;
  }
  else {
    uVar1 = (uint)(dVar8 * DAT_140493920 + DAT_140492758);
    dVar8 = (double)uVar1;
    dVar7 = (dVar12 * DAT_140493920 - dVar8 * dVar7) / (dVar8 * dVar12 + dVar7 * DAT_140493920);
    dVar8 = dVar7 + *(double *)(&DAT_140493160 + (ulonglong)(uVar1 - 0x10) * 8);
    dVar7 = dVar7 * dVar7 * dVar7 * DAT_140493908;
  }
  dVar8 = dVar8 - dVar7;
LAB_14041c81b:
  if (dVar2 < dVar4) {
    dVar8 = DAT_140471b98 - dVar8;
  }
  if ((longlong)dVar6 < 0) {
    dVar8 = DAT_1404927d0 - dVar8;
  }
  if ((longlong)dVar11 < 0) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9);
  }
  return (ulonglong)(uint)(float)dVar8;
}

