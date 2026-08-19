// Function: FUN_1403d5e00
// Addr: 1403d5e00
// Size: 1348 bytes


void FUN_1403d5e00(longlong param_1,ulonglong *param_2,uint param_3,uint *param_4,uint param_5,
                  int *param_6,uint param_7)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  bool bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  ulonglong *local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 extraout_XMM0_Qb;
  
  local_50 = DAT_1404dc110 ^ (ulonglong)auStack_e8;
  local_88 = *param_2;
  local_b8 = param_5;
  local_a8 = param_7;
  piVar8 = (int *)FUN_1403c5910(local_88 + 0x60);
  if (piVar8[1] == 0) {
    uVar15 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uVar17 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 0x10);
    if (puVar16 != (undefined8 *)0x0) {
      uVar17 = *puVar16;
    }
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x98),&local_80,uVar17);
    iVar6 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) {
      iVar5 = (int)((double)iVar6 * DAT_140471b48);
      iVar6 = iVar5 - iVar6;
    }
    else {
      iVar5 = -*(int *)(param_1 + 0x44);
      if (-1 < iVar6) {
        iVar5 = *(int *)(param_1 + 0x44);
      }
      iVar5 = (int)local_80 + iVar5;
      iVar6 = local_80._4_4_;
    }
    if (param_3 != 0) {
      do {
        *param_6 = iVar6 - iVar5;
        uVar15 = uVar15 + 1;
        param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      } while (uVar15 < param_3);
    }
    goto LAB_1403d63f3;
  }
  puVar16 = local_90;
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_1403b3250(param_2,param_1);
    local_98 = param_2 + 4;
    uVar9 = func_0x0001403a28c0(local_98);
    uVar14 = local_88;
    param_5 = local_b8;
    puVar16 = local_90;
    if (uVar9 != 0) {
      puVar16 = &DAT_14045dde0;
      if (*(undefined8 **)(piVar8 + 8) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)(piVar8 + 8);
      }
      if (*(uint *)(puVar16 + 3) < 0x18) {
        pbVar13 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar13 = (byte *)puVar16[2];
      }
      if ((uint)pbVar13[1] + (uint)*pbVar13 * 0x100 != 0) {
        uVar15 = (uint)pbVar13[5] * 0x10000 + (uint)pbVar13[6] * 0x100 +
                 (uint)pbVar13[4] * 0x1000000 + (uint)pbVar13[7];
        if (uVar15 == 0) {
          pbVar13 = (byte *)&DAT_14045dde0;
        }
        else {
          pbVar13 = pbVar13 + uVar15;
        }
        local_90 = (undefined8 *)FUN_1403a2a70(local_98,pbVar13);
        fVar2 = DAT_140492790;
        local_a8 = 0;
        uVar14 = (ulonglong)param_7;
        if (param_3 != 0) {
          do {
            local_88 = uVar14;
            uVar15 = *(uint *)(uVar9 + (ulonglong)(*param_4 & 0xff) * 4);
            local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
            if ((uVar15 == 0xffffffff) || (((uVar15 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
              uVar15 = *param_4;
              local_b0 = CONCAT44(local_b0._4_4_,uVar15);
              if (uVar15 < (uint)piVar8[1]) {
                local_a4 = *piVar8 - 1U;
                puVar10 = (uint *)&local_b0;
                if (*piVar8 - 1U < uVar15) {
                  puVar10 = &local_a4;
                }
                puVar16 = &DAT_14045dde0;
                if (*(undefined8 **)(piVar8 + 6) != (undefined8 *)0x0) {
                  puVar16 = *(undefined8 **)(piVar8 + 6);
                }
                local_b0 = CONCAT44(local_b0._4_4_,
                                    (uint)*(byte *)(puVar16[2] + 1 + (ulonglong)*puVar10 * 4) +
                                    (uint)*(byte *)(puVar16[2] + (ulonglong)*puVar10 * 4) * 0x100);
              }
              else if (piVar8[2] == 0) {
                local_b0 = CONCAT44(local_b0._4_4_,piVar8[4]);
              }
              else {
                local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
              }
              puVar16 = &DAT_14045dde0;
              if (*(undefined8 **)(piVar8 + 8) != (undefined8 *)0x0) {
                puVar16 = *(undefined8 **)(piVar8 + 8);
              }
              if (*(uint *)(puVar16 + 3) < 0x18) {
                puVar16 = &DAT_14045dde0;
              }
              else {
                puVar16 = (undefined8 *)puVar16[2];
              }
              uVar12 = (uint)*(byte *)((longlong)puVar16 + 9) * 0x10000 +
                       (uint)*(byte *)((longlong)puVar16 + 10) * 0x100 +
                       (uint)*(byte *)(puVar16 + 1) * 0x1000000 +
                       (uint)*(byte *)((longlong)puVar16 + 0xb);
              if (uVar12 == 0) {
                puVar11 = &DAT_14045dde0;
              }
              else {
                puVar11 = (undefined8 *)((ulonglong)uVar12 + (longlong)puVar16);
              }
              uVar7 = FUN_1403eb0c0(puVar11,uVar15);
              uVar15 = (uint)*(byte *)((longlong)puVar16 + 5) * 0x10000 +
                       (uint)*(byte *)((longlong)puVar16 + 6) * 0x100 +
                       (uint)*(byte *)((longlong)puVar16 + 4) * 0x1000000 +
                       (uint)*(byte *)((longlong)puVar16 + 7);
              if (uVar15 == 0) {
                puVar16 = &DAT_14045dde0;
              }
              else {
                puVar16 = (undefined8 *)((ulonglong)uVar15 + (longlong)puVar16);
              }
              local_c8 = local_90;
              auVar20._0_8_ =
                   FUN_1403c7530(puVar16,uVar7,*(undefined8 *)(param_1 + 0x80),
                                 *(undefined4 *)(param_1 + 0x7c));
              auVar20._8_8_ = extraout_XMM0_Qb;
              auVar21._4_12_ = auVar20._4_12_;
              auVar21._0_4_ = (float)auVar20._0_8_ + fVar2;
              fVar19 = (float)FUN_14041a690(auVar21._0_8_);
              uVar15 = *param_4;
              fVar19 = fVar19 + (float)(local_b0 & 0xffffffff);
              fVar22 = 0.0;
              if (0.0 <= fVar19) {
                fVar22 = fVar19;
              }
              uVar14 = (ulonglong)fVar22;
              if ((uVar15 < 0x1000000) && ((uVar14 & 0xffff0000) == 0)) {
                *(uint *)(uVar9 + (ulonglong)(uVar15 & 0xff) * 4) =
                     (uVar15 & 0xffff00) << 8 | (uint)uVar14;
              }
            }
            else {
              uVar14 = (ulonglong)(uVar15 & 0xffff);
            }
            *param_6 = (int)((ulonglong)
                             ((longlong)(short)-(short)uVar14 * *(longlong *)(param_1 + 0x60) +
                             0x8000) >> 0x10);
            param_6 = (int *)((longlong)param_6 + local_88);
            param_4 = (uint *)((longlong)param_4 + (ulonglong)local_b8);
            local_a8 = local_a8 + 1;
            uVar14 = local_88;
          } while (local_a8 < param_3);
        }
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          bVar18 = local_98[1] == 0;
          if (bVar18) {
            local_98[1] = (ulonglong)local_90;
          }
          UNLOCK();
          if ((!bVar18) && (local_90 != &DAT_14045dde0)) {
            func_0x0001402bf8e0(local_90);
            return;
          }
        }
        LOCK();
        bVar18 = *local_98 == 0;
        if (bVar18) {
          *local_98 = uVar9;
        }
        UNLOCK();
joined_r0x0001403d61fb:
        if (!bVar18) {
          func_0x0001402bf8e0(uVar9);
          return;
        }
        goto LAB_1403d63f3;
      }
      local_88 = FUN_1403c5370(local_88 + 0xa8);
      cVar3 = FUN_1403d0c50(local_88);
      if (cVar3 == '\0') {
        LOCK();
        bVar18 = *local_98 == 0;
        if (bVar18) {
          *local_98 = uVar9;
        }
        UNLOCK();
        param_5 = local_b8;
        puVar16 = local_90;
      }
      else {
        local_b0 = FUN_1403c52c0(uVar14 + 0x78);
        local_90 = (undefined8 *)func_0x0001403a2a20(local_b0);
        if (local_90 != (undefined8 *)0x0) {
          local_a0 = param_2 + 8;
          puVar11 = (undefined8 *)func_0x0001403a2970(local_a0,local_88);
          puVar16 = local_90;
          uVar15 = 0;
          if (param_3 != 0) {
            do {
              uVar12 = *(uint *)(uVar9 + (ulonglong)(*param_4 & 0xff) * 4);
              local_a4 = 0xffffffff;
              if ((uVar12 == 0xffffffff) || (((uVar12 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
                local_c8 = puVar16;
                local_c0 = puVar11;
                uVar12 = FUN_1403c5f20(local_b0,*param_4,param_1,1);
                uVar1 = *param_4;
                if ((uVar1 < 0x1000000) && ((uVar12 & 0xffff0000) == 0)) {
                  *(uint *)(uVar9 + (ulonglong)(uVar1 & 0xff) * 4) =
                       (uVar1 & 0xffff00) << 8 | uVar12;
                }
              }
              else {
                uVar12 = uVar12 & 0xffff;
              }
              uVar15 = uVar15 + 1;
              *param_6 = (int)((ulonglong)
                               ((longlong)(short)-(short)uVar12 * *(longlong *)(param_1 + 0x60) +
                               0x8000) >> 0x10);
              param_4 = (uint *)((longlong)param_4 + (ulonglong)local_b8);
              param_6 = (int *)((longlong)param_6 + (ulonglong)local_a8);
            } while (uVar15 < param_3);
          }
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            uVar14 = *local_a0;
            if (uVar14 == 0) {
              *local_a0 = (ulonglong)puVar11;
            }
            UNLOCK();
            if ((uVar14 != 0) && (puVar11 != &DAT_14045dde0)) {
              func_0x0001402bf8e0(puVar11);
            }
          }
          LOCK();
          bVar18 = *(longlong *)(local_b0 + 0x30) == 0;
          if (bVar18) {
            *(longlong *)(local_b0 + 0x30) = (longlong)puVar16;
          }
          UNLOCK();
          if (!bVar18) {
            FUN_1403971e0(puVar16);
            func_0x0001402bf8e0(puVar16);
            return;
          }
          LOCK();
          bVar18 = *local_98 == 0;
          if (bVar18) {
            *local_98 = uVar9;
          }
          UNLOCK();
          goto joined_r0x0001403d61fb;
        }
        LOCK();
        bVar18 = *local_98 == 0;
        if (bVar18) {
          *local_98 = uVar9;
        }
        UNLOCK();
        param_5 = local_b8;
        puVar16 = local_90;
        local_90 = (undefined8 *)0x0;
      }
      local_b8 = param_5;
      if (!bVar18) {
        func_0x0001402bf8e0(uVar9);
        return;
      }
    }
  }
  local_90 = puVar16;
  uVar15 = 0;
  if (param_3 != 0) {
    uVar14 = (ulonglong)local_a8;
    do {
      sVar4 = FUN_1403c60c0(piVar8,*param_4);
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      uVar15 = uVar15 + 1;
      *param_6 = (int)((ulonglong)((longlong)-sVar4 * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                      0x10);
      param_6 = (int *)((longlong)param_6 + uVar14);
    } while (uVar15 < param_3);
  }
LAB_1403d63f3:
  func_0x0001402ed2f0(local_50 ^ (ulonglong)auStack_e8);
  return;
}

