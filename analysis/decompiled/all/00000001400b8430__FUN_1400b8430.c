// Function: FUN_1400b8430
// Addr: 1400b8430
// Size: 2238 bytes


char * FUN_1400b8430(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  
  pcVar5 = (char *)0x0;
  bVar21 = false;
  puVar14 = (uint *)pcVar5;
  puVar18 = (uint *)pcVar5;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *param_2, puVar14 = (uint *)0x0, puVar18 = (uint *)0x0, lVar1 != 0)) {
    puVar14 = (uint *)(param_2[3] + lVar1);
    puVar18 = (uint *)(param_2[2] + lVar1);
  }
  iVar13 = *(int *)(param_1 + 0x154);
  iVar6 = 0;
  iVar9 = 0;
  iVar19 = 1;
  pcVar4 = pcVar5;
  switch(iVar13) {
  case 0:
    uVar3 = *(uint *)(param_1 + 0x74);
    if ((uVar3 != 0x45544c50) || (param_3 != '\0')) {
      if (((uVar3 & 0x20) == 0) && (pcVar4 = (char *)(uint *)0x0, uVar3 != 0x54414449)) {
        pcVar4 = "#png: bad chunk";
        goto LAB_1400b8ca9;
      }
      goto LAB_1400b851f;
    }
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if (*(char *)(param_1 + 0x61) == '\x03') {
        if (param_2 != (longlong *)0x0) {
          param_2[3] = (longlong)puVar14 - *param_2;
        }
        iVar13 = 1;
        goto switchD_1400b84ad_caseD_1;
      }
      if ((*(char *)(param_1 + 0x61) - 2U & 0xfb) != 0) {
        pcVar4 = "#png: bad chunk";
        goto LAB_1400b8ca9;
      }
      goto LAB_1400b8517;
    }
    goto LAB_1400b84d0;
  case 1:
switchD_1400b84ad_caseD_1:
    pcVar4 = (char *)FUN_1400b9ca0(param_1,param_2);
    if (param_2 != (longlong *)0x0) {
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
LAB_1400b8517:
    *(undefined1 *)(param_1 + 0x6c) = 1;
LAB_1400b851f:
    iVar13 = *(int *)(param_1 + 0x74);
    if (iVar13 == 0x66495865) {
      if (*(char *)(param_1 + 0x5a) != '\0') {
        if (*(char *)(param_1 + 0x67) != '\0') {
          pcVar4 = "#png: bad chunk";
          goto LAB_1400b8ca9;
        }
        if (param_2 != (longlong *)0x0) {
          param_2[3] = (longlong)puVar14 - *param_2;
        }
        iVar13 = 2;
        goto switchD_1400b84ad_caseD_2;
      }
    }
    else if (((iVar13 == 0x74585469) || (iVar13 == 0x74584574)) || (iVar13 == 0x7458547a)) {
      if (*(char *)(param_1 + 0x5d) != '\0') {
        *(undefined4 *)(param_1 + 0xe8) = 4;
        *(undefined4 *)(param_1 + 0xec) = 0x4b56504b;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
    }
    else if (param_3 == '\0') {
      if (iVar13 == 0x4c546361) {
        if (*(char *)(param_1 + 100) != '\0') {
          pcVar4 = "#png: bad chunk";
          goto LAB_1400b8ca9;
        }
        if (param_2 != (longlong *)0x0) {
          param_2[3] = (longlong)puVar14 - *param_2;
        }
        iVar13 = 3;
        goto switchD_1400b84ad_caseD_3;
      }
      if (iVar13 == 0x4d524863) {
        if (*(char *)(param_1 + 0x59) != '\0') {
          if (*(char *)(param_1 + 0x65) != '\0') {
            pcVar4 = "#png: bad chunk";
            goto LAB_1400b8ca9;
          }
          if (param_2 != (longlong *)0x0) {
            param_2[3] = (longlong)puVar14 - *param_2;
          }
          iVar13 = 4;
          goto switchD_1400b84ad_caseD_4;
        }
      }
      else {
        if (iVar13 == 0x4c546366) {
          if (*(char *)(param_1 + 0x66) != '\0') {
            pcVar4 = "#png: bad chunk";
            goto LAB_1400b8ca9;
          }
          if (param_2 != (longlong *)0x0) {
            param_2[3] = (longlong)puVar14 - *param_2;
          }
          iVar13 = 5;
          goto switchD_1400b84ad_caseD_5;
        }
        if (iVar13 == 0x414d4167) {
          if (*(char *)(param_1 + 0x5b) != '\0') {
            if (*(char *)(param_1 + 0x68) != '\0') {
              pcVar4 = "#png: bad chunk";
              goto LAB_1400b8ca9;
            }
            if (param_2 != (longlong *)0x0) {
              param_2[3] = (longlong)puVar14 - *param_2;
            }
            iVar13 = 6;
            goto switchD_1400b84ad_caseD_6;
          }
        }
        else if (iVar13 == 0x50434369) {
          if (*(char *)(param_1 + 0x5c) != '\0') {
            if (*(char *)(param_1 + 0x69) != '\0') {
              pcVar4 = "#png: bad chunk";
              goto LAB_1400b8ca9;
            }
            if (param_2 != (longlong *)0x0) {
              param_2[3] = (longlong)puVar14 - *param_2;
            }
            iVar13 = 7;
            goto switchD_1400b84ad_caseD_7;
          }
        }
        else if (iVar13 == 0x42475273) {
          if (*(char *)(param_1 + 0x5e) != '\0') {
            if (*(char *)(param_1 + 0x6d) != '\0') {
              pcVar4 = "#png: bad chunk";
              goto LAB_1400b8ca9;
            }
            if (param_2 != (longlong *)0x0) {
              param_2[3] = (longlong)puVar14 - *param_2;
            }
            iVar13 = 8;
            goto switchD_1400b84ad_caseD_8;
          }
        }
        else if (iVar13 == 0x534e5274) {
          if (*(char *)(param_1 + 0x6e) != '\0') {
LAB_1400b84d0:
            pcVar4 = "#png: bad chunk";
            goto LAB_1400b8ca9;
          }
          bVar20 = *(byte *)(param_1 + 0x61) < 3;
          bVar21 = false;
          if (*(byte *)(param_1 + 0x61) == 3) {
            if (*(char *)(param_1 + 0x6c) == '\0') goto LAB_1400b84d0;
            bVar20 = false;
            bVar21 = true;
          }
          if (bVar20 || bVar21) {
            if (param_2 != (longlong *)0x0) {
              param_2[3] = (longlong)puVar14 - *param_2;
            }
            iVar13 = 9;
            goto switchD_1400b84ad_caseD_9;
          }
          goto LAB_1400b88f1;
        }
      }
    }
    break;
  case 2:
switchD_1400b84ad_caseD_2:
    puVar10 = (uint *)pcVar5;
    puVar16 = (uint *)pcVar5;
    if ((param_2 != (longlong *)0x0) && (puVar11 = (uint *)*param_2, puVar11 != (uint *)0x0)) {
      puVar16 = (uint *)(param_2[3] + (longlong)puVar11);
      puVar10 = puVar11;
    }
    uVar3 = *(uint *)(param_1 + 0x7c);
    if (uVar3 < 4) {
      pcVar4 = "#png: bad chunk";
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 3;
      *(undefined4 *)(param_1 + 0xec) = 0x45584946;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      puVar11 = (uint *)pcVar5;
      if (param_2 != (longlong *)0x0) {
        puVar11 = (uint *)param_2[4];
      }
      *(undefined4 *)(param_1 + 0x7c) = 0;
      puVar10 = (uint *)(((longlong)puVar11 - (longlong)puVar10) + (longlong)puVar16);
      if (puVar10 < puVar11) {
        puVar10 = (uint *)0xffffffffffffffff;
      }
      *(uint **)(param_1 + 0xf8) = puVar10;
      puVar11 = (uint *)((longlong)puVar10 + (ulonglong)uVar3);
      if (puVar11 < puVar10) {
        puVar11 = (uint *)0xffffffffffffffff;
      }
      *(uint **)(param_1 + 0x100) = puVar11;
      pcVar4 = pcVar5;
    }
    if (param_2 != (longlong *)0x0) {
      if (*param_2 != 0) {
        param_2[3] = (longlong)puVar16 - *param_2;
      }
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 == (uint *)0x0) {
      *(undefined1 *)(param_1 + 0x67) = 1;
      pcVar4 = (char *)0x0;
      break;
    }
LAB_1400b8c92:
    if ((byte)*(uint *)pcVar4 != 0x24) goto switchD_1400b84ad_default;
    goto LAB_1400b8c9a;
  case 3:
switchD_1400b84ad_caseD_3:
    pcVar4 = (char *)FUN_1400b8d20(param_1,param_2);
    if (param_2 != (longlong *)0x0) {
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 100) = 1;
    break;
  case 4:
switchD_1400b84ad_caseD_4:
    pcVar4 = (char *)FUN_1400b8f40(param_1,param_2);
    if (param_2 != (longlong *)0x0) {
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 0x65) = 1;
    break;
  case 5:
switchD_1400b84ad_caseD_5:
    pcVar4 = (char *)FUN_1400b95c0(param_1,param_2);
    if (param_2 != (longlong *)0x0) {
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 0x66) = 1;
    break;
  case 6:
switchD_1400b84ad_caseD_6:
    puVar10 = (uint *)pcVar5;
    puVar16 = (uint *)pcVar5;
    if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
      puVar10 = (uint *)(param_2[3] + lVar1);
      puVar16 = (uint *)(param_2[2] + lVar1);
    }
    iVar15 = *(int *)(param_1 + 0x164);
    if (iVar15 == 0) {
      if (*(int *)(param_1 + 0x7c) == 4) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 5;
        *(undefined4 *)(param_1 + 0xec) = 0x47414d41;
        goto LAB_1400b8a2f;
      }
      pcVar5 = "#png: bad chunk";
    }
    else if (iVar15 == 1) {
LAB_1400b8a2f:
      if ((longlong)puVar16 - (longlong)puVar10 < 4) {
        *(undefined8 *)(param_1 + 0xae00) = 0;
        iVar15 = 2;
        goto joined_r0x0001400b8a5d;
      }
      uVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar12 = (ulonglong)
               (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
LAB_1400b8b02:
      *(ulonglong *)(param_1 + 0xf0) = uVar12;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    else {
      if (iVar15 == 2) {
joined_r0x0001400b8a5d:
        while (puVar10 != puVar16) {
          uVar3 = *(uint *)(param_1 + 0xae00);
          uVar12 = *(ulonglong *)(param_1 + 0xae00) & 0xffffffffffffff00;
          uVar17 = uVar3 & 0xff;
          *(ulonglong *)(param_1 + 0xae00) = uVar12;
          uVar2 = *puVar10;
          puVar10 = (uint *)((longlong)puVar10 + 1);
          uVar12 = (ulonglong)(byte)uVar2 << (0x38U - (char)uVar3 & 0x3f) | uVar12;
          *(ulonglong *)(param_1 + 0xae00) = uVar12;
          if (uVar17 == 0x18) {
            uVar12 = uVar12 >> 0x20;
            goto LAB_1400b8b02;
          }
          *(ulonglong *)(param_1 + 0xae00) = uVar17 + 8 | uVar12;
        }
        pcVar5 = "$base: short read";
        bVar21 = true;
      }
      iVar7 = iVar6;
      if (bVar21) {
        iVar7 = iVar15;
      }
      *(int *)(param_1 + 0x164) = iVar7;
    }
    if (param_2 != (longlong *)0x0) {
      if (*param_2 != 0) {
        param_2[3] = (longlong)puVar10 - *param_2;
      }
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    pcVar4 = pcVar5;
    if ((uint *)pcVar5 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 0x68) = 1;
    pcVar4 = (char *)0x0;
    break;
  case 7:
switchD_1400b84ad_caseD_7:
    puVar10 = (uint *)pcVar5;
    puVar16 = (uint *)pcVar5;
    if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
      puVar10 = (uint *)(param_2[3] + lVar1);
      puVar16 = (uint *)(param_2[2] + lVar1);
    }
    iVar15 = *(int *)(param_1 + 0x168);
    if (iVar15 == 0) goto LAB_1400b8b20;
    if (iVar15 == 1) {
      while (puVar10 != puVar16) {
        uVar3 = *puVar10;
        puVar10 = (uint *)((longlong)puVar10 + 1);
        if ((byte)uVar3 == 0) {
          if (*(int *)(param_1 + 0x7c) != 0) {
            iVar15 = 2;
            *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
            goto LAB_1400b8b58;
          }
LAB_1400b8bc2:
          pcVar4 = "#png: bad chunk";
          goto LAB_1400b8bc9;
        }
LAB_1400b8b20:
        if (*(int *)(param_1 + 0x7c) == 0) goto LAB_1400b8bc2;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        iVar15 = iVar19;
      }
LAB_1400b8ba6:
      pcVar4 = "$base: short read";
      iVar7 = 1;
LAB_1400b8bb0:
      iVar8 = iVar6;
      if (iVar7 != 0) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 0x168) = iVar8;
    }
    else {
      pcVar4 = pcVar5;
      iVar7 = iVar9;
      if (iVar15 != 2) goto LAB_1400b8bb0;
LAB_1400b8b58:
      if (puVar10 == puVar16) goto LAB_1400b8ba6;
      uVar3 = *puVar10;
      puVar10 = (uint *)((longlong)puVar10 + 1);
      if ((byte)uVar3 == 0) {
        *(undefined1 *)(param_1 + 0x6f) = 1;
        *(undefined4 *)(param_1 + 0xe8) = 4;
        *(undefined4 *)(param_1 + 0xec) = 0x49434350;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x168) = 0;
        pcVar4 = pcVar5;
      }
      else {
        pcVar4 = "#png: unsupported PNG compression method";
      }
    }
LAB_1400b8bc9:
    if (param_2 != (longlong *)0x0) {
      if (*param_2 != 0) {
        param_2[3] = (longlong)puVar10 - *param_2;
      }
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 0x69) = 1;
    pcVar4 = pcVar5;
    break;
  case 8:
switchD_1400b84ad_caseD_8:
    puVar10 = (uint *)pcVar5;
    puVar16 = (uint *)pcVar5;
    if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
      puVar10 = (uint *)(param_2[3] + lVar1);
      puVar16 = (uint *)(param_2[2] + lVar1);
    }
    iVar15 = *(int *)(param_1 + 0x170);
    if (iVar15 == 0) {
      if (*(int *)(param_1 + 0x7c) == 1) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 5;
        *(undefined4 *)(param_1 + 0xec) = 0x53524742;
        iVar15 = iVar19;
        goto LAB_1400b8c23;
      }
      pcVar4 = "#png: bad chunk";
    }
    else {
      pcVar4 = pcVar5;
      iVar7 = iVar9;
      if (iVar15 == 1) {
LAB_1400b8c23:
        if (puVar10 != puVar16) {
          uVar3 = *puVar10;
          puVar10 = (uint *)((longlong)puVar10 + 1);
          *(ulonglong *)(param_1 + 0xf0) = (ulonglong)(byte)uVar3;
          *(undefined8 *)(param_1 + 0xf8) = 0;
          *(undefined8 *)(param_1 + 0x100) = 0;
          *(undefined4 *)(param_1 + 0x170) = 0;
          pcVar4 = pcVar5;
          goto LAB_1400b8c66;
        }
        pcVar4 = "$base: short read";
        iVar7 = 1;
      }
      iVar8 = iVar6;
      if (iVar7 != 0) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 0x170) = iVar8;
    }
LAB_1400b8c66:
    if (param_2 != (longlong *)0x0) {
      if (*param_2 != 0) {
        param_2[3] = (longlong)puVar10 - *param_2;
      }
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
    *(undefined1 *)(param_1 + 0x6d) = 1;
    pcVar4 = pcVar5;
    break;
  case 9:
switchD_1400b84ad_caseD_9:
    pcVar4 = (char *)FUN_1400b9f00(param_1,param_2);
    if (param_2 != (longlong *)0x0) {
      puVar14 = (uint *)(param_2[3] + *param_2);
    }
    if ((uint *)pcVar4 != (uint *)0x0) goto LAB_1400b8c92;
LAB_1400b88f1:
    *(undefined1 *)(param_1 + 0x6e) = 1;
    break;
  case 10:
    goto switchD_1400b84ad_caseD_a;
  default:
switchD_1400b84ad_default:
    iVar19 = iVar6;
    goto LAB_1400b8c9a;
  }
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar13 = 10;
    *(ulonglong *)(param_1 + 0xadd0) = (ulonglong)*(uint *)(param_1 + 0x7c);
switchD_1400b84ad_caseD_a:
    uVar12 = *(ulonglong *)(param_1 + 0xadd0);
    if ((ulonglong)((longlong)puVar18 - (longlong)puVar14) < uVar12) {
      pcVar4 = "$base: short read";
      *(byte **)(param_1 + 0xadd0) = (byte *)((uVar12 - (longlong)puVar18) + (longlong)puVar14);
      puVar14 = puVar18;
LAB_1400b8c9a:
      if (iVar19 != 0) {
        iVar9 = iVar13;
      }
      *(int *)(param_1 + 0x154) = iVar9;
      goto LAB_1400b8ca9;
    }
    puVar14 = (uint *)((longlong)puVar14 + uVar12);
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
LAB_1400b8ca9:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar14 - *param_2;
  }
  return pcVar4;
}

