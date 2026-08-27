// Function: FUN_14036c080
// Addr: 14036c080
// Size: 1969 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14036c080(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort *puVar1;
  char cVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
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
  longlong local_270;
  undefined1 local_268 [4];
  uint local_264;
  uint local_260;
  uint *local_258;
  ushort *local_250;
  longlong local_248;
  undefined8 *local_240;
  longlong local_238;
  undefined8 *local_230;
  longlong local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  ulonglong *local_210;
  undefined4 local_208;
  uint local_204;
  undefined4 local_200;
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
  local_270 = param_4;
  local_240 = param_2;
  local_238 = param_1;
  local_220 = param_3;
  local_290 = FUN_1403cea00(param_4 + 0xb0);
  local_298 = *(undefined8 *)*param_2;
  FUN_140394db0(local_1d8,0,param_4);
  local_f0 = FUN_14037c690;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_14036c72c:
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
  local_260 = 0;
  uVar10 = uVar7;
  if (*(int *)(param_1 + 0x44) != 0) goto LAB_14036c141;
  puVar3 = (uint *)&DAT_14045dd10;
  do {
    uVar18 = (uint)uVar10;
    local_258 = puVar3;
    if ((uint)uVar7 < *puVar3) {
      do {
        if ((uint)uVar7 < *(uint *)(param_1 + 0x24)) {
          local_250 = (ushort *)(*(longlong *)(param_1 + 0x28) + uVar7 * 0xc);
          puVar3 = local_258;
          uVar18 = local_278;
        }
        else {
          local_250 = (ushort *)&DAT_14045dd10;
          uVar18 = (uint)uVar7;
        }
        local_264 = (uint)*local_250;
        local_230 = (undefined8 *)*param_2;
        if (local_264 < *(uint *)(local_230 + 1)) {
          local_228 = (ulonglong)*local_250 * 8;
          puVar5 = *(ulonglong **)(local_228 + local_230[2]);
          puVar9 = local_230;
          while (puVar5 == (ulonglong *)0x0) {
            puVar11 = &DAT_14045dd10;
            if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
              puVar11 = (undefined8 *)*puVar9;
            }
            if (*(uint *)(puVar11 + 3) < 4) {
              puVar9 = &DAT_14045dd10;
            }
            else {
              puVar9 = (undefined8 *)puVar11[2];
            }
            lVar4 = FUN_1403cbf00(puVar9,local_264);
            uVar19 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
            puVar5 = (ulonglong *)_calloc_base(1,uVar19 * 0x40 + 0x20);
            puVar3 = local_258;
            param_4 = local_270;
            param_5 = local_248;
            uVar18 = local_278;
            if (puVar5 == (ulonglong *)0x0) goto LAB_14036c651;
            uVar7 = 0;
            local_218[0] = 0;
            puVar15 = puVar5 + 4;
            local_208 = 0;
            local_204 = 0xffffffff;
            local_200 = 0;
            uVar18 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
            local_210 = puVar15;
            if (uVar18 != 0) {
              do {
                if ((uint)uVar7 < (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5)) {
                  pbVar6 = (byte *)(lVar4 + (uVar7 + 3) * 2);
                }
                else {
                  pbVar6 = (byte *)&DAT_14045dd10;
                }
                uVar12 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
                if (uVar12 == 0) {
                  puVar9 = &DAT_14045dd10;
                }
                else {
                  puVar9 = (undefined8 *)((ulonglong)uVar12 + lVar4);
                }
                FUN_140377740(puVar9,local_268,local_218);
                uVar12 = (uint)uVar7 + 1;
                uVar7 = (ulonglong)uVar12;
              } while (uVar12 < uVar18);
            }
            lVar4 = local_228;
            puVar9 = local_230;
            uVar16 = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar17 = puVar15 + (ulonglong)uVar19 * 8;
            uVar7 = uVar16;
            uVar10 = uVar16;
            uVar14 = uVar16;
            for (; puVar15 != puVar17; puVar15 = puVar15 + 8) {
              uVar7 = uVar7 | puVar15[5];
              *puVar5 = uVar7;
              uVar10 = uVar10 | puVar15[6];
              puVar5[1] = uVar10;
              uVar14 = uVar14 | puVar15[7];
              puVar5[2] = uVar14;
            }
            *(uint *)(puVar5 + 3) = uVar19;
            *(uint *)((longlong)puVar5 + 0x1c) = local_204;
            uVar12 = 0;
            uVar18 = local_204;
            if (uVar19 != 0) {
              do {
                if (uVar12 != uVar18) {
                  puVar5[(ulonglong)uVar12 * 8 + 6] = puVar5[(ulonglong)uVar12 * 8 + 5];
                  uVar18 = *(uint *)((longlong)puVar5 + 0x1c);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar19);
            }
            LOCK();
            bVar20 = *(longlong *)(local_230[2] + local_228) == 0;
            if (bVar20) {
              *(longlong *)(local_230[2] + local_228) = (longlong)puVar5;
            }
            UNLOCK();
            param_5 = local_248;
            if (bVar20) break;
            if ((int)puVar5[3] != 0) {
              do {
                thunk_FUN_1402d9040(puVar5[(uVar16 + 1) * 8]);
                uVar18 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar18;
              } while (uVar18 < (uint)puVar5[3]);
            }
            thunk_FUN_1402d9040(puVar5);
            param_5 = local_248;
            puVar5 = *(ulonglong **)(lVar4 + puVar9[2]);
          }
          puVar1 = local_250;
          uVar19 = local_264;
          if (*(longlong *)(param_5 + 0xe8) != 0) {
            local_280 = (uint)(byte)local_250[4];
            local_288 = (uint)*(byte *)((longlong)local_250 + 9);
            local_290 = CONCAT44(local_290._4_4_,(uint)(byte)local_250[5]);
            local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)local_250 + 0xb));
            cVar2 = FUN_1403ec530(param_5,local_270,"start lookup %u feature \'%c%c%c%c\'");
            puVar3 = local_258;
            param_4 = local_270;
            uVar18 = local_278;
            if (cVar2 == '\0') goto LAB_14036c651;
          }
          param_4 = local_270;
          if ((((*puVar5 & *(ulonglong *)(param_5 + 0xb8)) == 0) ||
              ((puVar5[1] & *(ulonglong *)(param_5 + 0xc0)) == 0)) ||
             ((puVar5[2] & *(ulonglong *)(param_5 + 200)) == 0)) {
            if (*(longlong *)(param_5 + 0xe8) != 0) {
              local_280 = (uint)(byte)puVar1[4];
              local_288 = (uint)*(byte *)((longlong)puVar1 + 9);
              local_290 = CONCAT44(local_290._4_4_,(uint)(byte)puVar1[5]);
              local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)puVar1 + 0xb));
              FUN_1403ec530(param_5,local_270,
                            "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches");
            }
          }
          else {
            iVar13 = *(int *)(puVar1 + 2);
            local_a0 = 0xffffffff;
            local_9c = 0;
            local_aa = (byte)puVar1[1] >> 1 & 1;
            local_ab = (byte)puVar1[1] & 1;
            local_a8 = (byte)puVar1[1] >> 2 & 1;
            local_a9 = (byte)puVar1[1] >> 3 & 1;
            puVar9 = &DAT_14045dd10;
            if (*(undefined8 **)*local_240 != (undefined8 *)0x0) {
              puVar9 = *(undefined8 **)*local_240;
            }
            puVar11 = &DAT_14045dd10;
            if (3 < *(uint *)(puVar9 + 3)) {
              puVar11 = (undefined8 *)puVar9[2];
            }
            local_bc = iVar13;
            local_b8 = uVar19;
            pbVar6 = (byte *)FUN_1403cbf00(puVar11,uVar19);
            lVar4 = local_138;
            param_4 = local_270;
            if ((*(int *)(local_138 + 0x60) != 0) && (iVar13 != 0)) {
              local_b4 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3];
              if (((local_b4 & 0x10) != 0) &&
                 ((uVar18 = local_b4 +
                            ((uint)pbVar6[(ulonglong)CONCAT11(pbVar6[4],pbVar6[5]) * 2 + 6] * 0x100
                            + (uint)pbVar6[(ulonglong)CONCAT11(pbVar6[4],pbVar6[5]) * 2 + 7]) *
                            0x10000, local_b4 = uVar18, (uVar18 & 0x10) != 0 &&
                  (local_b4 = uVar18 & 0xffffffef, uVar18 >> 0x10 < *(uint *)(local_e0 + 0xc))))) {
                local_b4 = uVar18;
              }
              FUN_1403e3b80();
              iVar13 = (uint)pbVar6[1] + (uint)*pbVar6 * 0x100;
              if (iVar13 == 7) {
                pbVar8 = (byte *)&DAT_14045dd10;
                if ((uint)pbVar6[5] + (uint)pbVar6[4] * 0x100 != 0) {
                  pbVar8 = pbVar6 + 6;
                }
                uVar18 = (uint)pbVar8[1] + (uint)*pbVar8 * 0x100;
                if (uVar18 == 0) {
                  pbVar6 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar6 = pbVar6 + uVar18;
                }
                if ((uint)pbVar6[1] + (uint)*pbVar6 * 0x100 == 1) {
                  bVar20 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3] == 8;
                }
                else {
                  bVar20 = false;
                }
              }
              else {
                bVar20 = iVar13 == 8;
              }
              if (bVar20) {
                *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x60) + -1;
                FUN_1403ad650(local_1d8,puVar5);
                param_4 = local_270;
              }
              else {
                *(undefined2 *)(lVar4 + 0x59) = 1;
                *(undefined4 *)(lVar4 + 100) = 0;
                *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x70);
                *(undefined4 *)(lVar4 + 0x5c) = 0;
                FUN_1403af6a0(local_1d8);
                FUN_14040c900(lVar4);
                param_4 = local_270;
              }
            }
          }
          puVar3 = local_258;
          uVar18 = local_278;
          if (*(longlong *)(param_5 + 0xe8) != 0) {
            local_280 = (uint)(byte)puVar1[4];
            local_288 = (uint)*(byte *)((longlong)puVar1 + 9);
            local_290 = CONCAT44(local_290._4_4_,(uint)(byte)puVar1[5]);
            local_298 = CONCAT44(local_298._4_4_,(uint)*(byte *)((longlong)puVar1 + 0xb));
            FUN_1403ec530(param_5,param_4,"end lookup %u feature \'%c%c%c%c\'");
            puVar3 = local_258;
            uVar18 = local_278;
          }
        }
LAB_14036c651:
        local_278 = uVar18 + 1;
        uVar7 = (ulonglong)local_278;
        param_2 = local_240;
        param_1 = local_238;
        param_3 = local_220;
        uVar18 = local_260;
      } while (local_278 < *puVar3);
    }
    if (*(code **)(puVar3 + 2) != (code *)0x0) {
      cVar2 = (**(code **)(puVar3 + 2))(param_3,param_4,param_5);
      uVar7 = 0;
      if (cVar2 != '\0') {
        *(undefined8 *)(param_5 + 0xb8) = 0;
        *(undefined8 *)(param_5 + 0xc0) = 0;
        *(undefined8 *)(param_5 + 200) = 0;
        puVar3 = *(uint **)(param_5 + 0x70);
        uVar10 = uVar7;
        uVar14 = uVar7;
        uVar16 = uVar7;
        if (*(uint *)(param_5 + 0x60) != 0) {
          do {
            uVar19 = *puVar3;
            uVar7 = uVar7 | 1L << (uVar19 >> 4 & 0x3f);
            *(ulonglong *)(param_5 + 0xb8) = uVar7;
            uVar10 = uVar10 | 1L << (uVar19 & 0x3f);
            *(ulonglong *)(param_5 + 0xc0) = uVar10;
            uVar14 = uVar14 | 1L << (uVar19 >> 6 & 0x3f);
            *(ulonglong *)(param_5 + 200) = uVar14;
            puVar3 = puVar3 + 5;
            uVar19 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar19;
          } while (uVar19 < *(uint *)(param_5 + 0x60));
        }
      }
    }
    local_260 = uVar18 + 1;
    uVar10 = (ulonglong)local_260;
    uVar7 = (ulonglong)local_278;
    param_4 = local_270;
    if (*(uint *)(param_1 + 0x44) <= local_260) goto LAB_14036c72c;
LAB_14036c141:
    puVar3 = (uint *)(uVar10 * 0x10 + *(longlong *)(param_1 + 0x48));
  } while( true );
}

