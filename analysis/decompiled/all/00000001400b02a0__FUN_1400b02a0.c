// Function: FUN_1400b02a0
// Addr: 1400b02a0
// Size: 477 bytes


char * FUN_1400b02a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  ushort uVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ushort *puVar10;
  undefined1 uVar11;
  ushort *puVar12;
  
  pcVar5 = (char *)0x0;
  puVar10 = (ushort *)0x0;
  puVar12 = (ushort *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
    puVar10 = (ushort *)(param_2[3] + lVar1);
    puVar12 = (ushort *)(param_2[2] + lVar1);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x104);
  bVar3 = true;
  switch(uVar9) {
  case 0:
    break;
  case 1:
    goto switchD_1400b030b_caseD_1;
  case 2:
    goto switchD_1400b030b_caseD_2;
  case 3:
    goto switchD_1400b030b_caseD_3;
  case 4:
    goto switchD_1400b030b_caseD_4;
  case 5:
    goto switchD_1400b030b_caseD_5;
  case 6:
    goto switchD_1400b030b_caseD_6;
  default:
    bVar3 = false;
    goto LAB_1400b0445;
  }
  uVar9 = 1;
switchD_1400b030b_caseD_1:
  if (puVar10 == puVar12) goto LAB_1400b03a9;
  uVar4 = *puVar10;
  puVar10 = (ushort *)((longlong)puVar10 + 1);
  if ((byte)uVar4 != 4) {
    pcVar5 = "#gif: bad graphic control";
    goto LAB_1400b0453;
  }
  uVar9 = 2;
switchD_1400b030b_caseD_2:
  if (puVar10 == puVar12) {
LAB_1400b03a9:
    pcVar5 = "$base: short read";
  }
  else {
    uVar4 = *puVar10;
    puVar10 = (ushort *)((longlong)puVar10 + 1);
    bVar7 = (byte)uVar4 & 0x1c;
    *(byte *)(param_1 + 0x5c) = (byte)uVar4 & 1;
    if (bVar7 == 8) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    else {
      uVar11 = 2;
      if ((bVar7 - 0xc & 0xfb) != 0) {
        uVar11 = 0;
      }
      *(undefined1 *)(param_1 + 0x5e) = uVar11;
    }
switchD_1400b030b_caseD_3:
    if (1 < (longlong)puVar12 - (longlong)puVar10) {
      uVar8 = (ulonglong)*puVar10;
      puVar10 = puVar10 + 1;
LAB_1400b037b:
      uVar9 = 5;
      *(ulonglong *)(param_1 + 0x60) = (uVar8 & 0xffff) * 0x6baa80;
switchD_1400b030b_caseD_5:
      if (puVar10 != puVar12) {
        uVar9 = 6;
        *(byte *)(param_1 + 0x5d) = (byte)*puVar10;
        puVar10 = (ushort *)((longlong)puVar10 + 1);
switchD_1400b030b_caseD_6:
        if (puVar10 != puVar12) {
          uVar4 = *puVar10;
          puVar10 = (ushort *)((longlong)puVar10 + 1);
          if ((byte)uVar4 == 0) {
            *(undefined4 *)(param_1 + 0x104) = 0;
          }
          else {
            pcVar5 = "#gif: bad graphic control";
          }
          goto LAB_1400b0453;
        }
      }
      goto LAB_1400b03a9;
    }
    *(undefined8 *)(param_1 + 0xfdd0) = 0;
    uVar9 = 4;
switchD_1400b030b_caseD_4:
    if (puVar10 == puVar12) goto LAB_1400b03a9;
    do {
      uVar2 = *(ulonglong *)(param_1 + 0xfdd0);
      uVar8 = uVar2 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xfdd0) = uVar8;
      bVar7 = (byte)(uVar2 >> 0x38);
      uVar4 = *puVar10;
      puVar10 = (ushort *)((longlong)puVar10 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (bVar7 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xfdd0) = uVar8;
      if (bVar7 == 8) goto LAB_1400b037b;
      *(ulonglong *)(param_1 + 0xfdd0) = (ulonglong)(bVar7 + 8) << 0x38 | uVar8;
    } while (puVar10 != puVar12);
    pcVar5 = "$base: short read";
  }
LAB_1400b0445:
  uVar6 = 0;
  if (bVar3) {
    uVar6 = uVar9;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar6;
LAB_1400b0453:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar10 - *param_2;
  }
  return pcVar5;
}

