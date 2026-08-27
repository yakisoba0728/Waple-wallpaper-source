// Function: FUN_1400b50c0
// Addr: 1400b50c0
// Size: 1605 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b520a) */
/* WARNING: Removing unreachable block (ram,0x0001400b52d3) */
/* WARNING: Removing unreachable block (ram,0x0001400b51c0) */

char * FUN_1400b50c0(int *param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38 [2];
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar7 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar7 = "#base: disabled by previous error";
    }
    return pcVar7;
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
    iVar2 = param_1[0x1b];
    pcVar8 = (char *)0x0;
    bVar5 = 1;
    pcVar7 = pcVar8;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
LAB_1400b51de:
        lVar14 = *param_3;
        lVar16 = 0;
        lVar15 = 0;
        if (lVar14 != 0) {
          lVar16 = param_3[3] + lVar14;
          lVar15 = lVar14;
        }
        if (param_1[0x19] == 0) {
          bVar1 = *(byte *)(param_1 + 0xd);
          if (bVar1 == 0x20) {
LAB_1400b529c:
            *(undefined1 *)(param_1 + 0xd) = 0x40;
          }
          else {
            if (bVar1 < 0x20) {
              param_3[3] = lVar16 - lVar14;
              goto LAB_1400b522a;
            }
            if (bVar1 == 0x28) {
              uVar12 = (param_3[4] - lVar15) + lVar16;
              if (uVar12 < (ulonglong)param_3[4]) {
                uVar12 = 0xffffffffffffffff;
              }
              if (uVar12 == 0x10) goto LAB_1400b529c;
              pcVar8 = "#base: bad restart";
              goto LAB_1400b52a7;
            }
            pcVar8 = "@base: end of data";
            if (bVar1 == 0x40) {
              *(undefined1 *)(param_1 + 0xd) = 0x60;
            }
          }
          param_1[0x19] = 0;
        }
        else {
          if (param_1[0x19] == 1) {
LAB_1400b522a:
            pcVar8 = (char *)FUN_1400b4ac0(param_1,0,param_3);
            lVar16 = param_3[3] + *param_3;
            if (pcVar8 == (char *)0x0) goto LAB_1400b529c;
            if (*pcVar8 == '$') {
              param_1[0x19] = 1;
              goto LAB_1400b52a7;
            }
          }
          param_1[0x19] = 0;
        }
LAB_1400b52a7:
        if (*param_3 != 0) {
          param_3[3] = lVar16 - *param_3;
        }
        pcVar7 = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_1400b5311;
        if (*pcVar8 == '$') {
          param_1[0x1b] = 1;
        }
        else {
          param_1[0x1b] = 0;
        }
      }
      else {
        if (iVar2 == 2) goto LAB_1400b538a;
        param_1[0x1b] = 0;
      }
      goto LAB_1400b52f0;
    }
    if (*(byte *)(param_1 + 0xd) == 0x40) {
LAB_1400b5311:
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      if ((((*param_2 >> 0x12 & 1) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
         (*(longlong *)(param_2 + 0x20) != 1)) {
        local_40 = 0;
        local_48 = 0;
      }
      else {
        local_48 = *(ulonglong *)(param_2 + 0x1c);
        local_40 = 0x400;
      }
      local_38[0] = 0;
      local_38[1] = 0;
      pcVar8 = (char *)FUN_1400a24c0(param_1 + 0x10,*param_2,&local_48,param_1[10],local_38,param_4)
      ;
      if (pcVar8 == (char *)0x0) {
LAB_1400b538a:
        lVar14 = *param_3;
        if (lVar14 == 0) {
          lVar15 = 0;
          lVar14 = 0;
        }
        else {
          lVar15 = param_3[3] + lVar14;
          lVar14 = param_3[2] + lVar14;
        }
        uVar6 = *param_2;
        if ((uVar6 & 0x30000) != 0) {
          uVar6 = 0;
LAB_1400b53c0:
          lVar16 = *(longlong *)(param_2 + 4);
          uVar12 = *(ulonglong *)(param_2 + 6);
          local_38[0] = *(ulonglong *)(param_2 + 8);
          local_48 = (ulonglong)(uVar6 >> 3);
          uVar9 = (uint)param_1[0xb] * local_48;
          lVar3 = *(longlong *)(param_2 + 10);
          do {
            uVar6 = param_1[0xe];
            if (uVar6 == param_1[0xb]) {
              param_1[0xf] = param_1[0xf] + 1;
              param_1[0xe] = 0;
              if ((uint)param_1[0xc] <= (uint)param_1[0xf]) {
                pcVar8 = (char *)0x0;
                goto LAB_1400b5606;
              }
              uVar6 = 0;
            }
            if ((uint)param_1[0xf] < local_38[0]) {
              uVar20 = uVar12;
              if (uVar9 < uVar12) {
                uVar20 = uVar9;
              }
              uVar10 = uVar6 * local_48;
              if (uVar20 <= uVar10) goto LAB_1400b551f;
              if ((((*param_2 & 0x40000) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
                 (*(longlong *)(param_2 + 0x20) != 1)) {
                uVar19 = 0;
                uVar17 = 0;
              }
              else {
                uVar17 = *(undefined8 *)(param_2 + 0x1c);
                uVar19 = 0x400;
              }
              if ((param_1 + 0x10 == (int *)0x0) ||
                 (pcVar4 = *(code **)(param_1 + 0x10), pcVar4 == (code *)0x0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = (*pcVar4)((ulonglong)(uint)param_1[0xf] * lVar3 + lVar16 + uVar10,
                                   uVar20 - uVar10,uVar17,uVar19,lVar15,lVar14 - lVar15);
                lVar15 = lVar15 + (uint)param_1[0x15] * uVar10;
              }
            }
            else {
LAB_1400b551f:
              iVar2 = param_1[10];
              uVar20 = 8;
              if (iVar2 != -0x7eff4445) {
                uVar20 = 4;
              }
              uVar10 = (ulonglong)(param_1[0xb] - uVar6);
              uVar11 = (ulonglong)(lVar14 - lVar15) >> (iVar2 == -0x7eff4445) + 2;
              if (uVar11 < uVar10) {
                uVar10 = uVar11;
              }
              uVar11 = uVar10;
              if (7 < uVar10) {
                uVar18 = 0x40;
                lVar13 = lVar15;
                if (iVar2 != -0x7eff4445) {
                  uVar18 = 0x20;
                }
                do {
                  lVar15 = uVar18 + lVar13;
                  if ((ulonglong)(lVar14 - lVar13) < uVar18) {
                    lVar15 = lVar13;
                  }
                  uVar11 = uVar11 - 8;
                  lVar13 = lVar15;
                } while (7 < uVar11);
              }
              for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                lVar13 = uVar20 + lVar15;
                if ((ulonglong)(lVar14 - lVar15) < uVar20) {
                  lVar13 = lVar15;
                }
                lVar15 = lVar13;
              }
            }
            if (uVar10 == 0) goto LAB_1400b55fc;
            uVar6 = (int)uVar10 + param_1[0xe];
            if (uVar6 < (uint)param_1[0xe]) {
              uVar6 = 0xffffffff;
            }
            param_1[0xe] = uVar6;
          } while( true );
        }
        uVar6 = (&DAT_140482a50)[uVar6 & 0xf] +
                (&DAT_140482a50)[uVar6 >> 0xc & 0xf] + (&DAT_140482a50)[uVar6 >> 8 & 0xf] +
                (&DAT_140482a50)[uVar6 >> 4 & 0xf];
        if ((uVar6 & 7) == 0) goto LAB_1400b53c0;
        pcVar8 = "#base: unsupported option";
        goto LAB_1400b5606;
      }
      goto LAB_1400b562a;
    }
    if (*(byte *)(param_1 + 0xd) < 0x40) goto LAB_1400b51de;
    pcVar8 = "@base: end of data";
    goto LAB_1400b52e2;
  }
  param_1[0x1a] = 0;
  pcVar8 = (char *)0x0;
LAB_1400b565a:
  bVar5 = 0;
LAB_1400b565d:
  param_1[1] = -(uint)bVar5 & 3;
  if (pcVar8 == (char *)0x0) {
    return (char *)0x0;
  }
LAB_1400b566d:
  if (*pcVar8 != '#') {
    return pcVar8;
  }
LAB_1400b5672:
  *param_1 = 0x75ae3d2;
  return pcVar8;
LAB_1400b55fc:
  pcVar8 = "@nie: internal note: short read";
LAB_1400b5606:
  if (*param_3 != 0) {
    param_3[3] = lVar15 - *param_3;
  }
  if (pcVar8 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0xd) = 0x60;
    pcVar8 = pcVar7;
LAB_1400b52e2:
    param_1[0x1b] = 0;
LAB_1400b52f0:
    if ((pcVar8 == "$base: short read") && ((char)param_3[5] != '\0')) {
      pcVar8 = "#nie: truncated input";
      goto LAB_1400b5672;
    }
    if (pcVar8 == (char *)0x0) {
      param_1[0x1a] = 0;
      return (char *)0x0;
    }
  }
  else {
    if (pcVar8 == "@nie: internal note: short read") {
      pcVar8 = "$base: short read";
      param_1[0x1b] = 2;
      goto LAB_1400b52f0;
    }
LAB_1400b562a:
    if (*pcVar8 == '#') goto LAB_1400b52f0;
    if (*pcVar8 != '$') goto LAB_1400b52e2;
    pcVar8 = "#base: cannot return a suspension";
  }
  if (*pcVar8 == '$') {
    param_1[0x1a] = 1;
    if (*pcVar8 != '$') goto LAB_1400b565a;
    goto LAB_1400b565d;
  }
  goto LAB_1400b566d;
}

