// Function: FUN_14033c700
// Addr: 14033c700
// Size: 786 bytes


uint FUN_14033c700(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  
  cVar3 = *param_1;
  uVar14 = (uint)cVar3;
  if (cVar3 != 'u') goto LAB_14033c8d1;
  bVar9 = param_1[1];
  if ((bVar9 == 0x6e) && (param_1[2] == 'i')) {
    bVar1 = param_1[3];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) {
      if (5 < bVar1 - 0x41) goto LAB_14033c7ca;
      uVar4 = bVar1 - 0x37;
    }
    if (uVar4 < 0x10) {
      bVar1 = param_1[4];
      uVar10 = bVar1 - 0x30;
      if (9 < uVar10) {
        if (5 < bVar1 - 0x41) goto LAB_14033c7ca;
        uVar10 = bVar1 - 0x37;
      }
      if (uVar10 < 0x10) {
        bVar1 = param_1[5];
        uVar5 = bVar1 - 0x30;
        if (9 < uVar5) {
          if (5 < bVar1 - 0x41) goto LAB_14033c7ca;
          uVar5 = bVar1 - 0x37;
        }
        if (uVar5 < 0x10) {
          bVar1 = param_1[6];
          uVar6 = bVar1 - 0x30;
          if (9 < uVar6) {
            if (5 < bVar1 - 0x41) goto LAB_14033c7ca;
            uVar6 = bVar1 - 0x37;
          }
          if (uVar6 < 0x10) {
            uVar6 = uVar6 + (uVar5 + (uVar10 + uVar4 * 0x10) * 0x10) * 0x10;
            if (param_1[7] == '\0') {
              return uVar6;
            }
            if (param_1[7] == '.') goto LAB_14033c7c4;
          }
        }
      }
    }
  }
LAB_14033c7ca:
  uVar4 = bVar9 - 0x30;
  if (uVar4 < 10) {
LAB_14033c7e8:
    if (uVar4 < 0x10) {
      bVar9 = param_1[2];
      uVar10 = bVar9 - 0x30;
      if (9 < uVar10) {
        if (5 < bVar9 - 0x41) goto LAB_14033c8de;
        uVar10 = bVar9 - 0x37;
      }
      if (uVar10 < 0x10) {
        bVar9 = param_1[3];
        uVar5 = bVar9 - 0x30;
        if (9 < uVar5) {
          if (5 < bVar9 - 0x41) goto LAB_14033c8de;
          uVar5 = bVar9 - 0x37;
        }
        if (uVar5 < 0x10) {
          bVar9 = param_1[4];
          uVar6 = bVar9 - 0x30;
          if (9 < uVar6) {
            if (5 < bVar9 - 0x41) goto LAB_14033c8de;
            uVar6 = bVar9 - 0x37;
          }
          if (uVar6 < 0x10) {
            uVar6 = uVar6 + (uVar5 + (uVar10 + uVar4 * 0x10) * 0x10) * 0x10;
            bVar9 = param_1[5];
            uVar4 = bVar9 - 0x30;
            if (uVar4 < 10) {
LAB_14033c88f:
              if (uVar4 < 0x10) {
                bVar9 = param_1[6];
                uVar6 = uVar6 * 0x10 + uVar4;
                uVar4 = bVar9 - 0x30;
                if (9 < uVar4) {
                  if (5 < bVar9 - 0x41) goto LAB_14033c8c0;
                  uVar4 = bVar9 - 0x37;
                }
                if (uVar4 < 0x10) {
                  bVar9 = param_1[7];
                  uVar6 = uVar6 * 0x10 + uVar4;
                }
              }
            }
            else if (bVar9 - 0x41 < 6) {
              uVar4 = bVar9 - 0x37;
              goto LAB_14033c88f;
            }
LAB_14033c8c0:
            if (bVar9 == 0) {
              return uVar6;
            }
            if (bVar9 == 0x2e) {
LAB_14033c7c4:
              return uVar6 | 0x80000000;
            }
          }
        }
      }
    }
LAB_14033c8d1:
    if (cVar3 == '\0') {
      return 0;
    }
  }
  else if (bVar9 - 0x41 < 6) {
    uVar4 = bVar9 - 0x37;
    goto LAB_14033c7e8;
  }
LAB_14033c8de:
  uVar4 = 0;
  pcVar13 = param_1;
  do {
    if (cVar3 == '.') break;
    cVar3 = pcVar13[1];
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  if (pcVar13 <= param_1) {
    return 0;
  }
  iVar15 = 0x34;
  iVar12 = 0;
  do {
    iVar11 = iVar15 + iVar12 >> 1;
    uVar10 = (byte)(&DAT_1404430d0)
                   [CONCAT11((&DAT_1404430d2)[iVar11 * 2],(&DAT_1404430d3)[iVar11 * 2])] & 0x7f;
    pbVar2 = &DAT_1404430d0 + CONCAT11((&DAT_1404430d2)[iVar11 * 2],(&DAT_1404430d3)[iVar11 * 2]);
    if (uVar10 == uVar14) goto joined_r0x00014033c96b;
    iVar7 = iVar11 + 1;
    if ((int)uVar14 <= (int)uVar10) {
      iVar7 = iVar12;
      iVar15 = iVar11;
    }
    iVar12 = iVar7;
  } while (iVar7 < iVar15);
LAB_14033c9b6:
  uVar14 = uVar4 | 0x80000000;
  if (*pcVar13 != '.') {
    uVar14 = uVar4;
  }
  return uVar14;
  while (pbVar2 = pbVar8, (int)*param_1 == uVar14) {
joined_r0x00014033c96b:
    param_1 = param_1 + 1;
    if (pcVar13 <= param_1) {
      if ((-1 < (char)*pbVar2) && ((char)pbVar2[1] < '\0')) {
        uVar4 = (uint)CONCAT11(pbVar2[2],pbVar2[3]);
      }
      break;
    }
    pbVar8 = pbVar2 + 1;
    uVar14 = pbVar2[1] & 0x7f;
    if (-1 < (char)*pbVar2) {
      if ((char)pbVar2[1] < '\0') {
        pbVar8 = pbVar2 + 3;
      }
      pbVar8 = pbVar8 + 1;
      while( true ) {
        if ((int)uVar14 < 1) goto LAB_14033c9b6;
        pbVar2 = &DAT_1404430d0 + CONCAT11(*pbVar8,pbVar8[1]);
        if ((int)*param_1 == ((byte)(&DAT_1404430d0)[CONCAT11(*pbVar8,pbVar8[1])] & 0x7f)) break;
        uVar14 = uVar14 - 1;
        pbVar8 = pbVar8 + 2;
      }
      goto joined_r0x00014033c96b;
    }
  }
  goto LAB_14033c9b6;
}

