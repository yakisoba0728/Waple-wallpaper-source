// Function: FUN_1400acd40
// Addr: 1400acd40
// Size: 2063 bytes


byte * FUN_1400acd40(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  byte *local_70;
  longlong local_60;
  byte *local_58;
  
  pcVar11 = (char *)0x0;
  local_80 = 0;
  local_84 = 0;
  local_7c = 0;
  local_60 = 0;
  local_70 = (byte *)0x0;
  pbVar23 = (byte *)pcVar11;
  if (((param_2 != (longlong *)0x0) && (lVar2 = *param_2, pbVar23 = (byte *)0x0, lVar2 != 0)) &&
     (pbVar23 = (byte *)(param_2[2] + lVar2), local_70 = pbVar23, local_60 = lVar2,
     (char)param_2[5] == '\0')) {
    local_70 = (byte *)(param_2[1] + lVar2);
  }
  local_58 = (byte *)0x0;
  pbVar13 = (byte *)pcVar11;
  if ((param_3 != (longlong *)0x0) && (lVar2 = *param_3, lVar2 != 0)) {
    pbVar13 = (byte *)(param_3[3] + lVar2);
    local_58 = (byte *)(param_3[2] + lVar2);
  }
  iVar8 = *(int *)(param_1 + 0x68);
  bVar3 = true;
  if (iVar8 == 0) {
    uVar14 = *(uint *)(param_1 + 0x2c);
    if ((uVar14 < 8) && (uVar22 = *(uint *)(param_1 + 0x28), uVar22 >> ((byte)uVar14 & 7) == 0)) {
      uVar4 = (1 << ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x1f)) - 1;
      local_88 = (1 << ((byte)*(undefined4 *)(param_1 + 0x40) & 0x1f)) - 1;
      pbVar18 = (byte *)pcVar11;
      goto LAB_1400acf10;
    }
LAB_1400ad4ee:
    pcVar11 = "#deflate: internal error: inconsistent n_bits";
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa2fc);
    local_80 = *(uint *)(param_1 + 0xa304);
    local_84 = *(uint *)(param_1 + 0xa308);
    uVar5 = *(uint *)(param_1 + 0xa30c);
    pbVar18 = (byte *)(ulonglong)uVar5;
    local_7c = *(uint *)(param_1 + 0xa310);
    uVar22 = *(uint *)(param_1 + 0xa2f0);
    uVar14 = *(uint *)(param_1 + 0xa2f4);
    uVar12 = *(uint *)(param_1 + 0xa2f8);
    uVar20 = *(uint *)(param_1 + 0xa300);
    uVar19 = local_80;
    uVar15 = local_84;
    uVar21 = local_7c;
    local_88 = uVar20;
    local_78 = uVar5;
    switch(iVar8) {
    case 1:
      while (uVar5 = (uint)pbVar18, pbVar13 != local_58) {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
        uVar14 = uVar14 + 8;
        while( true ) {
          uVar5 = *(uint *)(param_1 + 0x70 + (ulonglong)(uVar4 & uVar22) * 4);
          uVar12 = uVar5 & 0xf;
          if (uVar14 < uVar12) break;
          uVar22 = uVar22 >> (sbyte)uVar12;
          uVar14 = uVar14 - uVar12;
          if (-1 < (int)uVar5) {
            if (0x3fffffff < uVar5) {
LAB_1400ad073:
              uVar12 = uVar5 >> 4 & 0xf;
              local_78 = (uVar5 >> 8 & 0xff) + 3;
              pbVar18 = (byte *)(ulonglong)local_78;
              uVar20 = local_88;
              if ((uVar5 & 0xf0) != 0) {
                for (; uVar14 < uVar12; uVar14 = uVar14 + 8) {
                  iVar8 = 5;
switchD_1400ace9a_caseD_5:
                  uVar5 = (uint)pbVar18;
                  if (pbVar13 == local_58) goto LAB_1400ad43e;
                  bVar1 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
                }
                uVar5 = *(uint *)(&DAT_140482730 + (ulonglong)uVar12 * 4) & uVar22;
                uVar22 = uVar22 >> ((byte)uVar12 & 0x1f);
                local_78 = (uVar5 + (int)pbVar18 + -3 & 0xff) + 3;
                pbVar18 = (byte *)(ulonglong)local_78;
                uVar14 = uVar14 - uVar12;
                uVar20 = local_88;
              }
              while( true ) {
                uVar5 = *(uint *)(param_1 + 0x1070 + (ulonglong)(uVar20 & uVar22) * 4);
                uVar12 = uVar5 & 0xf;
                if (uVar12 <= uVar14) break;
                iVar8 = 6;
LAB_1400ad123:
                uVar5 = (uint)pbVar18;
                if (pbVar13 == local_58) goto LAB_1400ad43e;
                bVar1 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
                uVar14 = uVar14 + 8;
              }
              uVar22 = uVar22 >> (sbyte)uVar12;
              uVar14 = uVar14 - uVar12;
              if ((byte)(uVar5 >> 0x1c) == 1) {
                uVar19 = uVar5 >> 8 & 0xffff;
                uVar15 = (1 << ((byte)(uVar5 >> 4) & 0xf)) - 1;
                local_84 = uVar15;
                local_80 = uVar19;
                while( true ) {
                  uVar5 = *(uint *)(param_1 + 0x1070 +
                                   (ulonglong)((uVar15 & uVar22) + uVar19 & 0x3ff) * 4);
                  uVar12 = uVar5 & 0xf;
                  if (uVar12 <= uVar14) break;
                  iVar8 = 7;
switchD_1400ace9a_caseD_7:
                  uVar5 = (uint)pbVar18;
                  if (pbVar13 == local_58) goto LAB_1400ad43e;
                  bVar1 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
                  uVar14 = uVar14 + 8;
                }
                uVar22 = uVar22 >> (sbyte)uVar12;
                uVar14 = uVar14 - uVar12;
              }
              if (uVar5 >> 0x18 == 0x40) {
                uVar21 = uVar5 >> 8 & 0x7fff;
                uVar12 = uVar5 >> 4 & 0xf;
                local_7c = uVar21;
                if ((uVar5 & 0xf0) != 0) {
                  for (; uVar14 < uVar12; uVar14 = uVar14 + 8) {
                    iVar8 = 8;
switchD_1400ace9a_caseD_8:
                    uVar5 = (uint)pbVar18;
                    if (pbVar13 == local_58) goto LAB_1400ad43e;
                    bVar1 = *pbVar13;
                    pbVar13 = pbVar13 + 1;
                    uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
                  }
                  local_7c = uVar21 + (*(uint *)(&DAT_140482730 + (ulonglong)uVar12 * 4) & uVar22) &
                             0x7fff;
                  uVar22 = uVar22 >> ((byte)uVar12 & 0x1f);
                  uVar14 = uVar14 - uVar12;
                }
switchD_1400ace9a_caseD_9:
                uVar16 = (ulonglong)(local_7c + 1);
                if ((ulonglong)((longlong)pbVar23 - local_60) < uVar16) {
                  iVar8 = ((int)local_60 - (int)pbVar23) + local_7c;
                  uVar5 = iVar8 + 1;
                  pbVar10 = (byte *)(ulonglong)uVar5;
                  if ((uint)pbVar18 <= uVar5) {
                    pbVar10 = pbVar18;
                  }
                  if (param_2 == (longlong *)0x0) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = (int)param_2[4];
                  }
                  uVar5 = iVar8 + 1 + (*(int *)(param_1 + 0x30) - iVar7);
                  if (*(uint *)(param_1 + 0x38) < uVar5) {
                    pcVar11 = "#deflate: bad distance";
                    goto LAB_1400ad4f5;
                  }
                  uVar9 = (ulonglong)(*(uint *)(param_1 + 0x38) - uVar5 & 0x7fff);
                  pbVar6 = (byte *)(0x8101 - uVar9);
                  pbVar17 = pbVar10;
                  if (pbVar6 <= pbVar10) {
                    pbVar17 = pbVar6;
                  }
                  pbVar6 = local_70 + -(longlong)pbVar23;
                  if (pbVar17 <= local_70 + -(longlong)pbVar23) {
                    pbVar6 = pbVar17;
                  }
                  uVar5 = (uint)pbVar18;
                  if (pbVar6 != (byte *)0x0) {
                    FUN_1404210f0(pbVar23,uVar9 + param_1 + 0x2070,pbVar6);
                    pbVar23 = pbVar23 + (longlong)pbVar6;
                    uVar5 = local_78;
                  }
                  if ((uint)pbVar6 < (uint)pbVar10) {
                    uVar5 = uVar5 - (uint)pbVar6;
                    iVar8 = 9;
                    goto LAB_1400ad465;
                  }
                  uVar5 = uVar5 - (uint)pbVar10;
                  pbVar18 = (byte *)(ulonglong)uVar5;
                  if (uVar5 == 0) goto LAB_1400acf10;
                }
                uVar5 = (uint)pbVar18;
                if (local_7c + 1 == 0) {
                  uVar20 = 0;
                }
                else if ((ulonglong)((longlong)pbVar23 - local_60) < uVar16) {
                  uVar20 = 0;
                }
                else {
                  pbVar17 = local_70 + -(longlong)pbVar23;
                  pbVar10 = pbVar23 + -uVar16;
                  uVar20 = (uint)pbVar17;
                  if (pbVar18 <= pbVar17) {
                    pbVar17 = pbVar18;
                    uVar20 = uVar5;
                  }
                  for (; (byte *)0x2 < pbVar17; pbVar17 = pbVar17 + -3) {
                    *pbVar23 = *pbVar10;
                    pbVar23[1] = pbVar10[1];
                    pbVar23[2] = pbVar10[2];
                    pbVar23 = pbVar23 + 3;
                    pbVar10 = pbVar10 + 3;
                  }
                  for (; pbVar17 != (byte *)0x0; pbVar17 = pbVar17 + -1) {
                    bVar1 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                    *pbVar23 = bVar1;
                    pbVar23 = pbVar23 + 1;
                  }
                }
                if (uVar20 < uVar5) {
                  uVar5 = uVar5 - uVar20;
                  iVar8 = 10;
                  goto LAB_1400ad465;
                }
                goto LAB_1400acf10;
              }
              pcVar11 = "#deflate: bad Huffman code";
              if (uVar5 >> 0x18 != 8) {
                pcVar11 = "#deflate: internal error: inconsistent Huffman decoder state";
              }
              goto LAB_1400ad4f5;
            }
            if (uVar5 < 0x20000000) {
              if (uVar5 < 0x10000000) {
                pcVar11 = "#deflate: bad Huffman code";
                if (uVar5 < 0x8000000) {
                  pcVar11 = "#deflate: internal error: inconsistent Huffman decoder state";
                }
                goto LAB_1400ad4f5;
              }
              uVar19 = uVar5 >> 8 & 0xffff;
              uVar15 = (1 << ((byte)(uVar5 >> 4) & 0xf)) - 1;
              local_84 = uVar15;
              local_80 = uVar19;
              while( true ) {
                uVar5 = *(uint *)(param_1 + 0x70 +
                                 (ulonglong)((uVar15 & uVar22) + uVar19 & 0x3ff) * 4);
                uVar12 = uVar5 & 0xf;
                if (uVar12 <= uVar14) break;
                iVar8 = 3;
switchD_1400ace9a_caseD_3:
                uVar5 = (uint)pbVar18;
                if (pbVar13 == local_58) goto LAB_1400ad43e;
                bVar1 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                uVar22 = uVar22 | (uint)bVar1 << ((byte)uVar14 & 0x1f);
                uVar14 = uVar14 + 8;
              }
              uVar22 = uVar22 >> (sbyte)uVar12;
              uVar14 = uVar14 - uVar12;
              if ((int)uVar5 < 0) {
                iVar8 = 4;
                *(ulonglong *)(param_1 + 0xa318) = (ulonglong)(uVar5 >> 8 & 0xff);
switchD_1400ace9a_caseD_4:
                uVar5 = (uint)pbVar18;
                if (pbVar23 == local_70) goto LAB_1400ad465;
                *pbVar23 = *(byte *)(param_1 + 0xa318);
                pbVar23 = pbVar23 + 1;
                goto LAB_1400acf10;
              }
              if (0x3fffffff < uVar5) goto LAB_1400ad073;
              if (uVar5 < 0x20000000) {
                pcVar11 = "#deflate: internal error: inconsistent Huffman decoder state";
                if ((uVar5 < 0x10000000) &&
                   (pcVar11 = "#deflate: bad Huffman code", uVar5 < 0x8000000)) {
                  pcVar11 = "#deflate: internal error: inconsistent Huffman decoder state";
                }
                goto LAB_1400ad4f5;
              }
            }
            *(undefined1 *)(param_1 + 0x44) = 1;
            goto LAB_1400ad3c3;
          }
          iVar8 = 2;
          *(ulonglong *)(param_1 + 0xa318) = (ulonglong)(uVar5 >> 8 & 0xff);
LAB_1400acf83:
          uVar5 = (uint)pbVar18;
          if (pbVar23 == local_70) {
LAB_1400ad465:
            pcVar11 = "$base: short write";
            goto LAB_1400ad47b;
          }
          *pbVar23 = *(byte *)(param_1 + 0xa318);
          pbVar23 = pbVar23 + 1;
LAB_1400acf10:
          if (*(int *)(param_1 + 0x68) != 0) {
LAB_1400ad3c3:
            *(uint *)(param_1 + 0x28) = uVar22;
            *(uint *)(param_1 + 0x2c) = uVar14;
            if ((7 < uVar14) || (uVar22 >> ((byte)uVar14 & 7) != 0)) goto LAB_1400ad4ee;
            *(undefined4 *)(param_1 + 0x68) = 0;
            goto LAB_1400ad4f5;
          }
        }
        iVar8 = 1;
      }
LAB_1400ad43e:
      pcVar11 = "$base: short read";
      break;
    case 2:
      goto LAB_1400acf83;
    case 3:
      goto switchD_1400ace9a_caseD_3;
    case 4:
      goto switchD_1400ace9a_caseD_4;
    case 5:
      goto switchD_1400ace9a_caseD_5;
    case 6:
      goto LAB_1400ad123;
    case 7:
      goto switchD_1400ace9a_caseD_7;
    case 8:
      goto switchD_1400ace9a_caseD_8;
    case 9:
    case 10:
      goto switchD_1400ace9a_caseD_9;
    default:
      bVar3 = false;
    }
LAB_1400ad47b:
    *(uint *)(param_1 + 0xa2f0) = uVar22;
    *(uint *)(param_1 + 0xa2f4) = uVar14;
    iVar7 = 0;
    if (bVar3) {
      iVar7 = iVar8;
    }
    *(uint *)(param_1 + 0xa2f8) = uVar12;
    *(int *)(param_1 + 0x68) = iVar7;
    *(uint *)(param_1 + 0xa2fc) = uVar4;
    *(uint *)(param_1 + 0xa300) = local_88;
    *(uint *)(param_1 + 0xa304) = local_80;
    *(uint *)(param_1 + 0xa308) = local_84;
    *(uint *)(param_1 + 0xa30c) = uVar5;
    *(uint *)(param_1 + 0xa310) = local_7c;
  }
LAB_1400ad4f5:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[2] = (longlong)pbVar23 - *param_2;
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pbVar13 - *param_3;
  }
  return (byte *)pcVar11;
}

