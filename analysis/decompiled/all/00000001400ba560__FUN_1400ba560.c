// Function: FUN_1400ba560
// Addr: 1400ba560
// Size: 1352 bytes


char * FUN_1400ba560(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined1 uVar21;
  uint *puVar22;
  
  pcVar10 = (char *)0x0;
  puVar18 = (uint *)pcVar10;
  puVar20 = (uint *)pcVar10;
  puVar22 = (uint *)pcVar10;
  if ((param_3 != (longlong *)0x0) &&
     (puVar17 = (uint *)*param_3, puVar18 = (uint *)0x0, puVar20 = (uint *)0x0,
     puVar22 = (uint *)0x0, puVar17 != (uint *)0x0)) {
    puVar18 = (uint *)(param_3[3] + (longlong)puVar17);
    puVar20 = (uint *)(param_3[2] + (longlong)puVar17);
    puVar22 = puVar17;
  }
  uVar19 = *(undefined4 *)(param_1 + 0x17c);
  bVar7 = true;
  switch(uVar19) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x58);
    if ((bVar1 & 0x10) != 0) {
      pcVar10 = "#base: bad call sequence";
      goto LAB_1400baac6;
    }
    if (bVar1 != 0x20) {
      if (bVar1 < 0x20) {
        if (param_3 != (longlong *)0x0) {
          param_3[3] = (longlong)puVar18 - *param_3;
        }
        uVar19 = 1;
        goto switchD_1400ba5f4_caseD_1;
      }
      if (bVar1 != 0x28) {
        if (bVar1 != 0x40) goto LAB_1400baa95;
        if (param_3 != (longlong *)0x0) {
          param_3[3] = (longlong)puVar18 - *param_3;
        }
        uVar19 = 2;
        goto switchD_1400ba5f4_caseD_2;
      }
      if (param_3 != (longlong *)0x0) {
        pcVar10 = (char *)param_3[4];
      }
      puVar17 = (uint *)(((longlong)pcVar10 - (longlong)puVar22) + (longlong)puVar18);
      if (puVar17 < pcVar10) {
        puVar17 = (uint *)0xffffffffffffffff;
      }
      pcVar10 = (char *)(uint *)0x0;
      if (*(uint **)(param_1 + 0xc0) != puVar17) {
        pcVar10 = "#base: bad restart";
        goto LAB_1400baac6;
      }
    }
    goto LAB_1400ba6af;
  case 1:
switchD_1400ba5f4_caseD_1:
    pcVar10 = (char *)func_0x0001400b75e0(param_1,0,param_3);
    goto LAB_1400ba697;
  case 2:
switchD_1400ba5f4_caseD_2:
    pcVar10 = (char *)FUN_1400babf0(param_1,param_3);
LAB_1400ba697:
    if (param_3 != (longlong *)0x0) {
      puVar18 = (uint *)(param_3[3] + *param_3);
    }
    if ((uint *)pcVar10 == (uint *)0x0) {
LAB_1400ba6af:
      if (*(int *)(param_1 + 0xec) == 0) {
        if (*(int *)(param_1 + 0x98) != 0) {
switchD_1400ba5f4_caseD_3:
          do {
            if ((longlong)puVar20 - (longlong)puVar18 < 4) {
              *(undefined8 *)(param_1 + 0xae28) = 0;
              uVar19 = 4;
switchD_1400ba5f4_caseD_4:
              while( true ) {
                if (puVar18 == puVar20) goto LAB_1400ba9bf;
                uVar16 = *(uint *)(param_1 + 0xae28);
                *(ulonglong *)(param_1 + 0xae28) =
                     *(ulonglong *)(param_1 + 0xae28) & 0xffffffffffffff00;
                uVar8 = *puVar18;
                puVar18 = (uint *)((longlong)puVar18 + 1);
                uVar9 = uVar16 & 0xff;
                uVar12 = (ulonglong)(byte)uVar8 << (0x38U - (char)uVar16 & 0x3f) |
                         *(ulonglong *)(param_1 + 0xae28);
                *(ulonglong *)(param_1 + 0xae28) = uVar12;
                if (uVar9 == 0x18) break;
                *(ulonglong *)(param_1 + 0xae28) = uVar9 + 8 | uVar12;
              }
              uVar16 = (uint)(uVar12 >> 0x20);
            }
            else {
              uVar16 = *puVar18;
              puVar18 = puVar18 + 1;
              uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18;
            }
            *(uint *)(param_1 + 0x7c) = uVar16;
switchD_1400ba5f4_caseD_5:
            if ((longlong)puVar20 - (longlong)puVar18 < 4) {
              *(undefined8 *)(param_1 + 0xae28) = 0;
              uVar19 = 6;
switchD_1400ba5f4_caseD_6:
              while( true ) {
                if (puVar18 == puVar20) goto LAB_1400ba9bf;
                uVar12 = *(ulonglong *)(param_1 + 0xae28);
                uVar11 = uVar12 & 0xffffffffffffff;
                *(ulonglong *)(param_1 + 0xae28) = uVar11;
                bVar1 = (byte)(uVar12 >> 0x38);
                uVar16 = *puVar18;
                puVar18 = (uint *)((longlong)puVar18 + 1);
                uVar11 = (ulonglong)(byte)uVar16 << (bVar1 & 0x3f) | uVar11;
                *(ulonglong *)(param_1 + 0xae28) = uVar11;
                if (bVar1 == 0x18) break;
                *(ulonglong *)(param_1 + 0xae28) = (ulonglong)(bVar1 + 8) << 0x38 | uVar11;
              }
            }
            else {
              uVar11 = (ulonglong)*puVar18;
              puVar18 = puVar18 + 1;
            }
            iVar15 = (int)uVar11;
            *(int *)(param_1 + 0x74) = iVar15;
            if (iVar15 == 0x444e4549) {
              if (*(int *)(param_1 + 0x7c) == 0) goto switchD_1400ba5f4_caseD_7;
LAB_1400ba9d4:
              pcVar10 = "#png: bad chunk";
              goto LAB_1400baac6;
            }
            if (iVar15 == 0x54416466) goto LAB_1400ba9d4;
            if (iVar15 == 0x4c546366) {
              if (param_3 == (longlong *)0x0) {
                *(byte **)(param_1 + 0xc0) = (byte *)((longlong)puVar18 + (-8 - (longlong)puVar22));
              }
              else {
                pbVar14 = (byte *)((longlong)puVar18 + (param_3[4] - (longlong)puVar22));
                if (pbVar14 < (byte *)param_3[4]) {
                  pbVar14 = (byte *)0xffffffffffffffff;
                }
                *(byte **)(param_1 + 0xc0) = pbVar14 + -8;
                param_3[3] = (longlong)puVar18 - *param_3;
              }
              uVar19 = 9;
              goto switchD_1400ba5f4_caseD_9;
            }
            if (param_3 != (longlong *)0x0) {
              param_3[3] = (longlong)puVar18 - *param_3;
            }
            uVar19 = 0xb;
switchD_1400ba5f4_caseD_b:
            pcVar10 = (char *)FUN_1400b8500(param_1,param_3,1);
            if (param_3 != (longlong *)0x0) {
              puVar18 = (uint *)(param_3[3] + *param_3);
            }
            if ((uint *)pcVar10 != (uint *)0x0) goto LAB_1400baaa8;
            if (*(int *)(param_1 + 0xec) != 0) goto LAB_1400ba6b8;
            *(undefined8 *)(param_1 + 0xae28) = 4;
            uVar19 = 0xc;
switchD_1400ba5f4_caseD_c:
            uVar12 = *(ulonglong *)(param_1 + 0xae28);
            if ((ulonglong)((longlong)puVar20 - (longlong)puVar18) < uVar12) goto LAB_1400ba903;
            puVar18 = (uint *)((longlong)puVar18 + uVar12);
            *(undefined4 *)(param_1 + 0x7c) = 0;
          } while( true );
        }
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xbc);
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
        *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_1 + 0xe1);
        *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(param_1 + 0xe3);
LAB_1400bab03:
        if (param_2 != (undefined4 *)0x0) {
          uVar2 = *(undefined1 *)(param_1 + 0xe2);
          if ((*(byte *)(param_1 + 0x61) < 4) && (*(char *)(param_1 + 0x6e) == '\0')) {
            uVar21 = 1;
          }
          else {
            uVar21 = 0;
          }
          uVar3 = *(undefined1 *)(param_1 + 0xe0);
          uVar5 = *(undefined8 *)(param_1 + 0xc0);
          uVar16 = *(uint *)(param_1 + 0x98);
          uVar6 = *(undefined8 *)(param_1 + 0xd0);
          uVar19 = *(undefined4 *)(param_1 + 0xa4);
          uVar13 = *(undefined4 *)(param_1 + 0xa8);
          uVar4 = *(undefined4 *)(param_1 + 0xac);
          *param_2 = *(undefined4 *)(param_1 + 0xa0);
          param_2[1] = uVar19;
          param_2[2] = uVar13;
          param_2[3] = uVar4;
          *(undefined8 *)(param_2 + 4) = uVar6;
          *(ulonglong *)(param_2 + 6) = (ulonglong)uVar16;
          *(undefined8 *)(param_2 + 8) = uVar5;
          *(undefined1 *)(param_2 + 10) = uVar3;
          *(undefined1 *)((longlong)param_2 + 0x29) = uVar21;
          *(undefined1 *)((longlong)param_2 + 0x2a) = uVar2;
          param_2[0xb] = 0;
        }
        *(undefined1 *)(param_1 + 0x58) = 0x40;
        uVar16 = *(uint *)(param_1 + 0x98) + 1;
        if (uVar16 < *(uint *)(param_1 + 0x98)) {
          uVar16 = 0xffffffff;
        }
        *(uint *)(param_1 + 0x98) = uVar16;
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      else {
LAB_1400ba6b8:
        *(undefined1 *)(param_1 + 0x58) = 0x30;
        pcVar10 = "@base: metadata reported";
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      goto LAB_1400baac6;
    }
LAB_1400baaa8:
    puVar20 = puVar18;
    puVar18 = puVar20;
    if ((byte)*(uint *)pcVar10 != 0x24) {
switchD_1400ba5f4_default:
      bVar7 = false;
      puVar20 = puVar18;
    }
    break;
  case 3:
    goto switchD_1400ba5f4_caseD_3;
  case 4:
    goto switchD_1400ba5f4_caseD_4;
  case 5:
    goto switchD_1400ba5f4_caseD_5;
  case 6:
    goto switchD_1400ba5f4_caseD_6;
  case 7:
switchD_1400ba5f4_caseD_7:
    if (3 < (longlong)puVar20 - (longlong)puVar18) {
      uVar12 = (ulonglong)*puVar18;
      puVar18 = puVar18 + 1;
code_r0x0001400ba9fc:
      if ((*(char *)(param_1 + 0x5f) == '\0') && ((int)uVar12 != -0x7d9fbd52)) {
        pcVar10 = "#png: bad checksum";
        goto LAB_1400baac6;
      }
      *(undefined1 *)(param_1 + 0x58) = 0x60;
LAB_1400baa95:
      pcVar10 = "@base: end of data";
      *(undefined4 *)(param_1 + 0x17c) = 0;
      goto LAB_1400baac6;
    }
    *(undefined8 *)(param_1 + 0xae28) = 0;
    uVar19 = 8;
  case 8:
    if (puVar18 == puVar20) {
LAB_1400ba9bf:
      puVar20 = puVar18;
      pcVar10 = "$base: short read";
    }
    else {
      do {
        uVar11 = *(ulonglong *)(param_1 + 0xae28);
        uVar12 = uVar11 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xae28) = uVar12;
        bVar1 = (byte)(uVar11 >> 0x38);
        uVar16 = *puVar18;
        puVar18 = (uint *)((longlong)puVar18 + 1);
        uVar12 = (ulonglong)(byte)uVar16 << (bVar1 & 0x3f) | uVar12;
        *(ulonglong *)(param_1 + 0xae28) = uVar12;
        if (bVar1 == 0x18) goto code_r0x0001400ba9fc;
        *(ulonglong *)(param_1 + 0xae28) = (ulonglong)(bVar1 + 8) << 0x38 | uVar12;
      } while (puVar18 != puVar20);
      pcVar10 = "$base: short read";
      puVar20 = puVar18;
    }
    break;
  case 9:
switchD_1400ba5f4_caseD_9:
    pcVar10 = (char *)FUN_1400b9690(param_1,param_3);
    if (param_3 != (longlong *)0x0) {
      puVar18 = (uint *)(param_3[3] + *param_3);
    }
    if ((uint *)pcVar10 == (uint *)0x0) {
      *(undefined8 *)(param_1 + 0xae28) = 4;
      uVar19 = 10;
      goto switchD_1400ba5f4_caseD_a;
    }
    goto LAB_1400baaa8;
  case 10:
switchD_1400ba5f4_caseD_a:
    uVar12 = *(ulonglong *)(param_1 + 0xae28);
    if ((ulonglong)((longlong)puVar20 - (longlong)puVar18) < uVar12) {
      *(byte **)(param_1 + 0xae28) = (byte *)((uVar12 - (longlong)puVar20) + (longlong)puVar18);
      puVar18 = puVar20;
      goto LAB_1400ba9bf;
    }
    puVar18 = (uint *)((longlong)puVar18 + uVar12);
    goto LAB_1400bab03;
  case 0xb:
    goto switchD_1400ba5f4_caseD_b;
  case 0xc:
    goto switchD_1400ba5f4_caseD_c;
  default:
    goto switchD_1400ba5f4_default;
  }
LAB_1400baab7:
  uVar13 = 0;
  if (bVar7) {
    uVar13 = uVar19;
  }
  *(undefined4 *)(param_1 + 0x17c) = uVar13;
  puVar18 = puVar20;
LAB_1400baac6:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar18 - *param_3;
  }
  return pcVar10;
LAB_1400ba903:
  pcVar10 = "$base: short read";
  *(byte **)(param_1 + 0xae28) = (byte *)((uVar12 - (longlong)puVar20) + (longlong)puVar18);
  goto LAB_1400baab7;
}

