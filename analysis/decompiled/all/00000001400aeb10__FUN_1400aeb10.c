// Function: FUN_1400aeb10
// Addr: 1400aeb10
// Size: 1937 bytes


/* WARNING: Removing unreachable block (ram,0x0001400aee52) */

char * FUN_1400aeb10(longlong param_1,uint *param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  bool bVar13;
  char *pcVar14;
  byte *pbVar15;
  int iVar16;
  ulonglong uVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  longlong lVar24;
  byte *pbVar25;
  char *pcVar26;
  uint local_res8;
  int local_res18;
  char *local_res20;
  char *local_58;
  char *local_50;
  
  uVar20 = 0;
  pcVar14 = (char *)0x0;
  local_58 = (char *)0x0;
  local_res20 = (char *)0x0;
  lVar24 = 0;
  if ((param_3 != (longlong *)0x0) && (lVar8 = *param_3, lVar8 != 0)) {
    local_res20 = (char *)(param_3[3] + lVar8);
    local_58 = (char *)(param_3[2] + lVar8);
    lVar24 = lVar8;
  }
  local_res18 = *(int *)(param_1 + 0xdc);
  iVar19 = 1;
  if (local_res18 == 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((bVar1 & 0x10) != 0) {
      pcVar14 = "#base: bad call sequence";
      goto LAB_1400af259;
    }
    uVar4 = 0;
    if (bVar1 != 0x20) {
      if (bVar1 < 0x20) {
        local_res18 = iVar19;
        if (param_3 != (longlong *)0x0) {
          param_3[3] = (longlong)local_res20 - *param_3;
        }
        goto LAB_1400aec15;
      }
      if (bVar1 != 0x28) {
        if (bVar1 == 0x40) {
          if (param_3 != (longlong *)0x0) {
            param_3[3] = (longlong)local_res20 - *param_3;
          }
          local_res18 = 2;
          goto LAB_1400aecde;
        }
        goto LAB_1400aed17;
      }
      if (param_3 == (longlong *)0x0) {
        pcVar26 = (char *)0x0;
      }
      else {
        pcVar26 = (char *)param_3[4];
      }
      pcVar18 = local_res20 + ((longlong)pcVar26 - lVar24);
      if (pcVar18 < pcVar26) {
        pcVar18 = (char *)0xffffffffffffffff;
      }
      if (*(char **)(param_1 + 0x68) != pcVar18) {
        pcVar14 = "#base: bad restart";
        goto LAB_1400af259;
      }
    }
LAB_1400aec53:
    uVar20 = uVar4;
    if ((*(longlong *)(param_1 + 0x70) != 0) || (*(char *)(param_1 + 0x30) == '(')) {
      if (param_3 != (longlong *)0x0) {
        param_3[3] = (longlong)local_res20 - *param_3;
      }
      local_res18 = 3;
LAB_1400aed35:
      pcVar14 = (char *)0x0;
      pcVar26 = (char *)0x0;
      local_50 = (char *)0x0;
      lVar24 = 0;
      if ((param_3 != (longlong *)0x0) && (lVar8 = *param_3, lVar8 != 0)) {
        pcVar26 = (char *)(param_3[3] + lVar8);
        local_50 = (char *)(param_3[2] + lVar8);
        lVar24 = lVar8;
      }
      local_res8 = *(int *)(param_1 + 0xec);
      if (local_res8 == 0) {
        if ((*(longlong *)(param_1 + 0x68) == 0) || (*(longlong *)(param_1 + 0x70) != 0)) {
          if (param_3 == (longlong *)0x0) {
            pcVar18 = (char *)0x0;
          }
          else {
            pcVar18 = (char *)param_3[4];
          }
          pcVar23 = pcVar26 + ((longlong)pcVar18 - lVar24);
          if (pcVar23 < pcVar18) {
            pcVar23 = (char *)0xffffffffffffffff;
          }
          *(char **)(param_1 + 0x68) = pcVar23;
        }
        local_res8 = 1;
        goto LAB_1400aedcd;
      }
      if (local_res8 == 1) goto LAB_1400aedcd;
      if (local_res8 == 2) {
        do {
          pcVar14 = (char *)0x0;
          pcVar18 = (char *)0x0;
          pcVar23 = (char *)0x0;
          if ((param_3 != (longlong *)0x0) && (lVar24 = *param_3, lVar24 != 0)) {
            pcVar18 = (char *)(param_3[3] + lVar24);
            pcVar23 = (char *)(param_3[2] + lVar24);
          }
          iVar22 = *(int *)(param_1 + 0xf8);
          iVar21 = iVar19;
          if ((iVar22 == 0) || (iVar21 = iVar22, iVar22 == 1)) {
            if (pcVar18 != pcVar23) {
              cVar2 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              if (cVar2 != -7) {
                if (cVar2 != -1) {
                  if (param_3 != (longlong *)0x0) {
                    param_3[3] = (longlong)pcVar18 - *param_3;
                  }
                  iVar22 = 4;
                  goto LAB_1400aef32;
                }
                if (param_3 != (longlong *)0x0) {
                  param_3[3] = (longlong)pcVar18 - *param_3;
                }
                iVar22 = 3;
                goto LAB_1400aef0c;
              }
              if (param_3 != (longlong *)0x0) {
                param_3[3] = (longlong)pcVar18 - *param_3;
              }
              iVar22 = 2;
              goto LAB_1400aee8c;
            }
            pcVar14 = "$base: short read";
          }
          else if (iVar22 == 2) {
LAB_1400aee8c:
            pcVar14 = (char *)FUN_1400b02a0();
LAB_1400aee97:
            iVar21 = iVar22;
            if (param_3 != (longlong *)0x0) {
              pcVar18 = (char *)(param_3[3] + *param_3);
            }
joined_r0x0001400aeff5:
            if (pcVar14 == (char *)0x0) {
              iVar21 = 0;
            }
            else if (*pcVar14 != '$') goto LAB_1400aee4c;
          }
          else {
            if (iVar22 == 3) {
LAB_1400aef0c:
              pcVar14 = (char *)FUN_1400afd30();
              goto LAB_1400aee97;
            }
            if (iVar22 == 4) {
LAB_1400aef32:
              pbVar15 = (byte *)0x0;
              pbVar25 = (byte *)0x0;
              if ((param_3 != (longlong *)0x0) && (lVar24 = *param_3, lVar24 != 0)) {
                pbVar15 = (byte *)(param_3[3] + lVar24);
                pbVar25 = (byte *)(param_3[2] + lVar24);
              }
              iVar21 = *(int *)(param_1 + 0xfc);
              if (iVar21 == 0) goto LAB_1400aef73;
              if (iVar21 == 1) goto LAB_1400aef76;
              if (iVar21 == 2) {
                while (uVar17 = *(ulonglong *)(param_1 + 0xfdb8),
                      uVar17 <= (ulonglong)((longlong)pbVar25 - (longlong)pbVar15)) {
                  pbVar15 = pbVar15 + uVar17;
LAB_1400aef73:
                  iVar21 = 1;
LAB_1400aef76:
                  if (pbVar15 == pbVar25) goto LAB_1400aefbd;
                  bVar1 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                  if (bVar1 == 0) {
                    pcVar14 = (char *)0x0;
                    iVar16 = 0;
                    goto LAB_1400aefcc;
                  }
                  *(ulonglong *)(param_1 + 0xfdb8) = (ulonglong)bVar1;
                  iVar21 = 2;
                }
                *(byte **)(param_1 + 0xfdb8) = pbVar15 + (uVar17 - (longlong)pbVar25);
                pbVar15 = pbVar25;
LAB_1400aefbd:
                bVar13 = true;
                pcVar14 = "$base: short read";
              }
              else {
                pcVar14 = (char *)0x0;
                bVar13 = false;
              }
              iVar16 = 0;
              if (bVar13) {
                iVar16 = iVar21;
              }
LAB_1400aefcc:
              *(int *)(param_1 + 0xfc) = iVar16;
              iVar21 = iVar22;
              if (param_3 != (longlong *)0x0) {
                if (*param_3 != 0) {
                  param_3[3] = (longlong)pbVar15 - *param_3;
                }
                pcVar18 = (char *)(param_3[3] + *param_3);
              }
              goto joined_r0x0001400aeff5;
            }
LAB_1400aee4c:
            iVar21 = 0;
          }
          *(int *)(param_1 + 0xf8) = iVar21;
          if (param_3 != (longlong *)0x0) {
            if (*param_3 != 0) {
              param_3[3] = (longlong)pcVar18 - *param_3;
            }
            pcVar26 = (char *)(param_3[3] + *param_3);
          }
          if (pcVar14 != (char *)0x0) goto LAB_1400af082;
          local_res8 = 1;
LAB_1400aedcd:
          if (pcVar26 == local_50) {
            pcVar14 = "$base: short read";
            goto LAB_1400af0ba;
          }
          cVar2 = *pcVar26;
          pcVar26 = pcVar26 + 1;
          if (cVar2 != '!') goto LAB_1400af018;
          if (param_3 != (longlong *)0x0) {
            param_3[3] = (longlong)pcVar26 - *param_3;
          }
          local_res8 = 2;
        } while( true );
      }
      if (local_res8 == 3) goto LAB_1400af05b;
      bVar13 = false;
      goto LAB_1400af0bc;
    }
    goto LAB_1400af120;
  }
  uVar20 = *(uint *)(param_1 + 0xfd80);
  if (local_res18 == 1) {
LAB_1400aec15:
    pcVar14 = (char *)FUN_1400ade90(param_1,0);
    if (param_3 != (longlong *)0x0) {
      local_res20 = (char *)(param_3[3] + *param_3);
    }
    uVar4 = uVar20;
    if (pcVar14 == (char *)0x0) goto LAB_1400aec53;
    goto LAB_1400af23d;
  }
  if (local_res18 == 2) {
LAB_1400aecde:
    pcVar14 = (char *)FUN_1400af2b0(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      local_res20 = (char *)(param_3[3] + *param_3);
    }
    if (pcVar14 == (char *)0x0) {
      uVar4 = uVar20;
      if (0x5f < *(byte *)(param_1 + 0x30)) {
LAB_1400aed17:
        pcVar14 = "@base: end of data";
        *(undefined4 *)(param_1 + 0xdc) = 0;
        goto LAB_1400af259;
      }
      goto LAB_1400aec53;
    }
    goto LAB_1400af23d;
  }
  if (local_res18 == 3) goto LAB_1400aed35;
  if (local_res18 != 4) goto LAB_1400af242;
LAB_1400af147:
  if (local_58 != local_res20) {
    local_res8 = uVar20;
    if (*local_res20 < '\0') {
LAB_1400af161:
      local_res8 = *(uint *)(param_1 + 0x58);
    }
LAB_1400af16c:
    if (param_2 != (uint *)0x0) {
      uVar20 = *(uint *)(param_1 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x2c);
      uVar5 = *(uint *)(param_1 + 0x8c);
      uVar6 = *(uint *)(param_1 + 0x88);
      uVar12 = uVar20;
      if (*(uint *)(param_1 + 0x80) < uVar20) {
        uVar12 = *(uint *)(param_1 + 0x80);
      }
      uVar7 = *(uint *)(param_1 + 0x84);
      cVar2 = *(char *)(param_1 + 0x5c);
      uVar3 = *(undefined1 *)(param_1 + 0x5e);
      uVar9 = *(undefined8 *)(param_1 + 0x68);
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      *param_2 = uVar12;
      uVar12 = uVar4;
      if (uVar7 < uVar4) {
        uVar12 = uVar7;
      }
      param_2[1] = uVar12;
      if (uVar6 < uVar20) {
        uVar20 = uVar6;
      }
      param_2[2] = uVar20;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      param_2[3] = uVar4;
      *(undefined8 *)(param_2 + 4) = uVar11;
      *(bool *)((longlong)param_2 + 0x29) = cVar2 == '\0';
      param_2[0xb] = local_res8;
      *(undefined8 *)(param_2 + 6) = uVar10;
      *(undefined8 *)(param_2 + 8) = uVar9;
      *(undefined1 *)(param_2 + 10) = uVar3;
      *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = 0x40;
    uVar17 = *(ulonglong *)(param_1 + 0x70) + 1;
    if (uVar17 < *(ulonglong *)(param_1 + 0x70)) {
      uVar17 = 0xffffffffffffffff;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar17;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    goto LAB_1400af259;
  }
  pcVar14 = "$base: short read";
  local_res18 = 4;
LAB_1400af244:
  *(uint *)(param_1 + 0xfd80) = uVar20;
  iVar22 = 0;
  if (iVar19 != 0) {
    iVar22 = local_res18;
  }
  *(int *)(param_1 + 0xdc) = iVar22;
LAB_1400af259:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)local_res20 - *param_3;
  }
  return pcVar14;
LAB_1400af018:
  if (cVar2 == ',') {
    if (*(char *)(param_1 + 0x47) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      uVar17 = *(ulonglong *)(param_1 + 0x78) + 1;
      if (uVar17 < *(ulonglong *)(param_1 + 0x78)) {
        uVar17 = 0xffffffffffffffff;
      }
      *(ulonglong *)(param_1 + 0x78) = uVar17;
    }
    if (param_3 != (longlong *)0x0) {
      param_3[3] = (longlong)pcVar26 - *param_3;
    }
    local_res8 = 3;
LAB_1400af05b:
    pcVar14 = (char *)FUN_1400b04a0();
    if (param_3 != (longlong *)0x0) {
      pcVar26 = (char *)(param_3[3] + *param_3);
    }
    if (pcVar14 == (char *)0x0) goto LAB_1400af0b3;
LAB_1400af082:
    if (*pcVar14 == '$') {
LAB_1400af0ba:
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
LAB_1400af0bc:
    iVar22 = 0;
    if (bVar13) {
      iVar22 = local_res8;
    }
  }
  else {
    if (*(char *)(param_1 + 0x47) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      uVar17 = *(ulonglong *)(param_1 + 0x78) + 1;
      if (uVar17 < *(ulonglong *)(param_1 + 0x78)) {
        uVar17 = 0xffffffffffffffff;
      }
      *(ulonglong *)(param_1 + 0x78) = uVar17;
    }
    *(undefined1 *)(param_1 + 0x30) = 0x60;
LAB_1400af0b3:
    iVar22 = 0;
  }
  *(int *)(param_1 + 0xec) = iVar22;
  if (param_3 != (longlong *)0x0) {
    if (*param_3 != 0) {
      param_3[3] = (longlong)pcVar26 - *param_3;
    }
    local_res20 = (char *)(param_3[3] + *param_3);
  }
  if (pcVar14 == (char *)0x0) {
    if (0x5f < *(byte *)(param_1 + 0x30)) {
      pcVar14 = "@base: end of data";
      *(undefined4 *)(param_1 + 0xdc) = 0;
      goto LAB_1400af259;
    }
LAB_1400af120:
    if (*(char *)(param_1 + 0x5c) != '\0') goto LAB_1400af161;
    uVar20 = *(uint *)(param_1 + 0x54);
    local_res8 = uVar20;
    if ((*(char *)(param_1 + 0x41) != '\0') && (*(longlong *)(param_1 + 0x70) == 0))
    goto LAB_1400af147;
    goto LAB_1400af16c;
  }
LAB_1400af23d:
  if (*pcVar14 != '$') {
LAB_1400af242:
    iVar19 = 0;
  }
  goto LAB_1400af244;
}

