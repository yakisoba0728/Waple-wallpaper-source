// Function: FUN_14004cea0
// Addr: 14004cea0
// Size: 1764 bytes


void FUN_14004cea0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  byte *pbVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  double dVar20;
  ulonglong local_80;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pbVar3 = (byte *)*param_2;
  lVar4 = param_2[2];
  uVar5 = param_2[1];
  bVar2 = *pbVar3;
  bVar17 = bVar2;
  if (bVar2 == 0x2d) {
    bVar17 = pbVar3[1];
  }
  uVar11 = (ulonglong)bVar17;
  pbVar14 = pbVar3 + 1;
  if (bVar2 != 0x2d) {
    pbVar14 = pbVar3;
  }
  if (9 < (byte)(bVar17 - 0x30)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      FID_conflict__assert
                (L"!HasParseError()",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x60d);
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
    *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
    goto LAB_14004d384;
  }
  bVar7 = false;
  uVar13 = 0;
  iVar15 = 0;
  pbVar14 = pbVar14 + 1;
  uVar19 = (int)(char)bVar17 - 0x30;
  bVar8 = false;
  if ('/' < (char)*pbVar14) {
    if (bVar2 == 0x2d) {
      do {
        bVar17 = *pbVar14;
        if ('9' < (char)bVar17) break;
        if ((0xccccccb < uVar19) && ((uVar19 != 0xccccccc || ('8' < (char)bVar17))))
        goto LAB_14004cfa6;
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar19 = (int)(char)bVar17 + (uVar19 * 5 + -0x18) * 2;
      } while ('/' < (char)*pbVar14);
    }
    else {
      do {
        bVar17 = *pbVar14;
        uVar13 = 0;
        if ('9' < (char)bVar17) break;
        if ((0x19999998 < uVar19) && ((uVar19 != 0x19999999 || ('5' < (char)bVar17))))
        goto LAB_14004cfa6;
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar19 = (int)(char)bVar17 + (uVar19 * 5 + -0x18) * 2;
      } while ('/' < (char)*pbVar14);
    }
  }
LAB_14004cfb0:
  bVar17 = 0;
  dVar20 = 0.0;
  if ((bVar7) && (dVar20 = 0.0, '/' < (char)*pbVar14)) {
    if (bVar2 == 0x2d) {
      do {
        bVar12 = *pbVar14;
        uVar11 = (ulonglong)(uint)(int)(char)bVar12;
        dVar20 = 0.0;
        if ('9' < (char)bVar12) break;
        if ((0xccccccccccccccb < uVar13) && ((uVar13 != 0xccccccccccccccc || ('8' < (char)bVar12))))
        goto LAB_14004d050;
        uVar11 = (ulonglong)((int)(char)bVar12 - 0x30);
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar13 = uVar11 + uVar13 * 10;
        dVar20 = 0.0;
      } while ('/' < (char)*pbVar14);
    }
    else {
      do {
        bVar12 = *pbVar14;
        uVar11 = (ulonglong)(uint)(int)(char)bVar12;
        dVar20 = 0.0;
        if ('9' < (char)bVar12) break;
        if ((0x1999999999999998 < uVar13) &&
           ((uVar13 != 0x1999999999999999 || ('5' < (char)bVar12)))) goto LAB_14004d050;
        uVar11 = (ulonglong)((int)(char)bVar12 - 0x30);
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar13 = uVar11 + uVar13 * 10;
        dVar20 = 0.0;
      } while ('/' < (char)*pbVar14);
    }
  }
LAB_14004d0aa:
  iVar18 = 0;
  if (*pbVar14 == 0x2e) {
    pbVar1 = pbVar14 + 1;
    pbVar14 = pbVar14 + 1;
    if (9 < (byte)(*pbVar1 - 0x30)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        FID_conflict__assert
                  (L"!HasParseError()",
                   L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x638);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xe;
      *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
      goto LAB_14004d384;
    }
    if (bVar17 == 0) {
      if (!bVar7) {
        uVar13 = (ulonglong)uVar19;
      }
      do {
        bVar17 = *pbVar14;
        if (('9' < (char)bVar17) || (0x1fffffffffffff < uVar13)) break;
        pbVar14 = pbVar14 + 1;
        uVar11 = (ulonglong)((int)(char)bVar17 - 0x30);
        iVar18 = iVar18 + -1;
        uVar13 = uVar11 + uVar13 * 10;
        iVar15 = (iVar15 + 1) - (uint)(uVar13 == 0);
      } while ('/' < (char)*pbVar14);
      if ((longlong)uVar13 < 0) {
        uVar11 = uVar13 >> 1 | (ulonglong)((uint)uVar13 & 1);
      }
      dVar20 = (double)uVar13;
      bVar17 = 1;
      if ((char)*pbVar14 < '0') goto LAB_14004d184;
    }
    uVar11 = (ulonglong)bVar17;
    do {
      bVar12 = *pbVar14;
      if ('9' < (char)bVar12) break;
      pbVar14 = pbVar14 + 1;
      iVar9 = iVar15;
      if (iVar15 < 0x11) {
        iVar18 = iVar18 + -1;
        dVar20 = (double)((char)bVar12 + -0x30) + dVar20 * DAT_140492810;
        iVar9 = iVar15 + 1;
        if (dVar20 <= 0.0) {
          iVar9 = iVar15;
        }
      }
      iVar15 = iVar9;
    } while ('/' < (char)*pbVar14);
  }
LAB_14004d184:
  if ((*pbVar14 == 0x65) || (iVar15 = 0, *pbVar14 == 0x45)) {
    if (bVar17 == 0) {
      bVar17 = 1;
    }
    bVar12 = pbVar14[1];
    bVar6 = false;
    if (bVar12 == 0x2b) {
      bVar12 = pbVar14[2];
      uVar11 = 3;
      lVar16 = 2;
    }
    else if (bVar12 == 0x2d) {
      bVar6 = true;
      bVar12 = pbVar14[2];
      uVar11 = 3;
      lVar16 = 2;
    }
    else {
      uVar11 = 2;
      lVar16 = 1;
    }
    if (9 < (byte)(bVar12 - 0x30)) {
      pbVar14 = pbVar14 + lVar16;
      if (*(int *)(param_1 + 0x30) != 0) {
        FID_conflict__assert
                  (L"!HasParseError()",
                   L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x68d);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xf;
      *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
      goto LAB_14004d384;
    }
    pbVar14 = pbVar14 + uVar11;
    iVar15 = (char)bVar12 + -0x30;
    if (bVar6) {
      if (0 < iVar18) {
        FID_conflict__assert
                  (L"expFrac <= 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                   0x678);
        bVar7 = bVar8;
      }
      uVar11 = (ulonglong)(iVar18 + 0x7ffffff7U);
      bVar12 = *pbVar14;
      while (('/' < (char)bVar12 && (bVar12 = *pbVar14, (char)bVar12 < ':'))) {
        pbVar14 = pbVar14 + 1;
        iVar15 = (int)(char)bVar12 + (iVar15 * 5 + -0x18) * 2;
        if ((int)(iVar18 + 0x7ffffff7U) / 10 < iVar15) {
          bVar12 = *pbVar14;
          while( true ) {
            if ((char)bVar12 < '0') goto LAB_14004d2e9;
            if ('9' < (char)*pbVar14) break;
            pbVar14 = pbVar14 + 1;
            bVar12 = *pbVar14;
          }
        }
        bVar12 = *pbVar14;
      }
LAB_14004d2e9:
      iVar15 = -iVar15;
    }
    else {
      bVar12 = *pbVar14;
      while (('/' < (char)bVar12 && (bVar12 = *pbVar14, (char)bVar12 < ':'))) {
        pbVar14 = pbVar14 + 1;
        iVar15 = (int)(char)bVar12 + (iVar15 * 5 + -0x18) * 2;
        if (0x134 - iVar18 < iVar15) {
          if (*(int *)(param_1 + 0x30) != 0) {
            FID_conflict__assert
                      (L"!HasParseError()",
                       L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x688);
          }
          *(undefined4 *)(param_1 + 0x30) = 0xd;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar3 - lVar4;
          goto LAB_14004d384;
        }
        bVar12 = *pbVar14;
      }
    }
  }
  if (bVar17 == 0) {
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if (bVar7) {
      local_80 = uVar13;
      if (bVar2 == 0x2d) {
        local_80 = -uVar13;
        local_78 = CONCAT31(local_78._1_3_,1);
      }
      else {
LAB_14004d486:
        local_78 = CONCAT31(local_78._1_3_,2);
      }
    }
    else {
      if (bVar2 != 0x2d) {
        local_80 = (ulonglong)uVar19;
        goto LAB_14004d486;
      }
      local_78 = CONCAT31(local_78._1_3_,1);
      local_80 = (ulonglong)(int)-uVar19;
    }
    local_78 = local_78 & 0xfffffeff;
    cVar10 = FUN_14003f1b0(param_3,&local_80);
    FUN_140086d30(&local_80);
    lVar16 = local_70;
    if (local_70 != 0) {
      FUN_140017240(local_70 + 0x40);
      FUN_140017240(lVar16 + 0x20);
      FUN_140017240(lVar16);
      thunk_FUN_14028af80(lVar16,0x60);
    }
LAB_14004d4d3:
    if (cVar10 != '\0') goto LAB_14004d384;
    if (*(int *)(param_1 + 0x30) != 0) {
      FID_conflict__assert
                (L"!HasParseError()",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x6d4);
    }
    *(undefined4 *)(param_1 + 0x30) = 0x10;
  }
  else {
    iVar15 = iVar15 + iVar18;
    iVar18 = iVar15 + 0x134;
    if (-0x135 < iVar15) {
      iVar18 = iVar15;
    }
    dVar20 = (double)FUN_14003eb40(uVar11,iVar18);
    if (dVar20 <= DAT_140492988) {
      if (bVar2 == 0x2d) {
        dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ DAT_140492fe0._4_4_,
                                  SUB84(dVar20,0) ^ (uint)DAT_140492fe0);
      }
      cVar10 = FUN_14003ed90(param_3,dVar20);
      goto LAB_14004d4d3;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FID_conflict__assert
                (L"!HasParseError()",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x6bc);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xd;
  }
  *(longlong *)(param_1 + 0x38) = (longlong)pbVar3 - lVar4;
LAB_14004d384:
  *param_2 = pbVar14;
  param_2[1] = uVar5;
  param_2[2] = lVar4;
  return;
LAB_14004cfa6:
  bVar7 = true;
  bVar8 = true;
  uVar13 = (ulonglong)uVar19;
  goto LAB_14004cfb0;
LAB_14004d050:
  dVar20 = (double)uVar13;
  if ((char)uVar11 < '0') {
    bVar17 = 1;
  }
  else {
    do {
      bVar12 = *pbVar14;
      bVar17 = 1;
      if ('9' < (char)bVar12) break;
      pbVar14 = pbVar14 + 1;
      dVar20 = dVar20 * DAT_140492810 + (double)((char)bVar12 + -0x30);
    } while ('/' < (char)*pbVar14);
  }
  goto LAB_14004d0aa;
}

