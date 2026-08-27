// Function: FUN_1400b95c0
// Addr: 1400b95c0
// Size: 1678 bytes


uint * FUN_1400b95c0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  
  pcVar15 = (char *)0x0;
  uVar18 = 0;
  uVar12 = 0;
  uVar14 = 0;
  bVar3 = false;
  puVar16 = (uint *)pcVar15;
  puVar17 = (uint *)pcVar15;
  if ((param_2 != (longlong *)0x0) &&
     (lVar2 = *param_2, puVar16 = (uint *)0x0, puVar17 = (uint *)0x0, lVar2 != 0)) {
    puVar16 = (uint *)(param_2[3] + lVar2);
    puVar17 = (uint *)(param_2[2] + lVar2);
  }
  iVar13 = *(int *)(param_1 + 0x160);
  if (iVar13 == 0) {
    if (*(int *)(param_1 + 0x7c) == 0x1a) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
switchD_1400b964f_caseD_1:
      if ((longlong)puVar17 - (longlong)puVar16 < 4) {
        *(undefined8 *)(param_1 + 0xadf8) = 0;
        iVar13 = 2;
        goto switchD_1400b964f_caseD_2;
      }
      uVar14 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
LAB_1400b9762:
      uVar10 = *(uint *)(param_1 + 0xe4);
      if (uVar14 != uVar10) {
        pcVar15 = "#png: bad animation sequence number";
        goto LAB_1400b9720;
      }
      if (uVar10 == 0xffffffff) {
        pcVar15 = "#png: unsupported PNG file";
        goto LAB_1400b9720;
      }
      *(uint *)(param_1 + 0xe4) = uVar10 + 1;
switchD_1400b964f_caseD_3:
      if ((longlong)puVar17 - (longlong)puVar16 < 4) {
        *(undefined8 *)(param_1 + 0xadf8) = 0;
        iVar13 = 4;
        goto switchD_1400b964f_caseD_4;
      }
      uVar12 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
switchD_1400b964f_caseD_5:
      if ((longlong)puVar17 - (longlong)puVar16 < 4) {
        *(undefined8 *)(param_1 + 0xadf8) = 0;
        iVar13 = 6;
        goto switchD_1400b964f_caseD_6;
      }
      uVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
switchD_1400b964f_caseD_7:
      if ((longlong)puVar17 - (longlong)puVar16 < 4) {
        *(undefined8 *)(param_1 + 0xadf8) = 0;
        iVar13 = 8;
        goto switchD_1400b964f_caseD_8;
      }
      uVar14 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
switchD_1400b964f_caseD_9:
      if ((longlong)puVar17 - (longlong)puVar16 < 4) {
        *(undefined8 *)(param_1 + 0xadf8) = 0;
        iVar13 = 10;
        goto switchD_1400b964f_caseD_a;
      }
      uVar10 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
LAB_1400b99c9:
      uVar12 = uVar14 + uVar12;
      if (((((uVar14 < uVar12) && (uVar14 <= *(uint *)(param_1 + 0x28))) &&
           (uVar12 <= *(uint *)(param_1 + 0x28))) &&
          ((uVar18 = uVar10 + uVar18, uVar10 < uVar18 && (uVar10 <= *(uint *)(param_1 + 0x2c))))) &&
         (uVar18 <= *(uint *)(param_1 + 0x2c))) {
        *(uint *)(param_1 + 0xa0) = uVar14;
        *(uint *)(param_1 + 0xa4) = uVar10;
        *(uint *)(param_1 + 0xa8) = uVar12;
        *(uint *)(param_1 + 0xac) = uVar18;
        goto switchD_1400b964f_caseD_b;
      }
    }
    goto LAB_1400b9660;
  }
  uVar14 = *(uint *)(param_1 + 0xade8);
  uVar8 = (ulonglong)uVar14;
  uVar12 = *(uint *)(param_1 + 0xadec);
  uVar18 = *(uint *)(param_1 + 0xadf0);
  switch(iVar13) {
  case 1:
    goto switchD_1400b964f_caseD_1;
  case 2:
switchD_1400b964f_caseD_2:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 0x18) {
        uVar14 = (uint)(uVar8 >> 0x20);
        goto LAB_1400b9762;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 3:
    goto switchD_1400b964f_caseD_3;
  case 4:
switchD_1400b964f_caseD_4:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 0x18) {
        uVar12 = (uint)(uVar8 >> 0x20);
        goto switchD_1400b964f_caseD_5;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 5:
    goto switchD_1400b964f_caseD_5;
  case 6:
switchD_1400b964f_caseD_6:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 0x18) {
        uVar18 = (uint)(uVar8 >> 0x20);
        goto switchD_1400b964f_caseD_7;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 7:
    goto switchD_1400b964f_caseD_7;
  case 8:
switchD_1400b964f_caseD_8:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 0x18) {
        uVar14 = (uint)(uVar8 >> 0x20);
        goto switchD_1400b964f_caseD_9;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 9:
    goto switchD_1400b964f_caseD_9;
  case 10:
switchD_1400b964f_caseD_a:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 0x18) {
        uVar10 = (uint)(uVar8 >> 0x20);
        goto LAB_1400b99c9;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 0xb:
switchD_1400b964f_caseD_b:
    if ((longlong)puVar17 - (longlong)puVar16 < 2) {
      *(undefined8 *)(param_1 + 0xadf8) = 0;
      iVar13 = 0xc;
      goto switchD_1400b964f_caseD_c;
    }
    uVar5 = (ushort)*puVar16 >> 8 | (ushort)*puVar16 << 8;
    puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400b9ab9:
    uVar8 = (ulonglong)uVar5;
  case 0xd:
    if ((longlong)puVar17 - (longlong)puVar16 < 2) {
      *(undefined8 *)(param_1 + 0xadf8) = 0;
      iVar13 = 0xe;
switchD_1400b964f_caseD_e:
      uVar14 = (uint)uVar8;
      while (puVar16 != puVar17) {
        uVar10 = *(uint *)(param_1 + 0xadf8);
        uVar7 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
        uVar11 = uVar10 & 0xff;
        *(ulonglong *)(param_1 + 0xadf8) = uVar7;
        uVar4 = *puVar16;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        uVar7 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar7;
        *(ulonglong *)(param_1 + 0xadf8) = uVar7;
        if (uVar11 == 8) {
          uVar5 = (ushort)(uVar7 >> 0x30);
          goto LAB_1400b9b49;
        }
        *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar7;
      }
    }
    else {
      uVar5 = (ushort)*puVar16 >> 8 | (ushort)*puVar16 << 8;
      puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400b9b49:
      uVar14 = (uint)uVar8;
      uVar12 = (uint)uVar5;
      if (uVar5 == 0) {
        uVar8 = uVar8 * 0x6baa80;
      }
      else {
        uVar8 = (uVar8 * 0x2a0e9a00) / (ulonglong)uVar12;
      }
      *(ulonglong *)(param_1 + 0xd0) = uVar8;
      iVar13 = 0xf;
switchD_1400b964f_caseD_f:
      if (puVar16 != puVar17) {
        bVar1 = (byte)*puVar16;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        if (bVar1 != 0) {
          if (bVar1 == 1) {
            *(undefined1 *)(param_1 + 0xe0) = 1;
            goto LAB_1400b9bad;
          }
          if (bVar1 == 2) {
            *(undefined1 *)(param_1 + 0xe0) = 2;
            goto LAB_1400b9bad;
          }
LAB_1400b9660:
          pcVar15 = "#png: bad chunk";
          goto LAB_1400b9720;
        }
        *(undefined1 *)(param_1 + 0xe0) = 0;
LAB_1400b9bad:
        uVar14 = (uint)bVar1;
        iVar13 = 0x10;
switchD_1400b964f_caseD_10:
        if (puVar16 != puVar17) {
          uVar14 = *puVar16;
          puVar16 = (uint *)((longlong)puVar16 + 1);
          if ((byte)uVar14 == 0) {
            uVar9 = 1;
          }
          else {
            if ((byte)uVar14 != 1) goto LAB_1400b9660;
            uVar9 = 0;
          }
          *(undefined1 *)(param_1 + 0xe2) = uVar9;
          if (*(int *)(param_1 + 0x98) == 0) {
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa0);
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xa8);
            *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xac);
            *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
            *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_1 + 0xe0);
            *(undefined1 *)(param_1 + 0xe3) = uVar9;
          }
          *(undefined4 *)(param_1 + 0x160) = 0;
          goto LAB_1400b9720;
        }
      }
    }
    break;
  case 0xc:
switchD_1400b964f_caseD_c:
    while (puVar16 != puVar17) {
      uVar10 = *(uint *)(param_1 + 0xadf8);
      uVar8 = *(ulonglong *)(param_1 + 0xadf8) & 0xffffffffffffff00;
      uVar11 = uVar10 & 0xff;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar10 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xadf8) = uVar8;
      if (uVar11 == 8) {
        uVar5 = (ushort)(uVar8 >> 0x30);
        goto LAB_1400b9ab9;
      }
      *(ulonglong *)(param_1 + 0xadf8) = uVar11 + 8 | uVar8;
    }
    break;
  case 0xe:
    goto switchD_1400b964f_caseD_e;
  case 0xf:
    goto switchD_1400b964f_caseD_f;
  case 0x10:
    goto switchD_1400b964f_caseD_10;
  default:
    goto switchD_1400b964f_default;
  }
  bVar3 = true;
  pcVar15 = "$base: short read";
switchD_1400b964f_default:
  *(uint *)(param_1 + 0xade8) = uVar14;
  *(uint *)(param_1 + 0xadec) = uVar12;
  iVar6 = 0;
  if (bVar3) {
    iVar6 = iVar13;
  }
  *(uint *)(param_1 + 0xadf0) = uVar18;
  *(int *)(param_1 + 0x160) = iVar6;
LAB_1400b9720:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar16 - *param_2;
  }
  return (uint *)pcVar15;
}

