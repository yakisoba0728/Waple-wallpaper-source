// Function: FUN_1403d6350
// Addr: 1403d6350
// Size: 3204 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1403d6350(longlong param_1,longlong *param_2,uint param_3,uint *param_4,uint param_5,
             int *param_6,uint param_7,uint *param_8,uint param_9)

{
  undefined *puVar1;
  ulonglong uVar2;
  float fVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  short sVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong *plVar25;
  ushort uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  byte *pbVar33;
  bool bVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  int *local_160;
  undefined8 *local_158;
  undefined8 local_150;
  uint local_148;
  longlong local_140;
  uint local_138;
  undefined8 *local_130;
  longlong *local_128;
  uint local_120;
  uint *local_118;
  uint *local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [28];
  uint local_7c;
  ulonglong local_68;
  
  local_68 = DAT_1404dc040 ^ (ulonglong)auStack_188;
  uVar24 = (ulonglong)param_5;
  local_148 = param_5;
  local_118 = param_8;
  local_120 = param_9;
  plVar23 = (longlong *)*param_2;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  local_150 = 0;
  if (lVar11 != 0) {
    local_150 = *(undefined8 *)(lVar11 + 0x38);
  }
  local_158 = (undefined8 *)CONCAT44(local_158._4_4_,param_7);
  local_160 = param_6;
  local_168 = (undefined8 *)CONCAT44(local_168._4_4_,param_5);
  local_140 = param_1;
  local_138 = param_3;
  local_128 = param_2;
  local_110 = param_4;
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x58))(param_1,*(undefined8 *)(param_1 + 0x98));
  plVar25 = local_128;
  iVar28 = *(int *)(param_1 + 0x40);
  if ((iVar28 == 0) || (*(char *)(param_1 + 0x3c) != '\0')) {
LAB_1403d6452:
    uVar16 = 0;
    if (param_3 != 0) goto LAB_1403d6460;
  }
  else {
    if (*(int *)(param_1 + 0x28) < 0) {
      iVar28 = -iVar28;
    }
    uVar16 = 0;
    piVar12 = param_6;
    uVar27 = uVar16;
    if (param_3 == 0) goto LAB_1403d6452;
    do {
      iVar29 = 0;
      if (*piVar12 != 0) {
        iVar29 = iVar28;
      }
      *piVar12 = iVar29 + *piVar12;
      uVar27 = uVar27 + 1;
      piVar12 = (int *)((longlong)piVar12 + (ulonglong)param_7);
    } while (uVar27 < param_3);
LAB_1403d6460:
    do {
      *param_6 = *param_6 / 2;
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_3);
  }
  local_130 = (undefined8 *)local_128[6];
  while (local_130 != (undefined8 *)0x0) {
    LOCK();
    bVar34 = local_130 == (undefined8 *)local_128[6];
    if (bVar34) {
      local_128[6] = 0;
    }
    UNLOCK();
    if (bVar34) goto LAB_1403d652f;
    local_130 = (undefined8 *)local_128[6];
  }
  local_130 = (undefined8 *)_malloc_base(0x400);
  if (local_130 == (undefined8 *)0x0) {
    local_130 = (undefined8 *)0x0;
  }
  else {
    lVar11 = 8;
    puVar14 = local_130;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0xf] = 0;
      puVar14 = puVar14 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    for (puVar14 = local_130; puVar14 != local_130 + 0x80;
        puVar14 = (undefined8 *)((longlong)puVar14 + 4)) {
      *(undefined4 *)puVar14 = 0xffffffff;
    }
  }
LAB_1403d652f:
  puVar14 = local_130;
  piVar12 = (int *)plVar23[0xd];
  while (piVar12 == (int *)0x0) {
    if (*plVar23 == 0) {
      piVar12 = (int *)&DAT_14045dd10;
      plVar25 = local_128;
      break;
    }
    piVar8 = (int *)FUN_1403b8640();
    piVar12 = (int *)&DAT_14045dd10;
    if (piVar8 != (int *)0x0) {
      piVar12 = piVar8;
    }
    LOCK();
    bVar34 = plVar23[0xd] == 0;
    if (bVar34) {
      plVar23[0xd] = (longlong)piVar12;
    }
    UNLOCK();
    plVar25 = local_128;
    if (bVar34) break;
    if (((piVar12 != (int *)0x0) && (piVar12 != (int *)&DAT_14045dd10)) && (*piVar12 != 0)) {
      LOCK();
      iVar28 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar28 == 1) {
        *piVar12 = -0xdead;
        lVar11 = *(longlong *)(piVar12 + 2);
        if (lVar11 != 0) {
          FUN_1403c3220(lVar11);
          thunk_FUN_1402d9040(lVar11);
          piVar12[2] = 0;
          piVar12[3] = 0;
        }
        if (*(code **)(piVar12 + 10) != (code *)0x0) {
          (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          piVar12[8] = 0;
          piVar12[9] = 0;
          piVar12[10] = 0;
          piVar12[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar12);
      }
    }
    plVar25 = local_128;
    piVar12 = (int *)plVar23[0xd];
  }
  lVar11 = local_140;
  fVar3 = DAT_1404926c0;
  pbVar33 = (byte *)&DAT_14045dd10;
  if (7 < (uint)piVar12[6]) {
    pbVar33 = *(byte **)(piVar12 + 4);
  }
  if ((puVar14 == (undefined8 *)0x0) ||
     ((((uint)*pbVar33 * 0x100 + (uint)pbVar33[1]) * 0x100 + (uint)pbVar33[2]) * 0x100 +
      (uint)pbVar33[3] == 0)) {
    lVar11 = FUN_1403c5840(plVar23 + 0xc);
    lVar9 = FUN_1403c51f0(plVar23 + 0xf);
    if (puVar14 == (undefined8 *)0x0) {
      return 1;
    }
    if ((*(int *)(lVar11 + 4) != 0) && (*(int *)(lVar9 + 0x1c) != 0)) {
      piVar12 = (int *)FUN_1403a2950(lVar9);
      if (piVar12 == (int *)0x0) {
        LOCK();
        bVar34 = plVar25[6] == 0;
        if (bVar34) {
          plVar25[6] = (longlong)puVar14;
        }
        UNLOCK();
        if (!bVar34) {
          thunk_FUN_1402d9040(puVar14);
        }
        return 0;
      }
      plVar32 = plVar25 + 8;
      local_d8 = plVar32;
      if (*(char *)(local_140 + 0x78) == '\0') {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        uVar13 = FUN_1403c52a0(plVar23 + 0x15);
        puVar14 = (undefined8 *)FUN_1403a28a0(plVar32,uVar13);
      }
      fVar3 = DAT_1404926c0;
      uVar27 = 0;
      if (local_138 != 0) {
        uVar24 = (ulonglong)local_148;
        uVar31 = (ulonglong)local_120;
        piVar8 = (int *)(local_140 + 0x2c);
        lVar11 = local_140;
        local_100 = uVar24;
        do {
          uVar16 = *(uint *)((longlong)local_130 + (ulonglong)(*local_110 & 0xff) * 4);
          local_148 = 0xffffffff;
          if ((uVar16 == 0xffffffff) || (((uVar16 >> 0xc ^ *local_110) & 0xffffff00) != 0)) {
            if (*local_110 < *(uint *)(lVar9 + 0x1c)) {
              if (*(char *)(lVar11 + 0x78) == '\0') {
                local_e8 = 0;
              }
              else {
                local_e8 = *(undefined4 *)(lVar11 + 0x7c);
              }
              local_f0 = *(undefined8 *)(lVar11 + 0x80);
              local_e4 = 0;
              uStack_c0 = 0;
              local_b8 = local_98;
              uVar2 = (ulonglong)uStack_b0 >> 8;
              uStack_b0 = CONCAT44(0x7f7fffff,(uint)(uint3)uVar2 << 8);
              local_a8 = 0xff7fffff7f7fffff;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,0xff7fffff);
              local_168 = &local_f8;
              local_160 = piVar12;
              local_158 = puVar14;
              local_c8 = lVar11;
              cVar5 = FUN_140389be0(lVar9,lVar11,*local_110,&local_c8);
              if (cVar5 == '\0') {
                lVar11 = *(longlong *)(local_140 + 0x20);
                uVar16 = *(uint *)(lVar11 + 0x14);
                if (uVar16 == 0) {
                  lVar15 = FUN_1403c5340(lVar11 + 0x78);
                  uVar30 = (uint)*(byte *)(lVar15 + 0x13) + (uint)*(byte *)(lVar15 + 0x12) * 0x100;
                  uVar16 = 1000;
                  if (uVar30 - 0x10 < 0x3ff1) {
                    uVar16 = uVar30;
                  }
                  *(uint *)(lVar11 + 0x14) = uVar16;
                }
                auVar36 = ZEXT416((uint)(float)uVar16);
                uVar24 = local_100;
                lVar11 = local_140;
              }
              else {
                auVar36 = ZEXT416(local_7c);
                lVar11 = local_140;
              }
            }
            else {
              auVar36 = ZEXT816(0);
            }
            auVar36._0_4_ = auVar36._0_4_ * *(float *)(lVar11 + 0x54) + fVar3;
            fVar35 = (float)FUN_14041a5c0(auVar36._0_8_);
            uVar30 = (uint)fVar35;
            uVar16 = -uVar30;
            if (-1 < *piVar8) {
              uVar16 = uVar30;
            }
            uVar6 = *local_110;
            lVar11 = local_140;
            if ((uVar6 < 0x100000) && (uVar16 < 0x100000)) {
              *(uint *)((longlong)local_130 + (ulonglong)(uVar6 & 0xff) * 4) =
                   (uVar6 & 0xfff00) << 0xc | uVar16;
            }
          }
          else {
            uVar30 = -(uVar16 & 0xfffff);
            if (-1 < *piVar8) {
              uVar30 = uVar16 & 0xfffff;
            }
            piVar8 = (int *)(lVar11 + 0x2c);
          }
          *local_118 = uVar30;
          local_110 = (uint *)((longlong)local_110 + uVar24);
          local_118 = (uint *)((longlong)local_118 + uVar31);
          uVar27 = uVar27 + 1;
          plVar25 = local_128;
          plVar32 = local_d8;
        } while (uVar27 < local_138);
      }
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        lVar11 = *plVar32;
        if (lVar11 == 0) {
          *plVar32 = (longlong)puVar14;
        }
        UNLOCK();
        if ((lVar11 != 0) && (puVar14 != &DAT_14045dd10)) {
          thunk_FUN_1402d9040(puVar14);
        }
      }
      LOCK();
      bVar34 = *(longlong *)(lVar9 + 0x30) == 0;
      if (bVar34) {
        *(longlong *)(lVar9 + 0x30) = (longlong)piVar12;
      }
      UNLOCK();
      if (!bVar34) {
        FUN_140397110(piVar12);
        thunk_FUN_1402d9040(piVar12);
      }
      LOCK();
      bVar34 = plVar25[6] == 0;
      if (bVar34) {
        plVar25[6] = (longlong)local_130;
      }
      UNLOCK();
      puVar14 = local_130;
      goto joined_r0x0001403d6dd5;
    }
    lVar11 = *(longlong *)(local_140 + 0x90);
    if ((*(undefined **)(lVar11 + 0x98) != PTR_FUN_1404df4c0) ||
       (((puVar1 = *(undefined **)(local_140 + 0x18), plVar23 = local_128,
         puVar1 != (undefined *)0x0 && (puVar1 != &DAT_1404ded88)) &&
        (cVar5 = FUN_1403d0d40(puVar1,0xf), plVar23 = local_128, cVar5 != '\0')))) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (undefined1 *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar11 + 0x10);
      }
      iVar29 = (**(code **)(lVar11 + 0x20))
                         (local_140,*(undefined8 *)(local_140 + 0x98),&local_c8,uVar13);
      iVar28 = *(int *)(local_140 + 0x2c);
      if (iVar29 == 0) {
        iVar29 = (int)((double)iVar28 * DAT_140471a78);
        uVar27 = iVar29 - iVar28;
        local_c8 = (ulonglong)uVar27 << 0x20;
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
      }
      else {
        iVar29 = -*(int *)(local_140 + 0x44);
        if (-1 < iVar28) {
          iVar29 = *(int *)(local_140 + 0x44);
        }
        iVar29 = (uint)local_c8 + iVar29;
        uVar27 = local_c8._4_4_;
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar29);
      uVar16 = 0;
      plVar23 = local_128;
      if (local_138 != 0) {
        uVar31 = (ulonglong)local_120;
        lVar11 = local_140;
        do {
          uVar30 = *(uint *)((longlong)puVar14 + (ulonglong)(*param_4 & 0xff) * 4);
          local_148 = 0xffffffff;
          if ((uVar30 == 0xffffffff) || (((uVar30 >> 0xc ^ *param_4) & 0xffffff00) != 0)) {
            local_d8 = (longlong *)0x0;
            uStack_d0 = 0;
            iVar28 = FUN_1403c99a0(lVar11,*param_4,&local_d8,1);
            if (iVar28 == 0) {
              uVar6 = (uint)local_c8;
            }
            else {
              uVar6 = ((int)(uStack_d0._4_4_ + (iVar29 - uVar27)) >> 1) + local_d8._4_4_;
            }
            uVar30 = -uVar6;
            if (-1 < *(int *)(local_140 + 0x2c)) {
              uVar30 = uVar6;
            }
            uVar19 = *param_4;
            lVar11 = local_140;
            if ((uVar19 < 0x100000) && (uVar30 < 0x100000)) {
              *(uint *)((longlong)puVar14 + (ulonglong)(uVar19 & 0xff) * 4) =
                   (uVar19 & 0xfff00) << 0xc | uVar30;
            }
          }
          else {
            uVar6 = -(uVar30 & 0xfffff);
            if (-1 < *(int *)(lVar11 + 0x2c)) {
              uVar6 = uVar30 & 0xfffff;
            }
          }
          *local_118 = uVar6;
          param_4 = (uint *)((longlong)param_4 + uVar24);
          local_118 = (uint *)((longlong)local_118 + uVar31);
          uVar16 = uVar16 + 1;
          plVar23 = local_128;
        } while (uVar16 < local_138);
      }
    }
  }
  else if (*(char *)(local_140 + 0x78) == '\0') {
    uVar27 = 0;
    plVar23 = local_128;
    if (local_138 != 0) {
      piVar12 = (int *)(local_140 + 0x2c);
      do {
        uVar16 = *(uint *)((longlong)puVar14 + (ulonglong)(*param_4 & 0xff) * 4);
        local_130 = (undefined8 *)CONCAT44(local_130._4_4_,0xffffffff);
        if ((uVar16 == 0xffffffff) || (((uVar16 >> 0xc ^ *param_4) & 0xffffff00) != 0)) {
          uVar16 = *param_4;
          uVar30 = (uint)pbVar33[7] + (uint)pbVar33[6] * 0x100;
          iVar29 = 0;
          iVar28 = uVar30 - 1;
          if (-1 < iVar28) {
            do {
              uVar6 = (uint)(iVar28 + iVar29) >> 1;
              uVar19 = (uint)pbVar33[(ulonglong)uVar6 * 4 + 8] * 0x100 +
                       (uint)pbVar33[(ulonglong)uVar6 * 4 + 9];
              iVar17 = (uint)(uVar19 < uVar16) - (uint)(uVar16 < uVar19);
              if (iVar17 < 0) {
                iVar28 = uVar6 - 1;
              }
              else {
                if (iVar17 < 1) {
                  if (uVar6 < uVar30) {
                    uVar26 = (ushort)(pbVar33 + (ulonglong)uVar6 * 4 + 10)[1];
                    uVar18 = (ushort)pbVar33[(ulonglong)uVar6 * 4 + 10];
                  }
                  else {
                    uVar26 = (ushort)DAT_14045dd10._3_1_;
                    uVar18 = (ushort)DAT_14045dd10._2_1_;
                  }
                  goto LAB_1403d671d;
                }
                iVar29 = uVar6 + 1;
              }
            } while (iVar29 <= iVar28);
          }
          uVar26 = (ushort)pbVar33[5];
          uVar18 = (ushort)pbVar33[4];
LAB_1403d671d:
          fVar35 = (float)FUN_14041a5c0((float)(int)(short)(uVar26 + uVar18 * 0x100) *
                                        *(float *)(local_140 + 0x54) + fVar3);
          uVar30 = (uint)fVar35;
          uVar6 = -uVar30;
          if (-1 < *piVar12) {
            uVar6 = uVar30;
          }
          lVar11 = local_140;
          if ((uVar16 < 0x100000) && (uVar6 < 0x100000)) {
            *(uint *)((longlong)puVar14 + (ulonglong)(uVar16 & 0xff) * 4) =
                 (uVar16 & 0xfff00) << 0xc | uVar6;
          }
        }
        else {
          uVar30 = -(uVar16 & 0xfffff);
          if (-1 < *piVar12) {
            uVar30 = uVar16 & 0xfffff;
          }
          piVar12 = (int *)(lVar11 + 0x2c);
        }
        *local_118 = uVar30;
        param_4 = (uint *)((longlong)param_4 + uVar24);
        local_118 = (uint *)((longlong)local_118 + (ulonglong)local_120);
        uVar27 = uVar27 + 1;
        plVar23 = local_128;
      } while (uVar27 < local_138);
    }
  }
  else {
    lVar9 = FUN_1403c5840(plVar23 + 0xc);
    puVar20 = &DAT_14045dd10;
    if (*(undefined8 **)(lVar9 + 0x20) != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)(lVar9 + 0x20);
    }
    local_110 = (uint *)&DAT_14045dd10;
    if (0x17 < *(uint *)(puVar20 + 3)) {
      local_110 = (uint *)puVar20[2];
    }
    uVar27 = (uint)*(byte *)((longlong)local_110 + 5) * 0x10000 +
             (uint)(byte)local_110[1] * 0x1000000 + (uint)*(byte *)((longlong)local_110 + 6) * 0x100
             + (uint)*(byte *)((longlong)local_110 + 7);
    if (uVar27 == 0) {
      puVar20 = &DAT_14045dd10;
    }
    else {
      puVar20 = (undefined8 *)((ulonglong)uVar27 + (longlong)local_110);
    }
    puVar10 = (undefined8 *)plVar25[7];
    while (puVar10 != (undefined8 *)0x0) {
      LOCK();
      bVar34 = puVar10 == (undefined8 *)local_128[7];
      if (bVar34) {
        local_128[7] = 0;
      }
      UNLOCK();
      if (bVar34) goto LAB_1403d6872;
      puVar10 = (undefined8 *)local_128[7];
    }
    puVar10 = (undefined8 *)FUN_1403bc8b0(puVar20);
LAB_1403d6872:
    fVar3 = DAT_1404926c0;
    local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffff00000000);
    if (local_138 != 0) {
      piVar12 = (int *)(lVar11 + 0x2c);
      local_108 = uVar24;
      do {
        puVar4 = local_110;
        uVar27 = *(uint *)((longlong)puVar14 + ((ulonglong)*param_4 & 0xff) * 4);
        local_148 = 0xffffffff;
        if ((uVar27 == 0xffffffff) || (((uVar27 >> 0xc ^ *param_4) & 0xffffff00) != 0)) {
          uVar27 = *param_4;
          uVar16 = (uint)pbVar33[7] + (uint)pbVar33[6] * 0x100;
          iVar29 = 0;
          iVar28 = uVar16 - 1;
          if (-1 < iVar28) {
            do {
              uVar30 = (uint)(iVar28 + iVar29) >> 1;
              uVar6 = (uint)pbVar33[(ulonglong)uVar30 * 4 + 8] * 0x100 +
                      (uint)pbVar33[(ulonglong)uVar30 * 4 + 9];
              iVar17 = (uint)(uVar6 < uVar27) - (uint)(uVar27 < uVar6);
              if (iVar17 < 0) {
                iVar28 = uVar30 - 1;
              }
              else {
                if (iVar17 < 1) {
                  if (uVar30 < uVar16) {
                    pbVar21 = pbVar33 + (ulonglong)uVar30 * 4 + 10;
                  }
                  else {
                    pbVar21 = (byte *)((longlong)&DAT_14045dd10 + 2);
                  }
                  sVar22 = (ushort)*pbVar21 * 0x100 + (ushort)pbVar21[1];
                  goto LAB_1403d6965;
                }
                iVar29 = uVar30 + 1;
              }
            } while (iVar29 <= iVar28);
          }
          sVar22 = (ushort)pbVar33[5] + (ushort)pbVar33[4] * 0x100;
LAB_1403d6965:
          uVar16 = (uint)*(byte *)((longlong)local_110 + 0x15) * 0x10000 +
                   (uint)*(byte *)((longlong)local_110 + 0x16) * 0x100 +
                   (uint)(byte)local_110[5] * 0x1000000 +
                   (uint)*(byte *)((longlong)local_110 + 0x17);
          if (uVar16 == 0) {
            fVar35 = 0.0;
          }
          else {
            uVar7 = FUN_1403eaff0((ulonglong)uVar16 + (longlong)local_110,uVar27);
            uVar27 = (uint)(byte)puVar4[1] * 0x1000000 +
                     (uint)*(byte *)((longlong)puVar4 + 6) * 0x100 +
                     (uint)*(byte *)((longlong)puVar4 + 5) * 0x10000 +
                     (uint)*(byte *)((longlong)puVar4 + 7);
            if (uVar27 == 0) {
              puVar20 = &DAT_14045dd10;
            }
            else {
              puVar20 = (undefined8 *)((ulonglong)uVar27 + (longlong)puVar4);
            }
            local_168 = puVar10;
            fVar35 = (float)FUN_1403c7460(puVar20,uVar7,*(undefined8 *)(local_140 + 0x80));
          }
          lVar11 = local_140;
          fVar35 = (float)FUN_14041a5c0(((float)(int)sVar22 + fVar35) * *(float *)(local_140 + 0x54)
                                        + fVar3);
          uVar16 = (uint)fVar35;
          uVar27 = -uVar16;
          if (-1 < *piVar12) {
            uVar27 = uVar16;
          }
          uVar30 = *param_4;
          if ((uVar30 < 0x100000) && (uVar27 < 0x100000)) {
            *(uint *)((longlong)puVar14 + (ulonglong)(uVar30 & 0xff) * 4) =
                 (uVar30 & 0xfff00) << 0xc | uVar27;
          }
        }
        else {
          uVar16 = -(uVar27 & 0xfffff);
          if (-1 < *piVar12) {
            uVar16 = uVar27 & 0xfffff;
          }
          piVar12 = (int *)(lVar11 + 0x2c);
        }
        *local_118 = uVar16;
        param_4 = (uint *)((longlong)param_4 + local_108);
        local_118 = (uint *)((longlong)local_118 + (ulonglong)local_120);
        uVar27 = (int)local_130 + 1;
        local_130 = (undefined8 *)CONCAT44(local_130._4_4_,uVar27);
      } while (uVar27 < local_138);
    }
    plVar23 = local_128;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      bVar34 = local_128[7] == 0;
      if (bVar34) {
        local_128[7] = (longlong)puVar10;
      }
      UNLOCK();
      if ((!bVar34) && (puVar10 != &DAT_14045dd10)) {
        thunk_FUN_1402d9040(puVar10);
      }
    }
  }
  LOCK();
  bVar34 = plVar23[6] == 0;
  if (bVar34) {
    plVar23[6] = (longlong)puVar14;
  }
  UNLOCK();
joined_r0x0001403d6dd5:
  if (!bVar34) {
    thunk_FUN_1402d9040(puVar14);
  }
  return 1;
}

