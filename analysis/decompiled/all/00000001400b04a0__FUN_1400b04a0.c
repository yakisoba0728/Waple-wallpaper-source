// Function: FUN_1400b04a0
// Addr: 1400b04a0
// Size: 840 bytes


char * FUN_1400b04a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  
  pcVar5 = (char *)0x0;
  puVar11 = (ushort *)pcVar5;
  puVar13 = (ushort *)pcVar5;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *param_2, puVar11 = (ushort *)0x0, puVar13 = (ushort *)0x0, lVar1 != 0)) {
    puVar11 = (ushort *)(param_2[3] + lVar1);
    puVar13 = (ushort *)(param_2[2] + lVar1);
  }
  iVar10 = *(int *)(param_1 + 0x108);
  iVar6 = 0;
  iVar7 = iVar6;
  switch(iVar10) {
  case 0:
  case 1:
    break;
  case 2:
switchD_1400b050c_caseD_2:
    while (puVar11 != puVar13) {
      uVar9 = *(ulonglong *)(param_1 + 0xfdd8);
      uVar8 = uVar9 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
      bVar3 = (byte)(uVar9 >> 0x38);
      uVar4 = *puVar11;
      puVar11 = (ushort *)((longlong)puVar11 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (bVar3 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
      if (bVar3 == 8) goto LAB_1400b0526;
      *(ulonglong *)(param_1 + 0xfdd8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar8;
    }
    goto LAB_1400b064d;
  case 3:
    goto switchD_1400b050c_caseD_3;
  case 4:
    goto switchD_1400b050c_caseD_4;
  case 5:
    goto switchD_1400b050c_caseD_5;
  case 6:
    goto switchD_1400b050c_caseD_6;
  case 7:
    goto switchD_1400b050c_caseD_7;
  case 8:
    goto switchD_1400b050c_caseD_8;
  default:
    goto switchD_1400b050c_default;
  }
  if ((longlong)puVar13 - (longlong)puVar11 < 2) {
    *(undefined8 *)(param_1 + 0xfdd8) = 0;
    iVar10 = 2;
    goto switchD_1400b050c_caseD_2;
  }
  uVar8 = (ulonglong)*puVar11;
  puVar11 = puVar11 + 1;
LAB_1400b0526:
  *(int *)(param_1 + 0x80) = (int)uVar8;
switchD_1400b050c_caseD_3:
  if ((longlong)puVar13 - (longlong)puVar11 < 2) {
    *(undefined8 *)(param_1 + 0xfdd8) = 0;
    iVar10 = 4;
switchD_1400b050c_caseD_4:
    if (puVar11 == puVar13) {
LAB_1400b064d:
      pcVar5 = "$base: short read";
      iVar7 = 1;
    }
    else {
      do {
        uVar9 = *(ulonglong *)(param_1 + 0xfdd8);
        uVar8 = uVar9 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
        bVar3 = (byte)(uVar9 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (ushort *)((longlong)puVar11 + 1);
        uVar8 = (ulonglong)(byte)uVar4 << (bVar3 & 0x3f) | uVar8;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
        if (bVar3 == 8) goto LAB_1400b0545;
        *(ulonglong *)(param_1 + 0xfdd8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar8;
      } while (puVar11 != puVar13);
      pcVar5 = "$base: short read";
      iVar7 = 1;
    }
  }
  else {
    uVar8 = (ulonglong)*puVar11;
    puVar11 = puVar11 + 1;
LAB_1400b0545:
    *(int *)(param_1 + 0x84) = (int)uVar8;
switchD_1400b050c_caseD_5:
    if ((longlong)puVar13 - (longlong)puVar11 < 2) {
      *(undefined8 *)(param_1 + 0xfdd8) = 0;
      iVar10 = 6;
switchD_1400b050c_caseD_6:
      if (puVar11 == puVar13) goto LAB_1400b064d;
      do {
        uVar9 = *(ulonglong *)(param_1 + 0xfdd8);
        uVar8 = uVar9 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
        bVar3 = (byte)(uVar9 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (ushort *)((longlong)puVar11 + 1);
        uVar8 = (ulonglong)(byte)uVar4 << (bVar3 & 0x3f) | uVar8;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar8;
        if (bVar3 == 8) goto LAB_1400b0564;
        *(ulonglong *)(param_1 + 0xfdd8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar8;
      } while (puVar11 != puVar13);
      pcVar5 = "$base: short read";
      iVar7 = 1;
    }
    else {
      uVar8 = (ulonglong)*puVar11;
      puVar11 = puVar11 + 1;
LAB_1400b0564:
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x80) + (int)uVar8;
switchD_1400b050c_caseD_7:
      if (1 < (longlong)puVar13 - (longlong)puVar11) {
        uVar9 = (ulonglong)*puVar11;
        puVar11 = puVar11 + 1;
LAB_1400b058d:
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x80);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x84);
        uVar12 = *(int *)(param_1 + 0x84) + (int)uVar9;
        *(uint *)(param_1 + 0x8c) = uVar12;
        if ((*(longlong *)(param_1 + 0x70) == 0) && (*(char *)(param_1 + 0x44) == '\0')) {
          uVar2 = *(uint *)(param_1 + 0x88);
          if (*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x28)) {
            uVar2 = *(uint *)(param_1 + 0x28);
          }
          *(uint *)(param_1 + 0x28) = uVar2;
          if (uVar12 < *(uint *)(param_1 + 0x2c)) {
            uVar12 = *(uint *)(param_1 + 0x2c);
          }
          *(uint *)(param_1 + 0x2c) = uVar12;
        }
        goto LAB_1400b07b7;
      }
      *(undefined8 *)(param_1 + 0xfdd8) = 0;
      iVar10 = 8;
switchD_1400b050c_caseD_8:
      if (puVar11 == puVar13) goto LAB_1400b064d;
      do {
        uVar8 = *(ulonglong *)(param_1 + 0xfdd8);
        uVar9 = uVar8 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar9;
        bVar3 = (byte)(uVar8 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (ushort *)((longlong)puVar11 + 1);
        uVar9 = (ulonglong)(byte)uVar4 << (bVar3 & 0x3f) | uVar9;
        *(ulonglong *)(param_1 + 0xfdd8) = uVar9;
        if (bVar3 == 8) goto LAB_1400b058d;
        *(ulonglong *)(param_1 + 0xfdd8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar9;
      } while (puVar11 != puVar13);
      pcVar5 = "$base: short read";
      iVar7 = 1;
    }
  }
switchD_1400b050c_default:
  if (iVar7 != 0) {
    iVar6 = iVar10;
  }
LAB_1400b07b7:
  *(int *)(param_1 + 0x108) = iVar6;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar11 - *param_2;
  }
  return pcVar5;
}

