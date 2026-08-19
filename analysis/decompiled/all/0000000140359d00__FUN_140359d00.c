// Function: FUN_140359d00
// Addr: 140359d00
// Size: 1004 bytes


void FUN_140359d00(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int local_60;
  
  lVar8 = param_1[5];
  puVar23 = (undefined1 *)param_1[2];
  pbVar20 = (byte *)*param_1;
  pbVar12 = pbVar20 + ((int)param_1[1] - 5);
  uVar4 = *(uint *)(lVar8 + 0x3c);
  puVar9 = *(undefined1 **)(lVar8 + 0x40);
  uVar29 = *(uint *)(lVar8 + 0x48);
  uVar27 = *(uint *)(lVar8 + 0x4c);
  uVar5 = *(undefined4 *)(lVar8 + 0x70);
  puVar19 = puVar23 + ((int)param_1[3] - 0x101);
  lVar22 = *(longlong *)(lVar8 + 0x60);
  lVar10 = *(longlong *)(lVar8 + 0x68);
  local_60 = (int)puVar23 - (param_2 - (int)param_1[3]);
  iVar28 = *(int *)(lVar8 + 0x34);
  uVar6 = *(undefined4 *)(lVar8 + 0x74);
  uVar7 = *(uint *)(lVar8 + 0x38);
code_r0x000140359da3:
  if (uVar27 < 0xf) {
    bVar1 = *pbVar20;
    pbVar21 = pbVar20 + 1;
    pbVar20 = pbVar20 + 2;
    uVar29 = ((uint)*pbVar21 << ((byte)uVar27 + 8 & 0x1f)) +
             ((uint)bVar1 << ((byte)uVar27 & 0x1f)) + uVar29;
    uVar27 = uVar27 + 0x10;
  }
  uVar16 = (ulonglong)((1 << ((byte)uVar5 & 0x1f)) - 1U & uVar29);
  bVar1 = *(byte *)(lVar22 + 1 + uVar16 * 4);
  uVar29 = uVar29 >> (bVar1 & 0x1f);
  uVar27 = uVar27 - bVar1;
  bVar1 = *(byte *)(lVar22 + uVar16 * 4);
  while (lVar11 = lVar22 + uVar16 * 4, bVar1 != 0) {
    if ((bVar1 & 0x10) != 0) {
      uVar26 = (uint)*(ushort *)(lVar11 + 2);
      uVar17 = bVar1 & 0xf;
      pbVar21 = pbVar20;
      if ((bVar1 & 0xf) != 0) {
        if (uVar27 < uVar17) {
          bVar1 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          uVar29 = uVar29 + ((uint)bVar1 << ((byte)uVar27 & 0x1f));
          uVar27 = uVar27 + 8;
        }
        uVar25 = (1 << (sbyte)uVar17) - 1U & uVar29;
        uVar29 = uVar29 >> (sbyte)uVar17;
        uVar26 = uVar25 + uVar26;
        uVar27 = uVar27 - uVar17;
        pbVar21 = pbVar20;
      }
      if (uVar27 < 0xf) {
        bVar1 = *pbVar21;
        pbVar20 = pbVar21 + 1;
        pbVar21 = pbVar21 + 2;
        uVar29 = ((uint)*pbVar20 << ((byte)uVar27 + 8 & 0x1f)) +
                 ((uint)bVar1 << ((byte)uVar27 & 0x1f)) + uVar29;
        uVar27 = uVar27 + 0x10;
      }
      uVar16 = (ulonglong)((1 << ((byte)uVar6 & 0x1f)) - 1U & uVar29);
      bVar1 = *(byte *)(lVar10 + uVar16 * 4);
      bVar2 = *(byte *)(lVar10 + 1 + uVar16 * 4);
      uVar29 = uVar29 >> (bVar2 & 0x1f);
      uVar27 = uVar27 - bVar2;
      goto joined_r0x000140359ec8;
    }
    if ((bVar1 & 0x40) != 0) {
      if ((bVar1 & 0x20) == 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *(undefined4 *)(lVar8 + 8) = 0x3f51;
      }
      else {
        *(undefined4 *)(lVar8 + 8) = 0x3f3f;
      }
      goto code_r0x00014035a154;
    }
    uVar16 = (ulonglong)((1 << (bVar1 & 0x1f)) - 1U & uVar29) + (ulonglong)*(ushort *)(lVar11 + 2);
    bVar1 = *(byte *)(lVar22 + 1 + uVar16 * 4);
    uVar29 = uVar29 >> (bVar1 & 0x1f);
    uVar27 = uVar27 - bVar1;
    bVar1 = *(byte *)(lVar22 + uVar16 * 4);
  }
  *puVar23 = *(undefined1 *)(lVar11 + 2);
  puVar23 = puVar23 + 1;
  goto LAB_14035a0e5;
joined_r0x000140359ec8:
  lVar11 = lVar10 + uVar16 * 4;
  if ((bVar1 & 0x10) != 0) goto LAB_140359f09;
  if ((bVar1 & 0x40) != 0) {
    pcVar15 = "invalid distance code";
    goto code_r0x00014035a12d;
  }
  uVar16 = (ulonglong)((1 << (bVar1 & 0x1f)) - 1U & uVar29) + (ulonglong)*(ushort *)(lVar11 + 2);
  bVar1 = *(byte *)(lVar10 + uVar16 * 4);
  bVar2 = *(byte *)(lVar10 + 1 + uVar16 * 4);
  uVar29 = uVar29 >> (bVar2 & 0x1f);
  uVar27 = uVar27 - bVar2;
  goto joined_r0x000140359ec8;
LAB_140359f09:
  uVar25 = bVar1 & 0xf;
  pbVar20 = pbVar21;
  uVar17 = uVar27;
  if (uVar27 < uVar25) {
    pbVar20 = pbVar21 + 1;
    uVar29 = uVar29 + ((uint)*pbVar21 << ((byte)uVar27 & 0x1f));
    uVar17 = uVar27 + 8;
    if (uVar17 < uVar25) {
      uVar29 = uVar29 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
      pbVar20 = pbVar21 + 2;
      uVar17 = uVar27 + 0x10;
    }
  }
  uVar27 = uVar17 - uVar25;
  uVar17 = (1 << (sbyte)uVar25) - 1U & uVar29;
  uVar29 = uVar29 >> (sbyte)uVar25;
  uVar17 = *(ushort *)(lVar11 + 2) + uVar17;
  uVar25 = (int)puVar23 - local_60;
  if (uVar17 <= uVar25) {
    puVar14 = puVar23 + -(ulonglong)uVar17;
    do {
      puVar24 = puVar23;
      puVar13 = puVar14;
      *puVar24 = *puVar13;
      uVar26 = uVar26 - 3;
      puVar24[1] = puVar13[1];
      puVar24[2] = puVar13[2];
      puVar23 = puVar24 + 3;
      puVar14 = puVar13 + 3;
    } while (2 < uVar26);
    if (uVar26 != 0) {
      *puVar23 = puVar13[3];
      puVar23 = puVar24 + 4;
      if (1 < uVar26) {
        puVar24[4] = puVar13[4];
        puVar23 = puVar24 + 5;
      }
    }
    goto LAB_14035a0e5;
  }
  uVar25 = uVar17 - uVar25;
  if ((uVar7 < uVar25) && (*(int *)(lVar8 + 0x1be0) != 0)) {
    pcVar15 = "invalid distance too far back";
    pbVar21 = pbVar20;
code_r0x00014035a12d:
    param_1[4] = (longlong)pcVar15;
    *(undefined4 *)(lVar8 + 8) = 0x3f51;
    pbVar20 = pbVar21;
code_r0x00014035a154:
    lVar22 = (longlong)pbVar20 - (ulonglong)(uVar27 >> 3);
    param_1[2] = (longlong)puVar23;
    *param_1 = lVar22;
    iVar28 = uVar27 + (uVar27 >> 3) * -8;
    *(int *)(param_1 + 1) = ((int)pbVar12 - (int)lVar22) + 5;
    *(int *)(param_1 + 3) = ((int)puVar19 - (int)puVar23) + 0x101;
    *(uint *)(lVar8 + 0x48) = (1 << ((byte)iVar28 & 0x1f)) - 1U & uVar29;
    *(int *)(lVar8 + 0x4c) = iVar28;
    return;
  }
  puVar14 = puVar23;
  if (uVar4 == 0) {
    puVar13 = puVar9 + (iVar28 - uVar25);
    if (uVar25 < uVar26) {
      uVar26 = uVar26 - uVar25;
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar23 = uVar3;
        puVar23 = puVar23 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
LAB_14035a022:
      puVar13 = puVar23 + -(ulonglong)uVar17;
      puVar14 = puVar23;
    }
  }
  else if (uVar4 < uVar25) {
    uVar18 = uVar25 - uVar4;
    puVar13 = puVar9 + ((uVar4 - uVar25) + iVar28);
    if (uVar18 < uVar26) {
      uVar26 = uVar26 - uVar18;
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar23 = uVar3;
        puVar23 = puVar23 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      puVar13 = puVar9;
      puVar14 = puVar23;
      if (uVar4 < uVar26) {
        uVar26 = uVar26 - uVar4;
        puVar14 = puVar9;
        uVar25 = uVar4;
        do {
          uVar3 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar23 = uVar3;
          puVar23 = puVar23 + 1;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
        goto LAB_14035a022;
      }
    }
  }
  else {
    puVar13 = puVar9 + (uVar4 - uVar25);
    if (uVar25 < uVar26) {
      uVar26 = uVar26 - uVar25;
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar23 = uVar3;
        puVar23 = puVar23 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      goto LAB_14035a022;
    }
  }
  for (; 2 < uVar26; uVar26 = uVar26 - 3) {
    *puVar14 = *puVar13;
    puVar14[1] = puVar13[1];
    puVar14[2] = puVar13[2];
    puVar13 = puVar13 + 3;
    puVar14 = puVar14 + 3;
  }
  puVar23 = puVar14;
  if (uVar26 != 0) {
    *puVar14 = *puVar13;
    puVar23 = puVar14 + 1;
    if (1 < uVar26) {
      puVar14[1] = puVar13[1];
      puVar23 = puVar14 + 2;
    }
  }
LAB_14035a0e5:
  if ((pbVar12 <= pbVar20) || (puVar19 <= puVar23)) goto code_r0x00014035a154;
  goto code_r0x000140359da3;
}

