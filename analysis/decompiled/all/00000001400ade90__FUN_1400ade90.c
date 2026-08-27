// Function: FUN_1400ade90
// Addr: 1400ade90
// Size: 1623 bytes


/* WARNING: Removing unreachable block (ram,0x0001400ae191) */

char * FUN_1400ade90(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  bool bVar24;
  undefined4 local_res8;
  undefined2 local_resc;
  undefined4 *local_res10;
  
  iVar20 = *(int *)(param_1 + 0xcc);
  iVar23 = 1;
  local_res10 = param_2;
  if (iVar20 == 0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      return "#base: bad call sequence";
    }
    if (*(char *)(param_1 + 0x49) == '\0') {
      iVar20 = 1;
      goto LAB_1400adf1c;
    }
LAB_1400ae071:
    local_res8 = 3;
LAB_1400ae079:
    pcVar7 = (char *)0x0;
    pcVar21 = (char *)0x0;
    pcVar22 = (char *)0x0;
    lVar17 = 0;
    if ((param_3 != (longlong *)0x0) && (lVar6 = *param_3, lVar6 != 0)) {
      pcVar22 = (char *)(param_3[3] + lVar6);
      pcVar21 = (char *)(param_3[2] + lVar6);
      lVar17 = lVar6;
    }
    iVar20 = *(int *)(param_1 + 0xec);
    iVar19 = iVar23;
    if (iVar20 == 0) {
      if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) == 0))
      goto LAB_1400ae113;
      if (param_3 == (longlong *)0x0) {
        pcVar13 = (char *)0x0;
      }
      else {
        pcVar13 = (char *)param_3[4];
      }
      pcVar15 = pcVar22 + ((longlong)pcVar13 - lVar17);
      if (pcVar15 < pcVar13) {
        pcVar15 = (char *)0xffffffffffffffff;
      }
      *(char **)(param_1 + 0x68) = pcVar15;
      goto LAB_1400ae113;
    }
    iVar19 = iVar20;
    if (iVar20 == 1) goto LAB_1400ae113;
    if (iVar20 == 2) {
      do {
        pcVar7 = (char *)0x0;
        pcVar13 = (char *)0x0;
        pcVar15 = (char *)0x0;
        if ((param_3 != (longlong *)0x0) && (lVar17 = *param_3, lVar17 != 0)) {
          pcVar13 = (char *)(param_3[3] + lVar17);
          pcVar15 = (char *)(param_3[2] + lVar17);
        }
        iVar19 = *(int *)(param_1 + 0xf8);
        iVar8 = iVar23;
        if ((iVar19 == 0) || (iVar8 = iVar19, iVar19 == 1)) {
          if (pcVar13 != pcVar15) {
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            if (cVar3 != -7) {
              if (cVar3 != -1) {
                if (param_3 != (longlong *)0x0) {
                  param_3[3] = (longlong)pcVar13 - *param_3;
                }
                iVar19 = 4;
                goto LAB_1400ae25c;
              }
              if (param_3 != (longlong *)0x0) {
                param_3[3] = (longlong)pcVar13 - *param_3;
              }
              iVar19 = 3;
              goto LAB_1400ae23b;
            }
            if (param_3 != (longlong *)0x0) {
              param_3[3] = (longlong)pcVar13 - *param_3;
            }
            iVar19 = 2;
            goto LAB_1400ae1cb;
          }
          pcVar7 = "$base: short read";
        }
        else if (iVar19 == 2) {
LAB_1400ae1cb:
          pcVar7 = (char *)FUN_1400b02a0();
LAB_1400ae1d6:
          iVar8 = iVar19;
          if (param_3 != (longlong *)0x0) {
            pcVar13 = (char *)(param_3[3] + *param_3);
          }
joined_r0x0001400ae31d:
          if (pcVar7 == (char *)0x0) {
            iVar8 = 0;
          }
          else if (*pcVar7 != '$') goto LAB_1400ae18b;
        }
        else {
          if (iVar19 == 3) {
LAB_1400ae23b:
            pcVar7 = (char *)FUN_1400afd30();
            goto LAB_1400ae1d6;
          }
          if (iVar19 == 4) {
LAB_1400ae25c:
            pbVar9 = (byte *)0x0;
            pbVar18 = (byte *)0x0;
            if ((param_3 != (longlong *)0x0) && (lVar17 = *param_3, lVar17 != 0)) {
              pbVar9 = (byte *)(param_3[3] + lVar17);
              pbVar18 = (byte *)(param_3[2] + lVar17);
            }
            iVar8 = *(int *)(param_1 + 0xfc);
            if (iVar8 == 0) goto LAB_1400ae2a0;
            if (iVar8 == 1) goto LAB_1400ae2a3;
            if (iVar8 == 2) {
              while (uVar10 = *(ulonglong *)(param_1 + 0xfdb8),
                    uVar10 <= (ulonglong)((longlong)pbVar18 - (longlong)pbVar9)) {
                pbVar9 = pbVar9 + uVar10;
LAB_1400ae2a0:
                iVar8 = 1;
LAB_1400ae2a3:
                if (pbVar9 == pbVar18) goto LAB_1400ae2ea;
                bVar2 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                if (bVar2 == 0) {
                  pcVar7 = (char *)0x0;
                  iVar11 = 0;
                  goto LAB_1400ae2f9;
                }
                *(ulonglong *)(param_1 + 0xfdb8) = (ulonglong)bVar2;
                iVar8 = 2;
              }
              *(byte **)(param_1 + 0xfdb8) = pbVar9 + (uVar10 - (longlong)pbVar18);
              pbVar9 = pbVar18;
LAB_1400ae2ea:
              bVar24 = true;
              pcVar7 = "$base: short read";
            }
            else {
              pcVar7 = (char *)0x0;
              bVar24 = false;
            }
            iVar11 = 0;
            if (bVar24) {
              iVar11 = iVar8;
            }
LAB_1400ae2f9:
            *(int *)(param_1 + 0xfc) = iVar11;
            iVar8 = iVar19;
            if (param_3 != (longlong *)0x0) {
              if (*param_3 != 0) {
                param_3[3] = (longlong)pbVar9 - *param_3;
              }
              pcVar13 = (char *)(param_3[3] + *param_3);
            }
            goto joined_r0x0001400ae31d;
          }
LAB_1400ae18b:
          iVar8 = 0;
        }
        *(int *)(param_1 + 0xf8) = iVar8;
        if (param_3 != (longlong *)0x0) {
          if (*param_3 != 0) {
            param_3[3] = (longlong)pcVar13 - *param_3;
          }
          pcVar22 = (char *)(param_3[3] + *param_3);
        }
        iVar19 = iVar23;
        if (pcVar7 != (char *)0x0) goto LAB_1400ae3a9;
LAB_1400ae113:
        if (pcVar22 == pcVar21) {
          pcVar7 = "$base: short read";
          iVar20 = iVar19;
          goto LAB_1400ae3e9;
        }
        cVar3 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        if (cVar3 != '!') goto LAB_1400ae341;
        if (param_3 != (longlong *)0x0) {
          param_3[3] = (longlong)pcVar22 - *param_3;
        }
        iVar20 = 2;
      } while( true );
    }
    if (iVar20 == 3) goto LAB_1400ae386;
    bVar24 = false;
LAB_1400ae3ec:
    iVar19 = 0;
    if (bVar24) {
      iVar19 = iVar20;
    }
    goto LAB_1400ae3f4;
  }
  if (iVar20 == 1) {
LAB_1400adf1c:
    pcVar7 = (char *)0x0;
    uVar10 = 0;
    local_res8 = 0;
    puVar14 = (undefined1 *)0x0;
    local_resc = 0;
    puVar12 = (undefined1 *)0x0;
    if ((param_3 != (longlong *)0x0) && (lVar17 = *param_3, lVar17 != 0)) {
      puVar14 = (undefined1 *)(param_3[3] + lVar17);
      puVar12 = (undefined1 *)(param_3[2] + lVar17);
    }
    iVar19 = *(int *)(param_1 + 0xf0);
    if (iVar19 == 0) goto LAB_1400adf90;
    local_res8 = *(undefined4 *)(param_1 + 0xfd90);
    uVar16 = (ulonglong)*(uint *)(param_1 + 0xfd98);
    local_resc = *(undefined2 *)(param_1 + 0xfd94);
    if (iVar19 == 1) {
      do {
        if (puVar14 == puVar12) {
          pcVar7 = "$base: short read";
          bVar24 = true;
          goto LAB_1400adfc9;
        }
        uVar1 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar10 = (ulonglong)((int)uVar16 + 1);
        *(undefined1 *)((longlong)&local_res8 + uVar16) = uVar1;
LAB_1400adf90:
        uVar16 = uVar10;
        iVar19 = iVar23;
      } while ((uint)uVar10 < 6);
      if (((((char)local_res8 == 'G') && (local_res8._1_1_ == 'I')) && (local_res8._2_1_ == 'F')) &&
         (((local_res8._3_1_ == '8' && (((char)local_resc - 0x37U & 0xfd) == 0)) &&
          (local_resc._1_1_ == 'a')))) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
      }
      else {
        pcVar7 = "#gif: bad header";
      }
    }
    else {
      bVar24 = false;
LAB_1400adfc9:
      *(int *)(param_1 + 0xfd98) = (int)uVar16;
      iVar8 = 0;
      if (bVar24) {
        iVar8 = iVar19;
      }
      *(int *)(param_1 + 0xf0) = iVar8;
      *(int *)(param_1 + 0xfd90) = local_res8;
      *(undefined2 *)(param_1 + 0xfd94) = local_resc;
    }
    if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
      param_3[3] = (longlong)puVar14 - *param_3;
    }
    if (pcVar7 == (char *)0x0) {
      iVar20 = 2;
      goto LAB_1400ae052;
    }
    goto LAB_1400ae41d;
  }
  if (iVar20 == 2) {
    local_res8 = 2;
LAB_1400ae052:
    pcVar7 = (char *)FUN_1400af7c0();
    if (pcVar7 == (char *)0x0) {
      *(undefined1 *)(param_1 + 0x49) = 1;
      goto LAB_1400ae071;
    }
    goto LAB_1400ae41d;
  }
  local_res8 = iVar20;
  if (iVar20 == 3) goto LAB_1400ae079;
  pcVar7 = (char *)0x0;
  goto LAB_1400ae422;
LAB_1400ae341:
  param_2 = local_res10;
  if (cVar3 == ',') {
    if (*(char *)(param_1 + 0x47) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      uVar10 = *(ulonglong *)(param_1 + 0x78) + 1;
      if (uVar10 < *(ulonglong *)(param_1 + 0x78)) {
        uVar10 = 0xffffffffffffffff;
      }
      *(ulonglong *)(param_1 + 0x78) = uVar10;
    }
    if (param_3 != (longlong *)0x0) {
      param_3[3] = (longlong)pcVar22 - *param_3;
    }
    iVar20 = 3;
LAB_1400ae386:
    pcVar7 = (char *)FUN_1400b04a0();
    if (param_3 != (longlong *)0x0) {
      pcVar22 = (char *)(param_3[3] + *param_3);
    }
    local_res10 = param_2;
    if (pcVar7 != (char *)0x0) {
LAB_1400ae3a9:
      if (*pcVar7 == '$') {
LAB_1400ae3e9:
        bVar24 = true;
        param_2 = local_res10;
      }
      else {
        bVar24 = false;
        param_2 = local_res10;
      }
      goto LAB_1400ae3ec;
    }
  }
  else {
    if (*(char *)(param_1 + 0x47) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      uVar10 = *(ulonglong *)(param_1 + 0x78) + 1;
      if (uVar10 < *(ulonglong *)(param_1 + 0x78)) {
        uVar10 = 0xffffffffffffffff;
      }
      *(ulonglong *)(param_1 + 0x78) = uVar10;
    }
    *(undefined1 *)(param_1 + 0x30) = 0x60;
  }
  iVar19 = 0;
LAB_1400ae3f4:
  *(int *)(param_1 + 0xec) = iVar19;
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pcVar22 - *param_3;
  }
  iVar20 = local_res8;
  if (pcVar7 == (char *)0x0) {
    cVar3 = *(char *)(param_1 + 0x5c);
    bVar24 = cVar3 == '\0';
    if (*(char *)(param_1 + 0x42) == '\0') {
      if ((((cVar3 == '\0') && (*(int *)(param_1 + 0x80) == 0)) && (*(int *)(param_1 + 0x84) == 0))
         && ((*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0x28) &&
             (*(int *)(param_1 + 0x8c) == *(int *)(param_1 + 0x2c))))) {
        bVar24 = true;
      }
      else {
        bVar24 = false;
      }
    }
    else if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x58) = 0xff000000;
    }
    if (*(int *)(param_1 + 0x54) == 0x4d) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar5 = *(undefined4 *)(param_1 + 0x28);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x68);
      *param_2 = 0x83040008;
      param_2[1] = 0;
      param_2[2] = uVar5;
      param_2[3] = uVar4;
      *(bool *)(param_2 + 6) = bVar24;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      *(undefined1 *)(param_1 + 0x30) = 0x20;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    return (char *)0x0;
  }
LAB_1400ae41d:
  if (*pcVar7 == '$') goto LAB_1400ae425;
LAB_1400ae422:
  iVar23 = 0;
LAB_1400ae425:
  iVar19 = 0;
  if (iVar23 != 0) {
    iVar19 = iVar20;
  }
  *(int *)(param_1 + 0xcc) = iVar19;
  return pcVar7;
}

