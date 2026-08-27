// Function: FUN_1401e2bc0
// Addr: 1401e2bc0
// Size: 2639 bytes


void FUN_1401e2bc0(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  size_t _Size;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 ****ppppuVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  bool bVar26;
  float fVar27;
  int local_res20 [2];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  longlong local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  ulonglong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 ***local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  ulonglong local_88;
  size_t local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  puVar20 = auStack_158;
  puVar23 = (undefined8 *)*param_3;
  puVar24 = (undefined8 *)param_3[1];
  if (puVar23 != puVar24) {
    local_88 = 0xcbf29ce484222325;
    uVar25 = local_130._4_4_;
    do {
      if (puVar23 != puVar24) {
        do {
          plVar18 = (longlong *)*puVar23;
          plVar16 = plVar18;
          if (0xf < (ulonglong)plVar18[3]) {
            plVar16 = (longlong *)*plVar18;
          }
          lVar7 = (**(code **)(*param_2 + 0x10))(param_2,plVar16,1);
          if (lVar7 != 0) {
            iVar6 = (**(code **)(*param_2 + 0x30))(param_2,lVar7,"LSBK0001",8);
            if (iVar6 != 0) {
              local_res20[0] = (int)plVar18[10];
              iVar6 = (**(code **)(*param_2 + 0x30))(param_2,lVar7,local_res20,4);
              if (iVar6 != 0) {
                puVar9 = (undefined8 *)plVar18[9];
                for (puVar10 = (undefined8 *)*puVar9; puVar10 != puVar9;
                    puVar10 = (undefined8 *)*puVar10) {
                  FUN_140016fc0(&local_108,puVar10 + 2);
                  local_e8 = puVar10[6];
                  uStack_e0 = puVar10[7];
                  iVar6 = local_res20[0] + -1;
                  bVar26 = local_res20[0] == 0;
                  local_res20[0] = iVar6;
                  if (bVar26) {
LAB_1401e2d49:
                    FUN_140017240(&local_108);
                    break;
                  }
                  puVar22 = &local_108;
                  if (0xf < local_f0) {
                    puVar22 = (undefined4 *)CONCAT44(uStack_104,local_108);
                  }
                  iVar6 = (**(code **)(*param_2 + 0x30))(param_2,lVar7,puVar22,0x28);
                  if (((iVar6 == 0) ||
                      (iVar6 = (**(code **)(*param_2 + 0x30))(param_2,lVar7,&local_e8,4), iVar6 == 0
                      )) || (iVar6 = (**(code **)(*param_2 + 0x30))
                                               (param_2,lVar7,uStack_e0,local_e8 & 0xffffffff),
                            iVar6 == 0)) goto LAB_1401e2d49;
                  FUN_140017240(&local_108);
                }
              }
            }
            (**(code **)(*param_2 + 0x20))(param_2,lVar7);
            puVar9 = (undefined8 *)plVar18[9];
            for (puVar10 = (undefined8 *)*puVar9; puVar10 != puVar9;
                puVar10 = (undefined8 *)*puVar10) {
              FUN_140016fc0(&local_108,puVar10 + 2);
              local_e8 = puVar10[6];
              uStack_e0 = puVar10[7];
              thunk_FUN_14028af80();
              FUN_140017240(&local_108);
            }
            FUN_14000d9e0(plVar18 + 0xb);
            FUN_1401e4730(plVar18 + 9);
            FUN_140017240(plVar18 + 4);
            FUN_140017240(plVar18);
            thunk_FUN_14028af80(plVar18,0x88);
          }
          puVar23 = puVar23 + 1;
        } while (puVar23 != puVar24);
        uVar25 = local_130._4_4_;
      }
      if (*param_3 != param_3[1]) {
        param_3[1] = *param_3;
      }
      iVar6 = FUN_140290d80(&DAT_1404dfb40);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (DAT_1404dfb8c == 0x7fffffff) {
LAB_1401e35dd:
        DAT_1404dfb8c = DAT_1404dfb8c + -1;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + -8) = &UNK_1401e35ef;
        FUN_140290d30(6);
      }
      local_100 = (longlong *)0x0;
      local_f8 = 0;
      local_108 = *(undefined4 *)(param_1 + 0x28);
      local_100 = (longlong *)FUN_14028af20(0x18);
      *local_100 = (longlong)local_100;
      local_100[1] = (longlong)local_100;
      local_d8 = *(undefined8 *)(param_1 + 0x58);
      local_d0 = *(undefined8 *)(param_1 + 0x60);
      local_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_140037600(&local_f0,*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3,
                    local_100);
      puVar23 = *(undefined8 **)(param_1 + 0x30);
      plVar18 = local_100;
      for (puVar24 = (undefined8 *)*puVar23; local_100 = plVar18, puVar24 != puVar23;
          puVar24 = (undefined8 *)*puVar24) {
        FUN_1401e47a0(&local_108,local_60,puVar24 + 2);
        plVar18 = local_100;
      }
      plVar16 = (longlong *)*plVar18;
      if (plVar16 != plVar18) {
        do {
          uVar13 = plVar16[2];
          if (*(char *)(uVar13 + 0x84) != '\0') {
            *(undefined1 *)(uVar13 + 0x84) = 0;
            lVar7 = *(longlong *)(param_1 + 0x40);
            plVar2 = *(longlong **)(param_1 + 0x30);
            uVar15 = *(ulonglong *)(param_1 + 0x58) &
                     ((((((((uVar13 & 0xff ^ local_88) * 0x100000001b3 ^
                           (longlong)uVar13 >> 8 & 0xffU) * 0x100000001b3 ^
                          (longlong)uVar13 >> 0x10 & 0xffU) * 0x100000001b3 ^
                         (longlong)uVar13 >> 0x18 & 0xffU) * 0x100000001b3 ^
                        (longlong)uVar13 >> 0x20 & 0xffU) * 0x100000001b3 ^
                       (longlong)uVar13 >> 0x28 & 0xffU) * 0x100000001b3 ^
                      (longlong)uVar13 >> 0x30 & 0xffU) * 0x100000001b3 ^
                     (longlong)uVar13 >> 0x38 & 0xffU) * 0x100000001b3;
            plVar3 = *(longlong **)(lVar7 + 8 + uVar15 * 0x10);
            if (plVar3 == plVar2) {
LAB_1401e2fb1:
              plVar11 = (longlong *)0x0;
            }
            else {
              uVar12 = plVar3[2];
              plVar11 = plVar3;
              while (uVar13 != uVar12) {
                if (plVar11 == *(longlong **)(lVar7 + uVar15 * 0x10)) goto LAB_1401e2fb1;
                plVar11 = (longlong *)plVar11[1];
                uVar12 = plVar11[2];
              }
            }
            if (plVar11 != (longlong *)0x0) {
              plVar4 = *(longlong **)(lVar7 + uVar15 * 0x10);
              if (plVar3 == plVar11) {
                if (plVar4 == plVar11) {
                  *(longlong **)(lVar7 + uVar15 * 0x10) = plVar2;
                  *(longlong **)(lVar7 + 8 + uVar15 * 0x10) = plVar2;
                }
                else {
                  *(longlong *)(lVar7 + 8 + uVar15 * 0x10) = plVar11[1];
                }
              }
              else if (plVar4 == plVar11) {
                *(longlong *)(lVar7 + uVar15 * 0x10) = *plVar11;
              }
              lVar7 = *plVar11;
              *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
              *(longlong *)plVar11[1] = lVar7;
              *(longlong *)(lVar7 + 8) = plVar11[1];
              thunk_FUN_14028af80(plVar11,0x18);
            }
            if (*(int *)(uVar13 + 0x80) == 0) {
              FUN_1401e28f0(uVar13);
              lVar7 = *(longlong *)(param_1 + 0x18);
              lVar8 = thunk_FUN_14028d250(*(undefined8 *)(param_1 + 0x10),lVar7,uVar13);
              if ((lVar8 != lVar7) && (lVar8 = FUN_14028f140(lVar8,lVar7,uVar13), lVar8 != lVar7)) {
                lVar21 = *(longlong *)(param_1 + 0x18) - lVar7;
                FUN_1404210f0(lVar8,lVar7,lVar21);
                *(longlong *)(param_1 + 0x18) = lVar8 + lVar21;
              }
            }
          }
          plVar16 = (longlong *)*plVar16;
        } while (plVar16 != plVar18);
        uVar25 = local_130._4_4_;
      }
      if (*(char *)(param_1 + 8) != '\0') {
        puVar23 = *(undefined8 **)(param_1 + 0x30);
        for (puVar24 = (undefined8 *)*puVar23; puVar24 != puVar23; puVar24 = (undefined8 *)*puVar24)
        {
          plVar18 = (longlong *)puVar24[2];
          *(undefined1 *)((longlong)plVar18 + 0x84) = 1;
          puVar9 = (undefined8 *)FUN_14028af20();
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          puVar9[0xf] = 0;
          puVar9[0x10] = 0;
          lVar7 = FUN_1401e2b10(puVar9);
          local_138 = lVar7;
          if ((longlong *)lVar7 != plVar18) {
            plVar16 = plVar18;
            if (0xf < (ulonglong)plVar18[3]) {
              plVar16 = (longlong *)*plVar18;
            }
            FUN_14000f880(lVar7,plVar16,plVar18[2]);
            plVar16 = plVar18 + 4;
            if (0xf < (ulonglong)plVar18[7]) {
              plVar16 = (longlong *)*plVar16;
            }
            FUN_14000f880(lVar7 + 0x20,plVar16,plVar18[6]);
          }
          *(undefined1 *)(lVar7 + 0x84) = *(undefined1 *)((longlong)plVar18 + 0x84);
          *(int *)(lVar7 + 0x80) = (int)plVar18[0x10];
          plVar18 = (longlong *)plVar18[9];
          plVar16 = (longlong *)*plVar18;
          if (plVar16 != plVar18) {
            local_118 = lVar7 + 0x40;
            do {
              uVar13 = local_118;
              FUN_140016fc0(local_b8,plVar16 + 2);
              local_94 = *(undefined4 *)((longlong)plVar16 + 0x34);
              local_98 = (undefined4)plVar16[6];
              local_90 = plVar16[7];
              local_68 = thunk_FUN_14028af20();
              FUN_1404210f0(local_68,local_90,local_98);
              uVar15 = 0xcbf29ce484222325;
              ppppuVar17 = local_b8;
              if (0xf < local_a0) {
                ppppuVar17 = (undefined8 ****)local_b8[0];
              }
              uVar12 = 0;
              local_120 = local_98;
              if (local_a8 != 0) {
                do {
                  pbVar1 = (byte *)(uVar12 + (longlong)ppppuVar17);
                  uVar12 = uVar12 + 1;
                  uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
                } while (uVar12 < local_a8);
                uVar25 = local_130._4_4_;
              }
              FUN_1400110a0(uVar13,&local_130,local_b8,uVar15);
              puVar9 = local_128;
              if (local_128 == (undefined8 *)0x0) {
                if (*(longlong *)(local_138 + 0x50) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_14028c2e0("unordered_map/set too long");
                }
                puVar9 = (undefined8 *)FUN_14028af20(0x40);
                local_c8 = puVar9 + 2;
                local_c0 = puVar9;
                FUN_140016fc0(local_c8,local_b8);
                puVar9[6] = 0;
                puVar9[7] = 0;
                fVar27 = (float)(*(longlong *)(local_138 + 0x50) + 1) /
                         (float)*(ulonglong *)(local_138 + 0x78);
                if (*(float *)(local_138 + 0x40) <= fVar27 && fVar27 != *(float *)(local_138 + 0x40)
                   ) {
                  FUN_1401e4d60();
                  uVar13 = uVar15 & *(ulonglong *)(local_138 + 0x70);
                  puVar9 = *(undefined8 **)(*(longlong *)(local_138 + 0x58) + 8 + uVar13 * 0x10);
                  puVar10 = *(undefined8 **)(local_138 + 0x48);
                  if (puVar9 != puVar10) {
                    local_78 = *(undefined8 **)(*(longlong *)(local_138 + 0x58) + uVar13 * 0x10);
                    local_70 = local_c0[5];
                    _Size = local_c0[4];
                    puVar10 = puVar9;
                    local_80 = _Size;
                    while( true ) {
                      puVar9 = puVar10 + 2;
                      if (0xf < (ulonglong)puVar10[5]) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                      puVar14 = local_c8;
                      if (0xf < local_70) {
                        puVar14 = (undefined8 *)*local_c8;
                      }
                      if ((_Size == puVar10[4]) &&
                         ((_Size == 0 ||
                          (iVar6 = memcmp(puVar14,puVar9,_Size), _Size = local_80, iVar6 == 0)))) {
                        local_130 = (undefined8 *)*puVar10;
                        puVar9 = local_c0;
                        local_128 = puVar10;
                        goto LAB_1401e3373;
                      }
                      if (puVar10 == local_78) break;
                      puVar10 = (undefined8 *)puVar10[1];
                    }
                  }
                  puVar9 = local_c0;
                  local_130 = puVar10;
                  local_128 = (undefined8 *)0x0;
                }
LAB_1401e3373:
                puVar10 = (undefined8 *)local_130[1];
                *(longlong *)(local_138 + 0x50) = *(longlong *)(local_138 + 0x50) + 1;
                *puVar9 = local_130;
                puVar9[1] = puVar10;
                *puVar10 = puVar9;
                local_130[1] = puVar9;
                uVar15 = uVar15 & *(ulonglong *)(local_138 + 0x70);
                lVar7 = *(longlong *)(local_138 + 0x58);
                puVar14 = *(undefined8 **)(lVar7 + uVar15 * 0x10);
                if (puVar14 == *(undefined8 **)(local_138 + 0x48)) {
                  *(undefined8 **)(lVar7 + uVar15 * 0x10) = puVar9;
LAB_1401e33c1:
                  *(undefined8 **)(lVar7 + 8 + uVar15 * 0x10) = puVar9;
                }
                else if (puVar14 == local_130) {
                  *(undefined8 **)(lVar7 + uVar15 * 0x10) = puVar9;
                }
                else if (*(undefined8 **)(lVar7 + 8 + uVar15 * 0x10) == puVar10) goto LAB_1401e33c1;
              }
              *(undefined4 *)(puVar9 + 6) = local_120;
              *(undefined4 *)((longlong)puVar9 + 0x34) = uVar25;
              puVar9[7] = local_68;
              FUN_140017240(local_b8);
              plVar16 = (longlong *)*plVar16;
              lVar7 = local_138;
            } while (plVar16 != plVar18);
          }
          plVar18 = (longlong *)param_3[1];
          if (plVar18 == (longlong *)param_3[2]) {
            uVar13 = (longlong)plVar18 - *param_3;
            lVar7 = (longlong)uVar13 >> 3;
            if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140013050();
            }
            uVar15 = (longlong)((longlong)param_3[2] - *param_3) >> 3;
            if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
LAB_1401e3608:
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            local_118 = lVar7 + 1;
            uVar15 = (uVar15 >> 1) + uVar15;
            uVar12 = local_118;
            if (local_118 <= uVar15) {
              uVar12 = uVar15;
            }
            if (0x1fffffffffffffff < uVar12) goto LAB_1401e3608;
            uVar12 = uVar12 * 8;
            if (uVar12 != 0) {
              if (uVar12 < 0x1000) {
                uVar15 = FUN_14028af20(uVar12);
                goto LAB_1401e34c7;
              }
              if (uVar12 + 0x27 <= uVar12) goto LAB_1401e3608;
              lVar7 = FUN_14028af20();
              if (lVar7 != 0) {
                uVar15 = lVar7 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar15 - 8) = lVar7;
                goto LAB_1401e34c7;
              }
LAB_1401e35d6:
              pcVar5 = (code *)swi(0x29);
              DAT_1404dfb8c = (*pcVar5)(5);
              puVar20 = auStack_150;
              goto LAB_1401e35dd;
            }
            uVar15 = 0;
LAB_1401e34c7:
            uVar13 = uVar13 & 0xfffffffffffffff8;
            *(longlong *)(uVar15 + uVar13) = local_138;
            plVar16 = (longlong *)*param_3;
            if (plVar18 == (longlong *)param_3[1]) {
              lVar7 = (longlong)param_3[1] - (longlong)plVar16;
              uVar13 = uVar15;
              plVar18 = plVar16;
            }
            else {
              FUN_1404210f0(uVar15,plVar16,(longlong)plVar18 - (longlong)plVar16);
              uVar13 = uVar13 + 8 + uVar15;
              lVar7 = param_3[1] - (longlong)plVar18;
            }
            FUN_1404210f0(uVar13,plVar18,lVar7);
            uVar13 = *param_3;
            if (uVar13 != 0) {
              uVar19 = ((longlong)(param_3[2] - uVar13) >> 3) * 8;
              if (0xfff < uVar19) {
                if (0x1f < (uVar13 - *(ulonglong *)(uVar13 - 8)) - 8) goto LAB_1401e35d6;
                uVar19 = uVar19 + 0x27;
                uVar13 = *(ulonglong *)(uVar13 - 8);
              }
              thunk_FUN_14028af80(uVar13,uVar19);
            }
            *param_3 = uVar15;
            param_3[1] = uVar15 + local_118 * 8;
            param_3[2] = uVar12 + uVar15;
          }
          else {
            *plVar18 = lVar7;
            param_3[1] = param_3[1] + 8;
          }
        }
      }
      FUN_14000d9e0(&local_f0);
      FUN_140049340(&local_100);
      FUN_140290ea0(&DAT_1404dfb40);
      puVar24 = (undefined8 *)param_3[1];
      puVar23 = (undefined8 *)*param_3;
    } while (puVar23 != puVar24);
  }
  FUN_14000d9e0(param_3);
  return;
}

