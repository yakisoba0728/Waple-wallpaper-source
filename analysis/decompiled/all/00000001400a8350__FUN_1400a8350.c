// Function: FUN_1400a8350
// Addr: 1400a8350
// Size: 2287 bytes


char * FUN_1400a8350(longlong param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  ushort uVar16;
  undefined1 uVar17;
  int iVar18;
  longlong lVar19;
  uint local_res18;
  byte *local_res20;
  
  pcVar6 = (char *)0x0;
  pbVar15 = (byte *)0x0;
  local_res18 = 0;
  local_res20 = (byte *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar19 = *param_2, lVar19 != 0)) {
    pbVar15 = (byte *)(param_2[3] + lVar19);
    local_res20 = (byte *)(param_2[2] + lVar19);
  }
  iVar18 = *(int *)(param_1 + 0x7c);
  lVar19 = 2;
  if (iVar18 == 0) {
    iVar18 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar8 = 0;
    goto LAB_1400a8496;
  }
  local_res18 = *(uint *)(param_1 + 0x40aacc);
  uVar14 = *(uint *)(param_1 + 0x40aac8);
  uVar8 = (ulonglong)uVar14;
  switch(iVar18) {
  case 1:
    while (uVar14 = (uint)uVar8, pbVar15 != local_res20) {
      bVar10 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      iVar18 = 8;
      *(undefined4 *)(param_1 + 0x2c) = 8;
      *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
      do {
        uVar14 = *(uint *)(param_1 + 0x28);
        iVar18 = iVar18 + -1;
        *(uint *)(param_1 + 0x5c) = uVar14 >> 0x1f | *(uint *)(param_1 + 0x5c) * 2;
        *(int *)(param_1 + 0x2c) = iVar18;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        *(uint *)(param_1 + 0x28) = uVar14 * 2;
LAB_1400a8496:
        uVar14 = (uint)uVar8;
        if (0x1f < uVar14) {
          if (iVar18 != 0) {
            uVar11 = *(uint *)(param_1 + 0x28);
            goto LAB_1400a855e;
          }
          iVar18 = 2;
          goto switchD_1400a842c_caseD_2;
        }
      } while (iVar18 != 0);
      iVar18 = 1;
    }
    break;
  case 2:
switchD_1400a842c_caseD_2:
    if (pbVar15 != local_res20) {
      bVar10 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      iVar18 = 8;
      *(undefined4 *)(param_1 + 0x2c) = 8;
      uVar11 = (uint)bVar10 << 0x18;
      *(uint *)(param_1 + 0x28) = uVar11;
LAB_1400a855e:
      if ((int)uVar11 < 0) {
        pcVar13 = "#bzip2: unsupported block randomization";
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
        uVar14 = 0;
        while( true ) {
          uVar11 = uVar11 * 2;
          iVar18 = iVar18 + -1;
          *(int *)(param_1 + 0x2c) = iVar18;
          *(uint *)(param_1 + 0x28) = uVar11;
          if (0x17 < uVar14) break;
          if (iVar18 == 0) {
            iVar18 = 3;
LAB_1400a85a5:
            if (pbVar15 == local_res20) goto LAB_1400a8526;
            bVar10 = *pbVar15;
            *(undefined4 *)(param_1 + 0x2c) = 8;
            iVar18 = 8;
            uVar11 = (uint)bVar10 << 0x18;
            pbVar15 = pbVar15 + 1;
            *(uint *)(param_1 + 0x28) = uVar11;
          }
          *(uint *)(param_1 + 0x60) = uVar11 >> 0x1f | *(uint *)(param_1 + 0x60) * 2;
          uVar14 = uVar14 + 1;
        }
        puVar7 = (undefined8 *)(param_1 + 0x494);
        do {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7 = puVar7 + 0x10;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        for (uVar8 = 0; (uint)uVar8 < 0x100; uVar8 = (ulonglong)((int)uVar8 + 0x10)) {
          if (*(int *)(param_1 + 0x2c) == 0) {
            iVar18 = 4;
switchD_1400a842c_caseD_4:
            uVar14 = (uint)uVar8;
            if (pbVar15 == local_res20) goto LAB_1400a8526;
            bVar10 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            *(undefined4 *)(param_1 + 0x2c) = 8;
            *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
          }
          piVar12 = (int *)(param_1 + 0x28);
          if (*piVar12 < 0) {
            *(undefined1 *)(uVar8 + 0x494 + param_1) = 1;
          }
          *piVar12 = *piVar12 << 1;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        }
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        while( true ) {
          if (0xff < (uint)uVar8) break;
          if (*(char *)(uVar8 + 0x494 + param_1) == '\0') {
            uVar8 = (ulonglong)((uint)uVar8 + 0x10);
          }
          else {
            iVar18 = *(int *)(param_1 + 0x2c);
            do {
              if (iVar18 == 0) {
                iVar18 = 5;
switchD_1400a842c_caseD_5:
                uVar14 = (uint)uVar8;
                if (pbVar15 == local_res20) goto LAB_1400a8526;
                bVar10 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                *(undefined4 *)(param_1 + 0x2c) = 8;
                *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
              }
              piVar12 = (int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) - (*piVar12 >> 0x1f);
              uVar5 = uVar8 & 0xff;
              uVar14 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar14;
              *(byte *)(uVar5 + 0x494 + param_1) = (byte)((uint)*piVar12 >> 0x1f);
              *piVar12 = *piVar12 << 1;
              iVar18 = *(int *)(param_1 + 0x2c) + -1;
              *(int *)(param_1 + 0x2c) = iVar18;
            } while ((uVar14 & 0xf) != 0);
          }
        }
        iVar18 = *(int *)(param_1 + 0x90);
        if (iVar18 - 1U < 0x100) {
          uVar14 = 0;
          uVar11 = 0;
          *(int *)(param_1 + 100) = iVar18 + 2;
          *(int *)(param_1 + 0x90) = 0;
          while( true ) {
            if (2 < uVar14) break;
            iVar4 = *(int *)(param_1 + 0x2c);
            if (iVar4 == 0) {
              iVar18 = 6;
LAB_1400a87eb:
              iVar4 = 8;
              if (pbVar15 == local_res20) goto LAB_1400a8526;
              bVar10 = *pbVar15;
              pbVar15 = pbVar15 + 1;
              *(undefined4 *)(param_1 + 0x2c) = 8;
              *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
            }
            uVar1 = *(uint *)(param_1 + 0x28);
            uVar11 = uVar1 >> 0x1f | *(uint *)(param_1 + 0x90) * 2;
            *(uint *)(param_1 + 0x90) = uVar11;
            *(uint *)(param_1 + 0x28) = uVar1 * 2;
            uVar14 = uVar14 + 1;
            *(int *)(param_1 + 0x2c) = iVar4 + -1;
          }
          if (uVar11 - 2 < 5) {
            uVar14 = 0;
            *(uint *)(param_1 + 0x68) = uVar11;
            uVar11 = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            while( true ) {
              if (0xe < uVar14) break;
              iVar4 = *(int *)(param_1 + 0x2c);
              if (iVar4 == 0) {
                iVar18 = 7;
LAB_1400a888c:
                iVar4 = 8;
                if (pbVar15 == local_res20) goto LAB_1400a8526;
                bVar10 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                *(undefined4 *)(param_1 + 0x2c) = 8;
                *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
              }
              uVar1 = *(uint *)(param_1 + 0x28);
              uVar11 = uVar1 >> 0x1f | *(uint *)(param_1 + 0x90) * 2;
              *(uint *)(param_1 + 0x90) = uVar11;
              *(uint *)(param_1 + 0x28) = uVar1 * 2;
              uVar14 = uVar14 + 1;
              *(int *)(param_1 + 0x2c) = iVar4 + -1;
            }
            if (uVar11 - 1 < 0x4651) {
              uVar8 = 0;
              *(uint *)(param_1 + 0x6c) = uVar11;
              if (*(uint *)(param_1 + 0x68) != 0) {
                do {
                  *(char *)(param_1 + 0x594 + uVar8) = (char)uVar8;
                  uVar14 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar14;
                } while (uVar14 < *(uint *)(param_1 + 0x68));
              }
              for (uVar8 = 0; (uint)uVar8 < *(uint *)(param_1 + 0x6c);
                  uVar8 = (ulonglong)((int)uVar8 + 1)) {
                iVar18 = *(int *)(param_1 + 0x2c);
                local_res18 = 0;
                while( true ) {
                  if (iVar18 == 0) {
                    iVar18 = 8;
switchD_1400a842c_caseD_8:
                    uVar14 = (uint)uVar8;
                    if (pbVar15 == local_res20) goto LAB_1400a8526;
                    bVar10 = *pbVar15;
                    pbVar15 = pbVar15 + 1;
                    *(undefined4 *)(param_1 + 0x2c) = 8;
                    *(uint *)(param_1 + 0x28) = (uint)bVar10 << 0x18;
                    iVar18 = 8;
                  }
                  iVar4 = *(int *)(param_1 + 0x28);
                  iVar18 = iVar18 + -1;
                  *(int *)(param_1 + 0x28) = iVar4 * 2;
                  *(int *)(param_1 + 0x2c) = iVar18;
                  if (-1 < iVar4) break;
                  local_res18 = local_res18 + 1;
                  if (*(uint *)(param_1 + 0x68) <= local_res18) goto LAB_1400a8bf3;
                }
                if (local_res18 == 0) {
                  uVar17 = *(undefined1 *)(param_1 + 0x594);
                }
                else {
                  uVar5 = (ulonglong)(local_res18 & 0xff);
                  uVar17 = *(undefined1 *)(uVar5 + 0x594 + param_1);
                  uVar9 = (ulonglong)((local_res18 & 0xff) + 1) - 1;
                  if (uVar9 < uVar5) {
                    uVar5 = uVar9;
                  }
                  if (uVar5 != 0) {
                    FUN_1404210f0(param_1 + 0x595);
                  }
                  *(undefined1 *)(param_1 + 0x594) = uVar17;
                }
                *(undefined1 *)(uVar8 + 0x694 + param_1) = uVar17;
              }
              uVar8 = 0;
              pcVar13 = pcVar6;
              while ((uint)uVar8 < *(uint *)(param_1 + 0x68)) {
                if (param_2 != (longlong *)0x0) {
                  param_2[3] = (longlong)pbVar15 - *param_2;
                }
                iVar18 = 9;
LAB_1400a8aaa:
                uVar14 = (uint)uVar8;
                pcVar6 = (char *)FUN_1400a8c70(param_1,param_2);
                if (param_2 != (longlong *)0x0) {
                  pbVar15 = (byte *)(param_2[3] + *param_2);
                }
                if (pcVar6 != (char *)0x0) {
                  if (*pcVar6 != '$') goto switchD_1400a842c_default;
                  bVar2 = true;
                  pcVar13 = pcVar6;
                  goto LAB_1400a8437;
                }
                pcVar13 = (char *)FUN_1400a8ed0();
                if ((pcVar13 != (char *)0x0) && (*pcVar13 == '#')) goto LAB_1400a8bfa;
                uVar5 = 0;
                do {
                  uVar16 = 0;
                  uVar11 = (int)uVar5 << 0x18;
                  uVar3 = 0;
                  do {
                    if (7 < uVar16) break;
                    uVar16 = uVar16 + 1;
                    uVar1 = uVar11 >> 0x1f;
                    uVar11 = uVar11 * 2;
                    uVar3 = *(ushort *)
                             (param_1 + 0x8694 +
                             ((ulonglong)uVar1 + uVar8 * 0x202 + (ulonglong)uVar3 * 2) * 2);
                  } while (uVar3 < 0x101);
                  *(ushort *)(uVar8 * 0x200 + param_1 + 0x9eac + uVar5 * 2) = uVar16 << 0xc | uVar3;
                  uVar11 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar11;
                } while (uVar11 < 0x100);
                pcVar13 = pcVar6;
                uVar8 = (ulonglong)(uVar14 + 1);
              }
              bVar10 = 0;
              uVar8 = 0;
              do {
                if (*(char *)(param_1 + 0x494 + uVar8) != '\0') {
                  uVar5 = (ulonglong)bVar10;
                  bVar10 = bVar10 + 1;
                  *(char *)(param_1 + 0x594 + uVar5) = (char)uVar8;
                }
                uVar14 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar14;
              } while (uVar14 < 0x100);
              puVar7 = (undefined8 *)(param_1 + 0x94);
              lVar19 = 8;
              do {
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = 0;
                puVar7[10] = 0;
                puVar7[0xb] = 0;
                puVar7[0xc] = 0;
                puVar7[0xd] = 0;
                puVar7[0xe] = 0;
                puVar7[0xf] = 0;
                puVar7 = puVar7 + 0x10;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              *(undefined4 *)(param_1 + 0x7c) = 0;
              goto LAB_1400a8bfa;
            }
          }
        }
LAB_1400a8bf3:
        pcVar13 = "#bzip2: bad block header";
      }
      goto LAB_1400a8bfa;
    }
    break;
  case 3:
    goto LAB_1400a85a5;
  case 4:
    goto switchD_1400a842c_caseD_4;
  case 5:
    goto switchD_1400a842c_caseD_5;
  case 6:
    goto LAB_1400a87eb;
  case 7:
    goto LAB_1400a888c;
  case 8:
    goto switchD_1400a842c_caseD_8;
  case 9:
    goto LAB_1400a8aaa;
  default:
switchD_1400a842c_default:
    bVar2 = false;
    pcVar13 = pcVar6;
    goto LAB_1400a8437;
  }
LAB_1400a8526:
  bVar2 = true;
  pcVar13 = "$base: short read";
LAB_1400a8437:
  *(uint *)(param_1 + 0x40aac8) = uVar14;
  iVar4 = 0;
  if (bVar2) {
    iVar4 = iVar18;
  }
  *(int *)(param_1 + 0x7c) = iVar4;
  *(uint *)(param_1 + 0x40aacc) = local_res18;
LAB_1400a8bfa:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar15 - *param_2;
  }
  return pcVar13;
}

