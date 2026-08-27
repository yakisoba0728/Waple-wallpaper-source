// Function: FUN_1400ad590
// Addr: 1400ad590
// Size: 1944 bytes


/* WARNING: Removing unreachable block (ram,0x0001400adb82) */

char * FUN_1400ad590(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char *pcVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint local_88;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar5 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar5 = "#base: disabled by previous error";
    }
    return pcVar5;
  }
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar5 = (char *)0x0;
  bVar4 = false;
  param_1[1] = 0;
  iVar12 = param_1[0x816];
  if (iVar12 == 0) {
    iVar12 = 8;
    param_1[0xb] = 8;
    if (param_1[10] != 0) {
      iVar12 = param_1[10] + -1;
      param_1[0xb] = iVar12;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    iVar11 = 1 << ((byte)iVar12 & 0x1f);
    param_1[0xc] = iVar11;
    iVar8 = iVar11 + 1;
    param_1[0xd] = iVar8;
    param_1[0xe] = iVar8;
    param_1[0xf] = iVar8;
    param_1[0x10] = iVar12 + 1;
    pcVar16 = (char *)0x0;
    if (iVar11 != 0) {
      do {
        *(undefined2 *)((longlong)param_1 + (longlong)pcVar5 * 2 + 0xa060) = 0;
        *(char *)(param_1 + (longlong)pcVar5 * 2 + 0x818) = (char)pcVar5;
        uVar30 = (int)pcVar5 + 1;
        pcVar5 = (char *)(ulonglong)uVar30;
      } while (uVar30 < (uint)param_1[0xc]);
    }
LAB_1400ad6f0:
    do {
      pcVar5 = pcVar16;
      pbVar23 = (byte *)0x0;
      lVar3 = *param_3;
      pbVar25 = pbVar23;
      if (lVar3 != 0) {
        pbVar23 = (byte *)(param_3[2] + lVar3);
        pbVar25 = (byte *)(param_3[3] + lVar3);
      }
      uVar30 = param_1[0xe];
      local_88 = param_1[0xf];
      uVar13 = (ulonglong)local_88;
      uVar24 = param_1[0x10];
      uVar17 = param_1[0x11];
      uVar15 = param_1[0x12];
      uVar1 = param_1[0xc];
      uVar2 = param_1[0xd];
      pbVar26 = pbVar25;
      uVar9 = (ulonglong)(uint)param_1[0x14];
      do {
        uVar20 = (uint)uVar9;
        pbVar27 = pbVar26;
        uVar14 = uVar15;
        if (uVar15 < uVar24) {
          if ((ulonglong)((longlong)pbVar23 - (longlong)pbVar26) < 4) {
            if (pbVar23 == pbVar26) {
LAB_1400ada51:
              iVar12 = ((char)param_3[5] != '\0') + 2;
              param_1[0x15] = iVar12;
              if (iVar12 != 2) goto LAB_1400ada94;
              goto LAB_1400adabc;
            }
            uVar17 = uVar17 | (uint)*pbVar26 << ((byte)uVar15 & 0x1f);
            pbVar27 = pbVar26 + 1;
            uVar14 = uVar15 + 8;
            if (uVar14 < uVar24) {
              if (pbVar23 == pbVar27) goto LAB_1400ada51;
              bVar6 = (byte)uVar14;
              uVar14 = uVar15 + 0x10;
              uVar17 = uVar17 | (uint)*pbVar27 << (bVar6 & 0x1f);
              pbVar27 = pbVar26 + 2;
              if (uVar14 < uVar24) {
                param_1[0x15] = 5;
                goto LAB_1400ada94;
              }
            }
          }
          else {
            uVar17 = uVar17 | *(int *)pbVar26 << ((byte)uVar15 & 0x1f);
            pbVar27 = pbVar26 + (0x1f - uVar15 >> 3);
            uVar14 = uVar15 | 0x18;
          }
        }
        uVar15 = uVar14 - uVar24;
        uVar22 = uVar17 & *(uint *)(&DAT_140482730 + (ulonglong)uVar24 * 4);
        bVar6 = (byte)uVar24;
        uVar17 = uVar17 >> (bVar6 & 0x1f);
        uVar14 = uVar15;
        if (uVar22 < uVar1) {
          uVar29 = (ulonglong)(uVar20 + 1 & 0x1fff);
          uVar21 = (undefined1)uVar22;
          *(undefined1 *)((longlong)param_1 + uVar9 + 0xc060) = uVar21;
          if (uVar30 < 0x1000) {
            uVar10 = *(short *)((longlong)param_1 + uVar13 * 2 + 0xa060) + 1;
            uVar9 = (ulonglong)uVar30;
            uVar7 = uVar10 & 0xfff;
            *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xa060) = uVar7;
            if ((uVar10 & 7) == 0) {
              *(short *)((longlong)param_1 + uVar9 * 2 + 0x58) = (short)uVar13;
              *(undefined1 *)(param_1 + uVar9 * 2 + 0x818) = uVar21;
            }
            else {
              *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0x58) =
                   *(undefined2 *)((longlong)param_1 + uVar13 * 2 + 0x58);
              *(undefined8 *)(param_1 + uVar9 * 2 + 0x818) =
                   *(undefined8 *)(param_1 + uVar13 * 2 + 0x818);
              *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar7 & 7) + uVar9 * 8 + 0x2060) =
                   uVar21;
            }
            uVar30 = uVar30 + 1;
            if (uVar24 < 0xc) {
              uVar24 = uVar24 + (uVar30 >> (bVar6 & 0x1f) & 1);
            }
            uVar13 = (ulonglong)uVar22;
            local_88 = uVar22;
          }
        }
        else if (uVar22 < uVar2 || uVar22 == uVar2) {
          if (uVar22 == uVar2) {
            param_1[0x15] = 0;
            goto LAB_1400ada94;
          }
          uVar13 = (ulonglong)uVar2;
          uVar24 = param_1[0xb] + 1;
          uVar29 = uVar9;
          uVar30 = uVar2;
          local_88 = uVar2;
        }
        else {
          if (uVar30 < uVar22) {
            param_1[0x15] = 4;
            goto LAB_1400ada94;
          }
          uVar9 = uVar13;
          if (uVar22 != uVar30) {
            uVar9 = (ulonglong)uVar22;
          }
          uVar7 = *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xa060);
          uVar19 = (ulonglong)((uVar7 & 0xfffffff8) + uVar20 & 0x1fff);
          uVar28 = uVar20 + 1 + (uint)uVar7 & 0x1fff;
          uVar29 = (ulonglong)uVar28;
          uVar20 = (uint)(uVar7 >> 3);
          *(undefined8 *)((longlong)param_1 + uVar19 + 0xc060) =
               *(undefined8 *)(param_1 + uVar9 * 2 + 0x818);
          if (uVar7 >> 3 != 0) {
            do {
              uVar19 = (ulonglong)((int)uVar19 - 8U & 0x1fff);
              uVar7 = *(ushort *)((longlong)param_1 + uVar9 * 2 + 0x58);
              uVar9 = (ulonglong)uVar7;
              *(undefined8 *)((longlong)param_1 + uVar19 + 0xc060) =
                   *(undefined8 *)(param_1 + (ulonglong)uVar7 * 2 + 0x818);
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          uVar21 = (undefined1)param_1[uVar9 * 2 + 0x818];
          if (uVar22 == uVar30) {
            *(undefined1 *)((longlong)param_1 + uVar29 + 0xc060) = uVar21;
            uVar29 = (ulonglong)(uVar28 + 1 & 0x1fff);
          }
          if (uVar30 < 0x1000) {
            uVar10 = *(short *)((longlong)param_1 + uVar13 * 2 + 0xa060) + 1;
            uVar9 = (ulonglong)uVar30;
            uVar7 = uVar10 & 0xfff;
            *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xa060) = uVar7;
            if ((uVar10 & 7) == 0) {
              *(short *)((longlong)param_1 + uVar9 * 2 + 0x58) = (short)local_88;
              *(undefined1 *)(param_1 + uVar9 * 2 + 0x818) = uVar21;
            }
            else {
              *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0x58) =
                   *(undefined2 *)((longlong)param_1 + uVar13 * 2 + 0x58);
              *(undefined8 *)(param_1 + uVar9 * 2 + 0x818) =
                   *(undefined8 *)(param_1 + uVar13 * 2 + 0x818);
              *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar7 & 7) + uVar9 * 8 + 0x2060) =
                   uVar21;
            }
            uVar30 = uVar30 + 1;
            if (uVar24 < 0xc) {
              uVar24 = uVar24 + (uVar30 >> (bVar6 & 0x1f) & 1);
            }
            uVar13 = (ulonglong)uVar22;
            local_88 = uVar22;
          }
        }
        uVar20 = (uint)uVar29;
        pbVar26 = pbVar27;
        uVar9 = uVar29;
      } while (uVar20 < 0x1000);
      param_1[0x15] = 1;
LAB_1400ada94:
      iVar12 = (int)uVar13;
      if (uVar14 < 8) {
LAB_1400adabc:
        iVar12 = (int)uVar13;
      }
      else {
        do {
          uVar14 = uVar14 - 8;
          if (pbVar27 <= pbVar25) {
            param_1[0x15] = 5;
            goto LAB_1400adabc;
          }
          pbVar27 = pbVar27 + -1;
        } while (7 < uVar14);
      }
      param_1[0xe] = uVar30;
      param_1[0xf] = iVar12;
      param_1[0x10] = uVar24;
      param_1[0x11] = uVar17;
      param_1[0x12] = uVar14;
      param_1[0x14] = uVar20;
      if (*param_3 != 0) {
        param_3[3] = (longlong)pbVar27 - *param_3;
      }
      if (param_1[0x14] != 0) {
        iVar12 = 1;
LAB_1400adb3b:
        pcVar5 = (char *)0x0;
        lVar3 = *param_2;
        pcVar16 = pcVar5;
        pcVar18 = pcVar5;
        if ((lVar3 != 0) &&
           (pcVar16 = (char *)(param_2[2] + lVar3), pcVar18 = pcVar16, (char)param_2[5] == '\0')) {
          pcVar18 = (char *)(param_2[1] + lVar3);
        }
        bVar4 = false;
        if ((param_1[0x817] == 0) || (param_1[0x817] == 1)) {
          uVar30 = param_1[0x14];
          if (uVar30 == 0) {
LAB_1400adbe5:
            param_1[0x817] = 0;
          }
          else {
            uVar24 = param_1[0x13];
            if (uVar30 < uVar24) {
              pcVar5 = "#lzw: internal error: inconsistent I/O";
            }
            else {
              uVar13 = (ulonglong)uVar30 - (ulonglong)uVar24;
              uVar9 = (longlong)pcVar18 - (longlong)pcVar16;
              if (uVar13 <= (ulonglong)((longlong)pcVar18 - (longlong)pcVar16)) {
                uVar9 = uVar13;
              }
              if (uVar9 != 0) {
                FUN_1404210f0(pcVar16,(ulonglong)uVar24 + 0xc060 + (longlong)param_1,uVar9);
                pcVar16 = pcVar16 + uVar9;
              }
              if (uVar9 == uVar13) {
                param_1[0x13] = 0;
                param_1[0x14] = 0;
                goto LAB_1400adbe5;
              }
              param_1[0x13] = param_1[0x13] + (int)uVar9 & 0x1fff;
              pcVar5 = "$base: short write";
              param_1[0x817] = 1;
            }
          }
        }
        else {
          param_1[0x817] = 0;
        }
        if (*param_2 != 0) {
          param_2[2] = (longlong)pcVar16 - *param_2;
        }
        if (pcVar5 != (char *)0x0) {
          if (*pcVar5 == '$') goto LAB_1400adc70;
          goto LAB_1400adc76;
        }
      }
      iVar12 = param_1[0x15];
      if (iVar12 == 0) {
        param_1[0x816] = 0;
        goto LAB_1400adcc7;
      }
      pcVar16 = pcVar5;
    } while (iVar12 == 1);
    if (iVar12 != 2) {
      if (iVar12 == 3) {
        pcVar5 = "#lzw: truncated input";
      }
      else {
        pcVar5 = "#lzw: bad code";
        if (iVar12 != 4) {
          pcVar5 = "#lzw: internal error: inconsistent I/O";
        }
      }
      goto LAB_1400adcd1;
    }
    pcVar5 = "$base: short read";
    iVar12 = 2;
LAB_1400adc70:
    bVar4 = true;
  }
  else {
    if (iVar12 == 1) goto LAB_1400adb3b;
    pcVar16 = pcVar5;
    if (iVar12 == 2) goto LAB_1400ad6f0;
  }
LAB_1400adc76:
  iVar8 = 0;
  if (bVar4) {
    iVar8 = iVar12;
  }
  param_1[0x816] = iVar8;
  if ((pcVar5 == (char *)0x0) || (iVar12 = 1, *pcVar5 != '$')) {
    iVar12 = 0;
  }
  param_1[1] = iVar12;
LAB_1400adcc7:
  if (pcVar5 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*pcVar5 != '#') {
    return pcVar5;
  }
LAB_1400adcd1:
  *param_1 = 0x75ae3d2;
  return pcVar5;
}

