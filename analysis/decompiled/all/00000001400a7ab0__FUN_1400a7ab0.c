// Function: FUN_1400a7ab0
// Addr: 1400a7ab0
// Size: 2159 bytes


char * FUN_1400a7ab0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint *puVar21;
  byte *pbVar22;
  uint local_c0;
  ulonglong local_a0;
  char *local_88;
  byte *local_70;
  
  local_88 = (char *)0x0;
  uVar20 = 0;
  local_a0 = 0;
  local_c0 = 0;
  local_70 = (byte *)0x0;
  pbVar22 = (byte *)0x0;
  if ((param_3 != (longlong *)0x0) && (lVar3 = *param_3, lVar3 != 0)) {
    pbVar22 = (byte *)(param_3[3] + lVar3);
    local_70 = (byte *)(param_3[2] + lVar3);
  }
  iVar16 = *(int *)(param_1 + 0x78);
  bVar4 = true;
  if (iVar16 == 0) {
    iVar16 = 1;
LAB_1400a7bbb:
    if (pbVar22 == local_70) {
      local_88 = "$base: short read";
      goto LAB_1400a8286;
    }
    bVar18 = *pbVar22;
    pbVar22 = pbVar22 + 1;
    if (bVar18 == 0x42) {
      iVar16 = 2;
      goto LAB_1400a7be5;
    }
  }
  else {
    local_a0 = *(ulonglong *)(param_1 + 0x40aab8);
    uVar20 = *(uint *)(param_1 + 0x40aab0);
    local_c0 = *(uint *)(param_1 + 0x40aac0);
    switch(iVar16) {
    case 1:
      goto LAB_1400a7bbb;
    case 2:
LAB_1400a7be5:
      if (pbVar22 == local_70) {
        local_88 = "$base: short read";
        goto LAB_1400a8286;
      }
      bVar18 = *pbVar22;
      pbVar22 = pbVar22 + 1;
      if (bVar18 != 0x5a) goto LAB_1400a82cf;
      iVar16 = 3;
      break;
    case 3:
      break;
    case 4:
      goto LAB_1400a7c39;
    case 5:
      goto switchD_1400a7b95_caseD_5;
    case 6:
      goto switchD_1400a7b95_caseD_6;
    case 7:
      goto switchD_1400a7b95_caseD_7;
    case 8:
      goto LAB_1400a813f;
    case 9:
      goto switchD_1400a7b95_caseD_9;
    default:
      bVar4 = false;
      goto LAB_1400a8286;
    }
    if (pbVar22 == local_70) {
      local_88 = "$base: short read";
      goto LAB_1400a8286;
    }
    bVar18 = *pbVar22;
    pbVar22 = pbVar22 + 1;
    if (bVar18 == 0x68) {
      iVar16 = 4;
LAB_1400a7c39:
      if (pbVar22 == local_70) {
        local_88 = "$base: short read";
        goto LAB_1400a8286;
      }
      bVar18 = *pbVar22;
      pbVar22 = pbVar22 + 1;
      if ((byte)(bVar18 - 0x31) < 9) {
        *(uint *)(param_1 + 0x30) = (uint)bVar18 * 100000 + -4800000;
        do {
          local_a0 = 0;
          uVar20 = 0;
          while( true ) {
            if (0x2f < uVar20) break;
            iVar16 = *(int *)(param_1 + 0x2c);
            if (iVar16 == 0) {
              iVar16 = 5;
switchD_1400a7b95_caseD_5:
              if (pbVar22 == local_70) goto LAB_1400a8277;
              bVar18 = *pbVar22;
              pbVar22 = pbVar22 + 1;
              *(undefined4 *)(param_1 + 0x2c) = 8;
              uVar8 = (ulonglong)bVar18 << 0x18;
              *(int *)(param_1 + 0x28) = (int)uVar8;
              iVar16 = 8;
            }
            else {
              uVar8 = (ulonglong)*(uint *)(param_1 + 0x28);
            }
            local_a0 = uVar8 >> 0x1f | local_a0 * 2;
            *(int *)(param_1 + 0x28) = (int)uVar8 * 2;
            uVar20 = uVar20 + 1;
            *(int *)(param_1 + 0x2c) = iVar16 + -1;
          }
          if (local_a0 == 0x177245385090) {
            local_c0 = 0;
            uVar20 = 0;
            goto LAB_1400a820d;
          }
          if (local_a0 != 0x314159265359) {
            local_88 = "#bzip2: bad block header";
            goto LAB_1400a82d6;
          }
          if (param_3 != (longlong *)0x0) {
            param_3[3] = (longlong)pbVar22 - *param_3;
          }
          iVar16 = 6;
switchD_1400a7b95_caseD_6:
          local_88 = (char *)FUN_1400a8350(param_1,param_3);
          if (param_3 != (longlong *)0x0) {
            pbVar22 = (byte *)(param_3[3] + *param_3);
          }
          if (local_88 != (char *)0x0) {
LAB_1400a81dd:
            if (*local_88 != '$') {
              bVar4 = false;
            }
            goto LAB_1400a8286;
          }
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined1 *)(param_1 + 0x38) = 0;
          *(undefined *)(param_1 + 0x39) = (&DAT_14047f098)[*(byte *)(param_1 + 0x694) & 7];
          *(undefined8 *)(param_1 + 0x3c) = 0x32;
          *(undefined4 *)(param_1 + 0x44) = 0;
          pcVar9 = local_88;
          while (*(char *)(param_1 + 0x38) == '\0') {
            if (param_3 == (longlong *)0x0) {
              local_88 = (char *)FUN_1400a92c0(param_1,0);
            }
            else {
              param_3[3] = (longlong)pbVar22 - *param_3;
              local_88 = (char *)FUN_1400a92c0(param_1,param_3);
              pbVar22 = (byte *)(param_3[3] + *param_3);
            }
            if ((local_88 != (char *)0x0) && (*local_88 == '#')) goto LAB_1400a82d6;
            if (*(char *)(param_1 + 0x38) != '\0') break;
            if (param_3 != (longlong *)0x0) {
              param_3[3] = (longlong)pbVar22 - *param_3;
            }
            iVar16 = 7;
switchD_1400a7b95_caseD_7:
            local_88 = (char *)FUN_1400a9580(param_1,param_3);
            if (param_3 != (longlong *)0x0) {
              pbVar22 = (byte *)(param_3[3] + *param_3);
            }
            pcVar9 = local_88;
            if (local_88 != (char *)0x0) goto LAB_1400a81dd;
          }
          iVar16 = 0;
          uVar8 = 0;
          do {
            uVar5 = (ulonglong)((int)uVar8 + 1);
            uVar13 = (int)uVar8 + 2;
            iVar7 = *(int *)(param_1 + 0x94 + uVar8 * 4) + iVar16;
            *(int *)(param_1 + 0x94 + uVar8 * 4) = iVar16;
            iVar16 = *(int *)(param_1 + 0x94 + uVar5 * 4) + iVar7;
            *(int *)(param_1 + 0x94 + uVar5 * 4) = iVar7;
            uVar8 = (ulonglong)uVar13;
          } while (uVar13 < 0x100);
          uVar8 = 0;
          uVar13 = 0;
          if (*(int *)(param_1 + 0x34) != 0) {
            do {
              iVar16 = (int)uVar8;
              uVar5 = (ulonglong)*(byte *)(param_1 + 0xaaac + uVar8 * 4);
              uVar14 = iVar16 + 1;
              uVar8 = (ulonglong)uVar14;
              puVar12 = (uint *)(param_1 + 0xaaac +
                                (ulonglong)(*(uint *)(param_1 + 0x94 + uVar5 * 4) & 0xfffff) * 4);
              *puVar12 = *puVar12 | iVar16 << 0xc;
              piVar1 = (int *)(param_1 + 0x94 + uVar5 * 4);
              *piVar1 = *piVar1 + 1;
              uVar13 = *(uint *)(param_1 + 0x34);
            } while (uVar14 < uVar13);
          }
          *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
          if (uVar13 <= *(uint *)(param_1 + 0x60)) {
            local_88 = "#bzip2: bad block length";
            goto LAB_1400a82d6;
          }
          *(uint *)(param_1 + 0x48) =
               *(uint *)(param_1 + 0xaaac + (ulonglong)*(uint *)(param_1 + 0x60) * 4) >> 0xc;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined1 *)(param_1 + 0x50) = 0;
          local_88 = pcVar9;
          while( true ) {
            puVar21 = (uint *)(param_1 + 0x58);
            puVar12 = (uint *)(param_1 + 0x34);
            uVar13 = *puVar12;
            if (uVar13 == 0) break;
            pbVar6 = (byte *)0x0;
            pbVar10 = (byte *)0x0;
            if (((param_2 != (longlong *)0x0) && (lVar3 = *param_2, lVar3 != 0)) &&
               (pbVar6 = (byte *)(param_2[2] + lVar3), pbVar10 = pbVar6, (char)param_2[5] == '\0'))
            {
              pbVar10 = (byte *)(param_2[1] + lVar3);
            }
            uVar14 = *(uint *)(param_1 + 0x48);
            uVar17 = *(uint *)(param_1 + 0x4c);
            uVar8 = (ulonglong)*puVar21;
            bVar18 = *(byte *)(param_1 + 0x50);
            do {
              uVar15 = (uint)uVar8;
              bVar19 = bVar18;
              if ((ulonglong)((longlong)pbVar10 - (longlong)pbVar6) < 0xff) break;
              uVar2 = *(uint *)(param_1 + 0xaaac + (ulonglong)uVar14 * 4);
              uVar11 = uVar2 & 0xff;
              uVar14 = uVar2 >> 0xc;
              bVar19 = (byte)uVar2;
              if (uVar17 < 4) {
                *pbVar6 = bVar19;
                pbVar6 = pbVar6 + 1;
                uVar8 = (ulonglong)
                        (uVar15 << 8 ^
                        *(uint *)(&DAT_14047ebc0 + (uVar8 >> 0x18 ^ (ulonglong)uVar11) * 4));
                uVar17 = uVar17 + 1;
                if (bVar19 != bVar18) {
                  uVar17 = 1;
                }
              }
              else {
                if (bVar19 != 0) {
                  do {
                    uVar8 = (ulonglong)
                            ((int)uVar8 << 8 ^
                            *(uint *)(&DAT_14047ebc0 + (uVar8 >> 0x18 ^ (ulonglong)bVar18) * 4));
                    if (pbVar10 != pbVar6) {
                      *pbVar6 = bVar18;
                      pbVar6 = pbVar6 + 1;
                    }
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                uVar17 = 0;
              }
              uVar15 = (uint)uVar8;
              uVar13 = uVar13 - 1;
              bVar18 = bVar19;
            } while (uVar13 != 0);
            *(uint *)(param_1 + 0x48) = uVar14;
            *(uint *)(param_1 + 0x4c) = uVar17;
            *puVar21 = uVar15;
            *(byte *)(param_1 + 0x50) = bVar19;
            if (uVar13 < 0xdbba1) {
              *puVar12 = uVar13;
            }
            if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
              param_2[2] = (longlong)pbVar6 - *param_2;
            }
            if (*puVar12 == 0) break;
            iVar16 = 8;
LAB_1400a813f:
            local_88 = (char *)FUN_1400a9080(param_1,param_2);
            if (local_88 != (char *)0x0) goto LAB_1400a81dd;
          }
          uVar20 = ~*puVar21;
          *puVar21 = uVar20;
          if ((*(char *)(param_1 + 0x51) == '\0') && (uVar20 != *(uint *)(param_1 + 0x5c)))
          goto LAB_1400a82bc;
          *(uint *)(param_1 + 0x54) =
               (*(uint *)(param_1 + 0x54) >> 0x1f | *(uint *)(param_1 + 0x54) << 1) ^ uVar20;
        } while( true );
      }
    }
  }
LAB_1400a82cf:
  local_88 = "#bzip2: bad header";
LAB_1400a82d6:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pbVar22 - *param_3;
  }
  return local_88;
LAB_1400a820d:
  if (0x1f < uVar20) goto LAB_1400a82af;
  iVar16 = *(int *)(param_1 + 0x2c);
  if (iVar16 == 0) {
    iVar16 = 9;
switchD_1400a7b95_caseD_9:
    if (pbVar22 == local_70) goto LAB_1400a8277;
    bVar18 = *pbVar22;
    pbVar22 = pbVar22 + 1;
    *(undefined4 *)(param_1 + 0x2c) = 8;
    *(uint *)(param_1 + 0x28) = (uint)bVar18 << 0x18;
    iVar16 = 8;
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  local_c0 = uVar13 >> 0x1f | local_c0 * 2;
  *(uint *)(param_1 + 0x28) = uVar13 * 2;
  uVar20 = uVar20 + 1;
  *(int *)(param_1 + 0x2c) = iVar16 + -1;
  goto LAB_1400a820d;
LAB_1400a82af:
  if ((*(char *)(param_1 + 0x51) == '\0') && (*(uint *)(param_1 + 0x54) != local_c0)) {
LAB_1400a82bc:
    local_88 = "#bzip2: bad checksum";
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  goto LAB_1400a82d6;
LAB_1400a8277:
  local_88 = "$base: short read";
LAB_1400a8286:
  *(uint *)(param_1 + 0x40aab0) = uVar20;
  *(uint *)(param_1 + 0x40aac0) = local_c0;
  iVar7 = 0;
  if (bVar4) {
    iVar7 = iVar16;
  }
  *(int *)(param_1 + 0x78) = iVar7;
  *(ulonglong *)(param_1 + 0x40aab8) = local_a0;
  goto LAB_1400a82d6;
}

