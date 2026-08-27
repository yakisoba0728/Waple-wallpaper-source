// Function: FUN_1400b0cc0
// Addr: 1400b0cc0
// Size: 1625 bytes


char * FUN_1400b0cc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
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
  
  pcVar11 = (char *)0x0;
  pbVar18 = (byte *)0x0;
  uVar8 = 0;
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
    pbVar18 = (byte *)(param_3[3] + lVar16);
    local_f8 = (byte *)(param_3[2] + lVar16);
  }
  iVar14 = *(int *)(param_1 + 0x110);
  if (iVar14 == 0) {
    local_res20 = '\x01';
    goto LAB_1400b0e01;
  }
  local_res20 = *(char *)(param_1 + 0xfe00);
  uVar8 = *(ulonglong *)(param_1 + 0xfdf8);
  switch(iVar14) {
  case 1:
    while (pbVar18 != local_f8) {
      uVar8 = (ulonglong)*pbVar18;
      pbVar18 = pbVar18 + 1;
      do {
        pcVar9 = pcVar11;
        if (uVar8 == 0) goto LAB_1400b1160;
switchD_1400b0de6_caseD_2:
        if (local_f8 == pbVar18) {
          iVar14 = 2;
          goto LAB_1400b129e;
        }
        puVar1 = (ulonglong *)(param_1 + 0xa8);
        uVar17 = *puVar1;
        puVar2 = (ulonglong *)(param_1 + 0xa0);
        if (*puVar2 != uVar17) goto joined_r0x0001400b0e67;
        *puVar2 = 0;
        uVar17 = 0;
        *puVar1 = 0;
        do {
          uVar15 = (longlong)local_f8 - (longlong)pbVar18;
          uVar13 = uVar15;
          if (uVar8 < uVar15) {
            uVar13 = uVar8;
          }
          if (uVar13 == 0) break;
          uVar12 = 0x1000 - uVar17;
          if (0x1000 < uVar17) {
            uVar12 = 0;
          }
          uVar7 = uVar13 & 0xffffffff;
          if (uVar12 <= (uVar13 & 0xffffffff)) {
            uVar7 = uVar12;
          }
          if (uVar7 <= uVar15) {
            uVar15 = uVar7;
          }
          if (uVar15 != 0) {
            FUN_1404210f0(param_1 + 0x118 + uVar17,pbVar18,uVar15);
            pbVar18 = pbVar18 + uVar15;
          }
          uVar17 = *puVar1 + (uVar15 & 0xffffffff);
          if (uVar17 < *puVar1) {
            uVar17 = 0xffffffffffffffff;
          }
          uVar13 = uVar8 - (uVar15 & 0xffffffff);
          *puVar1 = uVar17;
          bVar5 = uVar13 <= uVar8;
          uVar8 = 0;
          if (bVar5) {
            uVar8 = uVar13;
          }
          if (uVar8 != 0) break;
          if (local_f8 == pbVar18) {
            local_res20 = '\x01';
            break;
          }
          uVar8 = (ulonglong)*pbVar18;
          pbVar18 = pbVar18 + 1;
joined_r0x0001400b0e67:
        } while (uVar17 < 0xf02);
        piVar3 = (int *)(param_1 + 0x1d18);
        while( true ) {
          uVar17 = *puVar1;
          uVar13 = *puVar2;
          if ((uVar17 < uVar13) || (0x1000 < uVar17)) {
            pcVar10 = "#gif: internal error: inconsistent ri/wi";
            goto LAB_1400b12d3;
          }
          local_c8 = uVar17 - uVar13;
          local_b0 = 0;
          local_b8 = 0;
          lVar16 = param_1 + 0x118 + uVar13;
          local_68 = 0;
          local_60 = 0;
          local_a8 = 0;
          local_d0 = lVar16;
          local_c0 = local_c8;
          pcVar9 = (char *)FUN_1400ad590(piVar3,&local_a0,&local_d0,&local_68);
          uVar17 = (local_b8 - lVar16) + local_d0 + *puVar2;
          if (uVar17 < *puVar2) {
            uVar17 = 0xffffffffffffffff;
          }
          *puVar2 = uVar17;
          if ((piVar3 != (int *)0x0) && (*piVar3 == 0x3ccb6c71)) {
            uVar4 = *(uint *)(param_1 + 0x1d64);
            *(undefined8 *)(param_1 + 0x1d64) = 0;
            if (uVar4 <= *(uint *)(param_1 + 0x1d68)) {
              lVar16 = (ulonglong)*(uint *)(param_1 + 0x1d68) - (ulonglong)uVar4;
              if (lVar16 != 0) {
                local_58 = param_1 + 0xdd78 + (ulonglong)uVar4;
                local_50 = lVar16;
                pcVar10 = (char *)FUN_1400b1340(param_1,param_2,&local_58);
                if ((pcVar10 != (char *)0x0) && (*pcVar10 == '#')) goto LAB_1400b12d3;
              }
            }
          }
          if (pcVar9 == (char *)0x0) {
            *(undefined1 *)(param_1 + 0x48) = 0;
            if ((local_res20 == '\0') && (pcVar9 = (char *)0x0, uVar8 == 0)) goto LAB_1400b1160;
            iVar14 = 3;
            *(ulonglong *)(param_1 + 0xfe08) = uVar8 & 0xffffffff;
            goto LAB_1400b1218;
          }
          if (pcVar9 == "$base: short read") break;
          if (pcVar9 != "$base: short write") {
            if (((*(char *)(param_1 + 0x43) != '\0') &&
                (*(uint *)(param_1 + 0x8c) <= *(uint *)(param_1 + 0x94))) &&
               (*(char *)(param_1 + 0x4b) == '\0')) {
              if ((local_res20 == '\0') && (pcVar9 = pcVar11, uVar8 == 0)) goto LAB_1400b1160;
              iVar14 = 5;
              *(ulonglong *)(param_1 + 0xfe08) = uVar8 & 0xffffffff;
              goto LAB_1400b10ed;
            }
            pcVar10 = pcVar9;
            if (*pcVar9 == '#') goto LAB_1400b12d3;
            if (*pcVar9 != '$') goto LAB_1400b12c7;
            pcVar10 = "#base: cannot return a suspension";
            goto LAB_1400b12d3;
          }
        }
LAB_1400b0e01:
      } while (local_res20 == '\0');
      local_res20 = '\0';
      iVar14 = 1;
    }
    break;
  case 2:
    goto switchD_1400b0de6_caseD_2;
  case 3:
LAB_1400b1218:
    uVar17 = *(ulonglong *)(param_1 + 0xfe08);
    if (uVar17 <= (ulonglong)((longlong)local_f8 - (longlong)pbVar18)) {
      pbVar18 = pbVar18 + uVar17;
      if (param_3 != (longlong *)0x0) {
        param_3[3] = (longlong)pbVar18 - *param_3;
      }
      iVar14 = 4;
      goto LAB_1400b1252;
    }
LAB_1400b1105:
    *(byte **)(param_1 + 0xfe08) = pbVar18 + (uVar17 - (longlong)local_f8);
    pbVar18 = local_f8;
    break;
  case 4:
LAB_1400b1252:
    pcVar11 = (char *)FUN_1400afc60(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      pbVar18 = (byte *)(param_3[3] + *param_3);
    }
    goto joined_r0x0001400b1273;
  case 5:
LAB_1400b10ed:
    uVar17 = *(ulonglong *)(param_1 + 0xfe08);
    if ((ulonglong)((longlong)local_f8 - (longlong)pbVar18) < uVar17) goto LAB_1400b1105;
    pbVar18 = pbVar18 + uVar17;
    if (param_3 != (longlong *)0x0) {
      param_3[3] = (longlong)pbVar18 - *param_3;
    }
    iVar14 = 6;
    goto LAB_1400b1139;
  case 6:
LAB_1400b1139:
    pcVar11 = (char *)FUN_1400afc60(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      pbVar18 = (byte *)(param_3[3] + *param_3);
    }
joined_r0x0001400b1273:
    pcVar9 = pcVar11;
    if (pcVar11 == (char *)0x0) {
LAB_1400b1160:
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (((*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x8c)) &&
          (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0x88))) &&
         (*(uint *)(param_1 + 0x84) != *(uint *)(param_1 + 0x8c))) {
        pcVar10 = "#base: not enough data";
      }
      else {
LAB_1400b12c7:
        *(undefined4 *)(param_1 + 0x110) = 0;
        pcVar10 = pcVar9;
      }
      goto LAB_1400b12d3;
    }
    if (*pcVar11 == '$') goto LAB_1400b12a1;
    bVar5 = false;
    goto LAB_1400b12a6;
  default:
    bVar5 = false;
    goto LAB_1400b12a6;
  }
LAB_1400b129e:
  pcVar11 = "$base: short read";
LAB_1400b12a1:
  bVar5 = true;
LAB_1400b12a6:
  *(ulonglong *)(param_1 + 0xfdf8) = uVar8;
  *(char *)(param_1 + 0xfe00) = local_res20;
  iVar6 = 0;
  if (bVar5) {
    iVar6 = iVar14;
  }
  *(int *)(param_1 + 0x110) = iVar6;
  pcVar10 = pcVar11;
LAB_1400b12d3:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pbVar18 - *param_3;
  }
  return pcVar10;
}

