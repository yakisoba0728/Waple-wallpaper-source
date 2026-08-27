// Function: FUN_1400b4ac0
// Addr: 1400b4ac0
// Size: 903 bytes


char * FUN_1400b4ac0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  
  pcVar6 = (char *)0x0;
  bVar4 = false;
  pcVar5 = (char *)0x0;
  puVar13 = (uint *)pcVar6;
  puVar14 = (uint *)pcVar6;
  if ((param_3 != (longlong *)0x0) &&
     (lVar2 = *param_3, puVar13 = (uint *)0x0, puVar14 = (uint *)0x0, lVar2 != 0)) {
    puVar13 = (uint *)(param_3[3] + lVar2);
    puVar14 = (uint *)(param_3[2] + lVar2);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x5c);
  switch(uVar7) {
  case 0:
    if (*(char *)(param_1 + 0x34) != '\0') {
      pcVar5 = "#base: bad call sequence";
      goto LAB_1400b4e14;
    }
    break;
  case 1:
    break;
  case 2:
    goto switchD_1400b4b34_caseD_2;
  case 3:
    goto switchD_1400b4b34_caseD_3;
  case 4:
    goto switchD_1400b4b34_caseD_4;
  case 5:
    goto switchD_1400b4b34_caseD_5;
  case 6:
    goto switchD_1400b4b34_caseD_6;
  case 7:
    goto switchD_1400b4b34_caseD_7;
  case 8:
    goto switchD_1400b4b34_caseD_8;
  default:
    goto switchD_1400b4b34_default;
  }
  if ((longlong)puVar14 - (longlong)puVar13 < 4) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar7 = 2;
switchD_1400b4b34_caseD_2:
    while (puVar13 != puVar14) {
      uVar10 = *(ulonglong *)(param_1 + 0x70);
      uVar9 = uVar10 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0x70) = uVar9;
      bVar3 = (byte)(uVar10 >> 0x38);
      uVar12 = *puVar13;
      puVar13 = (uint *)((longlong)puVar13 + 1);
      uVar9 = (ulonglong)(byte)uVar12 << (bVar3 & 0x3f) | uVar9;
      *(ulonglong *)(param_1 + 0x70) = uVar9;
      if (bVar3 == 0x18) goto LAB_1400b4b5a;
      *(ulonglong *)(param_1 + 0x70) = (ulonglong)(bVar3 + 8) << 0x38 | uVar9;
    }
LAB_1400b4bbd:
    bVar4 = true;
    pcVar6 = "$base: short read";
  }
  else {
    uVar9 = (ulonglong)*puVar13;
    puVar13 = puVar13 + 1;
LAB_1400b4b5a:
    if ((int)uVar9 != 0x45afc36e) {
      pcVar5 = "#nie: bad header";
      goto LAB_1400b4e14;
    }
switchD_1400b4b34_caseD_3:
    if ((longlong)puVar14 - (longlong)puVar13 < 4) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar7 = 4;
switchD_1400b4b34_caseD_4:
      if (puVar13 == puVar14) goto LAB_1400b4bbd;
      do {
        uVar10 = *(ulonglong *)(param_1 + 0x70);
        uVar9 = uVar10 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0x70) = uVar9;
        bVar3 = (byte)(uVar10 >> 0x38);
        uVar12 = *puVar13;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        uVar9 = (ulonglong)(byte)uVar12 << (bVar3 & 0x3f) | uVar9;
        *(ulonglong *)(param_1 + 0x70) = uVar9;
        if (bVar3 == 0x18) goto LAB_1400b4be1;
        *(ulonglong *)(param_1 + 0x70) = (ulonglong)(bVar3 + 8) << 0x38 | uVar9;
      } while (puVar13 != puVar14);
      bVar4 = true;
      pcVar6 = "$base: short read";
    }
    else {
      uVar9 = (ulonglong)*puVar13;
      puVar13 = puVar13 + 1;
LAB_1400b4be1:
      iVar11 = (int)uVar9;
      if (iVar11 == 0x346e62ff) {
        uVar7 = 0x81008888;
      }
      else {
        if (iVar11 != 0x386e62ff) {
          if (iVar11 == 0x347062ff) {
            pcVar5 = "#nie: unsupported NIE file";
          }
          else {
            pcVar5 = "#nie: unsupported NIE file";
            if (iVar11 != 0x387062ff) {
              pcVar5 = "#nie: bad header";
            }
          }
          goto LAB_1400b4e14;
        }
        uVar7 = 0x8100bbbb;
      }
      *(undefined4 *)(param_1 + 0x28) = uVar7;
switchD_1400b4b34_caseD_5:
      if ((longlong)puVar14 - (longlong)puVar13 < 4) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        uVar7 = 6;
switchD_1400b4b34_caseD_6:
        if (puVar13 == puVar14) goto LAB_1400b4bbd;
        do {
          uVar10 = *(ulonglong *)(param_1 + 0x70);
          uVar9 = uVar10 & 0xffffffffffffff;
          *(ulonglong *)(param_1 + 0x70) = uVar9;
          bVar3 = (byte)(uVar10 >> 0x38);
          uVar12 = *puVar13;
          puVar13 = (uint *)((longlong)puVar13 + 1);
          uVar9 = (ulonglong)(byte)uVar12 << (bVar3 & 0x3f) | uVar9;
          *(ulonglong *)(param_1 + 0x70) = uVar9;
          if (bVar3 == 0x18) goto LAB_1400b4c73;
          *(ulonglong *)(param_1 + 0x70) = (ulonglong)(bVar3 + 8) << 0x38 | uVar9;
        } while (puVar13 != puVar14);
        bVar4 = true;
        pcVar6 = "$base: short read";
      }
      else {
        uVar9 = (ulonglong)*puVar13;
        puVar13 = puVar13 + 1;
LAB_1400b4c73:
        if (0x7fffffff < (uint)uVar9) {
          pcVar5 = "#nie: bad header";
          goto LAB_1400b4e14;
        }
        *(uint *)(param_1 + 0x2c) = (uint)uVar9;
switchD_1400b4b34_caseD_7:
        if (3 < (longlong)puVar14 - (longlong)puVar13) {
          uVar10 = (ulonglong)*puVar13;
          puVar13 = puVar13 + 1;
LAB_1400b4d49:
          uVar12 = (uint)uVar10;
          if (uVar12 < 0x80000000) {
            *(uint *)(param_1 + 0x30) = uVar12;
            if (param_2 != (int *)0x0) {
              iVar11 = *(int *)(param_1 + 0x28);
              iVar1 = *(int *)(param_1 + 0x2c);
              param_2[1] = 0;
              *(undefined1 *)(param_2 + 6) = 0;
              if (iVar11 != 0) {
                *param_2 = iVar11;
                param_2[2] = iVar1;
                param_2[3] = uVar12;
                param_2[4] = 0x10;
                param_2[5] = 0;
                *(undefined1 *)(param_1 + 0x34) = 0x20;
                *(undefined4 *)(param_1 + 0x5c) = 0;
                pcVar5 = pcVar6;
                goto LAB_1400b4e14;
              }
              *param_2 = 0;
              param_2[2] = 0;
              param_2[3] = 0;
              param_2[4] = 0;
              param_2[5] = 0;
            }
            *(undefined1 *)(param_1 + 0x34) = 0x20;
            *(undefined4 *)(param_1 + 0x5c) = 0;
          }
          else {
            pcVar5 = "#nie: bad header";
          }
          goto LAB_1400b4e14;
        }
        *(undefined8 *)(param_1 + 0x70) = 0;
        uVar7 = 8;
switchD_1400b4b34_caseD_8:
        if (puVar13 == puVar14) goto LAB_1400b4bbd;
        do {
          uVar9 = *(ulonglong *)(param_1 + 0x70);
          uVar10 = uVar9 & 0xffffffffffffff;
          *(ulonglong *)(param_1 + 0x70) = uVar10;
          bVar3 = (byte)(uVar9 >> 0x38);
          uVar12 = *puVar13;
          puVar13 = (uint *)((longlong)puVar13 + 1);
          uVar10 = (ulonglong)(byte)uVar12 << (bVar3 & 0x3f) | uVar10;
          *(ulonglong *)(param_1 + 0x70) = uVar10;
          if (bVar3 == 0x18) goto LAB_1400b4d49;
          *(ulonglong *)(param_1 + 0x70) = (ulonglong)(bVar3 + 8) << 0x38 | uVar10;
        } while (puVar13 != puVar14);
        bVar4 = true;
        pcVar6 = "$base: short read";
      }
    }
  }
switchD_1400b4b34_default:
  uVar8 = 0;
  if (bVar4) {
    uVar8 = uVar7;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  pcVar5 = pcVar6;
LAB_1400b4e14:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar13 - *param_3;
  }
  return pcVar5;
}

