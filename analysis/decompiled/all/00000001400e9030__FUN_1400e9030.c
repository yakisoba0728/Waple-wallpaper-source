// Function: FUN_1400e9030
// Addr: 1400e9030
// Size: 2493 bytes


void FUN_1400e9030(longlong *param_1,ulonglong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  char cVar24;
  ulonglong uVar25;
  uint *puVar26;
  byte *pbVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  char cVar33;
  uint local_res18;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  uint *local_58;
  uint *local_50;
  
  puVar16 = auStack_78;
  puVar14 = auStack_78;
  puVar15 = auStack_78;
  uVar6 = param_1[3];
  uVar19 = (uint)uVar6;
  if (uVar6 < param_2) {
    lVar5 = *param_1;
    uVar18 = param_2 - uVar6;
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      lVar20 = lVar5 + (~uVar6 >> 5) * -4 + -4;
    }
    else {
      lVar20 = lVar5 + (uVar6 >> 5) * 4;
    }
    uVar21 = lVar20 - lVar5 >> 2;
    uVar22 = uVar21 << 5 | (ulonglong)(uVar19 & 0x1f);
    if (uVar18 == 0) {
LAB_1400e9224:
      if (((longlong)uVar22 < 0) && (uVar22 != 0)) {
        puVar12 = (uint *)(*param_1 + (~uVar22 >> 5) * -4 + -4);
      }
      else {
        puVar12 = (uint *)(*param_1 + (uVar21 & 0x7ffffffffffffff) * 4);
      }
      if (uVar18 == 0) {
        return;
      }
      uVar19 = (uint)uVar22 & 0x1f;
      uVar21 = (ulonglong)uVar19;
      if (((longlong)uVar18 < 0) && (uVar21 < uVar6 - param_2)) {
        uVar6 = 0xffffffffffffffff - (~(uVar21 + uVar18) >> 5);
      }
      else {
        uVar6 = uVar21 + uVar18 >> 5;
      }
      puVar28 = puVar12 + uVar6;
      uVar17 = (int)uVar18 + uVar19 & 0x1f;
      if ((puVar12 == puVar28) && (uVar21 == uVar17)) {
        return;
      }
      uVar19 = -1 << (sbyte)uVar19;
      if (puVar12 == puVar28) {
        *puVar12 = ~(0xffffffffU >> (0x20U - (char)uVar17 & 0x1f) & uVar19) & *puVar12;
        return;
      }
      *puVar12 = *puVar12 & ~uVar19;
      *(undefined8 *)(puVar16 + -8) = 0x1400e940f;
      FUN_1404217a0(puVar12 + 1,0,(longlong)puVar28 - (longlong)(puVar12 + 1));
      if ((ulonglong)uVar17 == 0) {
        return;
      }
      *puVar28 = *puVar28 & ~(0xffffffffU >> (0x20U - (char)uVar17 & 0x1f));
      return;
    }
    if (uVar18 <= 0x7fffffffffffffff - uVar6) {
      lVar20 = param_1[1];
      uVar13 = param_2 + 0x1f >> 5;
      uVar25 = lVar20 - lVar5;
      uVar4 = (longlong)uVar25 >> 2;
      if (uVar13 < uVar4) {
        param_1[1] = lVar5 + uVar13 * 4;
        puVar16 = auStack_78;
      }
      else {
        puVar16 = auStack_78;
        if (uVar4 < uVar13) {
          uVar11 = param_1[2] - lVar5 >> 2;
          if (uVar11 < uVar13) {
            if ((0x3fffffffffffffff - (uVar11 >> 1) < uVar11) ||
               ((uVar11 = (uVar11 >> 1) + uVar11, uVar4 = uVar13, uVar13 <= uVar11 &&
                (uVar4 = uVar11, 0x3fffffffffffffff < uVar11)))) {
LAB_1400e99e8:
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            uVar11 = uVar4 * 4;
            if (uVar11 == 0) {
              uVar11 = 0;
              puVar15 = auStack_78;
            }
            else {
              if (uVar11 < 0x1000) {
                uVar11 = FUN_14028af20();
              }
              else {
                if (uVar11 + 0x27 <= uVar11) goto LAB_1400e99e8;
                lVar5 = FUN_14028af20(uVar11 + 0x27);
                if (lVar5 == 0) {
                  pcVar2 = (code *)swi(0x29);
                  lVar5 = (*pcVar2)(5);
                  puVar14 = auStack_70;
                }
                uVar11 = lVar5 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar11 - 8) = lVar5;
                puVar15 = puVar14;
              }
              uVar25 = *(ulonglong *)(puVar15 + 0x80);
            }
            *(undefined8 *)(puVar15 + -8) = 0x1400e91ce;
            FUN_1404217a0((uVar25 & 0xfffffffffffffffc) + uVar11,0,
                          (uVar13 - *(longlong *)(puVar15 + 0x88)) * 4);
            lVar5 = *param_1;
            lVar20 = param_1[1];
            *(undefined8 *)(puVar15 + -8) = 0x1400e91e0;
            FUN_1404210f0(uVar11,lVar5,lVar20 - lVar5);
            *(undefined8 *)(puVar15 + -8) = 0x1400e91f1;
            FUN_140038af0(param_1,uVar11,uVar13,uVar4);
            puVar16 = puVar15;
          }
          else {
            lVar5 = (uVar13 - uVar4) * 4;
            FUN_1404217a0(lVar20,0,lVar5);
            param_1[1] = lVar5 + lVar20;
            puVar16 = auStack_78;
          }
        }
      }
      uVar25 = param_1[3];
      if (uVar25 == 0) {
        param_1[3] = uVar18;
      }
      else {
        lVar5 = *param_1;
        if (((longlong)uVar25 < 0) && (uVar25 != 0)) {
          puVar12 = (uint *)(lVar5 + (~uVar25 >> 5) * -4 + -4);
        }
        else {
          puVar12 = (uint *)(lVar5 + (uVar25 >> 5) * 4);
        }
        uVar4 = (ulonglong)((uint)uVar25 & 0x1f);
        uVar25 = uVar25 + uVar18;
        param_1[3] = uVar25;
        if (((longlong)uVar25 < 0) && (uVar25 != 0)) {
          puVar28 = (uint *)(lVar5 + (~uVar25 >> 5) * -4 + -4);
        }
        else {
          puVar28 = (uint *)(lVar5 + (uVar25 >> 5) * 4);
        }
        uVar25 = (ulonglong)((uint)uVar25 & 0x1f);
        if (((longlong)uVar22 < 0) && (uVar22 != 0)) {
          puVar31 = (uint *)(lVar5 + (~uVar22 >> 5) * -4 + -4);
        }
        else {
          puVar31 = (uint *)(lVar5 + (uVar21 & 0x7ffffffffffffff) * 4);
        }
        while ((puVar31 != puVar12 || (((uint)uVar22 & 0x1f) != uVar4))) {
          puVar26 = puVar12 + -1;
          if (uVar4 == 0) {
            uVar4 = 0x1f;
          }
          else {
            uVar4 = uVar4 - 1;
            puVar26 = puVar12;
          }
          puVar29 = puVar28 + -1;
          if (uVar25 == 0) {
            uVar25 = 0x1f;
          }
          else {
            uVar25 = uVar25 - 1;
            puVar29 = puVar28;
          }
          puVar12 = puVar26;
          puVar28 = puVar29;
          if ((*puVar26 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
            *puVar29 = *puVar29 & ~(1 << ((uint)uVar25 & 0x1f));
          }
          else {
            *puVar29 = *puVar29 | 1 << ((uint)uVar25 & 0x1f);
          }
        }
      }
      goto LAB_1400e9224;
    }
    goto LAB_1400e99e2;
  }
  if (uVar6 <= param_2) {
    return;
  }
  puVar12 = (uint *)*param_1;
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    uVar18 = 0xffffffffffffffff - (~uVar6 >> 5);
  }
  else {
    uVar18 = uVar6 >> 5;
  }
  uVar21 = (ulonglong)(uVar19 & 0x1f);
  if (((longlong)param_2 < 0) && (param_2 != 0)) {
    uVar22 = 0xffffffffffffffff - (~param_2 >> 5);
  }
  else {
    uVar22 = param_2 >> 5;
  }
  uVar13 = 0;
  puVar28 = puVar12;
  uVar25 = uVar13;
  uVar4 = uVar13;
  puVar31 = puVar12;
  if (uVar6 == 0) {
LAB_1400e9547:
    if (uVar25 == uVar4) {
      return;
    }
  }
  else {
    uVar22 = (longlong)(puVar12 + uVar22) - (longlong)puVar12 >> 2;
    uVar25 = uVar22 << 5 | (ulonglong)((uint)param_2 & 0x1f);
    if (((longlong)uVar25 < 0) && (uVar25 != 0)) {
      uVar22 = 0xffffffffffffffff - (~uVar25 >> 5);
    }
    else {
      uVar22 = uVar22 & 0x7ffffffffffffff;
    }
    puVar31 = puVar12 + uVar22;
    uVar25 = (ulonglong)((uint)uVar25 & 0x1f);
    uVar18 = (longlong)(puVar12 + uVar18) - (longlong)puVar12 >> 2;
    uVar22 = uVar18 << 5 | uVar21;
    if (((longlong)uVar22 < 0) && (uVar22 != 0)) {
      uVar18 = 0xffffffffffffffff - (~uVar22 >> 5);
    }
    else {
      uVar18 = uVar18 & 0x7ffffffffffffff;
    }
    puVar28 = puVar12 + uVar18;
    uVar4 = (ulonglong)((uint)uVar22 & 0x1f);
    if (puVar31 == puVar28) goto LAB_1400e9547;
  }
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    uVar6 = 0xffffffffffffffff - (~uVar6 >> 5);
  }
  else {
    uVar6 = uVar6 >> 5;
  }
  puVar12 = puVar12 + uVar6;
  if ((puVar28 != puVar12) || (uVar4 != uVar21)) {
    lVar5 = (((longlong)puVar12 - (longlong)puVar28 >> 2) * 0x20 - uVar4) + uVar21;
    if ((lVar5 < 0) && (uVar25 < (ulonglong)-lVar5)) {
      uVar6 = 0xffffffffffffffff - (~(uVar25 + lVar5) >> 5);
    }
    else {
      uVar6 = uVar25 + lVar5 >> 5;
    }
    local_58 = puVar31 + uVar6;
    uVar32 = (uint)uVar25 + (int)lVar5 & 0x1f;
    uVar6 = (ulonglong)uVar32;
    sVar7 = (sbyte)uVar4;
    uVar17 = -1 << sVar7;
    cVar24 = (char)uVar25;
    if (uVar25 == 0) {
      local_res18 = 0;
    }
    else {
      local_res18 = 0xffffffff >> (-cVar24 & 0x1fU);
    }
    cVar33 = (char)(uVar19 & 0x1f);
    if (uVar21 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff >> (-cVar33 & 0x1fU);
    }
    sVar8 = (sbyte)uVar32;
    uVar32 = -1 << sVar8;
    if (uVar6 == 0) {
      uVar13 = 0xfffffffffffffffc;
    }
    local_50 = (uint *)(uVar13 + (longlong)local_58);
    if (puVar28 == puVar12) {
      uVar19 = *puVar28 & uVar3 & uVar17;
      if (uVar25 < uVar4) {
        uVar19 = uVar19 >> (sVar7 - cVar24 & 0x1fU);
      }
      else {
        uVar19 = uVar19 << (cVar24 - sVar7 & 0x1fU);
      }
      if (puVar31 == local_50) {
        if (uVar6 == 0) {
          uVar32 = 0;
        }
        *puVar31 = (uVar32 | local_res18) & *puVar31 | uVar19;
        uVar25 = uVar6;
        puVar31 = local_58;
      }
      else {
        *puVar31 = *puVar31 & local_res18 | uVar19;
        puVar31[1] = (*puVar28 & uVar3 & uVar17) >> (cVar33 - sVar8 & 0x1fU) | puVar31[1] & uVar32;
        uVar25 = uVar6;
        puVar31 = local_58;
      }
    }
    else if (puVar31 == local_50) {
      if (uVar25 < uVar4) {
        uVar19 = (*puVar28 & uVar17) >> (sVar7 - cVar24 & 0x1fU);
      }
      else {
        uVar19 = (*puVar28 & uVar17) << (cVar24 - sVar7 & 0x1fU);
      }
      if (uVar6 == 0) {
        uVar32 = 0;
      }
      if (uVar21 == 0) {
        *puVar31 = *puVar31 & (uVar32 | local_res18) | uVar19;
        uVar25 = uVar6;
        puVar31 = local_58;
      }
      else {
        bVar9 = sVar8 - cVar33;
        if (uVar6 == 0) {
          bVar9 = 0x20 - cVar33;
        }
        *puVar31 = (*puVar12 & uVar3) << (bVar9 & 0x1f) | *puVar31 & (uVar32 | local_res18) | uVar19
        ;
        uVar25 = uVar6;
        puVar31 = local_58;
      }
    }
    else {
      uVar30 = (uint)uVar4 & 7;
      if (uVar30 == ((uint)uVar25 & 7)) {
        uVar19 = uVar19 & 7;
        pbVar27 = (byte *)((uVar4 >> 3) + (longlong)puVar28);
        pbVar1 = (byte *)((uVar21 - uVar19 >> 3) + (longlong)puVar12);
        pbVar23 = (byte *)((uVar25 >> 3) + (longlong)puVar31);
        if ((uVar4 & 7) != 0) {
          sVar7 = (sbyte)uVar30;
          bVar9 = *pbVar27;
          pbVar27 = pbVar27 + 1;
          *pbVar23 = (byte)(0xff >> (8U - sVar7 & 0x1f)) & *pbVar23 | -1 << sVar7 & bVar9;
          pbVar23 = pbVar23 + 1;
        }
        lVar5 = (longlong)pbVar1 - (longlong)pbVar27;
        FUN_1404210f0(pbVar23,pbVar27,lVar5);
        uVar25 = uVar6;
        puVar31 = local_58;
        if ((ulonglong)uVar19 != 0) {
          pbVar23[lVar5] =
               (byte)(0xff >> (8U - (sbyte)uVar19 & 0x1f)) & *pbVar1 |
               -1 << (sbyte)uVar19 & pbVar23[lVar5];
        }
      }
      else {
        puVar26 = puVar28 + 1;
        if (uVar25 < uVar4) {
          uVar4 = uVar4 - uVar25;
          bVar9 = (byte)uVar4;
          uVar19 = 0xffffffff >> (bVar9 & 0x1f);
          *puVar31 = (uVar17 & *puVar28) >> (bVar9 & 0x1f) | local_res18 & *puVar31;
          puVar28 = puVar31;
          for (; puVar26 != puVar12; puVar26 = puVar26 + 1) {
            *puVar28 = *puVar28 & uVar19 | *puVar26 << (0x20 - bVar9 & 0x1f);
            puVar28 = puVar28 + 1;
            *puVar28 = *puVar28 & ~uVar19 | *puVar26 >> (bVar9 & 0x1f);
          }
          uVar25 = uVar6;
          puVar31 = local_58;
          if (uVar21 != 0) {
            uVar17 = (*puVar26 & uVar3) << (0x20 - bVar9 & 0x1f);
            if (uVar21 < uVar4) {
              *puVar28 = (uVar19 | uVar32) & *puVar28 | uVar17;
            }
            else {
              *puVar28 = *puVar28 & uVar19 | uVar17;
              if (uVar21 != uVar4) {
                puVar28[1] = (*puVar26 & uVar3) >> (bVar9 & 0x1f) | puVar28[1] & uVar32;
              }
            }
          }
        }
        else {
          uVar18 = 0x20 - (uVar25 - uVar4);
          bVar9 = (byte)(uVar25 - uVar4);
          *puVar31 = (uVar17 & *puVar28) << (bVar9 & 0x1f) | local_res18 & *puVar31;
          bVar10 = (byte)uVar18;
          uVar19 = *puVar28 >> (bVar10 & 0x1f);
          puVar28 = puVar31;
          for (; puVar31 = puVar28 + 1, puVar26 != puVar12; puVar26 = puVar26 + 1) {
            *puVar31 = *puVar26 << (bVar9 & 0x1f) | uVar19;
            uVar19 = *puVar26 >> (bVar10 & 0x1f);
            puVar28 = puVar31;
          }
          if (uVar21 < uVar18) {
            if (uVar21 == 0) {
              *puVar31 = *puVar31 & uVar32 | uVar19;
              uVar25 = uVar6;
              puVar31 = local_58;
            }
            else {
              *puVar31 = (*puVar26 & uVar3) << (bVar9 & 0x1f) | *puVar31 & uVar32 | uVar19;
              uVar25 = uVar6;
              puVar31 = local_58;
            }
          }
          else {
            *puVar31 = *puVar26 << (bVar9 & 0x1f) | uVar19;
            uVar25 = uVar6;
            puVar31 = local_58;
            if (uVar21 != uVar18) {
              puVar28[2] = *puVar26 >> (bVar10 & 0x1f) & ~uVar32 | puVar28[2] & uVar32;
            }
          }
        }
      }
    }
  }
  lVar5 = *param_1;
  uVar25 = ((longlong)puVar31 - lVar5 >> 2) * 0x20 + uVar25;
  if (uVar25 < 0x8000000000000000) {
    uVar6 = uVar25 + 0x1f >> 5;
    if ((uVar6 < (ulonglong)(param_1[1] - lVar5 >> 2)) &&
       (lVar20 = lVar5 + uVar6 * 4, lVar20 != param_1[1])) {
      param_1[1] = lVar20;
    }
    param_1[3] = uVar25;
    if ((uVar25 & 0x1f) != 0) {
      puVar12 = (uint *)(lVar5 + -4 + uVar6 * 4);
      *puVar12 = *puVar12 & (1 << ((byte)uVar25 & 0x1f)) - 1U;
    }
    return;
  }
LAB_1400e99e2:
  FUN_1400e4a80();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

