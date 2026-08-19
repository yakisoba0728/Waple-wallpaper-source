// Function: FUN_1400d0380
// Addr: 1400d0380
// Size: 3262 bytes


void FUN_1400d0380(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  int local_3c0;
  float local_3bc;
  uint local_3b8;
  ulonglong local_3b0;
  uint local_3a8;
  int local_3a4;
  uint local_3a0;
  ulonglong local_398;
  uint local_390;
  int local_38c;
  int *local_388;
  longlong local_380;
  longlong local_378;
  longlong *local_370;
  uint *local_368;
  int *local_338;
  longlong local_330;
  longlong lStack_328;
  longlong local_300;
  undefined8 *local_2f8;
  undefined1 local_2e8 [680];
  
  (*DAT_140426b68)();
  fVar8 = DAT_1404929cc;
  fVar7 = DAT_1404927d4;
  piVar17 = (int *)(param_1 + 0x1c);
  local_370 = param_1 + 0x1b;
  uVar14 = 0;
  local_3a4 = 0;
  bVar6 = false;
  local_338 = (int *)(param_1 + 0x1f);
  local_3c0 = 0;
  fVar28 = 0.0;
  local_300 = (longlong)param_1 + 0xe4;
  local_3bc = 0.0;
  local_368 = (uint *)((longlong)param_1 + 0xf4);
  local_3d8 = 0;
  local_2f8 = param_1 + 3;
  local_3a8 = 0;
  local_330 = 0;
  lStack_328 = 0;
  local_378 = 0;
  local_380 = 0;
  local_3b0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_390 = 0;
  local_38c = 0;
  bVar3 = false;
  local_3b8 = 0;
  uVar16 = uVar14;
  plVar23 = local_370;
  uVar13 = uVar14;
  uVar12 = uVar14;
  fVar27 = DAT_1404926b0;
  local_388 = piVar17;
  do {
    while (bVar3) {
LAB_1400d050e:
      iVar11 = func_0x000140290ee0(param_1 + 0xf);
      if ((iVar11 != 0) || (FUN_140290f70(param_1 + 0xf), !bVar3)) {
LAB_1400d212b:
        if (uVar16 != 0) {
          (**(code **)(uVar16 + 0xb0))(uVar16);
        }
        if (uVar12 != 0) {
          FUN_1402d3ea0(uVar12);
        }
        if (uVar13 != 0) {
          FUN_1402d3ea0(uVar13);
        }
        if (local_380 != 0) {
          FUN_1402d3ea0(local_380);
        }
        if (local_378 != 0) {
          FUN_1402d3ea0(local_378);
        }
        (*DAT_140426b70)();
        return;
      }
      if ((local_3b8 < 5) || (local_3b8 == (local_3b8 / 0x32) * 0x32)) {
        if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x1a] + 0x58))();
        }
        if ((longlong *)*plVar23 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar23 + 0x10))();
          *plVar23 = 0;
        }
        if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
          param_1[0x1a] = 0;
        }
        cVar10 = FUN_1400cf1f0((longlong)param_1 + 0xe4,param_1 + 0x20,piVar17,param_1 + 1,
                               (longlong)param_1 + 0xf4,param_1 + 0x1f,param_1 + 0x19,param_1 + 0x1a
                               ,plVar23);
        *(char *)((longlong)param_1 + 0xfc) = cVar10;
      }
      else {
        cVar10 = *(char *)((longlong)param_1 + 0xfc);
      }
      if (cVar10 == '\0') {
        local_3b8 = local_3b8 + 1;
        (*DAT_140426240)(*(int *)((longlong)param_1 + 0x14) << 2);
      }
      else {
        local_3b8 = 0;
        bVar3 = false;
      }
    }
    (*DAT_140426240)(*(undefined4 *)((longlong)param_1 + 0x14));
    iVar11 = func_0x000140290ee0(param_1 + 0xf);
    if (iVar11 != 0) goto LAB_1400d212b;
    FUN_140290f70(param_1 + 0xf);
    if (*(char *)(param_1 + 0x25) != '\0') {
      *(undefined1 *)(param_1 + 0x25) = 0;
LAB_1400d0507:
      bVar3 = true;
      goto LAB_1400d050e;
    }
    if (*plVar23 == 0) {
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 0x58))();
      }
      if ((longlong *)*plVar23 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar23 + 0x10))();
        *plVar23 = 0;
      }
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
        param_1[0x1a] = 0;
      }
      cVar10 = FUN_1400cf1f0((longlong)param_1 + 0xe4,param_1 + 0x20,piVar17,param_1 + 1,
                             (longlong)param_1 + 0xf4,param_1 + 0x1f,param_1 + 0x19,param_1 + 0x1a,
                             plVar23);
      *(char *)((longlong)param_1 + 0xfc) = cVar10;
      if (cVar10 == '\0') {
        (*DAT_140426240)(*(undefined4 *)((longlong)param_1 + 0x14));
      }
    }
    else {
      uVar18 = *(uint *)((longlong)param_1 + 0xf4);
      fVar24 = *(float *)(param_1 + 0x1e);
      fVar1 = *(float *)((longlong)param_1 + 0xec);
      if ((uVar18 != local_390) || (*(int *)(param_1 + 0x1f) != local_38c)) {
        uVar14 = 0;
        local_3a0 = 0;
        local_38c = *local_338;
        local_390 = uVar18;
        if (uVar16 != 0) {
          (**(code **)(uVar16 + 0xb0))(uVar16);
        }
        local_398 = (ulonglong)*local_368;
        if (1 < *local_368) {
          if ((local_398 & local_398 - 1) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1402dd8b0(1,0xd0);
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1402dd8b0(1,0xd8);
        }
        uVar16 = 0;
        local_3d0 = 0;
        if (uVar12 != 0) {
          FUN_1402d3ea0(uVar12);
        }
        if (uVar13 != 0) {
          FUN_1402d3ea0(uVar13);
        }
        if (local_380 != 0) {
          FUN_1402d3ea0(local_380);
        }
        if (local_378 != 0) {
          FUN_1402d3ea0(local_378);
        }
        puVar9 = local_368;
        uVar12 = FUN_1402d3ed0((ulonglong)(*local_368 * 2) << 2,0x20);
        local_3b0 = uVar12;
        local_380 = FUN_1402d3ed0((ulonglong)(*puVar9 * 2) << 2,0x20);
        local_330 = local_380;
        uVar13 = FUN_1402d3ed0((ulonglong)(*puVar9 * 2) << 2,0x20);
        local_3c8 = uVar13;
        local_378 = FUN_1402d3ed0((ulonglong)(*puVar9 * 2) << 2,0x20);
        uVar19 = 0;
        piVar17 = local_388;
        plVar23 = local_370;
        fVar27 = DAT_1404926b0;
        lStack_328 = local_378;
        if (*puVar9 != 0) {
          do {
            iVar11 = uVar19 * 2;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(uVar12 + (longlong)iVar11 * 4) = 0x42fe0000;
            *(undefined4 *)(uVar12 + 4 + (longlong)iVar11 * 4) = 0x3c010204;
            *(undefined4 *)(uVar13 + (longlong)iVar11 * 4) = 0x42fe0000;
            *(undefined4 *)(uVar13 + 4 + (longlong)iVar11 * 4) = 0x3c010204;
            fVar27 = DAT_1404926b0;
          } while (uVar19 < *puVar9);
        }
      }
      local_3c0 = 0;
      iVar11 = (**(code **)(*(longlong *)*plVar23 + 0x28))();
      if (iVar11 < 0) goto LAB_1400d0507;
      bVar4 = false;
      bVar5 = false;
      uVar18 = (uint)((float)uVar18 - (fVar24 / fVar1) * (float)uVar18);
      local_398 = CONCAT44(local_398._4_4_,uVar18);
      if (local_3c0 == 0) {
        if (fVar28 <= DAT_140492a14) {
          local_3bc = fVar28 + (float)*(int *)((longlong)param_1 + 0x14);
          fVar28 = local_3bc;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        local_3bc = 0.0;
        fVar28 = local_3bc;
      }
      do {
        if ((iVar11 != 0) || (uVar19 = (uint)uVar14, local_3c0 == 0)) goto LAB_1400d1c22;
        local_3a8 = 0;
        iVar11 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))
                           ((longlong *)param_1[0x1b],&local_3d8,&local_3a4,&local_3a8,0,0);
        if (iVar11 < 0) break;
        if ((bVar4) || ((local_3a8 & 2) != 0 || iVar11 != 0)) {
          local_3d8 = 0;
          bVar6 = true;
        }
        else {
          bVar6 = false;
          if ((local_3d8 != 0) && (uVar19 < *(uint *)((longlong)param_1 + 0xf4))) {
            local_3a0 = uVar18;
            if (local_3a4 + uVar19 < uVar18) {
              local_3a0 = local_3a4 + uVar19;
            }
            if (*piVar17 < 2) {
              if ((int)uVar19 < (int)local_3a0) {
                uVar18 = uVar19;
                if ((int)(local_3a0 - uVar19) < 4) goto LAB_1400d1a94;
                iVar11 = uVar19 * 2;
                uVar16 = uVar14;
                do {
                  iVar22 = (int)uVar16;
                  iVar15 = iVar22 - uVar19;
                  fVar24 = *(float *)(iVar15 * *piVar17 * 4 + local_3d8) * fVar8 + fVar8;
                  *(float *)(uVar12 + (longlong)iVar11 * 4) = fVar24;
                  *(float *)(uVar12 + 4 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((iVar15 + 1) * *piVar17 * 4 + local_3d8) * fVar8 + fVar8;
                  *(float *)(uVar12 + 8 + (longlong)iVar11 * 4) = fVar24;
                  *(float *)(uVar12 + 0xc + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((iVar15 + 2) * *piVar17 * 4 + local_3d8) * fVar8 + fVar8;
                  *(float *)(uVar12 + (longlong)(iVar22 * 2 + 4) * 4) = fVar24;
                  *(float *)(uVar12 + 0x14 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  uVar16 = (ulonglong)(iVar22 + 4U);
                  lVar20 = (longlong)iVar11;
                  iVar11 = iVar11 + 8;
                  fVar24 = *(float *)((iVar15 + 3) * *piVar17 * 4 + local_3d8) * fVar8 + fVar8;
                  *(float *)(uVar12 + (longlong)(iVar22 * 2 + 6) * 4) = fVar24;
                  *(float *)(uVar12 + 0x1c + lVar20 * 4) = fVar7 / fVar24;
                } while ((int)(iVar22 + 4U) < (int)(local_3a0 - 3));
                while (uVar18 = (uint)uVar16, (int)uVar18 < (int)local_3a0) {
LAB_1400d1a94:
                  fVar24 = *(float *)((int)((uVar18 - uVar19) * *piVar17 * 4) + local_3d8) * fVar8 +
                           fVar8;
                  *(float *)(uVar12 + (longlong)(int)(uVar18 * 2) * 4) = fVar24;
                  *(float *)(uVar12 + 4 + (longlong)(int)(uVar18 * 2) * 4) = fVar7 / fVar24;
                  uVar16 = (ulonglong)(uVar18 + 1);
                }
              }
            }
            else if ((int)uVar19 < (int)local_3a0) {
              uVar16 = uVar14;
              bVar4 = bVar5;
              if (3 < (int)(local_3a0 - uVar19)) {
                iVar11 = uVar19 * 2;
                do {
                  iVar15 = (int)uVar16;
                  iVar22 = iVar15 - uVar19;
                  fVar24 = *(float *)(iVar22 * *(int *)(param_1 + 0x1c) * 4 + local_3d8) * fVar8 +
                           fVar8;
                  *(float *)(uVar12 + (longlong)iVar11 * 4) = fVar24;
                  *(float *)(uVar12 + 4 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((longlong)(iVar22 * *(int *)(param_1 + 0x1c) * 4) + 4 +
                                     local_3d8) * fVar8 + fVar8;
                  *(float *)(local_3c8 + (longlong)iVar11 * 4) = fVar24;
                  *(float *)(local_3c8 + 4 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((iVar22 + 1) * *(int *)(param_1 + 0x1c) * 4 + local_3d8) *
                           fVar8 + fVar8;
                  *(float *)(uVar12 + 8 + (longlong)iVar11 * 4) = fVar24;
                  *(float *)(uVar12 + 0xc + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((longlong)((iVar22 + 1) * *(int *)(param_1 + 0x1c) * 4) + 4 +
                                     local_3d8) * fVar8 + fVar8;
                  *(float *)(local_3c8 + 8 + (longlong)iVar11 * 4) = fVar24;
                  lVar20 = (longlong)(iVar15 * 2 + 4);
                  *(float *)(local_3c8 + 0xc + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((iVar22 + 2) * *(int *)(param_1 + 0x1c) * 4 + local_3d8) *
                           fVar8 + fVar8;
                  *(float *)(uVar12 + lVar20 * 4) = fVar24;
                  *(float *)(uVar12 + 0x14 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((longlong)((iVar22 + 2) * *(int *)(param_1 + 0x1c) * 4) + 4 +
                                     local_3d8) * fVar8 + fVar8;
                  *(float *)(local_3c8 + lVar20 * 4) = fVar24;
                  *(float *)(local_3c8 + 0x14 + (longlong)iVar11 * 4) = fVar7 / fVar24;
                  lVar20 = (longlong)iVar11;
                  lVar21 = (longlong)(iVar15 * 2 + 6);
                  uVar18 = iVar15 + 4;
                  uVar16 = (ulonglong)uVar18;
                  iVar11 = iVar11 + 8;
                  fVar24 = *(float *)((iVar22 + 3) * *(int *)(param_1 + 0x1c) * 4 + local_3d8) *
                           fVar8 + fVar8;
                  *(float *)(uVar12 + lVar21 * 4) = fVar24;
                  *(float *)(uVar12 + 0x1c + lVar20 * 4) = fVar7 / fVar24;
                  fVar24 = *(float *)((longlong)((iVar22 + 3) * *(int *)(param_1 + 0x1c) * 4) + 4 +
                                     local_3d8) * fVar8 + fVar8;
                  *(float *)(local_3c8 + lVar21 * 4) = fVar24;
                  *(float *)(local_3c8 + 0x1c + lVar20 * 4) = fVar7 / fVar24;
                } while ((int)uVar18 < (int)(local_3a0 - 3));
                piVar17 = local_388;
                if ((int)local_3a0 <= (int)uVar18) goto LAB_1400d1ae5;
              }
              do {
                iVar11 = (int)uVar16;
                iVar15 = iVar11 * 2;
                fVar24 = *(float *)((int)((iVar11 - uVar19) * *piVar17 * 4) + local_3d8) * fVar8 +
                         fVar8;
                *(float *)(uVar12 + (longlong)iVar15 * 4) = fVar24;
                *(float *)(uVar12 + 4 + (longlong)iVar15 * 4) = fVar7 / fVar24;
                fVar24 = *(float *)((longlong)(int)((iVar11 - uVar19) * *piVar17 * 4) + 4 +
                                   local_3d8) * fVar8 + fVar8;
                *(float *)(local_3c8 + (longlong)iVar15 * 4) = fVar24;
                *(float *)(local_3c8 + 4 + (longlong)iVar15 * 4) = fVar7 / fVar24;
                uVar16 = (ulonglong)(iVar11 + 1U);
              } while ((int)(iVar11 + 1U) < (int)local_3a0);
            }
LAB_1400d1ae5:
            if ((fVar27 < *(float *)(param_1 + 2)) && (uVar19 < local_3a0)) {
              fVar24 = 0.0;
              if ((int)uVar19 < (int)local_3a0) {
                if (3 < (int)(local_3a0 - uVar19)) {
                  iVar11 = *piVar17 * 4;
                  iVar15 = 0;
                  do {
                    uVar18 = (int)uVar14 + 4;
                    uVar14 = (ulonglong)uVar18;
                    fVar1 = *(float *)((iVar15 + 3) * iVar11 + local_3d8);
                    fVar26 = *(float *)((iVar15 + 2) * iVar11 + local_3d8);
                    fVar25 = *(float *)((iVar15 + 1) * iVar11 + local_3d8);
                    iVar22 = iVar15 * iVar11;
                    iVar15 = iVar15 + 4;
                    fVar2 = *(float *)(iVar22 + local_3d8);
                    if (fVar2 <= fVar24) {
                      fVar2 = fVar24;
                    }
                    if (fVar25 <= fVar2) {
                      fVar25 = fVar2;
                    }
                    if (fVar26 <= fVar25) {
                      fVar26 = fVar25;
                    }
                    fVar24 = fVar1;
                    if (fVar1 <= fVar26) {
                      fVar24 = fVar26;
                    }
                  } while ((int)uVar18 < (int)(local_3a0 - 3));
                  if ((int)local_3a0 <= (int)uVar18) goto LAB_1400d1ba6;
                }
                do {
                  iVar11 = (int)uVar14;
                  uVar18 = iVar11 + 1;
                  uVar14 = (ulonglong)uVar18;
                  fVar1 = *(float *)((int)((iVar11 - uVar19) * *piVar17 * 4) + local_3d8);
                  if (fVar1 <= fVar24) {
                    fVar1 = fVar24;
                  }
                  fVar24 = fVar1;
                } while ((int)uVar18 < (int)local_3a0);
              }
LAB_1400d1ba6:
              if (fVar24 < *(float *)(param_1 + 2)) {
                bVar4 = true;
                bVar5 = true;
                bVar6 = true;
              }
            }
            uVar14 = (ulonglong)local_3a0;
            uVar18 = (uint)local_398;
          }
        }
        iVar11 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))
                           ((longlong *)param_1[0x1b],local_3a4);
      } while ((-1 < iVar11) &&
              (iVar11 = (**(code **)(*(longlong *)param_1[0x1b] + 0x28))(), -1 < iVar11));
      bVar3 = true;
LAB_1400d1c22:
      uVar13 = local_3c8;
      uVar16 = local_3d0;
      if (bVar6 || bVar3) {
        iVar11 = func_0x000140290e50(local_2f8);
        if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(5);
        }
        if (*(int *)((longlong)param_1 + 100) == 0x7fffffff) {
          *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(6);
        }
        func_0x000140421870(*param_1,0,0x200);
        return;
      }
      plVar23 = local_370;
      if ((uint)uVar14 == uVar18) {
        if (*piVar17 < 2) {
          (**(code **)(local_3d0 + 0x60))(local_3d0,uVar12,local_380);
        }
        else {
          (**(code **)(local_3d0 + 0x60))();
          (**(code **)(uVar16 + 0x60))(uVar16,uVar13,local_378);
        }
        func_0x000140421870(local_2e8,0,0x200);
        return;
      }
    }
  } while( true );
}

