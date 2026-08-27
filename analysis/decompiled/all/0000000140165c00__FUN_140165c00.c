// Function: FUN_140165c00
// Addr: 140165c00
// Size: 1431 bytes


undefined8 FUN_140165c00(uint param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  byte bVar21;
  bool bVar22;
  char local_res8;
  
  if (param_2 == 0) {
    iVar15 = -0x97;
    uVar11 = 0x698b60d;
    uVar19 = 0xff4a2da9;
  }
  else {
    iVar15 = param_2 - 0x98;
    uVar19 = (ulonglong)(param_2 * 0x13441 - 0xb70698);
    uVar11 = param_2 * -0xb2efb + 0x6a3e508;
  }
  iVar20 = 1;
  uVar14 = param_1;
  if (param_2 != 0) {
    uVar14 = param_1 | 0x800000;
  }
  bVar21 = ~(byte)uVar14 & 1;
  uVar14 = uVar14 * 4;
  uVar16 = (ulonglong)uVar14;
  if ((param_1 == 0) && (1 < param_2)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  uVar9 = (ulonglong)(uVar14 | 2);
  uVar4 = (uVar14 - iVar7) - 1;
  local_res8 = '\0';
  uVar8 = (ulonglong)uVar4;
  if (iVar15 < 0) {
    uVar17 = uVar11 >> 0x14;
    uVar5 = uVar17 + iVar15;
    uVar19 = *(ulonglong *)(&UNK_14048bbb0 + (ulonglong)-uVar5 * 8);
    uVar13 = uVar19 >> 0x20;
    cVar2 = (char)uVar17;
    bVar10 = (cVar2 - (char)(uVar5 * -0x12934f >> 0x13)) + 0x1c;
    uVar9 = (uVar9 * (uVar19 & 0xffffffff) >> 0x20) + uVar9 * uVar13 >> (bVar10 & 0x3f);
    uVar16 = ((uVar19 & 0xffffffff) * uVar16 >> 0x20) + uVar16 * uVar13 >> (bVar10 & 0x3f);
    uVar4 = (int)uVar9 - 1;
    uVar8 = (uVar8 * (uVar19 & 0xffffffff) >> 0x20) + uVar8 * uVar13 >> (bVar10 & 0x3f);
    if (uVar11 < 0x100000) {
      bVar10 = 0;
    }
    else {
      bVar10 = 0;
      if (uVar4 / 10 <= (uint)((uVar8 & 0xffffffff) / 10)) {
        uVar19 = ((*(ulonglong *)(&UNK_14048bbb0 + (ulonglong)(1 - uVar5) * 8) & 0xffffffff) *
                  (ulonglong)uVar14 >> 0x20) +
                 (*(ulonglong *)(&UNK_14048bbb0 + (ulonglong)(1 - uVar5) * 8) >> 0x20) *
                 (ulonglong)uVar14 >>
                 ((cVar2 - (char)(uVar5 * -0x12934f + 0x12934f >> 0x13)) + 0x1bU & 0x3f);
        bVar10 = (char)uVar19 + (char)((uVar19 & 0xffffffff) / 10) * -10;
      }
    }
    if (uVar17 < 2) {
      local_res8 = (char)iVar7;
      if (bVar21 == 0) {
        local_res8 = '\0';
      }
      uVar9 = uVar9 & 0xffffffff;
      bVar3 = 1;
      if (bVar21 == 0) {
        uVar9 = (ulonglong)uVar4;
        bVar3 = 1;
      }
      goto LAB_140165f7c;
    }
    if (uVar17 < 0x1f) {
      bVar3 = (uVar14 & (1 << (cVar2 - 1U & 0x1f)) - 1U) == 0;
      goto LAB_140165f9f;
    }
LAB_1401660ec:
    iVar15 = (int)uVar16;
    iVar7 = (int)uVar8;
    iVar18 = 0;
    if ((uint)((uVar8 & 0xffffffff) / 10) < (uint)((uVar9 & 0xffffffff) / 10)) {
      do {
        iVar18 = iVar18 + 1;
        uVar19 = (uVar16 & 0xffffffff) / 10;
        iVar15 = (int)uVar19;
        bVar10 = (char)uVar16 + (char)uVar19 * -10;
        uVar9 = (uVar9 & 0xffffffff) / 10;
        uVar8 = (uVar8 & 0xffffffff) / 10;
        iVar7 = (int)uVar8;
        uVar16 = uVar19;
      } while ((uint)(uVar8 / 10) < (uint)(uVar9 / 10));
    }
    bVar22 = iVar15 == iVar7;
LAB_140166168:
    if (bVar22) goto LAB_140166173;
  }
  else {
    uVar1 = uVar19 >> 0x12;
    bVar3 = 0;
    bVar10 = 0;
    uVar13 = *(ulonglong *)(&UNK_14048bab0 + uVar1 * 8);
    uVar5 = (uint)uVar1;
    uVar12 = uVar13 >> 0x20;
    bVar6 = ((char)(uVar5 * 0x12934f >> 0x13) - (char)iVar15) + '\x1b' + (char)uVar1;
    uVar16 = ((uVar13 & 0xffffffff) * uVar16 >> 0x20) + uVar16 * uVar12 >> (bVar6 & 0x3f);
    uVar9 = (uVar9 * (uVar13 & 0xffffffff) >> 0x20) + uVar9 * uVar12 >> (bVar6 & 0x3f);
    uVar8 = (uVar8 * (uVar13 & 0xffffffff) >> 0x20) + uVar8 * uVar12 >> (bVar6 & 0x3f);
    if ((0x3ffff < (uint)uVar19) && (((int)uVar9 - 1U) / 10 <= (uint)((uVar8 & 0xffffffff) / 10))) {
      uVar19 = ((*(ulonglong *)(&UNK_14048bab0 + (ulonglong)(uVar5 - 1) * 8) & 0xffffffff) *
                (ulonglong)uVar14 >> 0x20) +
               (*(ulonglong *)(&UNK_14048bab0 + (ulonglong)(uVar5 - 1) * 8) >> 0x20) *
               (ulonglong)uVar14 >>
               (((char)(uVar5 * 0x12934f - 0x12934f >> 0x13) - (char)iVar15) + '\x1a' + (char)uVar1
               & 0x3fU);
      bVar10 = (char)uVar19 + (char)((uVar19 & 0xffffffff) / 10) * -10;
    }
    if (uVar5 < 10) {
      if (uVar14 % 5 == 0) {
        bVar3 = FUN_140165bc0(uVar14,uVar1);
      }
      else if (bVar21 == 0) {
        bVar6 = FUN_140165bc0(uVar14 | 2,uVar1);
        uVar9 = (ulonglong)((int)uVar9 - (uint)bVar6);
      }
      else {
        local_res8 = FUN_140165bc0(uVar4,uVar1);
      }
    }
LAB_140165f7c:
    if (local_res8 == '\0') {
LAB_140165f9f:
      if (bVar3 == 0) goto LAB_1401660ec;
    }
    iVar18 = 0;
    uVar19 = uVar8;
    uVar13 = uVar16;
    bVar6 = bVar3;
    if ((uint)((uVar8 & 0xffffffff) / 10) < (uint)((uVar9 & 0xffffffff) / 10)) {
      do {
        uVar8 = (uVar19 & 0xffffffff) / 10;
        cVar2 = '\0';
        if ((int)uVar19 == (int)uVar8 * 10) {
          cVar2 = local_res8;
        }
        local_res8 = cVar2;
        bVar3 = 0;
        if (bVar10 == 0) {
          bVar3 = bVar6;
        }
        iVar18 = iVar18 + 1;
        uVar16 = (uVar13 & 0xffffffff) / 10;
        bVar10 = (char)uVar13 + (char)uVar16 * -10;
        uVar9 = (uVar9 & 0xffffffff) / 10;
        uVar19 = uVar8;
        uVar13 = uVar16;
        bVar6 = bVar3;
      } while ((uint)(uVar8 / 10) < (uint)(uVar9 / 10));
    }
    iVar7 = (int)uVar8;
    if ((local_res8 != '\0') && (uVar19 = uVar16, iVar7 == (int)((uVar8 & 0xffffffff) / 10) * 10)) {
      do {
        iVar18 = iVar18 + 1;
        bVar3 = bVar3 & bVar10 == 0;
        uVar16 = (uVar19 & 0xffffffff) / 10;
        bVar10 = (char)uVar19 + (char)uVar16 * -10;
        uVar8 = (uVar8 & 0xffffffff) / 10;
        iVar7 = (int)uVar8;
        uVar19 = uVar16;
      } while (iVar7 == (int)(uVar8 / 10) * 10);
    }
    iVar15 = (int)uVar16;
    if (((bVar3 != 0) && (bVar10 == 5)) && ((uVar16 & 1) == 0)) {
      bVar10 = 4;
    }
    if (iVar15 == iVar7) {
      if (bVar21 == 0) goto LAB_140166173;
      bVar22 = local_res8 == '\0';
      goto LAB_140166168;
    }
  }
  if (bVar10 < 5) {
    iVar20 = 0;
  }
LAB_140166173:
  return CONCAT44(iVar18 + uVar5,iVar15 + iVar20);
}

