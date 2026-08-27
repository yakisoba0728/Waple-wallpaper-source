// Function: FUN_140185960
// Addr: 140185960
// Size: 2520 bytes


undefined8 ***** FUN_140185960(longlong param_1,char param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 ***pppuVar16;
  size_t sVar17;
  undefined8 ****ppppuVar18;
  undefined8 *****_Buf1;
  ulonglong uVar19;
  undefined8 ****_Buf1_00;
  undefined8 *****pppppuVar20;
  ulonglong uVar21;
  undefined8 *****pppppuVar22;
  undefined8 ****ppppuVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  undefined8 ****ppppuVar27;
  float fVar28;
  uint local_res18 [2];
  uint local_res20;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  uint local_148 [2];
  undefined8 ****local_140;
  longlong lStack_138;
  longlong local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  undefined8 ***pppuStack_118;
  ulonglong local_110;
  ulonglong local_108;
  uint local_100;
  undefined8 ****local_f8;
  undefined8 **ppuStack_f0;
  undefined8 **local_e8;
  undefined8 **ppuStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 ****local_c8;
  undefined8 **local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 ****local_a8;
  undefined8 ****local_a0;
  ulonglong local_98;
  undefined8 ****local_90 [2];
  undefined8 ***local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  
  puVar26 = auStack_168;
  iVar6 = FUN_140290d80(&DAT_1404dfaf0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb3c == 0x7fffffff) {
    DAT_1404dfb3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  pppppuVar15 = (undefined8 *****)0x0;
  if (DAT_1404e8ee8 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_1401862a0;
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
    puVar9 = (undefined8 *)FUN_14028af20(0x68);
    *puVar9 = uVar8;
    *(undefined1 *)(puVar9 + 1) = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    lVar10 = FUN_14028af20(0x18);
    *(longlong *)lVar10 = lVar10;
    *(longlong *)(lVar10 + 8) = lVar10;
    puVar9[6] = lVar10;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 7;
    puVar9[0xc] = 8;
    *(undefined4 *)(puVar9 + 5) = 0x3f800000;
    FUN_140037600(puVar9 + 8,0x10,puVar9[6]);
    DAT_1404e8ee8 = puVar9;
  }
  DAT_1404e8ee4 = DAT_1404e8ee4 + 1;
  lVar10 = param_1 + 0x20;
  if (param_2 == '\0') {
    lVar10 = param_1;
  }
  FUN_140016fc0(local_90,lVar10);
  puVar9 = DAT_1404e8ee8;
  local_b0 = DAT_1404e8ee8;
  iVar6 = FUN_140290d80(&DAT_1404dfb40);
  uVar24 = local_78;
  pppppuVar20 = (undefined8 *****)local_90[0];
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar3 = (longlong *)puVar9[3];
  local_98 = local_78;
  local_a0 = local_90[0];
  for (plVar13 = (longlong *)puVar9[2]; plVar13 != plVar3; plVar13 = plVar13 + 1) {
    pppppuVar15 = (undefined8 *****)*plVar13;
    pppppuVar22 = local_90;
    if (0xf < uVar24) {
      pppppuVar22 = pppppuVar20;
    }
    _Buf1 = pppppuVar15 + 4;
    ppppuVar27 = pppppuVar15[6];
    if ((undefined8 ****)0xf < pppppuVar15[7]) {
      _Buf1 = (undefined8 *****)*_Buf1;
    }
    if ((ppppuVar27 == (undefined8 ****)local_80) &&
       ((ppppuVar27 == (undefined8 ****)0x0 ||
        (iVar6 = memcmp(_Buf1,pppppuVar22,(size_t)ppppuVar27), iVar6 == 0)))) {
      *(int *)(pppppuVar15 + 0x10) = *(int *)(pppppuVar15 + 0x10) + 1;
      goto LAB_14018622a;
    }
  }
  if (0x7fffffffffffffffU - (longlong)local_80 < 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  local_110 = 0;
  local_108 = 0;
  uVar21 = (longlong)local_80 + 0x11;
  pppppuVar15 = local_90;
  if (0xf < uVar24) {
    pppppuVar15 = pppppuVar20;
  }
  local_120 = (undefined8 ****)0x0;
  pppuStack_118 = (undefined8 ****)0x0;
  if (uVar21 < 0x10) {
    uVar11 = 0xf;
    ppppuVar27 = (undefined8 ****)&local_120;
  }
  else {
    uVar11 = uVar21 | 0xf;
    if (uVar11 < 0x8000000000000000) {
      if (uVar11 < 0x16) {
        uVar11 = 0x16;
      }
      uVar1 = uVar11 + 1;
      if (uVar1 == 0) {
        ppppuVar27 = (undefined8 ****)0x0;
        local_120 = (undefined8 ****)0x0;
      }
      else {
        if (0xfff < uVar1) {
          uVar19 = uVar11 + 0x28;
          if (uVar19 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_140185b8d;
        }
        ppppuVar27 = (undefined8 ****)FUN_14028af20(uVar1);
        local_120 = ppppuVar27;
      }
    }
    else {
      uVar19 = 0x8000000000000027;
      uVar11 = 0x7fffffffffffffff;
LAB_140185b8d:
      pppuVar12 = (undefined8 ***)FUN_14028af20(uVar19);
      if (pppuVar12 == (undefined8 ***)0x0) goto LAB_1401862e3;
      ppppuVar27 = (undefined8 ****)((longlong)pppuVar12 + 0x27U & 0xffffffffffffffe0);
      ppppuVar27[-1] = pppuVar12;
      local_120 = ppppuVar27;
    }
  }
  local_110 = uVar21;
  local_108 = uVar11;
  *(undefined4 *)ppppuVar27 = s_bin_scenestorage__140490470._0_4_;
  *(undefined4 *)((longlong)ppppuVar27 + 4) = s_bin_scenestorage__140490470._4_4_;
  *(undefined4 *)(ppppuVar27 + 1) = s_bin_scenestorage__140490470._8_4_;
  *(undefined4 *)((longlong)ppppuVar27 + 0xc) = s_bin_scenestorage__140490470._12_4_;
  *(char *)(ppppuVar27 + 2) = s_bin_scenestorage__140490470[0x10];
  FUN_1404210f0((char *)((longlong)ppppuVar27 + 0x11),pppppuVar15,local_80);
  *(char *)((longlong)ppppuVar27 + uVar21) = '\0';
  plVar13 = (longlong *)FUN_1400532a0(&local_120,&DAT_140474f34,4);
  local_140 = (undefined8 ****)*plVar13;
  lStack_138 = plVar13[1];
  local_130 = plVar13[2];
  uStack_128 = plVar13[3];
  plVar13[2] = 0;
  plVar13[3] = 0xf;
  *(undefined1 *)plVar13 = 0;
  if (0xf < local_108) {
    uVar21 = local_108 + 1;
    ppppuVar27 = local_120;
    if (0xfff < uVar21) {
      ppppuVar27 = (undefined8 ****)local_120[-1];
      if ((char *)0x1f < (char *)((longlong)local_120 + (-8 - (longlong)ppppuVar27)))
      goto LAB_1401862e3;
      uVar21 = local_108 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar27,uVar21);
  }
  puVar9 = local_b0;
  pppppuVar15 = &local_140;
  if (0xf < uStack_128) {
    pppppuVar15 = (undefined8 *****)local_140;
  }
  lVar10 = (**(code **)(*(longlong *)*local_b0 + 0x10))((longlong *)*local_b0,pppppuVar15,0);
  local_b8 = lVar10;
  puVar14 = (undefined8 *)FUN_14028af20();
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
  puVar14[0x10] = 0;
  pppppuVar15 = (undefined8 *****)FUN_1401e2b10(puVar14);
  local_a8 = pppppuVar15;
  if (pppppuVar15 != &local_140) {
    pppppuVar22 = &local_140;
    if (0xf < uStack_128) {
      pppppuVar22 = (undefined8 *****)local_140;
    }
    FUN_14000f880(pppppuVar15,pppppuVar22,local_130);
  }
  if (pppppuVar15 + 4 != local_90) {
    pppppuVar22 = local_90;
    if (0xf < uVar24) {
      pppppuVar22 = pppppuVar20;
    }
    FUN_14000f880(pppppuVar15 + 4,pppppuVar22,local_80);
    local_98 = local_78;
    local_a0 = local_90[0];
  }
  *(undefined4 *)(pppppuVar15 + 0x10) = 1;
  if ((lVar10 != 0) &&
     (uVar7 = (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,lVar10), 0xc < uVar7))
  {
    plVar13 = (longlong *)*puVar9;
    local_d8 = 0;
    local_d0 = 0;
    local_70 = plVar13;
    iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar10,&local_d8,8);
    if ((iVar6 != 0) &&
       (((iVar6 = FUN_1402c10d0(&local_d8,"LSBK0001"), iVar6 == 0 &&
         (iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar10,local_148,4), iVar6 != 0)) &&
        (local_148[0] != 0)))) {
      pppppuVar15 = pppppuVar15 + 8;
      local_res20 = 0;
      uVar25 = local_120._4_4_;
      local_c8 = pppppuVar15;
      do {
        uVar7 = local_res20;
        pppuVar12 = (undefined8 ***)0x0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_4f = 0;
        uStack_48 = 0;
        uStack_47 = 0;
        iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar10,&local_68,0x28);
        if (iVar6 != 0) {
          local_res18[0] = 0;
          iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar10,local_res18,4);
          if ((iVar6 != 0) && (local_res18[0] < 0x186a1)) {
            pppuVar16 = (undefined8 ***)thunk_FUN_14028af20(local_res18[0]);
            local_c0 = pppuVar16;
            iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar10,pppuVar16,local_res18[0]);
            if (iVar6 == 0) {
              thunk_FUN_14028af80(pppuVar16);
            }
            else {
              local_100 = local_res18[0];
              local_f8 = (undefined8 *****)0x0;
              ppuStack_f0 = (undefined8 ***)0x0;
              local_e8 = (undefined8 ***)0x0;
              ppuStack_e0 = (undefined8 ***)0x0;
              sVar17 = strlen((char *)&local_68);
              FUN_140017480(&local_f8,&local_68,sVar17);
              uVar24 = 0xcbf29ce484222325;
              pppppuVar20 = &local_f8;
              if ((undefined8 ***)0xf < ppuStack_e0) {
                pppppuVar20 = (undefined8 *****)local_f8;
              }
              if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
                do {
                  pbVar2 = (byte *)((longlong)pppppuVar20 + (longlong)pppuVar12);
                  pppuVar12 = (undefined8 ***)((longlong)pppuVar12 + 1);
                  uVar24 = (uVar24 ^ *pbVar2) * 0x100000001b3;
                } while (pppuVar12 < local_e8);
                uVar25 = local_120._4_4_;
              }
              FUN_1400110a0(pppppuVar15,&local_120,&local_f8,uVar24);
              ppppuVar27 = (undefined8 ****)pppuStack_118;
              if ((undefined8 ****)pppuStack_118 == (undefined8 ****)0x0) {
                if (pppppuVar15[2] == (undefined8 ****)0x3ffffffffffffff) goto LAB_1401862ea;
                ppppuVar27 = (undefined8 ****)FUN_14028af20(0x40);
                ppppuVar27[2] = local_f8;
                ppppuVar27[3] = (undefined8 ***)ppuStack_f0;
                ppppuVar27[4] = (undefined8 ***)local_e8;
                ppppuVar27[5] = (undefined8 ***)ppuStack_e0;
                ppuStack_e0 = (undefined8 ***)0xf;
                local_e8 = (undefined8 ***)0x0;
                local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffffffffff00);
                ppppuVar27[6] = (undefined8 ***)0x0;
                ppppuVar27[7] = (undefined8 ***)0x0;
                fVar28 = (float)((longlong)pppppuVar15[2] + 1) / (float)pppppuVar15[7];
                if (*(float *)pppppuVar15 <= fVar28 && fVar28 != *(float *)pppppuVar15) {
                  FUN_1401e4d60(pppppuVar15);
                  ppppuVar23 = (undefined8 ****)
                               pppppuVar15[3][(uVar24 & (ulonglong)pppppuVar15[6]) * 2 + 1];
                  ppppuVar18 = pppppuVar15[1];
                  if (ppppuVar23 != ppppuVar18) {
                    pppuVar12 = ppppuVar27[4];
                    ppppuVar4 = (undefined8 ****)
                                pppppuVar15[3][(uVar24 & (ulonglong)pppppuVar15[6]) * 2];
                    ppppuVar18 = ppppuVar23;
                    while( true ) {
                      ppppuVar23 = ppppuVar18 + 2;
                      if ((undefined8 ***)0xf < ppppuVar18[5]) {
                        ppppuVar23 = (undefined8 ****)*ppppuVar23;
                      }
                      if (ppppuVar27[5] < (undefined8 ***)0x10) {
                        _Buf1_00 = ppppuVar27 + 2;
                      }
                      else {
                        _Buf1_00 = (undefined8 ****)ppppuVar27[2];
                      }
                      if ((pppuVar12 == ppppuVar18[4]) &&
                         ((pppuVar12 == (undefined8 ***)0x0 ||
                          (iVar6 = memcmp(_Buf1_00,ppppuVar23,(size_t)pppuVar12), iVar6 == 0)))) {
                        local_120 = (undefined8 ****)*ppppuVar18;
                        plVar13 = local_70;
                        pppuVar16 = (undefined8 ***)local_c0;
                        pppppuVar15 = (undefined8 *****)local_c8;
                        pppuStack_118 = ppppuVar18;
                        goto LAB_1401860ee;
                      }
                      pppuVar16 = (undefined8 ***)local_c0;
                      pppppuVar15 = (undefined8 *****)local_c8;
                      if (ppppuVar18 == ppppuVar4) break;
                      ppppuVar18 = (undefined8 ****)ppppuVar18[1];
                    }
                  }
                  pppuStack_118 = (undefined8 ****)0x0;
                  plVar13 = local_70;
                  local_120 = ppppuVar18;
                }
LAB_1401860ee:
                pppuVar12 = local_120[1];
                pppppuVar15[2] = (undefined8 ****)((longlong)pppppuVar15[2] + 1);
                *ppppuVar27 = local_120;
                ppppuVar27[1] = pppuVar12;
                *pppuVar12 = ppppuVar27;
                local_120[1] = ppppuVar27;
                uVar24 = uVar24 & (ulonglong)pppppuVar15[6];
                ppppuVar23 = pppppuVar15[3];
                uVar7 = local_res20;
                if ((undefined8 ****)ppppuVar23[uVar24 * 2] == pppppuVar15[1]) {
                  ppppuVar23[uVar24 * 2] = ppppuVar27;
LAB_14018613a:
                  ppppuVar23[uVar24 * 2 + 1] = ppppuVar27;
                }
                else if ((undefined8 ****)ppppuVar23[uVar24 * 2] == local_120) {
                  ppppuVar23[uVar24 * 2] = ppppuVar27;
                }
                else if (ppppuVar23[uVar24 * 2 + 1] == pppuVar12) goto LAB_14018613a;
              }
              *(uint *)(ppppuVar27 + 6) = local_100;
              *(undefined4 *)((longlong)ppppuVar27 + 0x34) = uVar25;
              ppppuVar27[7] = pppuVar16;
              lVar10 = local_b8;
              if ((undefined8 ***)0xf < ppuStack_e0) {
                pppuVar12 = (undefined8 ***)((longlong)ppuStack_e0 + 1);
                pppppuVar20 = (undefined8 *****)local_f8;
                if ((undefined8 ***)0xfff < pppuVar12) {
                  pppppuVar20 = (undefined8 *****)local_f8[-1];
                  if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pppppuVar20)))
                  goto LAB_1401862e3;
                  pppuVar12 = (undefined8 ***)(ppuStack_e0 + 5);
                }
                thunk_FUN_14028af80(pppppuVar20,pppuVar12);
                lVar10 = local_b8;
              }
            }
          }
        }
        local_res20 = uVar7 + 1;
        puVar9 = local_b0;
      } while (local_res20 < local_148[0]);
    }
  }
  (**(code **)(*(longlong *)*puVar9 + 0x20))((longlong *)*puVar9,lVar10);
  FUN_1400302d0(puVar9 + 2,&local_a8);
  if (0xf < uStack_128) {
    uVar24 = uStack_128 + 1;
    pppppuVar15 = (undefined8 *****)local_140;
    if (0xfff < uVar24) {
      pppppuVar15 = (undefined8 *****)local_140[-1];
      if (0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)pppppuVar15)))
      goto LAB_1401862e3;
      uVar24 = uStack_128 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar15,uVar24);
  }
  local_130 = 0;
  local_140 = (undefined8 ****)((ulonglong)local_140 & 0xffffffffffffff00);
  uStack_128 = 0xf;
  pppppuVar15 = (undefined8 *****)local_a8;
  uVar24 = local_98;
  pppppuVar20 = (undefined8 *****)local_a0;
LAB_14018622a:
  FUN_140290ea0(&DAT_1404dfb40);
  puVar9 = DAT_1404e8ee8;
  if ((pppppuVar15 == (undefined8 *****)0x0) &&
     (DAT_1404e8ee4 = DAT_1404e8ee4 + -1, DAT_1404e8ee4 == 0)) {
    if (DAT_1404e8ee8 != (undefined8 *)0x0) {
      FUN_1401e3620(DAT_1404e8ee8);
      thunk_FUN_14028af80(puVar9,0x68);
    }
    DAT_1404e8ee8 = (undefined8 *)0x0;
  }
  if (0xf < uVar24) {
    uVar21 = uVar24 + 1;
    pppppuVar22 = pppppuVar20;
    if (0xfff < uVar21) {
      pppppuVar22 = (undefined8 *****)pppppuVar20[-1];
      if (0x1f < (ulonglong)((longlong)pppppuVar20 + (-8 - (longlong)pppppuVar22))) {
LAB_1401862e3:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar26 = auStack_160;
LAB_1401862ea:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar26 + -8) = &UNK_1401862f6;
        FUN_14028c2e0("unordered_map/set too long");
      }
      uVar21 = uVar24 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar22,uVar21);
  }
LAB_1401862a0:
  FUN_140290ea0(&DAT_1404dfaf0);
  return pppppuVar15;
}

