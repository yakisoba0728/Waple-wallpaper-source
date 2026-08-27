// Function: FUN_1403eb0e0
// Addr: 1403eb0e0
// Size: 1750 bytes


void FUN_1403eb0e0(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  sbyte sVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  byte bVar23;
  byte *pbVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar30 [16];
  uint local_res8;
  uint local_res20;
  longlong local_90;
  byte *local_88;
  undefined8 extraout_XMM0_Qb;
  
  fVar26 = DAT_140492968;
  fVar6 = DAT_1404926c0;
  fVar5 = DAT_1404925f0;
  pbVar22 = param_1 + 8;
  uVar20 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
  if (param_3 <= uVar20) {
    uVar20 = param_3;
  }
  uVar12 = 0;
  if (uVar20 != 0) {
    do {
      auVar27._0_8_ = FUN_1403eb7c0(pbVar22,(float)*(int *)(param_2 + uVar12 * 4) * fVar5,0,1);
      auVar27._8_8_ = extraout_XMM0_Qb;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = (float)auVar27._0_8_ * fVar26 + fVar6;
      fVar25 = (float)FUN_14041a5c0(auVar28._0_8_);
      *(int *)(param_2 + uVar12 * 4) = (int)fVar25;
      uVar19 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar19;
      pbVar22 = pbVar22 + (ulonglong)CONCAT11(*pbVar22,pbVar22[1]) * 4 + 2;
    } while (uVar19 < uVar20);
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) < 2) {
    return;
  }
  for (; uVar20 < (uint)param_1[6] * 0x100 + (uint)param_1[7]; uVar20 = uVar20 + 1) {
    pbVar22 = pbVar22 + (ulonglong)CONCAT11(*pbVar22,pbVar22[1]) * 4 + 2;
  }
  uVar20 = (uint)pbVar22[1] * 0x10000 + (uint)pbVar22[2] * 0x100 + (uint)*pbVar22 * 0x1000000 +
           (uint)pbVar22[3];
  if (uVar20 == 0) {
    local_88 = (byte *)&DAT_14045dd10;
  }
  else {
    local_88 = param_1 + uVar20;
  }
  uVar20 = (uint)pbVar22[5] * 0x10000 + (uint)pbVar22[6] * 0x100 + (uint)pbVar22[4] * 0x1000000 +
           (uint)pbVar22[7];
  if (uVar20 == 0) {
    param_1 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1 = param_1 + uVar20;
  }
  puVar9 = (undefined8 *)FUN_1403bc8b0();
  local_90 = 0;
  uVar20 = 0xffffffff;
  uVar19 = param_3;
  if ((int)param_3 < 0) {
    uVar19 = 0;
  }
  if (uVar19 == 0) {
    local_res8 = 0;
    local_res20 = uVar19;
  }
  else {
    local_res20 = 0;
    local_res8 = 0;
    do {
      local_res8 = local_res8 + 8 + (local_res8 >> 1);
    } while (local_res8 < uVar19);
    if (local_res8 < 0x3fffffff) {
      if (local_res8 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = _realloc_base();
        if (lVar10 == 0) {
          local_res8 = 0xffffffff;
          goto LAB_1403eb342;
        }
      }
      local_res20 = uVar19;
      local_90 = lVar10;
      if (uVar19 * 4 != 0) {
        FUN_1404217a0(lVar10,0,uVar19 * 4);
      }
    }
    else {
      local_res8 = 0xffffffff;
    }
  }
LAB_1403eb342:
  fVar5 = DAT_14049268c;
  uVar12 = 0;
  if (param_3 == 0) {
    uVar20 = 0;
    lVar10 = 0;
    goto LAB_1403eb750;
  }
  do {
    fVar26 = (float)FUN_14041a5c0((float)*(int *)(param_2 + uVar12 * 4) * fVar5 + fVar6);
    if ((uint)uVar12 < local_res20) {
      piVar16 = (int *)(uVar12 * 4 + local_90);
    }
    else {
      piVar16 = (int *)&DAT_1404e4f20;
    }
    uVar19 = (uint)uVar12 + 1;
    uVar12 = (ulonglong)uVar19;
    *piVar16 = (int)fVar26;
  } while (uVar19 < param_3);
  uVar19 = 0;
  lVar10 = 0;
  do {
    uVar19 = uVar19 + 8 + (uVar19 >> 1);
  } while (uVar19 < param_3);
  if (uVar19 < 0x3fffffff) {
    if (uVar19 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = _realloc_base(0);
      if (lVar11 == 0) goto LAB_1403eb3e5;
    }
    lVar10 = lVar11;
    uVar20 = uVar19;
  }
LAB_1403eb3e5:
  fVar5 = DAT_14049284c;
  uVar12 = 0;
  uVar19 = 0;
  uVar21 = (undefined4)DAT_14045dd10;
  do {
    iVar2 = *(int *)(param_2 + uVar12 * 4);
    uVar15 = (uint)uVar12;
    if (*local_88 == 0) {
      uVar18 = (uint)local_88[3] + (uint)local_88[2] * 0x100;
      if (uVar18 != 0) {
        bVar23 = local_88[1];
        uVar17 = 0;
        iVar8 = (bVar23 >> 4 & 3) + 1;
        uVar14 = uVar18 - 1;
        if (uVar15 < uVar18) {
          uVar14 = uVar15;
        }
        pbVar22 = local_88 + (ulonglong)(uVar14 * iVar8) + 4;
        do {
          bVar1 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          uVar17 = uVar17 * 0x100 + (uint)bVar1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        goto LAB_1403eb4f2;
      }
    }
    else if ((*local_88 == 1) &&
            (uVar18 = (uint)local_88[3] * 0x10000 + (uint)local_88[4] * 0x100 +
                      (uint)local_88[2] * 0x1000000 + (uint)local_88[5], uVar18 != 0)) {
      bVar23 = local_88[1];
      uVar17 = 0;
      iVar8 = (bVar23 >> 4 & 3) + 1;
      uVar14 = uVar18 - 1;
      if (uVar15 < uVar18) {
        uVar14 = uVar15;
      }
      pbVar22 = local_88 + (ulonglong)(uVar14 * iVar8) + 6;
      do {
        bVar1 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        uVar17 = uVar17 * 0x100 + (uint)bVar1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
LAB_1403eb4f2:
      sVar13 = (bVar23 & 0xf) + 1;
      uVar12 = (ulonglong)((1 << sVar13) - 1U & uVar17 | (uVar17 >> sVar13) << 0x10);
    }
    uVar4 = uVar12 >> 0x10;
    if ((uint)(uVar12 >> 0x10) < (uint)param_1[6] * 0x100 + (uint)param_1[7]) {
      uVar18 = (uint)param_1[3] * 0x10000 + (uint)param_1[4] * 0x100 + (uint)param_1[2] * 0x1000000
               + (uint)param_1[5];
      if (uVar18 == 0) {
        pbVar22 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar22 = param_1 + uVar18;
      }
      uVar18 = (uint)param_1[uVar4 * 4 + 0xb] +
               (uint)param_1[uVar4 * 4 + 9] * 0x10000 + (uint)param_1[uVar4 * 4 + 10] * 0x100 +
               (uint)param_1[uVar4 * 4 + 8] * 0x1000000;
      if (uVar18 == 0) {
        pbVar24 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar24 = param_1 + uVar18;
      }
      if ((ushort)((ushort)pbVar24[4] * 0x100 + (ushort)pbVar24[5]) == 0) {
        auVar29 = ZEXT816(0);
      }
      else {
        auVar29._0_8_ = FUN_14039b070(pbVar24,uVar12 & 0xffff,local_90,local_res20,pbVar22,puVar9);
        auVar29._8_8_ = extraout_XMM0_Qb_00;
        uVar21 = (undefined4)DAT_14045dd10;
      }
    }
    else {
      auVar29 = ZEXT816(0);
    }
    auVar30._4_12_ = auVar29._4_12_;
    auVar30._0_4_ = auVar29._0_4_ * fVar5 + fVar6;
    fVar26 = (float)FUN_14041a5c0(auVar30._0_8_);
    iVar8 = (int)(fVar26 + (float)iVar2);
    iVar2 = -0x10000;
    if (-0x10001 < iVar8) {
      iVar2 = iVar8;
    }
    iVar8 = 0x10000;
    if (iVar2 < 0x10001) {
      iVar8 = iVar2;
    }
    lVar11 = lVar10;
    uVar18 = uVar20;
    if ((int)uVar19 < (int)uVar20) {
LAB_1403eb6da:
      uVar12 = (ulonglong)uVar19;
      uVar19 = uVar19 + 1;
      *(int *)(lVar11 + uVar12 * 4) = iVar8;
      lVar10 = lVar11;
      uVar20 = uVar18;
      uVar21 = (undefined4)DAT_14045dd10;
      uVar7 = (undefined4)DAT_1404e4f20;
    }
    else {
      uVar7 = uVar21;
      if (-1 < (int)uVar20) {
        if (uVar20 < uVar19 + 1) {
          do {
            uVar18 = uVar18 + 8 + (uVar18 >> 1);
          } while (uVar18 < uVar19 + 1);
          if (((int)uVar20 < 0) || (0x3ffffffe < uVar18)) {
LAB_1403eb6cb:
            uVar20 = ~uVar20;
            uVar7 = uVar21;
            goto LAB_1403eb6ea;
          }
          if (uVar18 == 0) {
            if (uVar20 != 0) {
              thunk_FUN_1402d9040();
            }
            lVar11 = 0;
          }
          else if ((uVar20 == 0) && (lVar10 != 0)) {
            lVar11 = _malloc_base();
            if (lVar11 == 0) {
LAB_1403eb6c1:
              bVar3 = uVar20 < uVar18;
              lVar11 = lVar10;
              uVar18 = uVar20;
              uVar21 = (undefined4)DAT_14045dd10;
              if (bVar3) goto LAB_1403eb6cb;
            }
            else if (uVar19 != 0) {
              FUN_1404210f0();
            }
          }
          else {
            lVar11 = _realloc_base();
            if (lVar11 == 0) goto LAB_1403eb6c1;
          }
        }
        goto LAB_1403eb6da;
      }
    }
LAB_1403eb6ea:
    DAT_1404e4f20._0_4_ = uVar7;
    uVar12 = (ulonglong)(uVar15 + 1);
  } while (uVar15 + 1 < param_3);
  uVar12 = 0;
  do {
    lVar11 = uVar12 * 4;
    uVar7 = uVar21;
    if ((uint)uVar12 < uVar19) {
      uVar21 = *(undefined4 *)(lVar11 + lVar10);
      uVar7 = (undefined4)DAT_1404e4f20;
    }
    DAT_1404e4f20._0_4_ = uVar7;
    uVar15 = (uint)uVar12 + 1;
    uVar12 = (ulonglong)uVar15;
    *(undefined4 *)(lVar11 + param_2) = uVar21;
    uVar21 = (undefined4)DAT_14045dd10;
  } while (uVar15 < param_3);
LAB_1403eb750:
  if ((puVar9 != &DAT_14045dd10) && (puVar9 != (undefined8 *)0x0)) {
    thunk_FUN_1402d9040(puVar9);
  }
  if (1 < uVar20 + 1) {
    thunk_FUN_1402d9040(lVar10);
  }
  if (1 < local_res8 + 1) {
    thunk_FUN_1402d9040(local_90);
  }
  return;
}

