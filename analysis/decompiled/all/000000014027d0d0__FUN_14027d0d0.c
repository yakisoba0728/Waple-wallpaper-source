// Function: FUN_14027d0d0
// Addr: 14027d0d0
// Size: 2063 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027d0d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  int local_res18;
  int local_res20;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  longlong local_2d8;
  byte local_2d0;
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  double local_250;
  longlong local_248;
  undefined1 local_240 [16];
  longlong local_230;
  double local_228;
  byte local_220;
  double *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  byte local_1f8;
  double *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  byte local_1d0;
  double *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  byte local_1a8;
  double *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  byte local_180;
  double *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  byte local_158;
  double *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  byte local_130;
  double *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  byte local_108;
  double *local_100;
  undefined1 local_f8 [16];
  
  bVar30 = *(char *)(param_3 + 0x18) != '\0';
  uVar25 = (uint)bVar30;
  uVar24 = *(uint *)((longlong)param_2 + 0x14);
  if (*(uint *)((longlong)param_2 + 0x14) != uVar25) {
    *(uint *)((longlong)param_2 + 0x14) = uVar25;
    *param_2 = *param_2 + (longlong)((*(int *)((longlong)param_2 + 0xc) + -1) * (int)param_2[2]) * 4
    ;
    *(int *)(param_2 + 2) = -(int)param_2[2];
    uVar24 = (uint)bVar30;
  }
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar24) {
    *(uint *)((longlong)param_1 + 0x14) = uVar24;
    *param_1 = *param_1 + (longlong)((*(int *)((longlong)param_1 + 0xc) + -1) * (int)param_1[2]);
    *(int *)(param_1 + 2) = -(int)param_1[2];
  }
  dVar2 = (double)param_1[7];
  dVar33 = (double)param_1[3];
  dVar3 = (double)param_1[4];
  dVar4 = (double)param_1[9];
  dVar32 = dVar2 / dVar33;
  dVar31 = 0.0 / dVar3;
  dVar32 = dVar32 * dVar32;
  dVar31 = dVar32 + dVar31 * dVar31;
  if (dVar31 < 0.0) {
    dVar31 = (double)FUN_14041f780();
  }
  else {
    dVar31 = SQRT(dVar31);
  }
  dVar33 = 0.0 / dVar33;
  dVar3 = dVar2 / dVar3;
  dVar3 = dVar3 * dVar3;
  dVar33 = dVar33 * dVar33 + dVar3;
  if (dVar33 < 0.0) {
    dVar33 = (double)FUN_14041f780();
  }
  else {
    dVar33 = SQRT(dVar33);
  }
  dVar32 = dVar32 + dVar3;
  if (dVar32 < 0.0) {
    dVar32 = (double)FUN_14041f780();
  }
  else {
    dVar32 = SQRT(dVar32);
  }
  lVar18 = param_1[8];
  lVar5 = param_1[10];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  FUN_140280b50(local_2c8,param_3);
  uVar16 = _UNK_140493078;
  uVar15 = _DAT_140493070;
  uVar14 = _UNK_140493068;
  uVar13 = _DAT_140493060;
  uVar12 = _UNK_140492f18;
  uVar11 = _DAT_140492f10;
  auVar10 = _DAT_140492f00;
  uVar9 = _UNK_140492ae8;
  uVar8 = _DAT_140492ae0;
  dVar3 = DAT_140492758;
  local_258 = param_2[2];
  local_268 = *param_2;
  lStack_260 = param_2[1];
  local_240 = divpd(_DAT_140492f00,*(undefined1 (*) [16])(param_1 + 3));
  local_250 = dVar2;
  local_248 = lVar18;
  local_230 = lVar5;
  if (0 < iVar6) {
    iVar6 = (int)param_2[1];
    iVar20 = 0;
    local_res20 = 1;
    dVar32 = dVar32 * dVar4;
    do {
      iVar23 = iVar6 + -1;
      if (-1 < local_res20) {
        iVar23 = 0;
      }
      if (0 < iVar6) {
        local_res18 = 0;
        iVar26 = (iVar6 + -1) * 3;
        if (-1 < local_res20) {
          iVar26 = 0;
        }
        do {
          lVar18 = (longlong)(iVar20 * (int)param_1[2]);
          if ((*(byte *)(lVar18 + *param_1 + (longlong)iVar23) & 1) == 0) {
            lVar7 = *param_2;
            iVar27 = (int)param_2[2];
            local_310 = 0;
            local_2e8 = (double)iVar23 + dVar3;
            dStack_2e0 = (double)iVar20 + dVar3;
            lVar29 = (longlong)(iVar27 * iVar20);
            lVar5 = lVar7 + (iVar26 + lVar29) * 4;
            local_2f8 = local_2e8 / (double)param_1[3] - (double)param_1[5];
            dStack_2f0 = dStack_2e0 / (double)param_1[4] - (double)param_1[6];
            local_2d0 = *(byte *)(lVar18 + *param_1 + (longlong)iVar23) >> 1 & 1;
            local_2d8 = lVar5;
            if (iVar23 < 1) {
LAB_14027d4a0:
              local_318 = 0;
              if (iVar20 != 0) {
                local_1e8 = uVar13;
                uStack_1e0 = uVar14;
                local_318 = lVar7 + ((longlong)(iVar27 * (iVar20 + -1)) + (longlong)iVar26) * 4;
                local_1f0 = &local_2f8;
                local_200 = dVar33 * dVar4;
                local_1f8 = local_2d0;
                cVar17 = FUN_14027e2a0(&local_200,local_2d0,lVar5,local_318);
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              iVar21 = iVar27 * (iVar20 + -1);
              if (iVar23 < iVar6 + -1) {
                local_1c0 = _DAT_140492ab0;
                uStack_1b8 = _UNK_140492ab8;
                local_300 = lVar7 + ((iVar26 + 3) + lVar29) * 4;
                local_1c8 = &local_2f8;
                local_1d8 = dVar31 * dVar4;
                local_1d0 = local_2d0;
                cVar17 = FUN_14027e2a0(&local_1d8,local_2d0,lVar5,local_300);
                if (cVar17 != '\0') goto LAB_14027d7ec;
                iVar22 = iVar27 * (iVar20 + -1);
              }
              else {
                local_300 = 0;
                iVar22 = iVar21;
              }
              local_308 = 0;
              iVar27 = iVar27 * (iVar20 + 1);
              iVar28 = *(int *)((longlong)param_2 + 0xc) + -1;
              if (iVar20 < iVar28) {
                local_198 = _DAT_140492ef0;
                uStack_190 = _UNK_140492ef8;
                local_308 = lVar7 + ((longlong)iVar27 + (longlong)iVar26) * 4;
                local_1a0 = &local_2f8;
                local_1b0 = dVar33 * dVar4;
                local_1a8 = local_2d0;
                cVar17 = FUN_14027e2a0(&local_1b0,local_2d0,lVar5,local_308);
                iVar22 = iVar21;
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              if ((0 < iVar23) && (iVar20 != 0)) {
                local_178 = &local_2f8;
                lVar18 = (longlong)iVar22 + (longlong)(iVar26 + -3);
                local_170 = _DAT_140493080;
                uStack_168 = _UNK_140493088;
                local_188 = dVar32;
                local_180 = local_2d0;
                cVar17 = FUN_14027e3e0(&local_188,lVar18,lVar5,local_310,local_318,
                                       lVar7 + lVar18 * 4);
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              if ((iVar23 < iVar6 + -1) && (iVar20 != 0)) {
                local_150 = &local_2f8;
                lVar18 = (longlong)iVar22 + (longlong)(iVar26 + 3);
                local_148 = uVar15;
                uStack_140 = uVar16;
                local_160 = dVar32;
                local_158 = local_2d0;
                cVar17 = FUN_14027e3e0(&local_160,lVar18,lVar5,local_300,local_318,
                                       lVar7 + lVar18 * 4);
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              if ((0 < iVar23) && (iVar20 < iVar28)) {
                local_128 = &local_2f8;
                local_120 = uVar11;
                uStack_118 = uVar12;
                local_138 = dVar32;
                local_130 = local_2d0;
                cVar17 = FUN_14027e3e0(&local_138,local_2d0,lVar5,local_310,local_308,
                                       lVar7 + ((longlong)(iVar26 + -3) + (longlong)iVar27) * 4);
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              if ((iVar23 < iVar6 + -1) && (iVar20 < iVar28)) {
                local_100 = &local_2f8;
                local_f8 = auVar10;
                local_110 = dVar32;
                local_108 = local_2d0;
                cVar17 = FUN_14027e3e0(&local_110,local_2d0,lVar5,local_300,local_308,
                                       lVar7 + ((longlong)(iVar26 + 3) + (longlong)iVar27) * 4);
                if (cVar17 != '\0') goto LAB_14027d7ec;
              }
              bVar19 = 0;
            }
            else {
              local_218 = &local_2f8;
              local_210 = uVar8;
              uStack_208 = uVar9;
              local_310 = lVar7 + ((iVar26 + -3) + lVar29) * 4;
              local_228 = dVar31 * dVar4;
              local_220 = local_2d0;
              cVar17 = FUN_14027e2a0(&local_228,local_2d0,lVar5,local_310);
              if (cVar17 == '\0') goto LAB_14027d4a0;
LAB_14027d7ec:
              bVar19 = 1;
            }
            pbVar1 = (byte *)((longlong)iVar23 + (longlong)(iVar20 * (int)param_1[2]) + *param_1);
            *pbVar1 = *pbVar1 | bVar19;
          }
          local_res18 = local_res18 + 1;
          iVar26 = iVar26 + local_res20 * 3;
          iVar23 = iVar23 + local_res20;
        } while (local_res18 < iVar6);
      }
      local_res20 = -local_res20;
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)((longlong)param_2 + 0xc));
  }
  FUN_140103850(local_280);
  FUN_1401d9d50(local_298);
  FUN_140031b80(local_2b0);
  return;
}

