// Function: FUN_140348b20
// Addr: 140348b20
// Size: 680 bytes


uint FUN_140348b20(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  
  uVar4 = *param_2;
  if (0xfffe < uVar4) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (uVar4 == *(uint *)(param_1 + 5)) {
      FUN_14034d190();
      uVar17 = *(uint *)((longlong)param_1 + 0x2c);
      uVar4 = 0;
      if (uVar17 != 0) {
        *param_2 = *(uint *)(param_1 + 5);
        return uVar17;
      }
    }
    else {
      uVar4 = FUN_14034cc80(param_1,param_2,1);
    }
    return uVar4;
  }
  lVar1 = param_1[3];
  uVar17 = (uint)(*(byte *)(lVar1 + 7) >> 1) | (uint)*(byte *)(lVar1 + 6) << 7;
  if (uVar17 == 0) {
    return 0;
  }
  uVar4 = uVar4 + 1;
  uVar14 = 0;
  if (uVar17 != 0) {
    uVar10 = (ulonglong)(uVar17 * 2);
    uVar9 = 0;
    lVar2 = *param_1;
    pbVar20 = (byte *)((ulonglong)*(uint *)(lVar2 + 0x298) + *(longlong *)(lVar2 + 0x290));
    puVar13 = (undefined1 *)(lVar1 + 0x10 + uVar10);
    puVar16 = (undefined1 *)(lVar1 + 0xe);
    do {
      uVar8 = (uint)CONCAT11(*puVar13,puVar13[1]);
      uVar15 = uVar8;
      if (uVar8 <= uVar4) {
        uVar15 = uVar4;
      }
      uVar18 = (uint)CONCAT11(*puVar16,puVar16[1]);
      uVar6 = uVar14;
      uVar4 = uVar15;
      if (uVar15 <= uVar18) {
        pbVar7 = puVar13 + uVar10;
        pbVar11 = pbVar7 + uVar10;
        uVar19 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
        uVar3 = CONCAT11(*pbVar11,pbVar11[1]);
        uVar15 = (uint)uVar3;
        do {
          uVar12 = uVar19;
          if (((uVar9 < uVar17 - 1) || (uVar8 != 0xffff)) || (uVar18 != 0xffff)) {
LAB_140348cbb:
            uVar6 = uVar14;
            if (uVar15 == 0xffff) break;
            if (uVar3 == 0) goto LAB_140348c8f;
            pbVar7 = pbVar11 + (uVar15 + (uVar4 - uVar8) * 2);
            if (pbVar20 < pbVar7) break;
            uVar14 = 0;
            if (CONCAT11(*pbVar7,pbVar7[1]) != 0) {
              uVar6 = CONCAT11(*pbVar7,pbVar7[1]) + uVar19 & 0xffff;
              uVar14 = 0;
              if (uVar6 < *(uint *)(lVar2 + 0x10)) {
                uVar14 = uVar6;
              }
            }
LAB_140348cfb:
            if (uVar14 != 0) goto LAB_140348d57;
          }
          else {
            if (uVar3 != 0) {
              if (pbVar11 + (ulonglong)uVar15 + 2 <= pbVar20) goto LAB_140348cbb;
              uVar12 = 1;
            }
LAB_140348c8f:
            uVar5 = uVar12 + uVar4;
            uVar14 = uVar5 & 0xffff;
            if ((uVar5 & 0xffff) < *(uint *)(lVar2 + 0x10)) goto LAB_140348cfb;
            uVar14 = 0;
            if ((int)uVar5 < 0) {
              if ((int)(uVar12 + uVar18) < 0) goto LAB_140348d70;
              uVar4 = -uVar12;
              uVar14 = 0;
            }
            else {
              uVar6 = uVar14;
              if (0xffff < (int)uVar5) break;
LAB_140348d70:
              uVar6 = 0;
              if ((int)(uVar12 + uVar18) < 0x10000) break;
              uVar4 = 0x10000 - uVar12;
            }
          }
          if (0xfffe < uVar4) goto LAB_140348d57;
          uVar4 = uVar4 + 1;
          uVar6 = uVar14;
        } while (uVar4 <= uVar18);
      }
      uVar14 = uVar6;
      uVar9 = uVar9 + 1;
      puVar13 = puVar13 + 2;
      puVar16 = puVar16 + 2;
    } while (uVar9 < uVar17);
  }
LAB_140348d57:
  *param_2 = uVar4;
  return uVar14;
}

