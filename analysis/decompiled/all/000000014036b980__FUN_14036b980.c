// Function: FUN_14036b980
// Addr: 14036b980
// Size: 1782 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14036b980(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  ushort *puVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  uint local_288;
  uint local_280;
  uint local_278;
  undefined1 local_274 [4];
  uint local_270;
  uint local_26c;
  uint *local_268;
  undefined8 *local_260;
  ushort *local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 *local_238;
  longlong local_230;
  undefined8 local_228;
  undefined4 local_220 [2];
  ulonglong *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined1 local_1d8 [160];
  longlong local_138;
  undefined1 local_130 [48];
  longlong local_100;
  code *local_f0;
  longlong local_e0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  byte local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_2b8;
  local_248 = param_5;
  local_260 = param_2;
  local_250 = param_4;
  local_240 = param_1;
  local_228 = param_3;
  local_290 = FUN_1403cea00(param_4 + 0xb0);
  local_298 = *(undefined8 *)*param_2;
  FUN_140394db0(local_1d8,1,param_4);
  local_f0 = FUN_14037c440;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_14036bfd9:
    if (*(longlong *)(local_138 + 0xe8) != 0) {
      *(undefined8 *)(local_138 + 0x100) = local_68;
      *(undefined8 *)(local_138 + 0x108) = local_60;
    }
    if (1 < (uint)local_98 + 1) {
      local_98 = (ulonglong)(uint)local_98;
      thunk_FUN_1402d9040(local_90);
    }
    local_98 = 0;
    local_90 = 0;
    if (local_100 != 0) {
      FUN_1403beff0(local_130);
    }
    return;
  }
  local_278 = 0;
  local_26c = 0;
  uVar11 = uVar8;
  if (*(int *)(param_1 + 0x54) != 0) goto LAB_14036ba45;
  puVar4 = (uint *)&DAT_14045dd10;
  do {
    uVar18 = (uint)uVar11;
    local_268 = puVar4;
    if ((uint)uVar8 < *puVar4) {
      do {
        if ((uint)uVar8 < *(uint *)(param_1 + 0x34)) {
          local_258 = (ushort *)(*(longlong *)(param_1 + 0x38) + uVar8 * 0xc);
          puVar4 = local_268;
          uVar18 = local_278;
        }
        else {
          local_258 = (ushort *)&DAT_14045dd10;
          uVar18 = (uint)uVar8;
        }
        local_270 = (uint)*local_258;
        local_238 = (undefined8 *)*param_2;
        if (local_270 < *(uint *)(local_238 + 1)) {
          local_230 = (ulonglong)*local_258 * 8;
          puVar6 = *(ulonglong **)(local_230 + local_238[2]);
          puVar10 = local_238;
          while (puVar6 == (ulonglong *)0x0) {
            puVar12 = &DAT_14045dd10;
            if ((undefined8 *)*puVar10 != (undefined8 *)0x0) {
              puVar12 = (undefined8 *)*puVar10;
            }
            if (*(uint *)(puVar12 + 3) < 4) {
              puVar10 = &DAT_14045dd10;
            }
            else {
              puVar10 = (undefined8 *)puVar12[2];
            }
            lVar5 = FUN_1403cbf00(puVar10,local_270);
            uVar19 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
            puVar6 = (ulonglong *)_calloc_base(1,uVar19 * 0x40 + 0x20);
            puVar4 = local_268;
            param_2 = local_260;
            param_4 = local_250;
            param_5 = local_248;
            uVar18 = local_278;
            if (puVar6 == (ulonglong *)0x0) goto LAB_14036bf06;
            uVar8 = 0;
            local_220[0] = 0;
            puVar15 = puVar6 + 4;
            local_210 = 0;
            local_20c = 0xffffffff;
            local_208 = 0;
            uVar18 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
            local_218 = puVar15;
            if (uVar18 != 0) {
              do {
                if ((uint)uVar8 < (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5)) {
                  pbVar7 = (byte *)(lVar5 + (uVar8 + 3) * 2);
                }
                else {
                  pbVar7 = (byte *)&DAT_14045dd10;
                }
                uVar13 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
                if (uVar13 == 0) {
                  puVar10 = &DAT_14045dd10;
                }
                else {
                  puVar10 = (undefined8 *)((ulonglong)uVar13 + lVar5);
                }
                FUN_140377410(puVar10,local_274,local_220);
                uVar13 = (uint)uVar8 + 1;
                uVar8 = (ulonglong)uVar13;
              } while (uVar13 < uVar18);
            }
            lVar5 = local_230;
            puVar10 = local_238;
            uVar16 = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar17 = puVar15 + (ulonglong)uVar19 * 8;
            uVar8 = uVar16;
            uVar11 = uVar16;
            uVar14 = uVar16;
            for (; puVar15 != puVar17; puVar15 = puVar15 + 8) {
              uVar8 = uVar8 | puVar15[5];
              *puVar6 = uVar8;
              uVar11 = uVar11 | puVar15[6];
              puVar6[1] = uVar11;
              uVar14 = uVar14 | puVar15[7];
              puVar6[2] = uVar14;
            }
            *(uint *)(puVar6 + 3) = uVar19;
            *(uint *)((longlong)puVar6 + 0x1c) = local_20c;
            uVar13 = 0;
            uVar18 = local_20c;
            if (uVar19 != 0) {
              do {
                if (uVar13 != uVar18) {
                  puVar6[(ulonglong)uVar13 * 8 + 6] = puVar6[(ulonglong)uVar13 * 8 + 5];
                  uVar18 = *(uint *)((longlong)puVar6 + 0x1c);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar19);
            }
            LOCK();
            bVar20 = *(longlong *)(local_238[2] + local_230) == 0;
            if (bVar20) {
              *(longlong *)(local_238[2] + local_230) = (longlong)puVar6;
            }
            UNLOCK();
            param_4 = local_250;
            if (bVar20) break;
            if ((int)puVar6[3] != 0) {
              do {
                thunk_FUN_1402d9040(puVar6[(uVar16 + 1) * 8]);
                uVar18 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar18;
              } while (uVar18 < (uint)puVar6[3]);
            }
            thunk_FUN_1402d9040(puVar6);
            param_4 = local_250;
            puVar6 = *(ulonglong **)(lVar5 + puVar10[2]);
          }
          param_5 = local_248;
          puVar2 = local_258;
          uVar19 = local_270;
          if (*(longlong *)(local_248 + 0xe8) != 0) {
            local_280 = (uint)(byte)local_258[4];
            local_288 = (uint)*(byte *)((longlong)local_258 + 9);
            local_290 = CONCAT44(local_290._4_4_,(uint)(byte)local_258[5]);
            local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)local_258 + 0xb));
            cVar3 = FUN_1403ec530(local_248,param_4,"start lookup %u feature \'%c%c%c%c\'");
            puVar4 = local_268;
            param_2 = local_260;
            uVar18 = local_278;
            if (cVar3 == '\0') goto LAB_14036bf06;
          }
          if ((((*puVar6 & *(ulonglong *)(param_5 + 0xb8)) == 0) ||
              ((puVar6[1] & *(ulonglong *)(param_5 + 0xc0)) == 0)) ||
             ((puVar6[2] & *(ulonglong *)(param_5 + 200)) == 0)) {
            puVar4 = local_268;
            param_2 = local_260;
            uVar18 = local_278;
            if (*(longlong *)(param_5 + 0xe8) == 0) goto LAB_14036bf06;
            local_280 = (uint)(byte)puVar2[4];
            local_288 = (uint)*(byte *)((longlong)puVar2 + 9);
            local_290 = CONCAT44(local_290._4_4_,(uint)(byte)puVar2[5]);
            local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)puVar2 + 0xb));
            FUN_1403ec530(param_5,param_4,
                          "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches");
          }
          else {
            iVar1 = *(int *)(puVar2 + 2);
            local_a0 = 0xffffffff;
            local_9c = 0;
            local_aa = (byte)puVar2[1] >> 1 & 1;
            local_ab = (byte)puVar2[1] & 1;
            local_a8 = (byte)puVar2[1] >> 2 & 1;
            local_a9 = (byte)puVar2[1] >> 3 & 1;
            puVar10 = &DAT_14045dd10;
            if (*(undefined8 **)*local_260 != (undefined8 *)0x0) {
              puVar10 = *(undefined8 **)*local_260;
            }
            puVar12 = &DAT_14045dd10;
            if (3 < *(uint *)(puVar10 + 3)) {
              puVar12 = (undefined8 *)puVar10[2];
            }
            local_bc = iVar1;
            local_b8 = uVar19;
            lVar9 = FUN_1403cbf00(puVar12,uVar19);
            lVar5 = local_138;
            if ((*(int *)(local_138 + 0x60) != 0) && (iVar1 != 0)) {
              uVar18 = (uint)*(byte *)(lVar9 + 2) * 0x100 + (uint)*(byte *)(lVar9 + 3);
              if ((uVar18 & 0x10) != 0) {
                uVar8 = (ulonglong)CONCAT11(*(undefined1 *)(lVar9 + 4),*(undefined1 *)(lVar9 + 5));
                uVar18 = ((uint)*(byte *)(lVar9 + 7 + uVar8 * 2) +
                         (uint)*(byte *)(lVar9 + 6 + uVar8 * 2) * 0x100) * 0x10000 + uVar18;
              }
              local_b4 = uVar18;
              if (((uVar18 & 0x10) != 0) &&
                 (local_b4 = uVar18 & 0xffffffef, uVar18 >> 0x10 < *(uint *)(local_e0 + 0xc))) {
                local_b4 = uVar18;
              }
              FUN_1403e3b80(local_1d8);
              *(undefined4 *)(lVar5 + 0x5c) = 0;
              FUN_1403af6a0(local_1d8,puVar6);
            }
          }
          puVar4 = local_268;
          param_2 = local_260;
          uVar18 = local_278;
          if (*(longlong *)(param_5 + 0xe8) != 0) {
            local_280 = (uint)(byte)puVar2[4];
            local_288 = (uint)*(byte *)((longlong)puVar2 + 9);
            local_290 = CONCAT44(local_290._4_4_,(uint)(byte)puVar2[5]);
            local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)puVar2 + 0xb));
            FUN_1403ec530(param_5,param_4,"end lookup %u feature \'%c%c%c%c\'");
            puVar4 = local_268;
            param_2 = local_260;
            uVar18 = local_278;
          }
        }
LAB_14036bf06:
        local_278 = uVar18 + 1;
        uVar8 = (ulonglong)local_278;
        param_1 = local_240;
        param_3 = local_228;
        uVar18 = local_26c;
      } while (local_278 < *puVar4);
    }
    if (*(code **)(puVar4 + 2) != (code *)0x0) {
      cVar3 = (**(code **)(puVar4 + 2))(param_3,param_4,param_5);
      uVar8 = 0;
      if (cVar3 != '\0') {
        *(undefined8 *)(param_5 + 0xb8) = 0;
        *(undefined8 *)(param_5 + 0xc0) = 0;
        *(undefined8 *)(param_5 + 200) = 0;
        puVar4 = *(uint **)(param_5 + 0x70);
        uVar11 = uVar8;
        uVar14 = uVar8;
        uVar16 = uVar8;
        if (*(uint *)(param_5 + 0x60) != 0) {
          do {
            uVar19 = *puVar4;
            uVar8 = uVar8 | 1L << (uVar19 >> 4 & 0x3f);
            *(ulonglong *)(param_5 + 0xb8) = uVar8;
            uVar11 = uVar11 | 1L << (uVar19 & 0x3f);
            *(ulonglong *)(param_5 + 0xc0) = uVar11;
            uVar14 = uVar14 | 1L << (uVar19 >> 6 & 0x3f);
            *(ulonglong *)(param_5 + 200) = uVar14;
            puVar4 = puVar4 + 5;
            uVar19 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar19;
          } while (uVar19 < *(uint *)(param_5 + 0x60));
        }
      }
    }
    local_26c = uVar18 + 1;
    uVar11 = (ulonglong)local_26c;
    uVar8 = (ulonglong)local_278;
    param_2 = local_260;
    if (*(uint *)(param_1 + 0x54) <= local_26c) goto LAB_14036bfd9;
LAB_14036ba45:
    puVar4 = (uint *)(uVar11 * 0x10 + *(longlong *)(param_1 + 0x58));
  } while( true );
}

