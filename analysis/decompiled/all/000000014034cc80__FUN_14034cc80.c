// Function: FUN_14034cc80
// Addr: 14034cc80
// Size: 1282 bytes


uint FUN_14034cc80(longlong *param_1,uint *param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  
  lVar1 = param_1[3];
  uVar21 = (uint)(*(byte *)(lVar1 + 7) >> 1) | (uint)*(byte *)(lVar1 + 6) << 7;
  if (uVar21 == 0) {
    return 0;
  }
  uVar4 = (ulonglong)(uVar21 * 2 + 2);
  uVar14 = (uint)param_3 + *param_2;
  uVar10 = 0;
  lVar17 = lVar1 + 0xe + uVar4;
  uVar20 = uVar21;
  do {
    uVar19 = uVar20 + uVar10 >> 1;
    uVar7 = uVar19 * 2;
    uVar8 = (ulonglong)uVar7;
    uVar18 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar7 + 0xe + lVar1),
                            *(undefined1 *)((ulonglong)uVar7 + 0xf + lVar1));
    uVar16 = (uint)CONCAT11(*(undefined1 *)(uVar8 + lVar17),
                            *(undefined1 *)(uVar8 + 0xf + uVar4 + lVar1));
    uVar7 = uVar19;
    if (uVar16 <= uVar14) {
      if (uVar14 <= uVar18) {
        pbVar5 = (byte *)(*(longlong *)(*param_1 + 0x290) + (ulonglong)*(uint *)(*param_1 + 0x298));
        uVar20 = uVar21 * 2;
        uVar9 = (ulonglong)uVar20;
        lVar15 = (ulonglong)uVar20 + uVar8 + lVar17;
        pbVar11 = (byte *)(lVar15 + uVar9);
        uVar10 = (int)(short)((ushort)*(byte *)((ulonglong)uVar20 + uVar8 + lVar17) << 8) |
                 (uint)*(byte *)(lVar15 + 1);
        uVar20 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
        if ((((uVar21 - 1 <= uVar19) && (uVar16 == 0xffff)) && (uVar18 == 0xffff)) &&
           ((CONCAT11(*pbVar11,pbVar11[1]) != 0 && (pbVar5 < pbVar11 + (ulonglong)uVar20 + 2)))) {
          uVar10 = 1;
          uVar20 = 0;
        }
        if ((*(byte *)(param_1 + 4) & 2) != 0) {
          lVar15 = lVar1;
          uVar22 = uVar19;
          if (uVar20 == 0xffff) {
            uVar22 = uVar19 + 1;
          }
          goto joined_r0x00014034ce44;
        }
        if (uVar20 != 0xffff) goto LAB_14034d07d;
        break;
      }
      uVar10 = uVar19 + 1;
      uVar19 = uVar20;
    }
    uVar20 = uVar19;
  } while (uVar10 < uVar20);
LAB_14034cd57:
  uVar19 = uVar7;
  uVar7 = 0;
  goto LAB_14034cd5f;
joined_r0x00014034ce44:
  uVar2 = uVar22;
  if (uVar7 != 0) {
    uVar22 = uVar7 - 1;
    puVar23 = (undefined1 *)(lVar15 + 0xe + (ulonglong)(uVar22 * 2));
    uVar6 = (uint)CONCAT11(*puVar23,puVar23[1]);
    if (uVar6 < uVar14) goto LAB_14034cedd;
    puVar23 = puVar23 + uVar4;
    lVar15 = param_1[3];
    pbVar13 = puVar23 + uVar9;
    uVar16 = (uint)CONCAT11(*puVar23,puVar23[1]);
    pbVar11 = pbVar13 + uVar9;
    uVar10 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
    uVar20 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
    uVar7 = uVar22;
    uVar18 = uVar6;
    if (uVar20 == 0xffff) {
      uVar22 = uVar2;
    }
    goto joined_r0x00014034ce44;
  }
LAB_14034cedd:
  uVar22 = uVar19 + 1;
  if (uVar2 == uVar22) {
    uVar2 = uVar19;
    if (uVar7 != uVar19) {
      uVar20 = uVar21 * 2;
      puVar23 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar19 * 2));
      puVar12 = puVar23 + (uVar20 + 2);
      uVar18 = (uint)CONCAT11(*puVar23,puVar23[1]);
      pbVar13 = puVar12 + uVar20;
      uVar16 = (uint)CONCAT11(*puVar12,puVar12[1]);
      pbVar11 = pbVar13 + uVar20;
      uVar10 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
      uVar20 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
    }
    for (; uVar22 < uVar21; uVar22 = uVar22 + 1) {
      uVar7 = uVar22 * 2;
      pbVar11 = (byte *)((ulonglong)uVar7 + lVar17);
      lVar15 = lVar1 + (ulonglong)uVar7;
      uVar7 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar7 + lVar17),
                             *(undefined1 *)(lVar15 + 0xf + uVar4));
      if (uVar14 < uVar7) break;
      pbVar13 = pbVar11 + uVar9;
      pbVar11 = pbVar13 + uVar9;
      uVar18 = (uint)CONCAT11(*(undefined1 *)(lVar15 + 0xe),*(undefined1 *)(lVar15 + 0xf));
      uVar10 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
      uVar20 = (uint)CONCAT11(*pbVar11,pbVar13[uVar9 + 1]);
      uVar16 = uVar22;
      if (uVar20 == 0xffff) {
        uVar16 = uVar2;
      }
      uVar2 = uVar16;
      uVar16 = uVar7;
    }
    uVar7 = uVar22 - 1;
    if (uVar2 == uVar19) goto LAB_14034cd57;
  }
  uVar19 = uVar2;
  if (uVar19 != uVar7) {
    puVar12 = (undefined1 *)(param_1[3] + (ulonglong)(uVar19 * 2) + 0xe);
    puVar23 = puVar12 + uVar4;
    pbVar13 = puVar23 + uVar9;
    uVar18 = (uint)CONCAT11(*puVar12,puVar12[1]);
    uVar16 = (uint)CONCAT11(*puVar23,puVar23[1]);
    pbVar11 = pbVar13 + uVar9;
    uVar10 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
    uVar20 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
  }
LAB_14034d07d:
  if (uVar20 == 0) {
    uVar20 = uVar10 + uVar14;
    if (param_3 == 0) {
      return uVar20 & 0xffff;
    }
    uVar7 = uVar20 & 0xffff;
    if (*(uint *)(*param_1 + 0x10) <= (uVar20 & 0xffff)) {
      if ((int)uVar20 < 0) {
        if (-1 < (int)(uVar10 + uVar18)) {
          uVar14 = -uVar10;
          uVar7 = 0;
          goto LAB_14034cd67;
        }
      }
      else {
        uVar7 = 0;
        if (0xffff < (int)uVar20) goto LAB_14034cd67;
      }
      uVar7 = 0;
      if (0xffff < (int)(uVar10 + uVar18)) {
        uVar14 = 0x10000 - uVar10;
        uVar7 = 0;
      }
    }
    goto LAB_14034cd67;
  }
  pbVar11 = pbVar11 + (uVar20 + (uVar14 - uVar16) * 2);
  if ((param_3 != 0) && (uVar7 = 0, pbVar5 < pbVar11)) goto LAB_14034cd67;
  uVar7 = 0;
  if (CONCAT11(*pbVar11,pbVar11[1]) != 0) {
    uVar20 = CONCAT11(*pbVar11,pbVar11[1]) + uVar10 & 0xffff;
    uVar7 = 0;
    if (uVar20 < *(uint *)(*param_1 + 0x10)) {
      uVar7 = uVar20;
    }
  }
LAB_14034cd5f:
  if (param_3 == 0) {
    return uVar7;
  }
LAB_14034cd67:
  if ((uVar18 < uVar14) && (uVar19 = uVar19 + 1, uVar19 == uVar21)) {
    return 0;
  }
  iVar3 = FUN_14034d2b0(param_1,uVar19);
  if (iVar3 != 0) {
    if (uVar7 != 0) {
      *param_2 = uVar14;
      return uVar7;
    }
    return 0;
  }
  *(uint *)(param_1 + 5) = uVar14;
  if (uVar7 == 0) {
    FUN_14034d190(param_1);
    uVar21 = *(uint *)((longlong)param_1 + 0x2c);
    if (uVar21 != 0) {
      *param_2 = *(uint *)(param_1 + 5);
      return uVar21;
    }
    return 0;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  *param_2 = uVar14;
  return uVar7;
}

