// Function: FUN_1403cc880
// Addr: 1403cc880
// Size: 5536 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403cc880(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong param_7,undefined8 param_8)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  longlong *plVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  byte *pbVar28;
  longlong lVar29;
  float *pfVar30;
  undefined8 *puVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined4 local_380;
  undefined8 local_378;
  char local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  undefined4 local_358;
  uint local_354;
  undefined8 local_348;
  float *local_340;
  uint local_338;
  undefined4 local_334;
  undefined8 *local_328;
  float *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  float local_2f8;
  int local_2f0;
  uint local_2ec;
  uint local_2e8;
  int local_2e4;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  undefined4 local_298;
  longlong local_290;
  longlong *local_288;
  undefined8 *local_280;
  byte *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  int local_228;
  uint local_224;
  float *local_220;
  uint local_218;
  float local_214 [67];
  float local_108 [2];
  byte *local_100;
  byte *local_f8;
  int local_f0;
  int local_ec;
  uint local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1404dc040 ^ (ulonglong)auStack_3a8;
  local_328 = param_5;
  local_268 = param_6;
  local_2d8 = param_8;
  pbVar25 = *(byte **)(param_7 + 8);
  pbVar28 = pbVar25 + *(uint *)(param_7 + 0x10);
  local_298 = param_4;
  local_288 = param_3;
  local_278 = pbVar28;
  local_270 = param_2;
  puVar13 = (undefined8 *)FUN_140398380(*(longlong *)(*param_3 + 0x20) + 0x128);
  puVar31 = &DAT_14045dd10;
  puVar14 = &DAT_14045dd10;
  if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*puVar13;
  }
  puVar13 = &DAT_14045dd10;
  if (0x17 < *(uint *)(puVar14 + 3)) {
    puVar13 = (undefined8 *)puVar14[2];
  }
  uVar19 = (uint)*(byte *)((longlong)puVar13 + 9) * 0x10000 +
           (uint)*(byte *)((longlong)puVar13 + 10) * 0x100 +
           (uint)*(byte *)(puVar13 + 1) * 0x1000000 + (uint)*(byte *)((longlong)puVar13 + 0xb);
  if (uVar19 == 0) {
    local_2e0 = &DAT_14045dd10;
  }
  else {
    local_2e0 = (undefined8 *)((ulonglong)uVar19 + (longlong)puVar13);
  }
  iVar27 = (int)pbVar28;
  if (iVar27 == (int)pbVar25) goto LAB_1403cddad;
  bVar1 = *pbVar25;
  uVar19 = (uint)bVar1;
  if (bVar1 < 0x80) {
    uVar15 = 1;
  }
  else {
    if (bVar1 < 0xc0) {
      uVar15 = 2;
    }
    else if (bVar1 < 0xe0) {
      uVar15 = 3;
    }
    else {
      uVar15 = (ulonglong)(5 - (bVar1 < 0xf0));
    }
    if ((uint)(iVar27 - (int)pbVar25) < (uint)uVar15) goto LAB_1403cddad;
    uVar19 = (uint)bVar1;
    if (bVar1 < 0xc0) {
      uVar19 = uVar19 & 0x3f;
      bVar1 = pbVar25[1];
LAB_1403cca75:
      uVar11 = (uint)bVar1;
      uVar19 = uVar19 << 8;
    }
    else if (uVar19 < 0xe0) {
      uVar19 = (uint)pbVar25[1] << 8 | (uVar19 & 0x1f) << 0x10;
      uVar11 = (uint)pbVar25[2];
    }
    else {
      if (0xef < uVar19) {
        uVar19 = (uint)CONCAT21(CONCAT11(pbVar25[1],pbVar25[2]),pbVar25[3]);
        bVar1 = pbVar25[4];
        goto LAB_1403cca75;
      }
      uVar19 = (uint)CONCAT11(pbVar25[1],pbVar25[2]) << 8 | (uVar19 & 0xf) << 0x18;
      uVar11 = (uint)pbVar25[3];
    }
    uVar19 = uVar19 | uVar11;
  }
  pbVar25 = pbVar25 + uVar15;
  uVar11 = iVar27 - (int)pbVar25;
  if ((uVar19 >> 0xc & 1) == 0) {
    if (uVar11 < 2) goto LAB_1403cddad;
    local_2e4 = (uint)pbVar25[1] + (uint)*pbVar25 * 0x100;
    pbVar25 = pbVar25 + 2;
  }
  else {
    if (uVar11 < 3) goto LAB_1403cddad;
    local_2e4 = (uint)pbVar25[1] * 0x100 + (uint)*pbVar25 * 0x10000 + (uint)pbVar25[2];
    pbVar25 = pbVar25 + 3;
  }
  local_368 = '\x01';
  local_280 = puVar13;
  if ((char)uVar19 < '\0') {
    if (iVar27 == (int)pbVar25) goto LAB_1403cddad;
    bVar1 = *pbVar25;
    if (bVar1 < 0x80) {
      uVar15 = 1;
    }
    else {
      if (bVar1 < 0xc0) {
        uVar15 = 2;
      }
      else if (bVar1 < 0xe0) {
        uVar15 = 3;
      }
      else {
        uVar15 = (ulonglong)(5 - (bVar1 < 0xf0));
      }
      if ((uint)(iVar27 - (int)pbVar25) < (uint)uVar15) goto LAB_1403cddad;
    }
    uVar11 = FUN_140397e50(pbVar25);
    pbVar25 = pbVar25 + uVar15;
    uVar20 = (uint)*(byte *)((longlong)puVar13 + 0xd) * 0x10000 +
             (uint)*(byte *)((longlong)puVar13 + 0xe) * 0x100 +
             (uint)*(byte *)((longlong)puVar13 + 0xc) * 0x1000000 +
             (uint)*(byte *)((longlong)puVar13 + 0xf);
    if (uVar20 == 0) {
      pbVar22 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar22 = (byte *)((ulonglong)uVar20 + (longlong)puVar13);
    }
    if (uVar11 < (uint)pbVar22[1] * 0x10000 + (uint)pbVar22[2] * 0x100 + (uint)*pbVar22 * 0x1000000
                 + (uint)pbVar22[3]) {
      pbVar26 = pbVar22 + ((ulonglong)uVar11 + 1) * 4;
    }
    else {
      pbVar26 = (byte *)&DAT_14045dd10;
    }
    uVar11 = (uint)pbVar26[3] +
             (uint)pbVar26[1] * 0x10000 + (uint)pbVar26[2] * 0x100 + (uint)*pbVar26 * 0x1000000;
    if (uVar11 == 0) {
      pbVar22 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar22 = pbVar22 + uVar11;
    }
    local_260 = local_2e0;
    local_258 = 0;
    local_250 = *local_328;
    uStack_248 = local_328[1];
    local_240 = local_328[2];
    local_238 = local_2d8;
    local_368 = FUN_140386670(pbVar22,local_328[1],*(undefined4 *)(local_328 + 2),&local_260);
  }
  cVar10 = local_368;
  local_290 = local_288[7];
  *(undefined4 *)(local_290 + 4) = 0;
  lVar2 = local_288[7];
  *(undefined4 *)(lVar2 + 0x14) = 0;
  pbVar22 = pbVar25;
  if ((uVar19 & 2) != 0) {
    if (iVar27 == (int)pbVar25) goto LAB_1403cddad;
    bVar1 = *pbVar25;
    if (bVar1 < 0x80) {
      uVar11 = 1;
    }
    else {
      if (bVar1 < 0xc0) {
        uVar11 = 2;
      }
      else if (bVar1 < 0xe0) {
        uVar11 = 3;
      }
      else {
        uVar11 = 5 - (bVar1 < 0xf0);
      }
      if ((uint)(iVar27 - (int)pbVar25) < uVar11) goto LAB_1403cddad;
    }
    FUN_140397e50(pbVar25);
    uVar20 = (uint)*(byte *)(local_280 + 2) * 0x1000000 +
             (uint)*(byte *)((longlong)local_280 + 0x11) * 0x10000 +
             (uint)*(byte *)((longlong)local_280 + 0x12) * 0x100 +
             (uint)*(byte *)((longlong)local_280 + 0x13);
    if (uVar20 != 0) {
      puVar31 = (undefined8 *)((ulonglong)uVar20 + (longlong)local_280);
    }
    FUN_140397a40(puVar31,&local_348);
    local_100 = (byte *)local_340;
    local_f8 = (byte *)((longlong)local_340 + (ulonglong)local_338);
    local_f0 = 0;
    local_e8 = 0;
    if (local_340 < local_f8) {
      bVar1 = *(byte *)local_340;
      local_100 = (byte *)((longlong)local_340 + 1);
      local_ec = (bVar1 & 0x3f) + 1;
      local_e8 = bVar1 & 0xc0;
      if ((bVar1 & 0xc0) == 0) {
        local_e8 = 1;
      }
      else if (local_e8 == 0x40) {
        local_e8 = 2;
      }
      else if (local_e8 == 0x80) {
        local_e8 = 0;
      }
      else if (local_e8 == 0xc0) {
        local_e8 = 4;
      }
      if (local_f8 < local_100 + local_e8 * local_ec) goto LAB_1403cce2f;
      if (local_e8 == 0) {
LAB_1403cce20:
        local_f0 = 0;
        local_100 = local_100 + local_e8;
      }
      else if (local_e8 == 1) {
        local_f0 = (int)(char)*local_100;
        local_100 = (byte *)((longlong)local_340 + 2);
      }
      else if (local_e8 == 2) {
        local_f0 = (int)(short)((ushort)*local_100 * 0x100 +
                               (ushort)*(byte *)((longlong)local_340 + 2));
        local_100 = (byte *)((longlong)local_340 + 3);
      }
      else {
        if (local_e8 != 4) goto LAB_1403cce20;
        local_f0 = (((uint)*(byte *)((longlong)local_340 + 2) + (uint)*local_100 * 0x100) * 0x100 +
                   (uint)*(byte *)((longlong)local_340 + 3)) * 0x100 +
                   (uint)*(byte *)((longlong)local_340 + 4);
        local_100 = (byte *)((longlong)local_340 + 5);
      }
    }
    else {
LAB_1403cce2f:
      local_ec = 0;
    }
    FUN_140386a40(local_290,local_108,0);
    FUN_1403f85d0(lVar2 + 0x10);
    uVar20 = *(uint *)(lVar2 + 0x14);
    pbVar22 = pbVar25 + uVar11;
    if (uVar20 != 0) {
      uVar11 = 0;
      do {
        pbVar25 = pbVar22 + 1;
        if (pbVar28 < pbVar25) break;
        bVar1 = *pbVar22;
        uVar21 = (bVar1 & 0x3f) + 1;
        uVar23 = uVar11 + uVar21;
        pbVar22 = pbVar25;
        if (uVar20 < uVar23) break;
        uVar18 = bVar1 & 0xc0;
        if (uVar18 == 0x80) {
          uVar9 = uVar23;
          if (uVar21 != 0) {
            FUN_1404217a0(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4,0,uVar21 * 4);
          }
        }
        else if (uVar18 == 0x40) {
          if (pbVar28 < pbVar25 + uVar21 * 2) break;
          uVar21 = uVar11 + 3;
          while (uVar21 < uVar23) {
            *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                 (float)(int)(short)((ushort)*pbVar25 * 0x100 + (ushort)pbVar25[1]);
            *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 1) * 4) =
                 (float)(int)(short)((ushort)pbVar25[2] * 0x100 + (ushort)pbVar25[3]);
            *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 2) * 4) =
                 (float)(int)(short)((ushort)pbVar25[4] * 0x100 + (ushort)pbVar25[5]);
            *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 3) * 4) =
                 (float)(int)(short)((ushort)pbVar25[6] * 0x100 + (ushort)pbVar25[7]);
            pbVar25 = pbVar25 + 8;
            uVar21 = uVar11 + 7;
            uVar11 = uVar11 + 4;
          }
          uVar9 = uVar11;
          if (uVar11 < uVar23) {
            if (3 < uVar23 - uVar11) {
              do {
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                     (float)(int)(short)((ushort)*pbVar25 * 0x100 + (ushort)pbVar25[1]);
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 1) * 4) =
                     (float)(int)(short)((ushort)pbVar25[3] + (ushort)pbVar25[2] * 0x100);
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 2) * 4) =
                     (float)(int)(short)((ushort)pbVar25[5] + (ushort)pbVar25[4] * 0x100);
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 3) * 4) =
                     (float)(int)(short)((ushort)pbVar25[7] + (ushort)pbVar25[6] * 0x100);
                pbVar25 = pbVar25 + 8;
                uVar11 = uVar11 + 4;
              } while (uVar11 < uVar23 - 3);
              uVar9 = uVar11;
              if (uVar23 <= uVar11) goto LAB_1403cd371;
            }
            do {
              *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                   (float)(int)(short)((ushort)*pbVar25 * 0x100 + (ushort)pbVar25[1]);
              pbVar25 = pbVar25 + 2;
              uVar11 = uVar11 + 1;
              uVar9 = uVar11;
            } while (uVar11 < uVar23);
          }
        }
        else {
          uVar9 = uVar11;
          if (uVar18 == 0xc0) {
            if (pbVar28 < pbVar25 + uVar21 * 4) break;
            if (uVar11 < uVar23) {
              if (3 < uVar21) {
                do {
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                       (float)(int)((((uint)pbVar25[1] + (uint)*pbVar25 * 0x100) * 0x100 +
                                    (uint)pbVar25[2]) * 0x100 + (uint)pbVar25[3]);
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 1) * 4) =
                       (float)(int)((((uint)pbVar25[4] * 0x100 + (uint)pbVar25[5]) * 0x100 +
                                    (uint)pbVar25[6]) * 0x100 + (uint)pbVar25[7]);
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 2) * 4) =
                       (float)(int)((((uint)pbVar25[8] * 0x100 + (uint)pbVar25[9]) * 0x100 +
                                    (uint)pbVar25[10]) * 0x100 + (uint)pbVar25[0xb]);
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 3) * 4) =
                       (float)(int)((((uint)pbVar25[0xc] * 0x100 + (uint)pbVar25[0xd]) * 0x100 +
                                    (uint)pbVar25[0xe]) * 0x100 + (uint)pbVar25[0xf]);
                  pbVar25 = pbVar25 + 0x10;
                  uVar11 = uVar11 + 4;
                } while (uVar11 < uVar23 - 3);
                uVar9 = uVar11;
                if (uVar23 <= uVar11) goto LAB_1403cd371;
              }
              do {
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                     (float)(int)((((uint)pbVar25[1] + (uint)*pbVar25 * 0x100) * 0x100 +
                                  (uint)pbVar25[2]) * 0x100 + (uint)pbVar25[3]);
                pbVar25 = pbVar25 + 4;
                uVar11 = uVar11 + 1;
                uVar9 = uVar11;
              } while (uVar11 < uVar23);
            }
          }
          else if ((bVar1 & 0xc0) == 0) {
            if (pbVar28 < pbVar25 + uVar21) break;
            uVar21 = uVar11 + 3;
            while (uVar21 < uVar23) {
              *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                   (float)(int)(char)*pbVar25;
              *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 1) * 4) =
                   (float)(int)(char)pbVar25[1];
              pbVar22 = pbVar25 + 3;
              *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 2) * 4) =
                   (float)(int)(char)pbVar25[2];
              pbVar25 = pbVar25 + 4;
              *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 3) * 4) =
                   (float)(int)(char)*pbVar22;
              uVar21 = uVar11 + 7;
              uVar11 = uVar11 + 4;
            }
            uVar9 = uVar11;
            if (uVar11 < uVar23) {
              if (3 < uVar23 - uVar11) {
                do {
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                       (float)(int)(char)*pbVar25;
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 1) * 4) =
                       (float)(int)(char)pbVar25[1];
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 2) * 4) =
                       (float)(int)(char)pbVar25[2];
                  *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(uVar11 + 3) * 4) =
                       (float)(int)(char)pbVar25[3];
                  pbVar25 = pbVar25 + 4;
                  uVar11 = uVar11 + 4;
                } while (uVar11 < uVar23 - 3);
                uVar9 = uVar11;
                if (uVar23 <= uVar11) goto LAB_1403cd371;
              }
              do {
                *(float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4) =
                     (float)(int)(char)*pbVar25;
                pbVar25 = pbVar25 + 1;
                uVar11 = uVar11 + 1;
                uVar9 = uVar11;
              } while (uVar11 < uVar23);
            }
          }
        }
LAB_1403cd371:
        uVar11 = uVar9;
        pbVar22 = pbVar25;
      } while (uVar11 < uVar20);
    }
  }
  puVar14 = local_328;
  if ((uVar19 & 4) != 0) {
    if (iVar27 == (int)pbVar22) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    if (bVar1 < 0x80) {
      uVar11 = 1;
    }
    else {
      if (bVar1 < 0xc0) {
        uVar11 = 2;
      }
      else if (bVar1 < 0xe0) {
        uVar11 = 3;
      }
      else {
        uVar11 = 5 - (bVar1 < 0xf0);
      }
      if ((uint)(iVar27 - (int)pbVar22) < uVar11) goto LAB_1403cddad;
    }
    uVar12 = FUN_140397e50(pbVar22);
    puVar14 = local_328;
    pbVar22 = pbVar22 + uVar11;
    if (cVar10 != '\0') {
      puVar13 = local_328;
      if (local_328 == (undefined8 *)0xffffffffffffffff) {
        puVar13 = (undefined8 *)0x0;
      }
      if ((*(int *)(puVar13 + 2) != 0) && (-1 < *(int *)(lVar2 + 0x10))) {
        local_348 = local_2c8;
        local_340 = *(float **)(lVar2 + 0x18);
        local_338 = *(uint *)(lVar2 + 0x14);
        local_334 = 0;
        local_2c8 = *local_328;
        uStack_2c0 = local_328[1];
        local_2b8 = local_328[2];
        local_388 = (undefined8 *)local_2d8;
        FUN_1403c7550(local_2e0,uVar12,&local_2c8,&local_348);
      }
    }
  }
  uVar3 = *puVar14;
  local_320 = (float *)puVar14[1];
  local_364 = *(uint *)(puVar14 + 2);
  if (((uVar19 & 1) != 0) ||
     (local_358 = *(undefined4 *)((longlong)puVar14 + 0x14), 0x1000 < local_364)) {
    local_320 = *(float **)(*local_288 + 0x80);
    local_364 = *(uint *)(*local_288 + 0x7c);
    local_358 = 0;
  }
  local_2f0 = -1;
  if ((uVar19 & 8) != 0) {
    if (iVar27 == (int)pbVar22) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    if (bVar1 < 0x80) {
      uVar11 = 1;
    }
    else {
      if (bVar1 < 0xc0) {
        uVar11 = 2;
      }
      else if (bVar1 < 0xe0) {
        uVar11 = 3;
      }
      else {
        uVar11 = 5 - (bVar1 < 0xf0);
      }
      if ((uint)(iVar27 - (int)pbVar22) < uVar11) goto LAB_1403cddad;
    }
    local_2f0 = FUN_140397e50(pbVar22);
    pbVar22 = pbVar22 + uVar11;
  }
  lVar29 = local_290;
  local_318 = _DAT_140492de0;
  uVar17 = local_318;
  uStack_310 = _UNK_140492de8;
  lVar5 = uStack_310;
  local_308 = _DAT_140492a60;
  uVar15 = local_308;
  uStack_300 = _UNK_140492a68;
  lVar6 = uStack_300;
  local_2f8 = 0.0;
  local_2ec = uVar19 & 0x10;
  if (local_2ec == 0) {
    local_318._0_4_ = (float)_DAT_140492de0;
    fVar41 = (float)local_318;
    local_318 = uVar17;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    fVar41 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    local_318._4_4_ = (float)((ulonglong)_DAT_140492de0 >> 0x20);
    local_318 = CONCAT44(local_318._4_4_,fVar41);
    pbVar22 = pbVar22 + 2;
  }
  local_2e8 = uVar19 & 0x20;
  if (local_2e8 == 0) {
    fVar40 = local_318._4_4_;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    fVar40 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    local_318 = CONCAT44(fVar40,(float)local_318);
    pbVar22 = pbVar22 + 2;
  }
  local_354 = uVar19 & 0x40;
  uStack_310._0_4_ = (float)_UNK_140492de8;
  fVar38 = (float)uStack_310;
  if (local_354 != 0) {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    pbVar25 = pbVar22 + 1;
    pbVar22 = pbVar22 + 2;
    fVar38 = (float)(int)(short)((ushort)*pbVar25 + (ushort)bVar1 * 0x100);
  }
  local_35c = uVar19 & 0x100;
  if (local_35c == 0) {
    uStack_310._4_4_ = (float)((ulonglong)_UNK_140492de8 >> 0x20);
    fVar35 = uStack_310._4_4_;
    uStack_310 = lVar5;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    fVar35 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    uStack_310 = CONCAT44(fVar35,(float)uStack_310);
    pbVar22 = pbVar22 + 2;
  }
  uVar11 = uVar19 & 0x200;
  if (uVar11 == 0) {
    local_308._0_4_ = (float)_DAT_140492a60;
    fVar37 = (float)local_308;
    local_308 = uVar15;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    fVar37 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    local_308._4_4_ = (float)(_DAT_140492a60 >> 0x20);
    local_308 = CONCAT44(local_308._4_4_,fVar37);
    pbVar22 = pbVar22 + 2;
  }
  local_360 = uVar19 & 0x2000;
  if (local_360 == 0) {
    fVar36 = local_308._4_4_;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    pbVar25 = pbVar22 + 1;
    pbVar22 = pbVar22 + 2;
    fVar36 = (float)(int)(short)((ushort)*pbVar25 + (ushort)bVar1 * 0x100);
  }
  uVar20 = uVar19 & 0x4000;
  uStack_300._0_4_ = (float)_UNK_140492a68;
  fVar34 = (float)uStack_300;
  if (uVar20 != 0) {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    pbVar25 = pbVar22 + 1;
    pbVar22 = pbVar22 + 2;
    fVar34 = (float)(int)(short)((ushort)*pbVar25 + (ushort)bVar1 * 0x100);
  }
  local_29c = uVar19 & 0x400;
  if (local_29c == 0) {
    uStack_300._4_4_ = (float)((ulonglong)_UNK_140492a68 >> 0x20);
    fVar39 = uStack_300._4_4_;
    uStack_300 = lVar6;
  }
  else {
    if ((uint)(iVar27 - (int)pbVar22) < 2) goto LAB_1403cddad;
    fVar39 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    uStack_300 = CONCAT44(fVar39,(float)uStack_300);
    pbVar22 = pbVar22 + 2;
  }
  uVar21 = uVar19 & 0x800;
  iVar27 = (int)local_278;
  if (uVar21 != 0) {
    if ((uint)(iVar27 - (int)pbVar22) < 2) {
LAB_1403cddad:
      *local_270 = 0;
      local_270[1] = 0;
      local_270[2] = 0;
      return;
    }
    local_2f8 = (float)(int)(short)((ushort)pbVar22[1] + (ushort)*pbVar22 * 0x100);
    pbVar22 = pbVar22 + 2;
  }
  fVar7 = local_2f8;
  for (uVar19 = uVar19 & 0xffff8000; iVar24 = (int)pbVar22, uVar19 != 0;
      uVar19 = uVar19 & uVar19 - 1) {
    if (iVar27 == iVar24) goto LAB_1403cddad;
    bVar1 = *pbVar22;
    if (bVar1 < 0x80) {
      uVar15 = 1;
    }
    else {
      if (bVar1 < 0xc0) {
        uVar15 = 2;
      }
      else if (bVar1 < 0xe0) {
        uVar15 = 3;
      }
      else {
        uVar15 = (ulonglong)(5 - (bVar1 < 0xf0));
      }
      if ((uint)(iVar27 - iVar24) < (uint)uVar15) goto LAB_1403cddad;
    }
    pbVar22 = pbVar22 + uVar15;
  }
  if (local_368 != '\0') {
    local_348 = uVar3;
    local_340 = local_320;
    local_338 = local_364;
    local_334 = local_358;
    if (*(int *)(local_290 + 4) == 0) {
      local_334 = 0;
      local_348 = local_2c8;
      local_340 = (float *)0x0;
      local_338 = 0;
    }
    local_2a8 = uVar11;
    local_2a4 = uVar21;
    local_2a0 = uVar20;
    FUN_1403943d0(&local_228);
    fVar4 = DAT_1404926c0;
    uVar19 = *(uint *)(lVar29 + 4);
    if (uVar19 != 0) {
      uVar11 = 0;
      do {
        uVar20 = local_218;
        if (uVar11 < uVar19) {
          uVar19 = *(uint *)(*(longlong *)(lVar29 + 8) + (ulonglong)uVar11 * 4);
        }
        else {
          DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
          uVar19 = (uint)DAT_14045dd10;
        }
        if (uVar19 < 0x1000) {
          if (local_218 < 0x41) {
            if (uVar19 < 0x40) {
              for (; local_218 <= uVar19; local_218 = local_218 + 1) {
                local_214[local_218] = 0.0;
              }
              pfVar30 = local_214 + uVar19;
              goto LAB_1403cd9ab;
            }
            FUN_1403a4580(&local_228,local_224 + local_218,0);
            if (-1 < local_228) {
              if ((uVar20 & 0x3fffffff) != 0) {
                FUN_1404210f0(local_220 + local_224,local_214);
              }
              local_224 = local_224 + uVar20;
            }
          }
          uVar20 = local_218;
          if (local_224 <= uVar19) {
            cVar10 = FUN_1403f85d0(&local_228,uVar19 + 1);
            uVar20 = uVar19 + 1;
            if (cVar10 == '\0') {
              DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
              pfVar30 = (float *)&DAT_1404e4f20;
              goto LAB_1403cd9ab;
            }
          }
          local_218 = uVar20;
          pfVar30 = local_220 + uVar19;
        }
        else {
          DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
          pfVar30 = (float *)&DAT_1404e4f20;
        }
LAB_1403cd9ab:
        if (uVar11 < *(uint *)(lVar2 + 0x14)) {
          pfVar16 = (float *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar11 * 4);
        }
        else {
          pfVar16 = (float *)&DAT_1404e4f20;
          DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
        }
        fVar33 = (float)FUN_14041a5c0(*pfVar16 + fVar4);
        *pfVar30 = (float)(int)fVar33;
        uVar11 = uVar11 + 1;
        uVar19 = *(uint *)(local_290 + 4);
        lVar29 = local_290;
      } while (uVar11 < uVar19);
      uVar11 = local_2a8;
      uVar20 = local_2a0;
      uVar21 = local_2a4;
      if (uVar19 != 0) {
        local_364 = local_218;
        if (local_218 < 0x41) {
          local_320 = local_214;
        }
        else {
          local_320 = local_220;
          local_364 = local_224;
        }
        local_358 = 0;
      }
    }
    uVar19 = local_29c;
    if (local_2f0 != -1) {
      puVar14 = local_328;
      if (local_328 == (undefined8 *)0xffffffffffffffff) {
        puVar14 = (undefined8 *)0x0;
      }
      if (*(int *)(puVar14 + 2) != 0) {
        if (local_2ec != 0) {
          local_108[0] = fVar41;
        }
        bVar32 = local_2ec != 0;
        uVar15 = (ulonglong)bVar32;
        local_338 = (uint)bVar32;
        if (local_2e8 != 0) {
          local_108[uVar15] = fVar40;
          local_338 = bVar32 + 1;
        }
        if (local_354 != 0) {
          local_108[local_338] = fVar38;
          local_338 = local_338 + 1;
        }
        if (local_35c != 0) {
          local_108[local_338] = fVar35;
          local_338 = local_338 + 1;
        }
        if (uVar11 != 0) {
          local_108[local_338] = fVar37;
          local_338 = local_338 + 1;
        }
        if (local_360 != 0) {
          local_108[local_338] = fVar36;
          local_338 = local_338 + 1;
        }
        if (uVar20 != 0) {
          local_108[local_338] = fVar34;
          local_338 = local_338 + 1;
        }
        if (local_29c != 0) {
          local_108[local_338] = fVar39;
          local_338 = local_338 + 1;
        }
        if (uVar21 != 0) {
          local_108[local_338] = fVar7;
          local_338 = local_338 + 1;
        }
        local_348 = local_2c8;
        local_340 = local_108;
        local_334 = 0;
        local_2c8 = *local_328;
        uStack_2c0 = local_328[1];
        local_2b8 = local_328[2];
        local_388 = (undefined8 *)local_2d8;
        FUN_1403c7550(local_2e0,local_2f0,&local_2c8,&local_348);
        if (local_2ec != 0) {
          local_318 = CONCAT44(local_318._4_4_,local_108[0]);
        }
        if (local_2e8 != 0) {
          local_318 = CONCAT44(local_108[uVar15],(float)local_318);
          uVar15 = (ulonglong)(bVar32 + 1);
        }
        if (local_354 != 0) {
          fVar38 = local_108[uVar15];
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (local_35c != 0) {
          fVar35 = local_108[uVar15];
          uStack_310 = (ulonglong)(uint)fVar35 << 0x20;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (uVar11 != 0) {
          fVar37 = local_108[uVar15];
          local_308 = (ulonglong)(uint)fVar37;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (local_360 != 0) {
          fVar36 = local_108[uVar15];
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (uVar20 != 0) {
          fVar34 = local_108[uVar15];
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (uVar19 != 0) {
          uStack_300 = (ulonglong)(uint)local_108[uVar15] << 0x20;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        if (uVar21 != 0) {
          local_2f8 = local_108[uVar15];
        }
      }
    }
    if (local_354 != 0) {
      fVar38 = fVar38 * DAT_140471a60;
    }
    if (local_35c != 0) {
      fVar35 = fVar35 * DAT_140471a64;
      uStack_310._4_4_ = fVar35;
    }
    if (uVar11 != 0) {
      local_308._0_4_ = fVar37 * DAT_140471a64;
    }
    if (local_360 != 0) {
      fVar36 = fVar36 * DAT_140471a60;
    }
    if (uVar20 != 0) {
      fVar34 = fVar34 * DAT_140471a60;
    }
    if (uVar11 == 0) {
      local_308._0_4_ = fVar35;
    }
    uStack_310 = CONCAT44(uStack_310._4_4_,fVar38 * DAT_140492834);
    local_308 = CONCAT44(fVar36 * DAT_140492834,(float)local_308);
    uStack_300 = CONCAT44(uStack_300._4_4_,fVar34 * DAT_140492834);
    uVar17 = FUN_14040ccb0(&local_318,&local_2c8);
    puVar14 = local_268;
    FUN_1403eca10(local_268,uVar17,0);
    plVar8 = local_288;
    if ((local_364 == *(uint *)(local_328 + 2)) && (local_320 == (float *)local_328[1])) {
      bVar32 = true;
    }
    else {
      bVar32 = false;
    }
    *(int *)((longlong)local_288 + 0x34) = *(int *)((longlong)local_288 + 0x34) + -1;
    local_2c8 = *puVar14;
    uStack_2c0 = puVar14[1];
    local_2b8 = puVar14[2];
    local_340 = local_320;
    local_338 = local_364;
    local_334 = local_358;
    local_378 = 0;
    if (bVar32) {
      local_378 = local_2d8;
    }
    local_380 = local_298;
    local_388 = &local_2c8;
    local_348 = uVar3;
    FUN_1403cc020(local_280,local_288,local_2e4,&local_348);
    *(int *)((longlong)plVar8 + 0x34) = *(int *)((longlong)plVar8 + 0x34) + 1;
    if (1 < local_228 + 1U) {
      local_224 = 0;
      thunk_FUN_1402d9040(local_220);
    }
  }
  local_270[1] = pbVar22;
  *(int *)(local_270 + 2) = (int)local_278 - iVar24;
  *(undefined4 *)((longlong)local_270 + 0x14) = 0;
  return;
}

