// Function: FUN_1403d5d30
// Addr: 1403d5d30
// Size: 1566 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1403d5d30(longlong param_1,ulonglong *param_2,uint param_3,uint *param_4,uint param_5,
                   uint *param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  ulonglong *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  bool bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
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
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  local_88 = *param_2;
  local_b8 = param_5;
  local_a8 = param_7;
  piVar10 = (int *)FUN_1403c5840(local_88 + 0x60);
  if (piVar10[1] == 0) {
    uVar17 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uVar19 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 0x10);
    if (puVar18 != (undefined8 *)0x0) {
      uVar19 = *puVar18;
    }
    iVar7 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x98),&local_80,uVar19);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar7 == 0) {
      iVar7 = (int)((double)iVar1 * DAT_140471a78);
      local_80._4_4_ = iVar7 - iVar1;
    }
    else {
      iVar7 = -*(int *)(param_1 + 0x44);
      if (-1 < iVar1) {
        iVar7 = *(int *)(param_1 + 0x44);
      }
      iVar7 = (int)local_80 + iVar7;
    }
    uVar8 = local_80._4_4_ - iVar7;
    if (param_3 == 0) {
      return (int *)(ulonglong)uVar8;
    }
    do {
      *param_6 = uVar8;
      uVar17 = uVar17 + 1;
      param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7);
    } while (uVar17 < param_3);
    return (int *)(ulonglong)uVar8;
  }
  piVar12 = piVar10;
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_1403b3180(param_2,param_1);
    local_98 = param_2 + 4;
    uVar11 = FUN_1403a27f0(local_98);
    uVar16 = local_88;
    piVar12 = (int *)0x0;
    param_5 = local_b8;
    if (uVar11 != 0) {
      puVar18 = &DAT_14045dd10;
      if (*(undefined8 **)(piVar10 + 8) != (undefined8 *)0x0) {
        puVar18 = *(undefined8 **)(piVar10 + 8);
      }
      if (*(uint *)(puVar18 + 3) < 0x18) {
        pbVar15 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar15 = (byte *)puVar18[2];
      }
      if ((uint)pbVar15[1] + (uint)*pbVar15 * 0x100 != 0) {
        uVar17 = (uint)pbVar15[5] * 0x10000 + (uint)pbVar15[6] * 0x100 +
                 (uint)pbVar15[4] * 0x1000000 + (uint)pbVar15[7];
        if (uVar17 == 0) {
          pbVar15 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar15 = pbVar15 + uVar17;
        }
        local_90 = (undefined8 *)FUN_1403a29a0(local_98,pbVar15);
        fVar3 = DAT_1404926c0;
        local_a8 = 0;
        uVar16 = (ulonglong)param_7;
        if (param_3 != 0) {
          do {
            local_88 = uVar16;
            uVar17 = *(uint *)(uVar11 + (ulonglong)(*param_4 & 0xff) * 4);
            local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
            if ((uVar17 == 0xffffffff) || (((uVar17 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
              uVar17 = *param_4;
              local_b0 = CONCAT44(local_b0._4_4_,uVar17);
              if (uVar17 < (uint)piVar10[1]) {
                local_a4 = *piVar10 - 1U;
                puVar13 = (uint *)&local_b0;
                if (*piVar10 - 1U < uVar17) {
                  puVar13 = &local_a4;
                }
                puVar18 = &DAT_14045dd10;
                if (*(undefined8 **)(piVar10 + 6) != (undefined8 *)0x0) {
                  puVar18 = *(undefined8 **)(piVar10 + 6);
                }
                local_b0 = CONCAT44(local_b0._4_4_,
                                    (uint)*(byte *)(puVar18[2] + 1 + (ulonglong)*puVar13 * 4) +
                                    (uint)*(byte *)(puVar18[2] + (ulonglong)*puVar13 * 4) * 0x100);
              }
              else if (piVar10[2] == 0) {
                local_b0 = CONCAT44(local_b0._4_4_,piVar10[4]);
              }
              else {
                local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
              }
              puVar18 = &DAT_14045dd10;
              if (*(undefined8 **)(piVar10 + 8) != (undefined8 *)0x0) {
                puVar18 = *(undefined8 **)(piVar10 + 8);
              }
              if (*(uint *)(puVar18 + 3) < 0x18) {
                puVar18 = &DAT_14045dd10;
              }
              else {
                puVar18 = (undefined8 *)puVar18[2];
              }
              uVar8 = (uint)*(byte *)((longlong)puVar18 + 9) * 0x10000 +
                      (uint)*(byte *)((longlong)puVar18 + 10) * 0x100 +
                      (uint)*(byte *)(puVar18 + 1) * 0x1000000 +
                      (uint)*(byte *)((longlong)puVar18 + 0xb);
              if (uVar8 == 0) {
                puVar14 = &DAT_14045dd10;
              }
              else {
                puVar14 = (undefined8 *)((ulonglong)uVar8 + (longlong)puVar18);
              }
              uVar9 = FUN_1403eaff0(puVar14,uVar17);
              uVar17 = (uint)*(byte *)((longlong)puVar18 + 5) * 0x10000 +
                       (uint)*(byte *)((longlong)puVar18 + 6) * 0x100 +
                       (uint)*(byte *)((longlong)puVar18 + 4) * 0x1000000 +
                       (uint)*(byte *)((longlong)puVar18 + 7);
              if (uVar17 == 0) {
                puVar18 = &DAT_14045dd10;
              }
              else {
                puVar18 = (undefined8 *)((ulonglong)uVar17 + (longlong)puVar18);
              }
              local_c8 = local_90;
              auVar22._0_8_ =
                   FUN_1403c7460(puVar18,uVar9,*(undefined8 *)(param_1 + 0x80),
                                 *(undefined4 *)(param_1 + 0x7c));
              auVar22._8_8_ = extraout_XMM0_Qb;
              auVar23._4_12_ = auVar22._4_12_;
              auVar23._0_4_ = (float)auVar22._0_8_ + fVar3;
              fVar21 = (float)FUN_14041a5c0(auVar23._0_8_);
              uVar17 = *param_4;
              fVar21 = fVar21 + (float)(local_b0 & 0xffffffff);
              fVar24 = 0.0;
              if (0.0 <= fVar21) {
                fVar24 = fVar21;
              }
              uVar16 = (ulonglong)fVar24;
              if ((uVar17 < 0x1000000) && ((uVar16 & 0xffff0000) == 0)) {
                *(uint *)(uVar11 + (ulonglong)(uVar17 & 0xff) * 4) =
                     (uVar17 & 0xffff00) << 8 | (uint)uVar16;
              }
            }
            else {
              uVar16 = (ulonglong)(uVar17 & 0xffff);
            }
            *param_6 = (uint)((ulonglong)
                              ((longlong)(short)-(short)uVar16 * *(longlong *)(param_1 + 0x60) +
                              0x8000) >> 0x10);
            param_6 = (uint *)((longlong)param_6 + local_88);
            param_4 = (uint *)((longlong)param_4 + (ulonglong)local_b8);
            local_a8 = local_a8 + 1;
            uVar16 = local_88;
          } while (local_a8 < param_3);
        }
        puVar4 = local_98;
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          bVar20 = local_98[1] == 0;
          if (bVar20) {
            local_98[1] = (ulonglong)local_90;
          }
          UNLOCK();
          if ((!bVar20) && (local_90 != &DAT_14045dd10)) {
            thunk_FUN_1402d9040(local_90);
          }
        }
        LOCK();
        piVar10 = (int *)*puVar4;
        bVar20 = piVar10 == (int *)0x0;
        if (bVar20) {
          *puVar4 = uVar11;
          piVar10 = (int *)0x0;
        }
        UNLOCK();
joined_r0x0001403d612b:
        if (bVar20) {
          return piVar10;
        }
        piVar10 = (int *)thunk_FUN_1402d9040(uVar11);
        return piVar10;
      }
      local_88 = FUN_1403c52a0(local_88 + 0xa8);
      cVar5 = FUN_1403d0b80(local_88);
      if (cVar5 == '\0') {
        LOCK();
        piVar12 = (int *)*local_98;
        bVar20 = piVar12 == (int *)0x0;
        if (bVar20) {
          *local_98 = uVar11;
          piVar12 = (int *)0x0;
        }
        UNLOCK();
        param_5 = local_b8;
      }
      else {
        local_b0 = FUN_1403c51f0(uVar16 + 0x78);
        local_90 = (undefined8 *)FUN_1403a2950(local_b0);
        if (local_90 != (undefined8 *)0x0) {
          local_a0 = param_2 + 8;
          puVar14 = (undefined8 *)FUN_1403a28a0(local_a0,local_88);
          puVar18 = local_90;
          uVar17 = 0;
          if (param_3 != 0) {
            do {
              uVar8 = *(uint *)(uVar11 + (ulonglong)(*param_4 & 0xff) * 4);
              local_a4 = 0xffffffff;
              if ((uVar8 == 0xffffffff) || (((uVar8 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
                local_c8 = puVar18;
                local_c0 = puVar14;
                uVar8 = FUN_1403c5e50(local_b0,*param_4,param_1,1);
                uVar2 = *param_4;
                if ((uVar2 < 0x1000000) && ((uVar8 & 0xffff0000) == 0)) {
                  *(uint *)(uVar11 + (ulonglong)(uVar2 & 0xff) * 4) =
                       (uVar2 & 0xffff00) << 8 | uVar8;
                }
              }
              else {
                uVar8 = uVar8 & 0xffff;
              }
              uVar17 = uVar17 + 1;
              *param_6 = (uint)((ulonglong)
                                ((longlong)(short)-(short)uVar8 * *(longlong *)(param_1 + 0x60) +
                                0x8000) >> 0x10);
              param_4 = (uint *)((longlong)param_4 + (ulonglong)local_b8);
              param_6 = (uint *)((longlong)param_6 + (ulonglong)local_a8);
            } while (uVar17 < param_3);
          }
          if (puVar14 != (undefined8 *)0x0) {
            LOCK();
            uVar16 = *local_a0;
            if (uVar16 == 0) {
              *local_a0 = (ulonglong)puVar14;
            }
            UNLOCK();
            if ((uVar16 != 0) && (puVar14 != &DAT_14045dd10)) {
              thunk_FUN_1402d9040(puVar14);
            }
          }
          LOCK();
          bVar20 = *(longlong *)(local_b0 + 0x30) == 0;
          if (bVar20) {
            *(longlong *)(local_b0 + 0x30) = (longlong)puVar18;
          }
          UNLOCK();
          if (!bVar20) {
            FUN_140397110(puVar18);
            thunk_FUN_1402d9040(puVar18);
          }
          LOCK();
          piVar10 = (int *)*local_98;
          bVar20 = piVar10 == (int *)0x0;
          if (bVar20) {
            *local_98 = uVar11;
            piVar10 = (int *)0x0;
          }
          UNLOCK();
          goto joined_r0x0001403d612b;
        }
        LOCK();
        piVar12 = (int *)*local_98;
        bVar20 = piVar12 == (int *)0x0;
        if (bVar20) {
          *local_98 = uVar11;
          piVar12 = (int *)0x0;
        }
        UNLOCK();
        local_90 = (undefined8 *)0x0;
        param_5 = local_b8;
      }
      local_b8 = param_5;
      if (!bVar20) {
        piVar12 = (int *)thunk_FUN_1402d9040(uVar11);
        param_5 = local_b8;
      }
    }
  }
  uVar17 = 0;
  if (param_3 != 0) {
    uVar16 = (ulonglong)local_a8;
    do {
      sVar6 = FUN_1403c5ff0(piVar10,*param_4);
      piVar12 = (int *)(ulonglong)(ushort)-sVar6;
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      uVar17 = uVar17 + 1;
      *param_6 = (uint)((ulonglong)((longlong)-sVar6 * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                       0x10);
      param_6 = (uint *)((longlong)param_6 + uVar16);
    } while (uVar17 < param_3);
  }
  return piVar12;
}

