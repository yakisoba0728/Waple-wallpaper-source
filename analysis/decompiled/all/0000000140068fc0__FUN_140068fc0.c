// Function: FUN_140068fc0
// Addr: 140068fc0
// Size: 3050 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140068fc0(longlong param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  size_t _Size;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *_Buf1;
  int iVar17;
  longlong lVar18;
  longlong *_Buf2;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  byte bVar30;
  undefined8 uVar31;
  longlong local_res8;
  int local_res20;
  undefined4 uStackX_24;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  int local_188;
  uint local_180;
  ulonglong local_178;
  int local_168;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong *local_130;
  ulonglong local_128;
  undefined1 local_118 [16];
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  int local_88;
  int local_84;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_58 [2] [16];
  
  puVar21 = auStack_1a8;
  local_res8 = param_1;
  FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
  lVar18 = local_res8;
  if (local_res8 == DAT_1404e5330) {
    return;
  }
  plVar20 = *(longlong **)(local_res8 + 0x30);
  if (plVar20 == (longlong *)0x0) {
    return;
  }
  iVar8 = *param_3;
  uVar14 = 0;
  local_res8 = CONCAT44(local_res8._4_4_,iVar8);
  local_15c = 0;
  local_160 = 0;
  local_150 = 0;
  if (iVar8 == -1) {
    return;
  }
  puVar16 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar16 = (undefined8 *)*param_2;
  }
  uVar25 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar3 = (byte *)(uVar14 + (longlong)puVar16);
      uVar14 = uVar14 + 1;
      uVar25 = (uVar25 ^ *pbVar3) * 0x100000001b3;
    } while (uVar14 < (ulonglong)param_2[2]);
  }
  lVar10 = FUN_1400110a0(&DAT_1404e5368,local_58,param_2,uVar25);
  plVar11 = DAT_1404e5370;
  if (*(longlong **)(lVar10 + 8) != (longlong *)0x0) {
    plVar11 = *(longlong **)(lVar10 + 8);
  }
  if (plVar11 == DAT_1404e5370) {
    return;
  }
  auVar4 = *(undefined1 (*) [16])(plVar11 + 0xb);
  local_118 = auVar4;
  cVar7 = (**(code **)(*plVar20 + 0x60))(plVar20,&local_15c,&local_160,&local_150);
  if (cVar7 == '\0') {
    return;
  }
  local_e8 = &DAT_1404e55a0;
  local_d0 = 0;
  local_c8 = 0xf;
  local_84 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (&local_e0 != param_2) {
    puVar16 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar16 = (undefined8 *)*param_2;
    }
    FUN_14000f880(&local_e0,puVar16,param_2[2]);
  }
  plVar20 = local_78;
  local_88 = param_3[1];
  iVar29 = auVar4._8_4_;
  iVar26 = auVar4._12_4_;
  local_168 = iVar29;
  local_158 = iVar26;
  local_b0 = iVar29;
  local_ac = iVar26;
  local_a8 = auVar4;
  local_98 = auVar4;
  local_c0 = FUN_14003cb80();
  iVar12 = *param_3;
  if (iVar12 == -3) {
    if (*(longlong *)(param_3 + 2) == *(longlong *)(param_3 + 4)) {
      iVar8 = FUN_1402c97a0();
      iVar8 = (int)(((float)iVar8 / DAT_140492960) * _DAT_140492894 + 0.0);
      local_84 = 0x1a;
      if (iVar8 < 0x1a) {
        local_84 = iVar8;
      }
      iVar8 = (int)local_res8;
      if (local_84 < 0) {
        local_84 = 0;
      }
    }
    else {
      iVar8 = (int)(*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2) >> 2);
      uVar22 = iVar8 - 1;
      iVar12 = FUN_1402c97a0();
      uVar28 = (uint)(((float)iVar12 / DAT_140492960) * (float)iVar8 + 0.0);
      if ((int)uVar28 < (int)uVar22) {
        uVar22 = uVar28;
      }
      if ((int)uVar22 < 0) {
        uVar22 = 0;
      }
      iVar8 = (int)local_res8;
      local_84 = *(int *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar22 * 4);
    }
  }
  else if (iVar12 < 0x1a) {
    local_84 = iVar12;
    if (iVar12 < 0) {
      local_84 = 0;
    }
  }
  else {
    local_84 = 0x1a;
  }
  uVar14 = local_150;
  local_b8 = 0;
  plVar11 = (longlong *)FUN_14028af20(0x18);
  *(undefined4 *)(plVar11 + 1) = 1;
  *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
  *plVar11 = (longlong)&PTR_FUN_140478260;
  plVar11[2] = uVar14;
  uVar31 = thunk_FUN_14028af80(0,1);
  local_80 = uVar14;
  local_78 = plVar11;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar20 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      uVar31 = (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        uVar31 = (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
  }
  local_70 = CONCAT44(local_160,local_15c);
  FUN_140069de0(uVar31,lVar18 + 0x10);
  if (iVar8 == -2) {
    local_178 = local_150;
    local_180 = local_160;
    local_188 = local_15c;
    FUN_14005aaf0(lVar18 + 0x10,local_98,DAT_1404e52a0);
    iVar8 = -2;
    goto LAB_1400694dd;
  }
  uVar31 = FUN_14028af20(0xf0);
  uVar31 = FUN_140058050(uVar31);
  FUN_140058430(uVar31,&local_e8);
  puVar16 = DAT_1404e5318;
  if (DAT_1404e5318 == DAT_1404e5320) {
    uVar14 = (longlong)DAT_1404e5318 - (longlong)DAT_1404e5310;
    lVar18 = (longlong)uVar14 >> 3;
    if (lVar18 == 0x1fffffffffffffff) goto LAB_140069ba0;
    uVar25 = (longlong)DAT_1404e5320 - (longlong)DAT_1404e5310 >> 3;
    if (0x1fffffffffffffff - (uVar25 >> 1) < uVar25) {
LAB_140069ba6:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar2 = lVar18 + 1;
    uVar25 = (uVar25 >> 1) + uVar25;
    uVar23 = uVar2;
    if (uVar2 <= uVar25) {
      uVar23 = uVar25;
    }
    if (0x1fffffffffffffff < uVar23) goto LAB_140069ba6;
    uVar25 = uVar23 * 8;
    if (uVar25 != 0) {
      if (uVar25 < 0x1000) {
        puVar19 = (undefined8 *)FUN_14028af20(uVar25);
        goto LAB_140069421;
      }
      if (uVar25 + 0x27 <= uVar25) goto LAB_140069ba6;
      lVar18 = FUN_14028af20();
      if (lVar18 != 0) {
        puVar19 = (undefined8 *)(lVar18 + 0x27U & 0xffffffffffffffe0);
        puVar19[-1] = lVar18;
        goto LAB_140069421;
      }
LAB_140069b99:
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar21 = auStack_1a0;
LAB_140069ba0:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_140069ba5;
      FUN_140013050();
    }
    puVar19 = (undefined8 *)0x0;
LAB_140069421:
    uVar14 = uVar14 & 0xfffffffffffffff8;
    *(undefined8 *)(uVar14 + (longlong)puVar19) = uVar31;
    if (puVar16 == DAT_1404e5318) {
      lVar18 = (longlong)DAT_1404e5318 - (longlong)DAT_1404e5310;
      puVar15 = puVar19;
      puVar16 = DAT_1404e5310;
    }
    else {
      FUN_1404210f0(puVar19,DAT_1404e5310,(longlong)puVar16 - (longlong)DAT_1404e5310);
      lVar18 = (longlong)DAT_1404e5318 - (longlong)puVar16;
      puVar15 = (undefined8 *)(uVar14 + 8 + (longlong)puVar19);
    }
    FUN_1404210f0(puVar15,puVar16,lVar18);
    if (DAT_1404e5310 != (undefined8 *)0x0) {
      uVar14 = ((longlong)DAT_1404e5320 - (longlong)DAT_1404e5310 >> 3) * 8;
      puVar16 = DAT_1404e5310;
      if (0xfff < uVar14) {
        puVar16 = (undefined8 *)DAT_1404e5310[-1];
        if (0x1f < (ulonglong)((longlong)DAT_1404e5310 + (-8 - (longlong)puVar16)))
        goto LAB_140069b99;
        uVar14 = uVar14 + 0x27;
      }
      thunk_FUN_14028af80(puVar16,uVar14);
    }
    DAT_1404e5318 = puVar19 + uVar2;
    DAT_1404e5320 = puVar19 + uVar23;
    iVar29 = local_168;
    DAT_1404e5310 = puVar19;
  }
  else {
    *DAT_1404e5318 = uVar31;
    DAT_1404e5318 = DAT_1404e5318 + 1;
  }
  iVar8 = (int)local_res8;
LAB_1400694dd:
  local_58[0] = auVar4;
  if (DAT_1404e52e0 == 2) {
    local_130 = DAT_1404e5370;
    plVar20 = (longlong *)*DAT_1404e5370;
    if (plVar20 != DAT_1404e5370) {
      iVar12 = iVar29 - auVar4._0_4_;
      uVar14 = (ulonglong)(uint)(iVar26 - auVar4._4_4_);
      plVar11 = DAT_1404e5370;
      local_res20 = iVar12;
      local_128 = uVar14;
      do {
        if ((*(byte *)((longlong)plVar20 + 0x53) & 1) != 0) {
          iVar26 = (int)plVar20[0xc] - (int)plVar20[0xb];
          iVar24 = *(int *)((longlong)plVar20 + 100) - *(int *)((longlong)plVar20 + 0x5c);
          iVar13 = (int)uVar14;
          if (iVar12 < iVar26) {
            iVar27 = (int)(((float)iVar13 * ((float)iVar24 / (float)iVar26)) /
                          ((float)iVar13 / (float)iVar12));
            iVar17 = iVar12;
          }
          else {
            iVar17 = iVar26;
            iVar27 = iVar24;
            if (iVar13 < iVar24) {
              iVar17 = (int)(((float)iVar12 * ((float)iVar26 / (float)iVar24)) /
                            ((float)iVar12 / (float)iVar13));
              iVar27 = iVar13;
            }
          }
          iVar17 = iVar29 - ((iVar12 / 2 - iVar17 / 2) + local_58[0]._0_4_);
          iVar9 = 0;
          iVar13 = local_158 - ((iVar13 / 2 - iVar27 / 2) + local_58[0]._4_4_);
          if (iVar17 < 1) {
            iVar17 = iVar9;
          }
          if (iVar13 < 1) {
            iVar13 = iVar9;
          }
          iVar12 = local_res20;
          if (iVar13 * iVar17 != 0) {
            if (iVar26 < 1) {
              iVar26 = iVar9;
            }
            if (iVar24 < 1) {
              iVar24 = iVar9;
            }
            if (iVar24 * iVar26 != 0) {
              auVar4 = *(undefined1 (*) [16])(plVar20 + 0xb);
              bVar30 = *(byte *)((longlong)plVar20 + 0x53) >> 2;
              local_68 = bVar30 & 1;
              local_a8 = auVar4;
              local_98 = auVar4;
              FUN_140069de0(iVar13 * iVar17,plVar20 + 2);
              if (iVar8 == -2) {
                local_138 = 0;
                local_148 = 0;
                uStack_140 = 0;
                uVar28 = auVar4._12_4_ - auVar4._4_4_;
                iVar26 = auVar4._8_4_ - auVar4._0_4_;
                iVar8 = uVar28 * iVar26 * 4;
                local_154 = iVar26;
                FUN_14005ae80(&local_148,(longlong)iVar8);
                local_178 = CONCAT71(local_178._1_7_,bVar30) & 0xffffffffffffff01;
                local_188 = iVar26;
                local_180 = uVar28;
                FUN_140109ba0(local_150,local_148,local_15c,local_160);
                uVar14 = local_148;
                local_108 = 0;
                lStack_100 = 0;
                local_118._0_8_ = local_148;
                local_f8 = 0;
                FUN_14005ae80(&local_108,iVar8);
                FUN_1404210f0(local_108,uVar14,lStack_100 - local_108);
                lVar18 = local_108;
                uVar22 = 0;
                if (uVar28 != 0) {
                  uVar31 = local_118._0_8_;
                  iVar8 = iVar26 * 4;
                  do {
                    FUN_1404210f0((ulonglong)(uVar22 * iVar8) + uVar31,
                                  (ulonglong)(((uVar28 - uVar22) + -1) * iVar8) + lVar18,iVar8);
                    uVar22 = uVar22 + 1;
                    plVar11 = local_130;
                    iVar26 = local_154;
                  } while (uVar22 < uVar28);
                }
                if (lVar18 != 0) {
                  uVar14 = local_f8 - lVar18;
                  lVar10 = lVar18;
                  if (0xfff < uVar14) {
                    lVar10 = *(longlong *)(lVar18 + -8);
                    if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140069b99;
                    uVar14 = uVar14 + 0x27;
                  }
                  thunk_FUN_14028af80(lVar10,uVar14);
                  local_f8 = 0;
                  local_108 = 0;
                  lStack_100 = 0;
                }
                local_178 = local_148;
                local_188 = iVar26;
                local_180 = uVar28;
                FUN_14005aaf0(plVar20 + 2,local_98,DAT_1404e52a0);
                uVar14 = local_128;
                iVar29 = local_168;
                iVar12 = local_res20;
                if (local_148 != 0) {
                  uVar25 = local_138 - local_148;
                  uVar14 = local_148;
                  if (0xfff < uVar25) {
                    uVar14 = *(ulonglong *)(local_148 - 8);
                    if (0x1f < (local_148 - uVar14) - 8) goto LAB_140069b99;
                    uVar25 = uVar25 + 0x27;
                  }
                  thunk_FUN_14028af80(uVar14,uVar25);
                  uVar14 = local_128;
                  iVar29 = local_168;
                  iVar12 = local_res20;
                }
              }
              else {
                uVar31 = FUN_14028af20(0xf0);
                uVar31 = FUN_140058050(uVar31);
                local_118._0_8_ = uVar31;
                FUN_140058430(uVar31,&local_e8);
                FUN_1400302d0(&DAT_1404e5310,local_118);
                iVar29 = local_168;
                iVar12 = local_res20;
              }
            }
          }
        }
        plVar20 = (longlong *)*plVar20;
        iVar8 = (int)local_res8;
      } while (plVar20 != plVar11);
    }
  }
  else if (DAT_1404e52e0 == 0) {
    FUN_1400307a0(&DAT_1404e5368,&local_res20,param_2);
    plVar11 = DAT_1404e5370;
    plVar20 = (longlong *)CONCAT44(uStackX_24,local_res20);
    if (plVar20 != DAT_1404e5370) {
      local_154 = (int)plVar20[0xc];
      iVar8 = (int)plVar20[0xb];
      iVar26 = *(int *)((longlong)plVar20 + 0x5c);
      local_158 = *(int *)((longlong)plVar20 + 100);
      local_168 = iVar8;
      local_res20 = iVar26;
      for (plVar5 = (longlong *)*DAT_1404e5370; plVar5 != plVar11; plVar5 = (longlong *)*plVar5) {
        _Buf2 = plVar20 + 2;
        if (0xf < (ulonglong)plVar20[5]) {
          _Buf2 = (longlong *)*_Buf2;
        }
        _Size = plVar5[4];
        if ((ulonglong)plVar5[5] < 0x10) {
          _Buf1 = plVar5 + 2;
        }
        else {
          _Buf1 = (longlong *)plVar5[2];
        }
        if (((_Size != plVar20[4]) ||
            ((_Size != 0 && (iVar12 = memcmp(_Buf1,_Buf2,_Size), iVar12 != 0)))) &&
           (((char)plVar5[10] != -1 &&
            (((((char)plVar5[10] == (char)plVar20[10] && (cVar7 = FUN_1400755f0(), cVar7 == '\0'))
              && (((int)plVar5[0xb] != iVar8 ||
                  ((((int)plVar5[0xc] != local_154 || (*(int *)((longlong)plVar5 + 0x5c) != iVar26))
                   || (*(int *)((longlong)plVar5 + 100) != local_158)))))) &&
             (cVar7 = FUN_1400646a0(plVar5 + 0xb,local_58,local_118), cVar7 != '\0')))))) {
          auVar4 = *(undefined1 (*) [16])(plVar5 + 0xb);
          bVar30 = *(byte *)((longlong)plVar5 + 0x53) >> 2;
          local_68 = bVar30 & 1;
          local_a8 = auVar4;
          local_98 = auVar4;
          FUN_140069de0();
          if ((int)local_res8 == -2) {
            local_138 = 0;
            local_148 = 0;
            uStack_140 = 0;
            uVar22 = auVar4._12_4_ - auVar4._4_4_;
            iVar8 = auVar4._8_4_ - auVar4._0_4_;
            FUN_14005ae80(&local_148,(longlong)(int)(uVar22 * iVar8 * 4));
            local_178 = CONCAT71(local_178._1_7_,bVar30) & 0xffffffffffffff01;
            local_188 = iVar8;
            local_180 = uVar22;
            FUN_140109ba0(local_150,local_148,local_15c,local_160);
            FUN_140109aa0(local_148,iVar8,uVar22);
            FUN_14005a890(plVar5 + 2);
            local_178 = local_148;
            local_188 = iVar8;
            local_180 = uVar22;
            FUN_14005aaf0(plVar5 + 2,local_98,DAT_1404e52a0);
            iVar8 = local_168;
            iVar26 = local_res20;
            if (local_148 != 0) {
              uVar25 = local_138 - local_148;
              uVar14 = local_148;
              if (0xfff < uVar25) {
                uVar14 = *(ulonglong *)(local_148 - 8);
                if (0x1f < (local_148 - uVar14) - 8) goto LAB_140069b99;
                uVar25 = uVar25 + 0x27;
              }
              thunk_FUN_14028af80(uVar14,uVar25);
              iVar8 = local_168;
              iVar26 = local_res20;
            }
          }
          else {
            uVar31 = FUN_14028af20(0xf0);
            local_130 = (longlong *)FUN_140058050(uVar31);
            FUN_140058430(local_130,&local_e8);
            FUN_1400302d0(&DAT_1404e5310,&local_130);
            iVar26 = local_res20;
          }
        }
      }
    }
  }
  plVar20 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_78 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
  }
  FUN_140017240(&local_e0);
  return;
}

