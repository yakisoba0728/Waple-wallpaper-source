// Function: FUN_14004cf70
// Addr: 14004cf70
// Size: 1281 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004cf70(longlong param_1,undefined8 *param_2,undefined8 param_3)

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
  ulonglong uStack_80;
  uint uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
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
      func_0x0001402cba34(L"!HasParseError()",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x60d);
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
    *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
    goto LAB_14004d454;
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
        goto LAB_14004d076;
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
        goto LAB_14004d076;
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar19 = (int)(char)bVar17 + (uVar19 * 5 + -0x18) * 2;
      } while ('/' < (char)*pbVar14);
    }
  }
LAB_14004d080:
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
        goto LAB_14004d120;
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
           ((uVar13 != 0x1999999999999999 || ('5' < (char)bVar12)))) goto LAB_14004d120;
        uVar11 = (ulonglong)((int)(char)bVar12 - 0x30);
        pbVar14 = pbVar14 + 1;
        iVar15 = iVar15 + 1;
        uVar13 = uVar11 + uVar13 * 10;
        dVar20 = 0.0;
      } while ('/' < (char)*pbVar14);
    }
  }
LAB_14004d17a:
  iVar18 = 0;
  if (*pbVar14 == 0x2e) {
    pbVar1 = pbVar14 + 1;
    pbVar14 = pbVar14 + 1;
    if (9 < (byte)(*pbVar1 - 0x30)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        func_0x0001402cba34(L"!HasParseError()",
                            L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x638);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xe;
      *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
      goto LAB_14004d454;
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
      if ((char)*pbVar14 < '0') goto LAB_14004d254;
    }
    uVar11 = (ulonglong)bVar17;
    do {
      bVar12 = *pbVar14;
      if ('9' < (char)bVar12) break;
      pbVar14 = pbVar14 + 1;
      iVar9 = iVar15;
      if (iVar15 < 0x11) {
        iVar18 = iVar18 + -1;
        dVar20 = (double)((char)bVar12 + -0x30) + dVar20 * DAT_1404928e0;
        iVar9 = iVar15 + 1;
        if (dVar20 <= 0.0) {
          iVar9 = iVar15;
        }
      }
      iVar15 = iVar9;
    } while ('/' < (char)*pbVar14);
  }
LAB_14004d254:
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
        func_0x0001402cba34(L"!HasParseError()",
                            L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x68d);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xf;
      *(longlong *)(param_1 + 0x38) = (longlong)pbVar14 - lVar4;
      goto LAB_14004d454;
    }
    pbVar14 = pbVar14 + uVar11;
    iVar15 = (char)bVar12 + -0x30;
    if (bVar6) {
      if (0 < iVar18) {
        func_0x0001402cba34(L"expFrac <= 0",
                            L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x678);
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
            if ((char)bVar12 < '0') goto code_r0x00014004d3b9;
            if ('9' < (char)*pbVar14) break;
            pbVar14 = pbVar14 + 1;
            bVar12 = *pbVar14;
          }
        }
        bVar12 = *pbVar14;
      }
code_r0x00014004d3b9:
      iVar15 = -iVar15;
    }
    else {
      bVar12 = *pbVar14;
      while (('/' < (char)bVar12 && (bVar12 = *pbVar14, (char)bVar12 < ':'))) {
        pbVar14 = pbVar14 + 1;
        iVar15 = (int)(char)bVar12 + (iVar15 * 5 + -0x18) * 2;
        if (0x134 - iVar18 < iVar15) {
          if (*(int *)(param_1 + 0x30) != 0) {
            func_0x0001402cba34(L"!HasParseError()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x688);
          }
          *(undefined4 *)(param_1 + 0x30) = 0xd;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar3 - lVar4;
          goto LAB_14004d454;
        }
        bVar12 = *pbVar14;
      }
    }
  }
  if (bVar17 == 0) {
    uStack_60 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    if (bVar7) {
      uStack_80 = uVar13;
      if (bVar2 == 0x2d) {
        uStack_80 = -uVar13;
        uStack_78 = CONCAT31(uStack_78._1_3_,1);
      }
      else {
code_r0x00014004d556:
        uStack_78 = CONCAT31(uStack_78._1_3_,2);
      }
    }
    else {
      if (bVar2 != 0x2d) {
        uStack_80 = (ulonglong)uVar19;
        goto code_r0x00014004d556;
      }
      uStack_78 = CONCAT31(uStack_78._1_3_,1);
      uStack_80 = (ulonglong)(int)-uVar19;
    }
    uStack_78 = uStack_78 & 0xfffffeff;
    cVar10 = FUN_14003f280(param_3,&uStack_80);
    func_0x000140086e00(&uStack_80);
    if (lStack_70 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lStack_70 + 0x40);
    }
code_r0x00014004d5a3:
    if (cVar10 != '\0') goto LAB_14004d454;
    if (*(int *)(param_1 + 0x30) != 0) {
      func_0x0001402cba34(L"!HasParseError()",
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
    dVar20 = (double)FUN_14003ec10(uVar11,iVar18);
    if (dVar20 <= _UNK_140492a58) {
      if (bVar2 == 0x2d) {
        dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ DAT_1404930b0._4_4_,
                                  SUB84(dVar20,0) ^ (uint)DAT_1404930b0);
      }
      cVar10 = func_0x00014003ee60(param_3,dVar20);
      goto code_r0x00014004d5a3;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      func_0x0001402cba34(L"!HasParseError()",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x6bc);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xd;
  }
  *(longlong *)(param_1 + 0x38) = (longlong)pbVar3 - lVar4;
LAB_14004d454:
  *param_2 = pbVar14;
  param_2[1] = uVar5;
  param_2[2] = lVar4;
  return;
LAB_14004d076:
  bVar7 = true;
  bVar8 = true;
  uVar13 = (ulonglong)uVar19;
  goto LAB_14004d080;
LAB_14004d120:
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
      dVar20 = dVar20 * DAT_1404928e0 + (double)((char)bVar12 + -0x30);
    } while ('/' < (char)*pbVar14);
  }
  goto LAB_14004d17a;
}

