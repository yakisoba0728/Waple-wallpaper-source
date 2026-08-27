// Function: FUN_1400bfef0
// Addr: 1400bfef0
// Size: 1979 bytes


/* WARNING: Removing unreachable block (ram,0x0001400c0123) */
/* WARNING: Removing unreachable block (ram,0x0001400c054a) */

char * FUN_1400bfef0(int *param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  char *pcVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  char cVar23;
  char cVar24;
  char *pcVar25;
  char local_res8 [8];
  uint local_78;
  ulonglong local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48 [2];
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar6 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar6 = "#base: disabled by previous error";
    }
    return pcVar6;
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (longlong *)0x0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] != 0) && (param_1[1] != 3)) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0x1a] == 0) || (param_1[0x1a] == 1)) {
    pcVar6 = (char *)*param_3;
    pcVar12 = (char *)0x0;
    uVar14 = 0;
    uVar22 = 0;
    cVar23 = '\0';
    pcVar25 = (char *)0x0;
    local_78 = 0;
    local_res8[0] = '\0';
    local_68 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar25 = pcVar6 + param_3[3];
      local_68 = pcVar6 + param_3[2];
    }
    plVar1 = param_3 + 3;
    local_70._0_4_ = param_1[0x1b];
    pcVar13 = pcVar12;
    if ((int)local_70 != 0) {
      local_78 = param_1[0x21];
      uVar22 = *(ulonglong *)(param_1 + 0x1e);
      uVar14 = param_1[0x20];
      cVar23 = *(char *)((longlong)param_1 + 0x89);
      local_res8[0] = (char)param_1[0x22];
      if ((int)local_70 == 1) {
LAB_1400c00f9:
        pcVar13 = (char *)0x0;
        pcVar18 = (char *)0x0;
        pcVar25 = (char *)0x0;
        if (pcVar6 != (char *)0x0) {
          pcVar18 = pcVar6 + param_3[3];
          pcVar25 = pcVar6;
        }
        if (param_1[0x19] != 0) {
          if (param_1[0x19] == 1) {
LAB_1400c014d:
            pcVar13 = (char *)0x0;
            uVar7 = 0;
            pbVar19 = (byte *)0x0;
            pbVar21 = (byte *)0x0;
            if (pcVar6 != (char *)0x0) {
              pbVar19 = (byte *)(pcVar6 + *plVar1);
              pbVar21 = (byte *)(pcVar6 + param_3[2]);
              pcVar12 = pcVar6;
            }
            iVar9 = param_1[0x17];
            if (iVar9 == 0) {
              if ((char)param_1[0xc] == '\0') {
                uVar20 = 0;
                goto LAB_1400c01b1;
              }
              pcVar13 = "#base: bad call sequence";
              goto LAB_1400c0286;
            }
            uVar20 = param_1[0x1c];
            uVar17 = param_1[0x1d];
            uVar7 = (ulonglong)uVar17;
            if (iVar9 == 1) {
              while (uVar17 = (uint)uVar7, pbVar19 != pbVar21) {
                bVar2 = *pbVar19;
                pbVar19 = pbVar19 + 1;
                if (bVar2 != 0) goto LAB_1400c020b;
                uVar20 = uVar20 + 1;
LAB_1400c01b1:
                if (1 < uVar20) {
                  uVar20 = 0;
                  goto LAB_1400c01d4;
                }
                iVar9 = 1;
              }
LAB_1400c022e:
              bVar4 = true;
              pcVar13 = "$base: short read";
            }
            else {
              if (iVar9 == 2) {
                while (uVar17 = (uint)uVar7, pbVar19 != pbVar21) {
                  bVar2 = *pbVar19;
                  pbVar19 = pbVar19 + 1;
                  uVar17 = uVar17 | bVar2 & 0x7f;
                  if ((char)bVar2 < '\0') {
                    uVar7 = (ulonglong)uVar17 << 7;
                    if (0xffffffff < uVar7) goto LAB_1400c020b;
                  }
                  else {
                    if (uVar20 == 0) {
                      param_1[10] = uVar17;
                      uVar20 = 1;
                    }
                    else {
                      param_1[0xb] = uVar17;
                      uVar20 = uVar20 + 1;
                    }
LAB_1400c01d4:
                    if (1 < uVar20) {
                      pbVar21 = (byte *)param_3[4];
                      *(undefined1 *)(param_1 + 0xc) = 0x20;
                      pbVar11 = pbVar19 + ((longlong)pbVar21 - (longlong)pcVar12);
                      if (pbVar11 < pbVar21) {
                        pbVar11 = (byte *)0xffffffffffffffff;
                      }
                      *(byte **)(param_1 + 0xe) = pbVar11;
                      param_1[0x17] = 0;
                      goto LAB_1400c0286;
                    }
                    uVar7 = 0;
                  }
                  iVar9 = 2;
                }
                goto LAB_1400c022e;
              }
              bVar4 = false;
            }
            param_1[0x1c] = uVar20;
            param_1[0x1d] = uVar17;
            iVar5 = 0;
            if (bVar4) {
              iVar5 = iVar9;
            }
            param_1[0x17] = iVar5;
            goto LAB_1400c0286;
          }
          goto LAB_1400c011d;
        }
        bVar2 = *(byte *)(param_1 + 0xc);
        if (bVar2 == 0x20) goto LAB_1400c0318;
        if (bVar2 < 0x20) {
          *plVar1 = (longlong)pcVar18 - (longlong)pcVar6;
          goto LAB_1400c014d;
        }
        if (bVar2 == 0x28) {
          pcVar6 = pcVar18 + (param_3[4] - (longlong)pcVar25);
          if (pcVar6 < (char *)param_3[4]) {
            pcVar6 = (char *)0xffffffffffffffff;
          }
          if (*(char **)(param_1 + 0xe) == pcVar6) goto LAB_1400c0318;
          pcVar13 = "#base: bad restart";
          goto LAB_1400c0325;
        }
        pcVar13 = "@base: end of data";
        if (bVar2 == 0x40) {
          *(undefined1 *)(param_1 + 0xc) = 0x60;
        }
        goto LAB_1400c031d;
      }
      if ((int)local_70 == 2) {
        local_70 = *(ulonglong *)(param_2 + 8);
        uVar7 = (ulonglong)local_78;
        local_60 = *(longlong *)(param_2 + 4);
        local_48[0] = *(ulonglong *)(param_2 + 6);
        local_58 = *(longlong *)(param_2 + 10);
        if (uVar7 < local_70) {
          lVar10 = local_58 * uVar7 + local_60;
        }
        else {
          lVar10 = 0;
        }
        uVar8 = local_48[0];
        if (local_70 <= uVar7) {
          uVar8 = 0;
        }
        uVar7 = uVar14 * uVar22;
        lVar15 = lVar10 + uVar7;
        if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
          lVar15 = lVar10;
        }
        uVar16 = uVar8 - uVar7;
        if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_1400c04dc;
        uVar16 = uVar8;
        goto LAB_1400c04dc;
      }
      goto LAB_1400c0383;
    }
    if (*(byte *)(param_1 + 0xc) == 0x40) goto LAB_1400c0357;
    if (*(byte *)(param_1 + 0xc) < 0x40) {
      local_70._0_4_ = 1;
      *plVar1 = (longlong)pcVar25 - (longlong)pcVar6;
      goto LAB_1400c00f9;
    }
    pcVar6 = "@base: end of data";
LAB_1400c05d0:
    param_1[0x1b] = 0;
    goto LAB_1400c05d8;
  }
  param_1[0x1a] = 0;
  pcVar6 = (char *)0x0;
LAB_1400c065e:
  bVar2 = 0;
LAB_1400c0660:
  param_1[1] = -(uint)bVar2 & 3;
  if (pcVar6 == (char *)0x0) {
    return (char *)0x0;
  }
LAB_1400c0670:
  if (*pcVar6 != '#') {
    return pcVar6;
  }
LAB_1400c0675:
  *param_1 = 0x75ae3d2;
  return pcVar6;
LAB_1400c020b:
  pcVar13 = "#wbmp: bad header";
LAB_1400c0286:
  lVar10 = *param_3;
  if (lVar10 != 0) {
    param_3[3] = (longlong)pbVar19 - lVar10;
  }
  pcVar18 = (char *)(param_3[3] + lVar10);
  if (pcVar13 == (char *)0x0) {
LAB_1400c0318:
    *(undefined1 *)(param_1 + 0xc) = 0x40;
LAB_1400c031d:
    param_1[0x19] = 0;
  }
  else if (*pcVar13 == '$') {
    param_1[0x19] = 1;
  }
  else {
LAB_1400c011d:
    param_1[0x19] = 0;
  }
LAB_1400c0325:
  lVar10 = *param_3;
  if (lVar10 != 0) {
    *plVar1 = (longlong)pcVar18 - lVar10;
  }
  pcVar25 = (char *)(*plVar1 + lVar10);
  if (pcVar13 == (char *)0x0) {
LAB_1400c0357:
    if ((((*param_2 >> 0x12 & 1) == 0) || (local_50 = 0x400, *(longlong *)(param_2 + 0x1e) != 0x400)
        ) || (*(longlong *)(param_2 + 0x20) != 1)) {
      local_50 = 0;
      local_58 = 0;
    }
    else {
      local_58 = *(longlong *)(param_2 + 0x1c);
    }
    local_48[0] = 0;
    local_48[1] = 0;
    pcVar6 = (char *)FUN_1400a24c0(param_1 + 0x10,*param_2,&local_58,0x20000008,local_48,param_4);
    if (pcVar6 == (char *)0x0) {
      uVar14 = *param_2;
      if ((uVar14 & 0x30000) == 0) {
        uVar14 = (&DAT_140482a50)[uVar14 & 0xf] +
                 (&DAT_140482a50)[uVar14 >> 0xc & 0xf] + (&DAT_140482a50)[uVar14 >> 8 & 0xf] +
                 (&DAT_140482a50)[uVar14 >> 4 & 0xf];
        if ((uVar14 & 7) != 0) {
          pcVar6 = "#base: unsupported option";
          goto LAB_1400c05d8;
        }
      }
      else {
        uVar14 = 0;
      }
      pcVar6 = pcVar13;
      if (param_1[10] != 0) {
        local_60 = *(longlong *)(param_2 + 4);
        local_70 = *(ulonglong *)(param_2 + 8);
        local_58 = *(longlong *)(param_2 + 10);
        local_48[0] = *(ulonglong *)(param_2 + 6);
        uVar22 = (ulonglong)(uVar14 >> 3);
        for (; pcVar6 = pcVar13, local_78 < (uint)param_1[0xb]; local_78 = local_78 + 1) {
          uVar7 = (ulonglong)local_78;
          if (uVar7 < local_70) {
            lVar15 = local_58 * uVar7 + local_60;
          }
          else {
            lVar15 = 0;
          }
          uVar16 = local_48[0];
          if (local_70 <= uVar7) {
            uVar16 = 0;
          }
          uVar14 = 0;
          while (uVar14 < (uint)param_1[10]) {
            pcVar12 = pcVar13;
            cVar24 = cVar23;
            if ((uVar14 & 7) == 0) {
LAB_1400c04dc:
              if (local_68 == pcVar25) {
                pcVar13 = "$base: short read";
                local_70._0_4_ = 2;
                goto LAB_1400c058d;
              }
              cVar24 = *pcVar25;
              pcVar25 = pcVar25 + 1;
              pcVar13 = pcVar12;
            }
            cVar23 = cVar24 * '\x02';
            local_res8[0] = cVar24 >> 7;
            if ((param_1 + 0x10 != (int *)0x0) &&
               (pcVar3 = *(code **)(param_1 + 0x10), pcVar3 != (code *)0x0)) {
              (*pcVar3)(lVar15,uVar16,0,0,local_res8,1);
            }
            if (uVar16 < uVar22) {
              uVar14 = uVar14 + 1;
            }
            else {
              uVar16 = uVar16 - uVar22;
              lVar15 = lVar15 + uVar22;
              uVar14 = uVar14 + 1;
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0xc) = 0x60;
      goto LAB_1400c05d0;
    }
    if (*pcVar6 != '#') {
      if (*pcVar6 != '$') goto LAB_1400c05d0;
      pcVar6 = "#base: cannot return a suspension";
    }
  }
  else {
    if (*pcVar13 == '$') {
LAB_1400c058d:
      bVar4 = true;
      pcVar6 = pcVar13;
    }
    else {
LAB_1400c0383:
      bVar4 = false;
      pcVar6 = pcVar13;
    }
    *(ulonglong *)(param_1 + 0x1e) = uVar22;
    param_1[0x20] = uVar14;
    *(char *)((longlong)param_1 + 0x89) = cVar23;
    iVar9 = 0;
    if (bVar4) {
      iVar9 = (int)local_70;
    }
    param_1[0x1b] = iVar9;
    param_1[0x21] = local_78;
    *(char *)(param_1 + 0x22) = local_res8[0];
  }
LAB_1400c05d8:
  if (*param_3 != 0) {
    param_3[3] = (longlong)pcVar25 - *param_3;
  }
  if ((pcVar6 == "$base: short read") && ((char)param_3[5] != '\0')) {
    pcVar6 = "#wbmp: truncated input";
    goto LAB_1400c0675;
  }
  if (pcVar6 == (char *)0x0) {
    param_1[0x1a] = 0;
    return (char *)0x0;
  }
  if (*pcVar6 == '$') {
    bVar2 = 1;
    param_1[0x1a] = 1;
    if (*pcVar6 != '$') goto LAB_1400c065e;
    goto LAB_1400c0660;
  }
  goto LAB_1400c0670;
}

