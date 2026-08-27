// Function: FUN_1400bb600
// Addr: 1400bb600
// Size: 2706 bytes


/* WARNING: Removing unreachable block (ram,0x0001400bbba8) */
/* WARNING: Removing unreachable block (ram,0x0001400bb7b0) */
/* WARNING: Removing unreachable block (ram,0x0001400bbda5) */
/* WARNING: Removing unreachable block (ram,0x0001400bbd6f) */
/* WARNING: Removing unreachable block (ram,0x0001400bbd7f) */
/* WARNING: Removing unreachable block (ram,0x0001400bbbc8) */
/* WARNING: Removing unreachable block (ram,0x0001400bb857) */
/* WARNING: Removing unreachable block (ram,0x0001400bbb9a) */
/* WARNING: Removing unreachable block (ram,0x0001400bb7c4) */

uint * FUN_1400bb600(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  code *pcVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *local_d8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78 [4];
  uint *local_58;
  uint *local_50;
  
  puVar18 = (uint *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  local_d8 = (uint *)0x0;
  puVar22 = puVar18;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, puVar22 = (uint *)0x0, lVar2 != 0)) {
    puVar22 = (uint *)(param_2[3] + lVar2);
    local_d8 = (uint *)(param_2[2] + lVar2);
    local_c0 = lVar2;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x18c);
  bVar5 = true;
  puVar19 = puVar22;
  switch(uVar7) {
  case 0:
    *(undefined8 *)(param_1 + 0x38) = 0;
  case 0xb:
    while( true ) {
      pcVar16 = (char *)0x0;
      uVar21 = *(ulonglong *)(param_1 + 0x50);
      uVar14 = *(ulonglong *)(param_1 + 0x38);
      if ((uVar21 < uVar14) || ((ulonglong)param_3[1] < uVar21)) break;
      local_b0 = uVar21 - uVar14;
      lVar2 = param_2[5];
      lVar10 = *param_3 + uVar14;
      local_98 = *(longlong *)(param_1 + 0x40) + uVar14;
      local_a0 = 0;
      local_90 = 0;
      puVar22 = (uint *)((ulonglong)*(uint *)(param_1 + 0x7c) + (longlong)puVar19);
      if ((ulonglong)((longlong)local_d8 - (longlong)puVar19) <=
          (ulonglong)*(uint *)(param_1 + 0x7c)) {
        puVar22 = local_d8;
      }
      if (param_2 != (longlong *)0x0) {
        if (((char)lVar2 == '\0') ||
           ((ulonglong)((longlong)puVar22 - *param_2) < (ulonglong)param_2[2])) {
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
        }
        *(undefined1 *)(param_2 + 5) = uVar12;
        param_2[3] = (longlong)puVar19 - *param_2;
        param_2[2] = (longlong)puVar22 - *param_2;
      }
      local_a8 = 0;
      uVar21 = (longlong)puVar19 - local_c0;
      piVar1 = (int *)(param_1 + 0x1d8);
      lVar20 = lVar10;
      puVar22 = puVar19;
      local_b8 = lVar10;
      if (piVar1 == (int *)0x0) {
        pcVar16 = "#base: bad receiver";
LAB_1400bba3a:
        if (param_2 != (longlong *)0x0) {
          puVar22 = (uint *)(param_2[3] + *param_2);
        }
      }
      else {
        if (*piVar1 != 0x3ccb6c71) {
          pcVar16 = "#base: initialize not called";
          if (*piVar1 == 0x75ae3d2) {
            pcVar16 = "#base: disabled by previous error";
          }
          goto LAB_1400bba3a;
        }
        if (param_2 == (longlong *)0x0) {
          pcVar16 = "#base: bad argument";
          *piVar1 = 0x75ae3d2;
        }
        else {
          if (*(uint *)(param_1 + 0x1dc) < 2) {
            *(undefined4 *)(param_1 + 0x1dc) = 0;
            if ((*(int *)(param_1 + 0x210) == 0) || (*(int *)(param_1 + 0x210) == 1)) {
              local_78[2] = 0;
              local_78[3] = 0;
              pcVar16 = (char *)FUN_1400b5c30(piVar1,&local_b8,param_2);
              if ((pcVar16 == "$base: short read") && ((char)param_2[5] != '\0')) {
                pcVar16 = "#zlib: truncated input";
LAB_1400bbb1a:
                *piVar1 = 0x75ae3d2;
              }
              else {
                if ((uint *)pcVar16 != (uint *)0x0) {
                  if ((byte)*(uint *)pcVar16 == 0x24) {
                    uVar7 = 1;
                    *(undefined4 *)(param_1 + 0x210) = 1;
                    if ((byte)*(uint *)pcVar16 != 0x24) goto LAB_1400bbb06;
                    goto LAB_1400bbb09;
                  }
                  goto LAB_1400bbb15;
                }
                *(undefined4 *)(param_1 + 0x210) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x210) = 0;
LAB_1400bbb06:
              uVar7 = 0;
LAB_1400bbb09:
              *(undefined4 *)(param_1 + 0x1dc) = uVar7;
              if ((uint *)pcVar16 != (uint *)0x0) {
LAB_1400bbb15:
                if ((byte)*(uint *)pcVar16 == 0x23) goto LAB_1400bbb1a;
              }
            }
          }
          else {
            *piVar1 = 0x75ae3d2;
            pcVar16 = "#base: interleaved coroutine calls";
          }
          lVar20 = local_a8 + local_b8;
          puVar22 = (uint *)(param_2[3] + *param_2);
        }
      }
      if (*(char *)(param_1 + 0x5f) == '\0') {
        uVar14 = (longlong)puVar22 - local_c0;
        if (uVar14 < uVar21) {
          puVar19 = (uint *)0x0;
        }
        puVar17 = (uint *)(uVar14 - uVar21);
        if (uVar14 < uVar21) {
          puVar17 = (uint *)0x0;
        }
        piVar1 = (int *)(param_1 + 0x1a0);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x3ccb6c71)) {
          if (*(int *)(param_1 + 0x1c8) == 0) {
            lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
            if (((*(uint *)(lVar3 + 4) & 0x20) == 0) ||
               (lVar3 = cpuid_Version_info(1), (*(uint *)(lVar3 + 0xc) & 0x900002) != 0x900002)) {
              lVar3 = cpuid_Version_info(1);
              pcVar11 = FUN_1400aac80;
              if ((*(uint *)(lVar3 + 0xc) & 0x900002) != 0x900002) {
                pcVar11 = *(code **)(param_1 + 0x1d0);
              }
            }
            else {
              pcVar11 = FUN_1400aac80;
            }
            *(code **)(param_1 + 0x1d0) = pcVar11;
          }
          local_58 = puVar19;
          local_50 = puVar17;
          (**(code **)(param_1 + 0x1d0))(piVar1,&local_58);
        }
      }
      uVar13 = (int)((longlong)puVar22 - local_c0) - (int)uVar21;
      if ((ulonglong)((longlong)puVar22 - local_c0) < uVar21) {
        uVar13 = 0;
      }
      uVar13 = *(uint *)(param_1 + 0x7c) - uVar13;
      uVar8 = 0;
      if (uVar13 <= *(uint *)(param_1 + 0x7c)) {
        uVar8 = uVar13;
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      uVar21 = *(ulonglong *)(param_1 + 0x38) + (lVar20 - lVar10);
      if (uVar21 < *(ulonglong *)(param_1 + 0x38)) {
        uVar21 = 0xffffffffffffffff;
      }
      *(ulonglong *)(param_1 + 0x38) = uVar21;
      if (param_2 != (longlong *)0x0) {
        *(char *)(param_2 + 5) = (char)lVar2;
        param_2[2] = (longlong)local_d8 - *param_2;
      }
      puVar19 = puVar22;
      if ((uint *)pcVar16 == (uint *)0x0) {
        if (*(int *)(param_1 + 0x7c) == 0) goto switchD_1400bb6e3_caseD_1;
        pcVar16 = "#base: too much data";
        goto LAB_1400bc045;
      }
      if (pcVar16 == "$base: short write") {
        if ((byte)(*(char *)(param_1 + 99) - 1U) < 6) goto LAB_1400bbffb;
        pcVar16 = "#base: too much data";
        goto LAB_1400bc045;
      }
      if (pcVar16 != "$base: short read") {
        if ((byte)*(uint *)pcVar16 == 0x23) goto LAB_1400bc045;
        if ((byte)*(uint *)pcVar16 != 0x24) goto LAB_1400bc026;
        pcVar16 = "#base: cannot return a suspension";
        goto LAB_1400bc045;
      }
      if (*(int *)(param_1 + 0x7c) != 0) {
        if (local_d8 == puVar22) {
          uVar7 = 0xb;
          goto LAB_1400bbeb7;
        }
        pcVar16 = "#png: internal error: zlib decoder did not exhaust its input";
        goto LAB_1400bc045;
      }
switchD_1400bb6e3_caseD_3:
      if ((longlong)local_d8 - (longlong)puVar22 < 4) {
        *(undefined8 *)(param_1 + 0xae40) = 0;
        uVar7 = 4;
switchD_1400bb6e3_caseD_4:
        while( true ) {
          if (puVar22 == local_d8) goto LAB_1400bbeb7;
          uVar13 = *(uint *)(param_1 + 0xae40);
          *(ulonglong *)(param_1 + 0xae40) = *(ulonglong *)(param_1 + 0xae40) & 0xffffffffffffff00;
          uVar8 = *puVar22;
          puVar22 = (uint *)((longlong)puVar22 + 1);
          uVar6 = uVar13 & 0xff;
          uVar21 = (ulonglong)(byte)uVar8 << (0x38U - (char)uVar13 & 0x3f) |
                   *(ulonglong *)(param_1 + 0xae40);
          *(ulonglong *)(param_1 + 0xae40) = uVar21;
          if (uVar6 == 0x18) break;
          *(ulonglong *)(param_1 + 0xae40) = uVar6 + 8 | uVar21;
        }
        uVar13 = (uint)(uVar21 >> 0x20);
      }
      else {
        uVar13 = *puVar22;
        puVar22 = puVar22 + 1;
        uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18
        ;
      }
      if ((*(char *)(param_1 + 0x5f) == '\0') && (*(char *)(param_1 + 0x78) == 'I')) {
        piVar1 = (int *)(param_1 + 0x1a0);
        uVar8 = 0;
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x3ccb6c71)) {
          if (*(int *)(param_1 + 0x1c8) == 0) {
            lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
            if (((*(uint *)(lVar2 + 4) & 0x20) == 0) ||
               (lVar2 = cpuid_Version_info(1), (*(uint *)(lVar2 + 0xc) & 0x900002) != 0x900002)) {
              lVar2 = cpuid_Version_info(1);
              pcVar11 = FUN_1400aac80;
              if ((*(uint *)(lVar2 + 0xc) & 0x900002) != 0x900002) {
                pcVar11 = *(code **)(param_1 + 0x1d0);
              }
            }
            else {
              pcVar11 = FUN_1400aac80;
            }
            *(code **)(param_1 + 0x1d0) = pcVar11;
          }
          local_88 = 0;
          local_80 = 0;
          (**(code **)(param_1 + 0x1d0))(piVar1,&local_88);
          uVar8 = *(uint *)(param_1 + 0x1c8);
        }
        if (uVar8 != uVar13) goto LAB_1400bbff2;
      }
switchD_1400bb6e3_caseD_5:
      if ((longlong)local_d8 - (longlong)puVar22 < 4) {
        *(undefined8 *)(param_1 + 0xae40) = 0;
        uVar7 = 6;
switchD_1400bb6e3_caseD_6:
        while( true ) {
          if (puVar22 == local_d8) goto LAB_1400bbeb7;
          uVar13 = *(uint *)(param_1 + 0xae40);
          *(ulonglong *)(param_1 + 0xae40) = *(ulonglong *)(param_1 + 0xae40) & 0xffffffffffffff00;
          uVar8 = *puVar22;
          puVar22 = (uint *)((longlong)puVar22 + 1);
          uVar6 = uVar13 & 0xff;
          uVar21 = (ulonglong)(byte)uVar8 << (0x38U - (char)uVar13 & 0x3f) |
                   *(ulonglong *)(param_1 + 0xae40);
          *(ulonglong *)(param_1 + 0xae40) = uVar21;
          if (uVar6 == 0x18) break;
          *(ulonglong *)(param_1 + 0xae40) = uVar6 + 8 | uVar21;
        }
        uVar13 = (uint)(uVar21 >> 0x20);
      }
      else {
        uVar13 = *puVar22;
        puVar22 = puVar22 + 1;
        uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18
        ;
      }
      *(uint *)(param_1 + 0x7c) = uVar13;
switchD_1400bb6e3_caseD_7:
      if ((longlong)local_d8 - (longlong)puVar22 < 4) {
        *(undefined8 *)(param_1 + 0xae40) = 0;
        uVar7 = 8;
switchD_1400bb6e3_caseD_8:
        while( true ) {
          if (puVar22 == local_d8) goto LAB_1400bbeb7;
          uVar21 = *(ulonglong *)(param_1 + 0xae40);
          uVar14 = uVar21 & 0xffffffffffffff;
          *(ulonglong *)(param_1 + 0xae40) = uVar14;
          bVar4 = (byte)(uVar21 >> 0x38);
          uVar13 = *puVar22;
          puVar22 = (uint *)((longlong)puVar22 + 1);
          uVar14 = (ulonglong)(byte)uVar13 << (bVar4 & 0x3f) | uVar14;
          *(ulonglong *)(param_1 + 0xae40) = uVar14;
          if (bVar4 == 0x18) break;
          *(ulonglong *)(param_1 + 0xae40) = (ulonglong)(bVar4 + 8) << 0x38 | uVar14;
        }
      }
      else {
        uVar14 = (ulonglong)*puVar22;
        puVar22 = puVar22 + 1;
      }
      iVar15 = (int)uVar14;
      *(int *)(param_1 + 0x74) = iVar15;
      puVar19 = puVar22;
      if (*(char *)(param_1 + 0x78) == 'I') {
        if (iVar15 != 0x54414449) goto LAB_1400bbe94;
        if ((*(char *)(param_1 + 0x5f) == '\0') &&
           (piVar1 = (int *)(param_1 + 0x1a0), piVar1 != (int *)0x0)) {
          *(undefined4 *)(param_1 + 0x1a4) = 0;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
          *(undefined8 *)(param_1 + 0x1c0) = 0;
          *(undefined8 *)(param_1 + 0x1c8) = 0;
          *(code **)(param_1 + 0x1d0) = FUN_1400aa900;
          *(char **)(param_1 + 0x1a8) = "{vtable}wuffs_base__hasher_u32";
          *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_14047aab0;
          *piVar1 = 0x3ccb6c71;
          if (*piVar1 == 0x3ccb6c71) {
            if (*(int *)(param_1 + 0x1c8) == 0) {
              lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
              if (((*(uint *)(lVar2 + 4) & 0x20) == 0) ||
                 (lVar2 = cpuid_Version_info(1), (*(uint *)(lVar2 + 0xc) & 0x900002) != 0x900002)) {
                lVar2 = cpuid_Version_info(1);
                pcVar11 = FUN_1400aac80;
                if ((*(uint *)(lVar2 + 0xc) & 0x900002) != 0x900002) {
                  pcVar11 = *(code **)(param_1 + 0x1d0);
                }
              }
              else {
                pcVar11 = FUN_1400aac80;
              }
              *(code **)(param_1 + 0x1d0) = pcVar11;
            }
            local_78[1] = 4;
            local_78[0] = param_1 + 0x78;
            (**(code **)(param_1 + 0x1d0))(piVar1,local_78);
          }
        }
      }
      else {
        if ((iVar15 != 0x54416466) || (*(uint *)(param_1 + 0x7c) < 4)) {
LAB_1400bbe94:
          pcVar16 = "#png: bad chunk";
          goto LAB_1400bc045;
        }
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) - 4;
switchD_1400bb6e3_caseD_9:
        if ((longlong)local_d8 - (longlong)puVar22 < 4) {
          *(undefined8 *)(param_1 + 0xae40) = 0;
          uVar7 = 10;
switchD_1400bb6e3_caseD_a:
          while( true ) {
            if (puVar22 == local_d8) goto LAB_1400bbeb7;
            uVar13 = *(uint *)(param_1 + 0xae40);
            *(ulonglong *)(param_1 + 0xae40) = *(ulonglong *)(param_1 + 0xae40) & 0xffffffffffffff00
            ;
            uVar8 = *puVar22;
            puVar22 = (uint *)((longlong)puVar22 + 1);
            uVar6 = uVar13 & 0xff;
            uVar21 = (ulonglong)(byte)uVar8 << (0x38U - (char)uVar13 & 0x3f) |
                     *(ulonglong *)(param_1 + 0xae40);
            *(ulonglong *)(param_1 + 0xae40) = uVar21;
            if (uVar6 == 0x18) break;
            *(ulonglong *)(param_1 + 0xae40) = uVar6 + 8 | uVar21;
          }
          uVar13 = (uint)(uVar21 >> 0x20);
        }
        else {
          uVar13 = *puVar22;
          puVar22 = puVar22 + 1;
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
        }
        uVar8 = *(uint *)(param_1 + 0xe4);
        puVar19 = puVar22;
        if (uVar13 != uVar8) {
          pcVar16 = "#png: bad animation sequence number";
          goto LAB_1400bc045;
        }
        if (uVar8 == 0xffffffff) {
          pcVar16 = "#png: unsupported PNG file";
          goto LAB_1400bc045;
        }
        *(uint *)(param_1 + 0xe4) = uVar8 + 1;
      }
    }
    pcVar16 = "#base: bad workbuf length";
    goto LAB_1400bc045;
  case 1:
switchD_1400bb6e3_caseD_1:
    if (3 < (longlong)local_d8 - (longlong)puVar22) {
      uVar13 = *puVar22;
      puVar22 = puVar22 + 1;
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
LAB_1400bbfc9:
      if ((*(char *)(param_1 + 0x5f) == '\0') && (*(char *)(param_1 + 0x78) == 'I')) {
        local_88 = 0;
        local_80 = 0;
        uVar8 = FUN_1400aa820(param_1 + 0x1a0,&local_88);
        if (uVar8 != uVar13) {
LAB_1400bbff2:
          pcVar16 = "#png: bad checksum";
          puVar19 = puVar22;
          goto LAB_1400bc045;
        }
      }
LAB_1400bbffb:
      if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x50)) {
        pcVar16 = (char *)puVar18;
        if ((param_3[1] != 0) && (pcVar16 = (char *)(uint *)0x0, *(char *)*param_3 == '\x04')) {
          *(char *)*param_3 = '\x01';
        }
LAB_1400bc026:
        *(undefined4 *)(param_1 + 0x18c) = 0;
        puVar19 = puVar22;
      }
      else {
        pcVar16 = "#base: not enough data";
        puVar19 = puVar22;
      }
      goto LAB_1400bc045;
    }
    *(undefined8 *)(param_1 + 0xae40) = 0;
    uVar7 = 2;
  case 2:
    if (puVar22 == local_d8) {
LAB_1400bbeb7:
      pcVar16 = "$base: short read";
    }
    else {
      do {
        uVar13 = *(uint *)(param_1 + 0xae40);
        uVar21 = *(ulonglong *)(param_1 + 0xae40) & 0xffffffffffffff00;
        uVar6 = uVar13 & 0xff;
        *(ulonglong *)(param_1 + 0xae40) = uVar21;
        uVar8 = *puVar22;
        puVar22 = (uint *)((longlong)puVar22 + 1);
        uVar21 = (ulonglong)(byte)uVar8 << (0x38U - (char)uVar13 & 0x3f) | uVar21;
        *(ulonglong *)(param_1 + 0xae40) = uVar21;
        if (uVar6 == 0x18) {
          uVar13 = (uint)(uVar21 >> 0x20);
          goto LAB_1400bbfc9;
        }
        *(ulonglong *)(param_1 + 0xae40) = uVar6 + 8 | uVar21;
      } while (puVar22 != local_d8);
      pcVar16 = "$base: short read";
    }
    break;
  case 3:
    goto switchD_1400bb6e3_caseD_3;
  case 4:
    goto switchD_1400bb6e3_caseD_4;
  case 5:
    goto switchD_1400bb6e3_caseD_5;
  case 6:
    goto switchD_1400bb6e3_caseD_6;
  case 7:
    goto switchD_1400bb6e3_caseD_7;
  case 8:
    goto switchD_1400bb6e3_caseD_8;
  case 9:
    goto switchD_1400bb6e3_caseD_9;
  case 10:
    goto switchD_1400bb6e3_caseD_a;
  default:
    bVar5 = false;
    pcVar16 = (char *)puVar18;
  }
  uVar9 = 0;
  if (bVar5) {
    uVar9 = uVar7;
  }
  *(undefined4 *)(param_1 + 0x18c) = uVar9;
  puVar19 = puVar22;
LAB_1400bc045:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar19 - *param_2;
  }
  return (uint *)pcVar16;
}

