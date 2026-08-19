// Function: FUN_1400b0d90
// Addr: 1400b0d90
// Size: 1544 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b0fbc) */

char * FUN_1400b0d90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  char local_res20;
  byte *local_f8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  
  pcVar10 = (char *)0x0;
  pbVar17 = (byte *)0x0;
  uVar18 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_f8 = (byte *)0x0;
  if ((param_3 != (longlong *)0x0) && (lVar16 = *param_3, lVar16 != 0)) {
    pbVar17 = (byte *)(param_3[3] + lVar16);
    local_f8 = (byte *)(param_3[2] + lVar16);
  }
  iVar14 = *(int *)(param_1 + 0x110);
  if (iVar14 == 0) {
    local_res20 = '\x01';
    goto LAB_1400b0ed1;
  }
  local_res20 = *(char *)(param_1 + 0xfe00);
  uVar18 = *(ulonglong *)(param_1 + 0xfdf8);
  switch(iVar14) {
  case 1:
    while (pbVar17 != local_f8) {
      uVar18 = (ulonglong)*pbVar17;
      pbVar17 = pbVar17 + 1;
      do {
        pcVar8 = pcVar10;
        if (uVar18 == 0) goto LAB_1400b1230;
switchD_1400b0eb6_caseD_2:
        if (local_f8 == pbVar17) {
          iVar14 = 2;
          goto LAB_1400b136e;
        }
        puVar1 = (ulonglong *)(param_1 + 0xa8);
        uVar12 = *puVar1;
        puVar2 = (ulonglong *)(param_1 + 0xa0);
        if (*puVar2 != uVar12) goto joined_r0x0001400b0f37;
        *puVar2 = 0;
        uVar12 = 0;
        *puVar1 = 0;
        do {
          uVar15 = (longlong)local_f8 - (longlong)pbVar17;
          uVar13 = uVar15;
          if (uVar18 < uVar15) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) break;
          uVar11 = 0x1000 - uVar12;
          if (0x1000 < uVar12) {
            uVar11 = 0;
          }
          uVar7 = uVar13 & 0xffffffff;
          if (uVar11 <= (uVar13 & 0xffffffff)) {
            uVar7 = uVar11;
          }
          if (uVar7 <= uVar15) {
            uVar15 = uVar7;
          }
          if (uVar15 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 0x118 + uVar12,pbVar17,uVar15);
          }
          uVar12 = *puVar1;
          *puVar1 = uVar12;
          if (uVar18 != 0) break;
          if (local_f8 == pbVar17) {
            local_res20 = '\x01';
            break;
          }
          uVar18 = (ulonglong)*pbVar17;
          pbVar17 = pbVar17 + 1;
joined_r0x0001400b0f37:
        } while (uVar12 < 0xf02);
        piVar3 = (int *)(param_1 + 0x1d18);
        while( true ) {
          uVar12 = *puVar1;
          uVar13 = *puVar2;
          if ((uVar12 < uVar13) || (0x1000 < uVar12)) {
            pcVar9 = "#gif: internal error: inconsistent ri/wi";
            goto LAB_1400b13a3;
          }
          local_c8 = uVar12 - uVar13;
          local_b0 = 0;
          local_b8 = 0;
          lVar16 = param_1 + 0x118 + uVar13;
          local_68 = 0;
          local_60 = 0;
          local_a8 = 0;
          local_d0 = lVar16;
          local_c0 = local_c8;
          pcVar8 = (char *)func_0x0001400ad660(piVar3,&local_a0,&local_d0,&local_68);
          uVar12 = (local_b8 - lVar16) + local_d0 + *puVar2;
          if (uVar12 < *puVar2) {
            uVar12 = 0xffffffffffffffff;
          }
          *puVar2 = uVar12;
          if ((piVar3 != (int *)0x0) && (*piVar3 == 0x3ccb6c71)) {
            uVar4 = *(uint *)(param_1 + 0x1d64);
            *(undefined8 *)(param_1 + 0x1d64) = 0;
            if (uVar4 <= *(uint *)(param_1 + 0x1d68)) {
              lVar16 = (ulonglong)*(uint *)(param_1 + 0x1d68) - (ulonglong)uVar4;
              if (lVar16 != 0) {
                local_58 = param_1 + 0xdd78 + (ulonglong)uVar4;
                local_50 = lVar16;
                pcVar9 = (char *)FUN_1400b1410(param_1,param_2,&local_58);
                if ((pcVar9 != (char *)0x0) && (*pcVar9 == '#')) goto LAB_1400b13a3;
              }
            }
          }
          if (pcVar8 == (char *)0x0) {
            *(undefined1 *)(param_1 + 0x48) = 0;
            if ((local_res20 == '\0') && (pcVar8 = (char *)0x0, uVar18 == 0)) goto LAB_1400b1230;
            iVar14 = 3;
            *(ulonglong *)(param_1 + 0xfe08) = uVar18 & 0xffffffff;
            goto LAB_1400b12e8;
          }
          if (pcVar8 == "$base: short read") break;
          if (pcVar8 != "$base: short write") {
            if (((*(char *)(param_1 + 0x43) != '\0') &&
                (*(uint *)(param_1 + 0x8c) <= *(uint *)(param_1 + 0x94))) &&
               (*(char *)(param_1 + 0x4b) == '\0')) {
              if ((local_res20 == '\0') && (pcVar8 = pcVar10, uVar18 == 0)) goto LAB_1400b1230;
              iVar14 = 5;
              *(ulonglong *)(param_1 + 0xfe08) = uVar18 & 0xffffffff;
              goto LAB_1400b11bd;
            }
            pcVar9 = pcVar8;
            if (*pcVar8 == '#') goto LAB_1400b13a3;
            if (*pcVar8 != '$') goto LAB_1400b1397;
            pcVar9 = "#base: cannot return a suspension";
            goto LAB_1400b13a3;
          }
        }
LAB_1400b0ed1:
      } while (local_res20 == '\0');
      local_res20 = '\0';
      iVar14 = 1;
    }
    break;
  case 2:
    goto switchD_1400b0eb6_caseD_2;
  case 3:
LAB_1400b12e8:
    uVar12 = *(ulonglong *)(param_1 + 0xfe08);
    if (uVar12 <= (ulonglong)((longlong)local_f8 - (longlong)pbVar17)) {
      pbVar17 = pbVar17 + uVar12;
      if (param_3 != (longlong *)0x0) {
        param_3[3] = (longlong)pbVar17 - *param_3;
      }
      iVar14 = 4;
      goto code_r0x0001400b1322;
    }
LAB_1400b11d5:
    *(byte **)(param_1 + 0xfe08) = pbVar17 + (uVar12 - (longlong)local_f8);
    pbVar17 = local_f8;
    break;
  case 4:
code_r0x0001400b1322:
    pcVar10 = (char *)func_0x0001400afd30(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      pbVar17 = (byte *)(param_3[3] + *param_3);
    }
    goto joined_r0x0001400b1343;
  case 5:
LAB_1400b11bd:
    uVar12 = *(ulonglong *)(param_1 + 0xfe08);
    if ((ulonglong)((longlong)local_f8 - (longlong)pbVar17) < uVar12) goto LAB_1400b11d5;
    pbVar17 = pbVar17 + uVar12;
    if (param_3 != (longlong *)0x0) {
      param_3[3] = (longlong)pbVar17 - *param_3;
    }
    iVar14 = 6;
    goto LAB_1400b1209;
  case 6:
LAB_1400b1209:
    pcVar10 = (char *)func_0x0001400afd30(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      pbVar17 = (byte *)(param_3[3] + *param_3);
    }
joined_r0x0001400b1343:
    pcVar8 = pcVar10;
    if (pcVar10 == (char *)0x0) {
LAB_1400b1230:
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (((*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x8c)) &&
          (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0x88))) &&
         (*(uint *)(param_1 + 0x84) != *(uint *)(param_1 + 0x8c))) {
        pcVar9 = "#base: not enough data";
      }
      else {
LAB_1400b1397:
        *(undefined4 *)(param_1 + 0x110) = 0;
        pcVar9 = pcVar8;
      }
      goto LAB_1400b13a3;
    }
    if (*pcVar10 == '$') goto LAB_1400b1371;
    bVar5 = false;
    goto LAB_1400b1376;
  default:
    bVar5 = false;
    goto LAB_1400b1376;
  }
LAB_1400b136e:
  pcVar10 = "$base: short read";
LAB_1400b1371:
  bVar5 = true;
LAB_1400b1376:
  *(ulonglong *)(param_1 + 0xfdf8) = uVar18;
  *(char *)(param_1 + 0xfe00) = local_res20;
  iVar6 = 0;
  if (bVar5) {
    iVar6 = iVar14;
  }
  *(int *)(param_1 + 0x110) = iVar6;
  pcVar9 = pcVar10;
LAB_1400b13a3:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pbVar17 - *param_3;
  }
  return pcVar9;
}

