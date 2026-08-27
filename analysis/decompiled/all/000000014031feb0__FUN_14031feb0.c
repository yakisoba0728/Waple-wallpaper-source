// Function: FUN_14031feb0
// Addr: 14031feb0
// Size: 893 bytes


int FUN_14031feb0(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  
  bVar3 = false;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  iVar11 = 0;
  iVar14 = 0;
  iVar15 = 0;
  iVar5 = 4;
  while( true ) {
    while( true ) {
      pbVar12 = param_1;
      if (((iVar5 != 0) && (pbVar12 = param_1 + 1, param_2 < param_1 + 2)) && (pbVar12 <= param_2))
      goto LAB_14032001e;
      bVar1 = *pbVar12 >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar7 = bVar1 & 0xf;
      param_1 = pbVar12;
      if (uVar7 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar7) break;
    if (iVar11 < 0xccccccc) {
      if (((bVar1 & 0xf) != 0) || (iVar11 != 0)) {
        iVar15 = iVar15 + 1;
        iVar11 = uVar7 + iVar11 * 10;
      }
    }
    else {
      iVar14 = iVar14 + 1;
    }
  }
  iVar9 = 0;
  pbVar13 = pbVar12;
  if (uVar7 == 10) {
    while( true ) {
      pbVar12 = pbVar13;
      if (((iVar5 != 0) && (pbVar12 = pbVar13 + 1, param_2 < pbVar13 + 2)) && (pbVar12 <= param_2))
      goto LAB_14032001e;
      bVar1 = *pbVar12 >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar7 = bVar1 & 0xf;
      if (9 < uVar7) break;
      pbVar13 = pbVar12;
      if (((bVar1 & 0xf) == 0) && (iVar11 == 0)) {
        iVar14 = iVar14 + -1;
      }
      else if ((iVar11 < 0xccccccc) && (iVar9 < 9)) {
        iVar9 = iVar9 + 1;
        iVar11 = uVar7 + iVar11 * 10;
      }
    }
  }
  bVar2 = false;
  iVar8 = 0;
  bVar4 = false;
  if (uVar7 - 0xb < 2) {
    while( true ) {
      bVar2 = bVar4;
      pbVar13 = pbVar12;
      if (((iVar5 != 0) && (pbVar13 = pbVar12 + 1, param_2 < pbVar12 + 2)) && (pbVar13 <= param_2))
      goto LAB_14032001e;
      uVar10 = *pbVar13 >> ((byte)iVar5 & 0x1f) & 0xf;
      if (9 < uVar10) break;
      iVar5 = 4 - iVar5;
      pbVar12 = pbVar13;
      if (iVar8 < 0x3e9) {
        iVar8 = uVar10 + iVar8 * 10;
        bVar4 = bVar2;
      }
      else {
        bVar4 = true;
      }
    }
    if (uVar7 == 0xc) {
      iVar8 = -iVar8;
    }
  }
  iVar5 = 0;
  if (iVar11 == 0) goto LAB_140320041;
  if (bVar2) {
    if (uVar7 == 0xc) goto LAB_140320041;
  }
  else {
    param_3 = param_3 + iVar14 + iVar8;
    iVar14 = param_3 + iVar15;
    if (param_4 != (int *)0x0) {
      iVar9 = iVar9 + iVar15;
      if (iVar9 < 6) {
        if (iVar11 < 0x8000) {
          if (0 < iVar14) {
            iVar5 = 5;
            if (iVar14 < 5) {
              iVar5 = iVar14;
            }
            if (0 < iVar5 - iVar9) {
              iVar14 = iVar14 - iVar5;
              iVar11 = iVar11 * (&DAT_14043d8f0)[iVar5 - iVar9];
              if (0x7fff < iVar11) {
                iVar11 = iVar11 / 10;
                iVar14 = iVar14 + 1;
              }
              *param_4 = iVar14;
              iVar5 = iVar11 << 0x10;
              goto LAB_140320041;
            }
          }
          *param_4 = iVar14 - iVar9;
          iVar5 = iVar11 << 0x10;
        }
        else {
          iVar5 = FUN_1402efa10(iVar11,10);
          *param_4 = (iVar14 - iVar9) + 1;
        }
      }
      else if (iVar11 / (int)(&DAT_14043d8dc)[iVar9] < 0x8000) {
        iVar5 = FUN_1402efa10(iVar11,(&DAT_14043d8dc)[iVar9]);
        *param_4 = iVar14 + -5;
      }
      else {
        iVar5 = FUN_1402efa10(iVar11,(&DAT_14043d8e0)[iVar9]);
        *param_4 = iVar14 + -4;
      }
      goto LAB_140320041;
    }
    if (iVar14 < 6) {
      iVar5 = 0;
      if (iVar14 < -5) goto LAB_140320041;
      iVar9 = iVar9 - param_3;
      if (iVar14 < 0) {
        iVar11 = iVar11 / (int)(&DAT_14043d8f0)[-(longlong)iVar14];
        iVar9 = iVar9 + iVar14;
      }
      if (iVar9 == 10) {
        iVar11 = iVar11 / 10;
        lVar6 = 0x24;
      }
      else {
        lVar6 = (longlong)iVar9 * 4;
        if (iVar9 < 1) {
          if (iVar11 * (&DAT_14043d8f0)[-(longlong)iVar9] < 0x8000) {
            iVar5 = iVar11 * (&DAT_14043d8f0)[-(longlong)iVar9] * 0x10000;
            goto LAB_140320041;
          }
          goto LAB_14032003b;
        }
      }
      if (iVar11 / *(int *)((longlong)&DAT_14043d8f0 + lVar6) < 0x8000) {
        iVar5 = FUN_1402efa10(iVar11,*(int *)((longlong)&DAT_14043d8f0 + lVar6));
      }
      goto LAB_140320041;
    }
  }
LAB_14032003b:
  iVar5 = 0x7fffffff;
LAB_140320041:
  iVar11 = -iVar5;
  if (!bVar3) {
    iVar11 = iVar5;
  }
  return iVar11;
LAB_14032001e:
  iVar5 = 0;
  goto LAB_140320041;
}

