// Function: FUN_140117ad0
// Addr: 140117ad0
// Size: 1798 bytes


void FUN_140117ad0(ulonglong param_1,undefined8 *param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ushort uVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  char *pcVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  char cVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  uint uVar25;
  
  pcVar3 = (char *)*param_2;
  lVar4 = param_2[1];
  cVar2 = *pcVar3;
  cVar20 = cVar2;
  if (cVar2 == '-') {
    cVar20 = pcVar3[1];
  }
  pcVar15 = pcVar3 + 1;
  if (cVar2 != '-') {
    pcVar15 = pcVar3;
  }
  if ((byte)(cVar20 - 0x30U) < 10) {
    bVar6 = false;
    uVar17 = 0;
    bVar7 = false;
    iVar18 = 0;
    uVar22 = (int)cVar20 - 0x30;
    pcVar15 = pcVar15 + 1;
    if ('/' < *pcVar15) {
      if (cVar2 == '-') {
        do {
          cVar20 = *pcVar15;
          if ('9' < cVar20) break;
          if ((0xccccccb < uVar22) && ((uVar22 != 0xccccccc || ('8' < cVar20)))) goto LAB_140117bc6;
          pcVar15 = pcVar15 + 1;
          iVar18 = iVar18 + 1;
          uVar22 = (int)cVar20 + (uVar22 * 5 + -0x18) * 2;
        } while ('/' < *pcVar15);
      }
      else {
        do {
          cVar20 = *pcVar15;
          uVar17 = 0;
          if ('9' < cVar20) break;
          if ((0x19999998 < uVar22) && ((uVar22 != 0x19999999 || ('5' < cVar20))))
          goto LAB_140117bc6;
          pcVar15 = pcVar15 + 1;
          iVar18 = iVar18 + 1;
          uVar22 = (int)cVar20 + (uVar22 * 5 + -0x18) * 2;
        } while ('/' < *pcVar15);
      }
    }
    goto LAB_140117bd4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FID_conflict__assert
              (L"!HasParseError()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
               0x60d);
  }
  *(undefined4 *)(param_1 + 0x30) = 3;
  goto LAB_14011818b;
LAB_140117bc6:
  bVar6 = true;
  bVar7 = true;
  uVar17 = (ulonglong)uVar22;
LAB_140117bd4:
  bVar16 = 0;
  uVar14 = param_1;
  dVar24 = 0.0;
  if ((bVar6) && (dVar24 = 0.0, '/' < *pcVar15)) {
    if (cVar2 == '-') {
      do {
        cVar20 = *pcVar15;
        uVar14 = (ulonglong)(uint)(int)cVar20;
        dVar24 = 0.0;
        if ('9' < cVar20) break;
        if ((0xccccccccccccccb < uVar17) && ((uVar17 != 0xccccccccccccccc || ('8' < cVar20))))
        goto LAB_140117c70;
        uVar14 = (ulonglong)((int)cVar20 - 0x30);
        pcVar15 = pcVar15 + 1;
        iVar18 = iVar18 + 1;
        uVar17 = uVar14 + uVar17 * 10;
        dVar24 = 0.0;
      } while ('/' < *pcVar15);
    }
    else {
      do {
        cVar20 = *pcVar15;
        uVar14 = (ulonglong)(uint)(int)cVar20;
        dVar24 = 0.0;
        if ('9' < cVar20) break;
        if ((0x1999999999999998 < uVar17) && ((uVar17 != 0x1999999999999999 || ('5' < cVar20))))
        goto LAB_140117c70;
        uVar14 = (ulonglong)((int)cVar20 - 0x30);
        pcVar15 = pcVar15 + 1;
        iVar18 = iVar18 + 1;
        uVar17 = uVar14 + uVar17 * 10;
        dVar24 = 0.0;
      } while ('/' < *pcVar15);
    }
  }
  goto LAB_140117cca;
LAB_140117c70:
  dVar24 = (double)uVar17;
  if ((char)uVar14 < '0') {
    bVar16 = 1;
  }
  else {
    do {
      cVar20 = *pcVar15;
      bVar16 = 1;
      if ('9' < cVar20) break;
      pcVar15 = pcVar15 + 1;
      dVar24 = dVar24 * DAT_140492810 + (double)(cVar20 + -0x30);
    } while ('/' < *pcVar15);
  }
LAB_140117cca:
  iVar23 = 0;
  if (*pcVar15 == '.') {
    pcVar1 = pcVar15 + 1;
    pcVar15 = pcVar15 + 1;
    if ((byte)(*pcVar1 - 0x30U) < 10) {
      if (bVar16 == 0) {
        if (!bVar6) {
          uVar17 = (ulonglong)uVar22;
        }
        do {
          cVar20 = *pcVar15;
          if (('9' < cVar20) || (0x1fffffffffffff < uVar17)) break;
          pcVar15 = pcVar15 + 1;
          uVar14 = (ulonglong)((int)cVar20 - 0x30);
          iVar23 = iVar23 + -1;
          uVar17 = uVar14 + uVar17 * 10;
          iVar18 = (iVar18 + 1) - (uint)(uVar17 == 0);
        } while ('/' < *pcVar15);
        if ((longlong)uVar17 < 0) {
          uVar14 = uVar17 >> 1 | (ulonglong)((uint)uVar17 & 1);
        }
        dVar24 = (double)uVar17;
        bVar16 = 1;
        if (*pcVar15 < '0') goto LAB_140117da3;
      }
      uVar14 = (ulonglong)bVar16;
      do {
        cVar20 = *pcVar15;
        if ('9' < cVar20) break;
        pcVar15 = pcVar15 + 1;
        iVar8 = iVar18;
        if (iVar18 < 0x11) {
          iVar23 = iVar23 + -1;
          dVar24 = (double)(cVar20 + -0x30) + dVar24 * DAT_140492810;
          iVar8 = iVar18 + 1;
          if (dVar24 <= 0.0) {
            iVar8 = iVar18;
          }
        }
        iVar18 = iVar8;
      } while ('/' < *pcVar15);
      goto LAB_140117da3;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FID_conflict__assert
                (L"!HasParseError()",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x638);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xe;
LAB_14011818b:
    lVar21 = (longlong)pcVar15 - lVar4;
  }
  else {
LAB_140117da3:
    lVar21 = (longlong)pcVar3 - lVar4;
    if ((*pcVar15 == 'e') || (iVar18 = 0, *pcVar15 == 'E')) {
      if (bVar16 == 0) {
        bVar16 = 1;
      }
      cVar20 = pcVar15[1];
      bVar5 = false;
      if (cVar20 == '+') {
        cVar20 = pcVar15[2];
        uVar14 = 3;
        lVar19 = 2;
      }
      else if (cVar20 == '-') {
        bVar5 = true;
        cVar20 = pcVar15[2];
        uVar14 = 3;
        lVar19 = 2;
      }
      else {
        uVar14 = 2;
        lVar19 = 1;
      }
      if (9 < (byte)(cVar20 - 0x30U)) {
        pcVar15 = pcVar15 + lVar19;
        if (*(int *)(param_1 + 0x30) != 0) {
          FID_conflict__assert
                    (L"!HasParseError()",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x68d);
        }
        *(undefined4 *)(param_1 + 0x30) = 0xf;
        lVar21 = (longlong)pcVar15 - lVar4;
        goto LAB_140118193;
      }
      pcVar15 = pcVar15 + uVar14;
      iVar18 = cVar20 + -0x30;
      if (bVar5) {
        if (0 < iVar23) {
          FID_conflict__assert
                    (L"expFrac <= 0",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x678);
          bVar6 = bVar7;
        }
        uVar14 = (ulonglong)(iVar23 + 0x7ffffff7U);
        cVar20 = *pcVar15;
        while (('/' < cVar20 && (cVar20 = *pcVar15, cVar20 < ':'))) {
          pcVar15 = pcVar15 + 1;
          iVar18 = (int)cVar20 + (iVar18 * 5 + -0x18) * 2;
          if ((int)(iVar23 + 0x7ffffff7U) / 10 < iVar18) {
            cVar20 = *pcVar15;
            while( true ) {
              if (cVar20 < '0') goto LAB_140117f04;
              if ('9' < *pcVar15) break;
              pcVar15 = pcVar15 + 1;
              cVar20 = *pcVar15;
            }
          }
          cVar20 = *pcVar15;
        }
LAB_140117f04:
        iVar18 = -iVar18;
      }
      else {
        cVar20 = *pcVar15;
        while (('/' < cVar20 && (cVar20 = *pcVar15, cVar20 < ':'))) {
          pcVar15 = pcVar15 + 1;
          iVar18 = (int)cVar20 + (iVar18 * 5 + -0x18) * 2;
          if (0x134 - iVar23 < iVar18) {
            if (*(int *)(param_1 + 0x30) != 0) {
              FID_conflict__assert
                        (L"!HasParseError()",
                         L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x688);
            }
            *(undefined4 *)(param_1 + 0x30) = 0xd;
            *(longlong *)(param_1 + 0x38) = lVar21;
            goto LAB_140118197;
          }
          cVar20 = *pcVar15;
        }
      }
    }
    if (bVar16 == 0) {
      param_3 = param_3 + 0x20;
      if (!bVar6) {
        if (cVar2 == '-') {
          plVar11 = (longlong *)FUN_140118650(param_3);
          *plVar11 = 0;
          plVar11[1] = 0;
          *plVar11 = (longlong)(int)-uVar22;
          uVar13 = 0xb6;
          if (-1 < (int)-uVar22) {
            uVar13 = 0x1f6;
          }
          *(undefined2 *)((longlong)plVar11 + 0xe) = uVar13;
        }
        else {
          puVar10 = (ulonglong *)FUN_140118650(param_3);
          *puVar10 = 0;
          puVar10[1] = 0;
          *puVar10 = (ulonglong)uVar22;
          uVar13 = 0x1f6;
          if ((int)uVar22 < 0) {
            uVar13 = 0x1d6;
          }
          *(undefined2 *)((longlong)puVar10 + 0xe) = uVar13;
        }
        goto LAB_140118197;
      }
      if (cVar2 == '-') {
        uVar17 = -uVar17;
        puVar10 = (ulonglong *)FUN_140118650(param_3);
        *puVar10 = 0;
        puVar10[1] = 0;
        *puVar10 = uVar17;
        *(undefined2 *)((longlong)puVar10 + 0xe) = 0x96;
        if ((longlong)uVar17 < 0) {
          if (-0x80000001 < (longlong)uVar17) {
            *(undefined2 *)((longlong)puVar10 + 0xe) = 0xb6;
          }
          goto LAB_140118197;
        }
        uVar12 = 0x196;
        *(undefined2 *)((longlong)puVar10 + 0xe) = 0x196;
        if ((uVar17 & 0xffffffff00000000) == 0) {
          uVar12 = 0x1d6;
          goto LAB_140118065;
        }
      }
      else {
        puVar10 = (ulonglong *)FUN_140118650(param_3);
        uVar12 = 0x116;
        *puVar10 = 0;
        puVar10[1] = 0;
        *puVar10 = uVar17;
        *(undefined2 *)((longlong)puVar10 + 0xe) = 0x116;
        if (-1 < (longlong)uVar17) {
          uVar12 = 0x196;
          *(undefined2 *)((longlong)puVar10 + 0xe) = 0x196;
        }
        if ((uVar17 & 0xffffffff00000000) == 0) {
          uVar12 = uVar12 | 0x40;
LAB_140118065:
          *(ushort *)((longlong)puVar10 + 0xe) = uVar12;
        }
      }
      if ((uVar17 & 0xffffffff80000000) == 0) {
        *(ushort *)((longlong)puVar10 + 0xe) = uVar12 | 0x20;
      }
      goto LAB_140118197;
    }
    iVar18 = iVar18 + iVar23;
    iVar23 = iVar18 + 0x134;
    if (-0x135 < iVar18) {
      iVar23 = iVar18;
    }
    dVar24 = (double)FUN_14003eb40(uVar14,iVar23);
    uVar22 = SUB84(dVar24,0);
    uVar25 = (uint)((ulonglong)dVar24 >> 0x20);
    if (dVar24 <= DAT_140492988) {
      if (cVar2 == '-') {
        uVar22 = uVar22 ^ (uint)DAT_140492fe0;
        uVar25 = uVar25 ^ DAT_140492fe0._4_4_;
      }
      puVar9 = (undefined8 *)FUN_140118650(param_3 + 0x20);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined2 *)((longlong)puVar9 + 0xe) = 0x216;
      *puVar9 = CONCAT44(uVar25,uVar22);
      goto LAB_140118197;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FID_conflict__assert
                (L"!HasParseError()",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x6bc);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xd;
  }
LAB_140118193:
  *(longlong *)(param_1 + 0x38) = lVar21;
LAB_140118197:
  *param_2 = pcVar15;
  param_2[1] = lVar4;
  return;
}

