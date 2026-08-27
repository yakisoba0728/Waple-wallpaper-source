// Function: FUN_1403be440
// Addr: 1403be440
// Size: 1972 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1403be440(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  undefined *puVar16;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_res8 [2];
  uint local_118;
  float local_114;
  uint local_10c;
  undefined8 local_100;
  float *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  
  if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  fVar26 = *(float *)(param_1 + 0x4c);
  if (((char)param_5 == '\0') || ((!bVar21 && (fVar26 == 0.0)))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    uVar9 = 0;
    if (lVar3 != 0) {
      uVar9 = *(undefined8 *)(lVar3 + 0x98);
    }
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0xb8))
                      (fVar26,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar9);
    bVar21 = iVar4 != 0;
  }
  else {
    uVar13 = 0;
    local_100 = 0;
    local_f8 = (float *)0x0;
    local_f0 = 0;
    local_e8 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    uVar6 = uVar13;
    if (lVar3 != 0) {
      uVar6 = *(ulonglong *)(lVar3 + 0x98);
    }
    while (puVar16 = DAT_1404e51f8, DAT_1404e51f8 = puVar16, puVar16 == (undefined *)0x0) {
      puVar5 = (undefined *)FUN_1403bb3d0();
      puVar16 = &DAT_1404df0f8;
      if (puVar5 != (undefined *)0x0) {
        puVar16 = puVar5;
      }
      LOCK();
      bVar20 = DAT_1404e51f8 == (undefined *)0x0;
      puVar5 = puVar16;
      if (!bVar20) {
        puVar5 = DAT_1404e51f8;
      }
      DAT_1404e51f8 = puVar5;
      UNLOCK();
      if (bVar20) break;
      if ((puVar16 != (undefined *)0x0) && (puVar16 != &DAT_1404df0f8)) {
        FUN_140414e70(puVar16);
      }
    }
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0xb8))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,puVar16,&local_100,uVar6);
    if (iVar4 == 0) {
      bVar21 = false;
    }
    else {
      if (fVar26 != 0.0) {
        param_5 = 0;
        local_res8[0] = 0.0;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
        uVar6 = uVar13;
        if (lVar3 != 0) {
          uVar6 = *(ulonglong *)(lVar3 + 0x48);
        }
        (**(code **)(*(longlong *)(param_1 + 0x90) + 0x68))
                  (param_1,*(undefined8 *)(param_1 + 0x98),param_2,local_res8,&param_5,uVar6);
        for (pfVar8 = local_f8; pfVar8 != local_f8 + (ulonglong)local_100._4_4_ * 3;
            pfVar8 = pfVar8 + 3) {
          *pfVar8 = (float)-(int)local_res8[0] + *pfVar8;
          pfVar8[1] = (float)-param_5 + pfVar8[1];
        }
        fVar26 = *(float *)(param_1 + 0x4c);
        for (pfVar8 = local_f8; pfVar8 != local_f8 + (ulonglong)local_100._4_4_ * 3;
            pfVar8 = pfVar8 + 3) {
          *pfVar8 = fVar26 * pfVar8[1] + *pfVar8;
        }
        for (pfVar8 = local_f8; pfVar8 != local_f8 + (ulonglong)local_100._4_4_ * 3;
            pfVar8 = pfVar8 + 3) {
          *pfVar8 = (float)(int)local_res8[0] + *pfVar8;
          pfVar8[1] = (float)param_5 + pfVar8[1];
        }
      }
      pfVar8 = local_f8;
      if (bVar21) {
        if (*(char *)(param_1 + 0x3c) == '\0') {
          local_res8[0] = (float)*(int *)(param_1 + 0x40) * DAT_1404926c0;
        }
        else {
          local_res8[0] = 0.0;
        }
        fVar26 = (float)*(int *)(param_1 + 0x44) * DAT_1404926c0;
        if (*(int *)(param_1 + 0x28) < 0) {
          local_res8[0] = (float)((uint)local_res8[0] ^ DAT_140492ff0);
        }
        local_114 = fVar26;
        if (*(int *)(param_1 + 0x2c) < 0) {
          local_114 = (float)((uint)fVar26 ^ DAT_140492ff0);
        }
        if ((((float)*(int *)(param_1 + 0x40) != 0.0) || ((float)*(int *)(param_1 + 0x44) != 0.0))
           && (local_100._4_4_ != 0)) {
          fVar27 = (float)*(int *)(param_1 + 0x40) * DAT_1404926c0;
          fVar22 = (float)FUN_1403b7930(&local_100);
          cVar15 = fVar22 < 0.0;
          param_5 = CONCAT31(param_5._1_3_,cVar15);
          local_10c = 0;
          if (local_f0._4_4_ != 0) {
            uVar9 = ram0x00014045dd14;
            uVar6 = uVar13;
            uVar12 = local_f0._4_4_;
            uVar11 = (uint)DAT_14045dd10;
            if (local_f0._4_4_ != 0) goto LAB_1403be7dc;
            DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
            uVar10 = (uint)DAT_14045dd10;
            do {
              uVar1 = uVar10 - 1;
              uVar18 = (uint)uVar13;
              if ((uint)uVar6 != uVar1) {
                fVar34 = 0.0;
                fVar35 = 0.0;
                local_118 = 0xffffffff;
                fVar36 = 0.0;
                uVar13 = (ulonglong)uVar1;
                uVar19 = uVar6;
                fVar22 = 0.0;
                fVar25 = 0.0;
                fVar29 = 0.0;
                do {
                  uVar12 = (uint)uVar13;
                  if (uVar12 == local_118) break;
                  uVar18 = (uint)uVar19;
                  fVar32 = fVar35;
                  fVar33 = fVar36;
                  fVar31 = fVar34;
                  if (uVar18 == local_118) {
LAB_1403be919:
                    uVar14 = uVar19;
                    if (fVar22 != 0.0) {
                      if ((int)local_118 < 0) {
                        fVar34 = fVar22;
                        fVar35 = fVar25;
                        fVar36 = fVar29;
                        local_118 = uVar12;
                      }
                      fVar28 = fVar33 * fVar29 + fVar32 * fVar25;
                      if (fVar28 <= _DAT_140471a98) {
                        fVar28 = 0.0;
                        fVar25 = 0.0;
                      }
                      else {
                        fVar28 = fVar28 + DAT_140492704;
                        fVar24 = fVar32 + fVar25;
                        fVar30 = fVar33 + fVar29;
                        fVar29 = fVar33 * fVar25 - fVar32 * fVar29;
                        if (cVar15 == '\0') {
                          fVar30 = (float)((uint)fVar30 ^ DAT_140492ff0);
                        }
                        else {
                          fVar29 = (float)((uint)fVar29 ^ DAT_140492ff0);
                          fVar24 = (float)((uint)fVar24 ^ DAT_140492ff0);
                        }
                        if (fVar31 <= fVar22) {
                          fVar22 = fVar31;
                        }
                        if (fVar22 * fVar28 < fVar29 * fVar27) {
                          fVar25 = (fVar24 * fVar22) / fVar29;
                        }
                        else {
                          fVar25 = (fVar24 * fVar27) / fVar28;
                        }
                        if (fVar22 * fVar28 < fVar29 * fVar26) {
                          fVar28 = (fVar22 * fVar30) / fVar29;
                        }
                        else {
                          fVar28 = (fVar26 * fVar30) / fVar28;
                        }
                      }
                      uVar14 = uVar13;
                      if (uVar12 != uVar18) {
                        do {
                          uVar12 = (uint)uVar13;
                          if (uVar12 < local_100._4_4_) {
                            pfVar8 = pfVar8 + uVar13 * 3;
                          }
                          else {
                            pfVar8 = (float *)&DAT_1404e4f20;
                            DAT_1404e4f20._0_4_ = uVar11;
                            unique0x10000b6f = uVar9;
                          }
                          *pfVar8 = local_res8[0] + fVar25 + *pfVar8;
                          if (uVar12 < local_100._4_4_) {
                            pfVar8 = local_f8 + uVar13 * 3;
                          }
                          else {
                            DAT_1404e4f20._0_4_ = (uint)DAT_14045dd10;
                            ram0x0001404e4f24 = ram0x00014045dd14;
                            pfVar8 = (float *)&DAT_1404e4f20;
                          }
                          pfVar8[1] = fVar28 + local_114 + pfVar8[1];
                          uVar13 = uVar6;
                          if ((int)uVar12 < (int)uVar1) {
                            uVar13 = (ulonglong)(uVar12 + 1);
                          }
                          uVar14 = uVar13;
                          uVar9 = ram0x00014045dd14;
                          pfVar8 = local_f8;
                          uVar11 = (uint)DAT_14045dd10;
                        } while ((uint)uVar13 != uVar18);
                      }
                    }
                  }
                  else {
                    if (uVar18 < local_100._4_4_) {
                      pfVar17 = pfVar8 + uVar19 * 3;
                    }
                    else {
                      pfVar17 = (float *)&DAT_1404e4f20;
                      DAT_1404e4f20._0_4_ = uVar11;
                      unique0x10000b8f = uVar9;
                    }
                    if (uVar12 < local_100._4_4_) {
                      pfVar7 = pfVar8 + uVar13 * 3;
                    }
                    else {
                      pfVar7 = (float *)&DAT_1404e4f20;
                      DAT_1404e4f20._0_4_ = uVar11;
                      unique0x10000b87 = uVar9;
                    }
                    fVar28 = *pfVar17;
                    fVar24 = *pfVar7;
                    if (uVar18 < local_100._4_4_) {
                      pfVar17 = pfVar8 + uVar19 * 3;
                    }
                    else {
                      pfVar17 = (float *)&DAT_1404e4f20;
                      DAT_1404e4f20._0_4_ = uVar11;
                      unique0x10000b7f = uVar9;
                    }
                    if (uVar12 < local_100._4_4_) {
                      pfVar7 = pfVar8 + uVar13 * 3;
                    }
                    else {
                      pfVar7 = (float *)&DAT_1404e4f20;
                      DAT_1404e4f20._0_4_ = uVar11;
                      unique0x10000b77 = uVar9;
                    }
                    fVar30 = pfVar17[1];
                    fVar2 = pfVar7[1];
                    fVar23 = (float)FUN_140419c60(fVar28 - fVar24);
                    uVar14 = uVar13;
                    fVar31 = fVar22;
                    fVar32 = fVar25;
                    fVar33 = fVar29;
                    if (fVar23 != 0.0) {
                      fVar32 = (fVar30 - fVar2) / fVar23;
                      fVar33 = (fVar28 - fVar24) / fVar23;
                      fVar31 = fVar23;
                      cVar15 = (char)param_5;
                      goto LAB_1403be919;
                    }
                  }
                  uVar19 = uVar6;
                  if ((int)uVar18 < (int)uVar1) {
                    uVar19 = (ulonglong)(uVar18 + 1);
                  }
                  uVar13 = uVar14;
                  fVar22 = fVar31;
                  fVar25 = fVar32;
                  fVar29 = fVar33;
                  cVar15 = (char)param_5;
                } while ((int)uVar19 != (int)uVar14);
                uVar12 = local_f0._4_4_;
                uVar18 = local_10c;
              }
              uVar6 = (ulonglong)uVar10;
              local_10c = uVar18 + 1;
              uVar13 = (ulonglong)local_10c;
              if (uVar12 <= local_10c) break;
LAB_1403be7dc:
              uVar10 = *(uint *)(local_e8 + uVar13 * 4);
            } while( true );
          }
        }
      }
      FUN_1403f8070(&local_100,param_3,param_4);
      bVar21 = true;
    }
    if (1 < (int)local_f0 + 1U) {
      local_f0 = local_f0 & 0xffffffff;
      thunk_FUN_1402d9040(local_e8);
    }
    local_f0 = 0;
    local_e8 = 0;
    if (1 < (int)local_100 + 1U) {
      local_100 = local_100 & 0xffffffff;
      thunk_FUN_1402d9040(local_f8);
    }
  }
  return bVar21;
}

