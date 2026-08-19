// Function: FUN_14031ff80
// Addr: 14031ff80
// Size: 690 bytes


ulonglong FUN_14031ff80(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  
  bVar3 = false;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  iVar13 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar5 = 4;
  while( true ) {
    while( true ) {
      pbVar14 = param_1;
      if (((iVar5 != 0) && (pbVar14 = param_1 + 1, param_2 < param_1 + 2)) && (pbVar14 <= param_2))
      goto LAB_1403200ee;
      bVar1 = *pbVar14 >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar9 = bVar1 & 0xf;
      param_1 = pbVar14;
      if (uVar9 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar9) break;
    if (iVar13 < 0xccccccc) {
      if (((bVar1 & 0xf) != 0) || (iVar13 != 0)) {
        iVar17 = iVar17 + 1;
        iVar13 = uVar9 + iVar13 * 10;
      }
    }
    else {
      iVar16 = iVar16 + 1;
    }
  }
  iVar11 = 0;
  pbVar15 = pbVar14;
  if (uVar9 == 10) {
    while( true ) {
      pbVar14 = pbVar15;
      if (((iVar5 != 0) && (pbVar14 = pbVar15 + 1, param_2 < pbVar15 + 2)) && (pbVar14 <= param_2))
      goto LAB_1403200ee;
      bVar1 = *pbVar14 >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar9 = bVar1 & 0xf;
      if (9 < uVar9) break;
      pbVar15 = pbVar14;
      if (((bVar1 & 0xf) == 0) && (iVar13 == 0)) {
        iVar16 = iVar16 + -1;
      }
      else if ((iVar13 < 0xccccccc) && (iVar11 < 9)) {
        iVar11 = iVar11 + 1;
        iVar13 = uVar9 + iVar13 * 10;
      }
    }
  }
  bVar2 = false;
  iVar10 = 0;
  bVar4 = false;
  if (uVar9 - 0xb < 2) {
    while( true ) {
      bVar2 = bVar4;
      pbVar15 = pbVar14;
      if (((iVar5 != 0) && (pbVar15 = pbVar14 + 1, param_2 < pbVar14 + 2)) && (pbVar15 <= param_2))
      goto LAB_1403200ee;
      uVar12 = *pbVar15 >> ((byte)iVar5 & 0x1f) & 0xf;
      if (9 < uVar12) break;
      iVar5 = 4 - iVar5;
      pbVar14 = pbVar15;
      if (iVar10 < 0x3e9) {
        iVar10 = uVar12 + iVar10 * 10;
        bVar4 = bVar2;
      }
      else {
        bVar4 = true;
      }
    }
    if (uVar9 == 0xc) {
      iVar10 = -iVar10;
    }
  }
  uVar7 = 0;
  if (iVar13 == 0) goto LAB_140320111;
  if (bVar2) {
    if (uVar9 == 0xc) goto LAB_140320111;
  }
  else {
    param_3 = param_3 + iVar16 + iVar10;
    iVar5 = param_3 + iVar17;
    if (param_4 != (int *)0x0) {
      iVar11 = iVar11 + iVar17;
      if (iVar11 < 6) {
        if (0x7fff < iVar13) {
          uVar7 = func_0x0001402efae0(iVar13,10);
          return uVar7;
        }
        if (0 < iVar5) {
          iVar16 = 5;
          if (iVar5 < 5) {
            iVar16 = iVar5;
          }
          if (0 < iVar16 - iVar11) {
            iVar5 = iVar5 - iVar16;
            iVar13 = iVar13 * *(int *)(&DAT_14043d9c0 + (longlong)(iVar16 - iVar11) * 4);
            if (0x7fff < iVar13) {
              iVar13 = iVar13 / 10;
              iVar5 = iVar5 + 1;
            }
            *param_4 = iVar5;
            uVar7 = (ulonglong)(uint)(iVar13 << 0x10);
            goto LAB_140320111;
          }
        }
        *param_4 = iVar5 - iVar11;
        uVar7 = (ulonglong)(uint)(iVar13 << 0x10);
      }
      else {
        if (0x7fff < iVar13 / (int)(&DAT_14043d9ac)[iVar11]) {
          uVar7 = func_0x0001402efae0(iVar13,(&DAT_14043d9b0)[iVar11]);
          return uVar7;
        }
        uVar9 = func_0x0001402efae0(iVar13,(&DAT_14043d9ac)[iVar11]);
        *param_4 = iVar5 + -5;
        uVar7 = (ulonglong)uVar9;
      }
      goto LAB_140320111;
    }
    if (iVar5 < 6) {
      uVar7 = 0;
      if (iVar5 < -5) goto LAB_140320111;
      iVar11 = iVar11 - param_3;
      if (iVar5 < 0) {
        iVar13 = iVar13 / *(int *)(&DAT_14043d9c0 + (longlong)iVar5 * -4);
        iVar11 = iVar11 + iVar5;
      }
      if (iVar11 == 10) {
        iVar13 = iVar13 / 10;
        lVar8 = 0x24;
      }
      else {
        lVar8 = (longlong)iVar11 * 4;
        if (iVar11 < 1) {
          if (iVar13 * *(int *)(&DAT_14043d9c0 + (longlong)iVar11 * -4) < 0x8000) {
            uVar7 = (ulonglong)
                    (uint)(iVar13 * *(int *)(&DAT_14043d9c0 + (longlong)iVar11 * -4) * 0x10000);
            goto LAB_140320111;
          }
          goto LAB_14032010b;
        }
      }
      if (iVar13 / *(int *)(&DAT_14043d9c0 + lVar8) < 0x8000) {
        uVar9 = func_0x0001402efae0(iVar13,*(int *)(&DAT_14043d9c0 + lVar8));
        uVar7 = (ulonglong)uVar9;
      }
      goto LAB_140320111;
    }
  }
LAB_14032010b:
  uVar7 = 0x7fffffff;
LAB_140320111:
  uVar6 = (ulonglong)(uint)-(int)uVar7;
  if (!bVar3) {
    uVar6 = uVar7;
  }
  return uVar6;
LAB_1403200ee:
  uVar7 = 0;
  goto LAB_140320111;
}

