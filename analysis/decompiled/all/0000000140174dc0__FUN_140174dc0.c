// Function: FUN_140174dc0
// Addr: 140174dc0
// Size: 2749 bytes


void FUN_140174dc0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  longlong lVar3;
  size_t _Size;
  code *pcVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *****_Size_00;
  undefined8 *****pppppuVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *_Buf1;
  undefined8 ******ppppppuVar20;
  ulonglong uVar21;
  undefined8 ******ppppppuVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  undefined1 *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  undefined8 ******ppppppuVar28;
  undefined8 *puVar29;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 ******local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 ******local_178;
  undefined8 *****pppppuStack_170;
  undefined8 *****local_168;
  undefined8 *****pppppuStack_160;
  undefined8 *****local_158;
  undefined8 ******local_150;
  undefined8 *****pppppuStack_148;
  undefined8 *****local_140;
  undefined8 *****pppppuStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong *local_e8;
  longlong local_d8 [3];
  ulonglong local_c0;
  undefined1 local_b8 [32];
  longlong *local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  
  puVar25 = auStack_1b8;
  local_90 = CONCAT31(local_90._1_3_,7);
  local_90 = local_90 & 0xfffffeff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  plVar10 = (longlong *)FUN_14028af20(0x10);
  *plVar10 = 0;
  plVar10[1] = 0;
  lVar11 = FUN_14028af20(0x58);
  *(longlong *)lVar11 = lVar11;
  *(longlong *)(lVar11 + 8) = lVar11;
  *(longlong *)(lVar11 + 0x10) = lVar11;
  *(undefined2 *)(lVar11 + 0x18) = 0x101;
  *plVar10 = lVar11;
  local_98 = plVar10;
  if (*(char *)(param_2 + 0x80) == '\a') {
    FUN_140088360(param_2 + 0x78,&local_70);
    puVar5 = local_70;
    for (puVar27 = local_70; puVar27 != local_68; puVar27 = puVar27 + 4) {
      uVar21 = puVar27[2];
      pppppppuVar15 = (undefined8 *******)0x0;
      local_188 = 0;
      local_180 = 0;
      local_198 = (undefined8 *******)0x0;
      uStack_190 = 0;
      puVar26 = puVar27;
      if (0xf < puVar27[3]) {
        puVar26 = (ulonglong *)*puVar27;
      }
      if (0x7fffffffffffffff < uVar21) goto LAB_140175873;
      local_e8 = puVar5;
      if (uVar21 < 0x10) {
        local_180 = 0xf;
        local_198 = (undefined8 ******)*puVar26;
        uStack_190 = puVar26[1];
        local_188 = uVar21;
      }
      else {
        uVar23 = uVar21 | 0xf;
        if (uVar23 < 0x8000000000000000) {
          if (uVar23 < 0x16) {
            uVar23 = 0x16;
          }
          uVar1 = uVar23 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar18 = uVar23 + 0x28;
              if (uVar18 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_140174f1c;
            }
            pppppppuVar15 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar23 = 0x7fffffffffffffff;
          uVar18 = 0x8000000000000027;
LAB_140174f1c:
          ppppppuVar28 = (undefined8 ******)FUN_14028af20(uVar18);
          if (ppppppuVar28 == (undefined8 ******)0x0) goto LAB_14017586c;
          pppppppuVar15 = (undefined8 *******)((longlong)ppppppuVar28 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar15[-1] = ppppppuVar28;
        }
        local_198 = pppppppuVar15;
        local_188 = uVar21;
        local_180 = uVar23;
        FUN_1404210f0(pppppppuVar15,puVar26,uVar21 + 1);
      }
      pppppppuVar15 = &local_198;
      if (0xf < local_180) {
        pppppppuVar15 = (undefined8 *******)local_198;
      }
      lVar11 = FUN_140086de0(param_2 + 0x78,pppppppuVar15,local_188 + (longlong)pppppppuVar15);
      if (*(char *)(lVar11 + 8) == '\a') {
        lVar12 = FUN_140087490(lVar11,"value","");
        if (lVar12 != 0) {
          uVar13 = FUN_140086de0(lVar11,"value","");
          pppppppuVar15 = &local_198;
          if (0xf < local_180) {
            pppppppuVar15 = (undefined8 *******)local_198;
          }
          uVar14 = FUN_140086de0(&local_98,pppppppuVar15,local_188 + (longlong)pppppppuVar15);
          FUN_140085520(uVar14,uVar13);
        }
        lVar12 = FUN_140087490(lVar11,&DAT_1404737fc,&DAT_140473800);
        if (lVar12 != 0) {
          ppppppuVar22 = (undefined8 ******)0x0;
          pppppuStack_160 = (undefined8 ******)0xf;
          local_168 = (undefined8 ******)0x0;
          pppppuStack_170 = (undefined8 ******)0x0;
          ppppppuVar28 = (undefined8 ******)0xf;
          pppppuStack_148 = (undefined8 ******)0x0;
          local_178 = (undefined8 *******)0x0;
          local_150 = (undefined8 *******)0x0;
          local_158 = (undefined8 ******)0x0;
          local_140 = (undefined8 ******)0x0;
          pppppuStack_138 = (undefined8 ******)0xf;
          lVar11 = FUN_140086de0(lVar11,&DAT_1404737fc,&DAT_140473800);
          uVar17 = *(uint *)(lVar11 + 8) & 0xff;
          if (uVar17 == 4) {
            pppppppuVar15 = (undefined8 *******)FUN_140085cc0(lVar11,local_d8);
            if (&local_178 != pppppppuVar15) {
              if ((undefined8 ******)0xf < pppppuStack_160) {
                ppppppuVar20 = (undefined8 ******)((longlong)pppppuStack_160 + 1);
                pppppppuVar19 = (undefined8 *******)local_178;
                if ((undefined8 ******)0xfff < ppppppuVar20) {
                  pppppppuVar19 = (undefined8 *******)local_178[-1];
                  if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pppppppuVar19)))
                  goto LAB_14017586c;
                  ppppppuVar20 = (undefined8 ******)(pppppuStack_160 + 5);
                }
                thunk_FUN_14028af80(pppppppuVar19,ppppppuVar20);
              }
              local_178 = *pppppppuVar15;
              pppppuStack_170 = pppppppuVar15[1];
              local_168 = pppppppuVar15[2];
              pppppuStack_160 = pppppppuVar15[3];
              pppppppuVar15[2] = (undefined8 ******)0x0;
              pppppppuVar15[3] = (undefined8 ******)0xf;
              *(undefined1 *)pppppppuVar15 = 0;
            }
LAB_14017525a:
            if (0xf < local_c0) {
              uVar21 = local_c0 + 1;
              lVar11 = local_d8[0];
              if (0xfff < uVar21) {
                lVar11 = *(longlong *)(local_d8[0] + -8);
                if (0x1f < (local_d8[0] - lVar11) - 8U) goto LAB_14017586c;
                uVar21 = local_c0 + 0x28;
              }
              thunk_FUN_14028af80(lVar11,uVar21);
            }
          }
          else if (uVar17 == 7) {
            lVar12 = FUN_140086de0(lVar11,&DAT_1404748b8,&DAT_1404748bc);
            lVar11 = FUN_140086de0(lVar11,"condition","");
            if (*(char *)(lVar12 + 8) == '\x04') {
              pppppppuVar15 = (undefined8 *******)FUN_140085cc0(lVar12,local_d8);
              if (&local_178 != pppppppuVar15) {
                if ((undefined8 ******)0xf < pppppuStack_160) {
                  ppppppuVar20 = (undefined8 ******)((longlong)pppppuStack_160 + 1);
                  pppppppuVar19 = (undefined8 *******)local_178;
                  if ((undefined8 ******)0xfff < ppppppuVar20) {
                    pppppppuVar19 = (undefined8 *******)local_178[-1];
                    if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pppppppuVar19)))
                    goto LAB_14017586c;
                    ppppppuVar20 = (undefined8 ******)(pppppuStack_160 + 5);
                  }
                  thunk_FUN_14028af80(pppppppuVar19,ppppppuVar20);
                }
                local_178 = *pppppppuVar15;
                pppppuStack_170 = pppppppuVar15[1];
                local_168 = pppppppuVar15[2];
                pppppuStack_160 = pppppppuVar15[3];
                pppppppuVar15[2] = (undefined8 ******)0x0;
                pppppppuVar15[3] = (undefined8 ******)0xf;
                *(undefined1 *)pppppppuVar15 = 0;
              }
              if (0xf < local_c0) {
                uVar21 = local_c0 + 1;
                lVar12 = local_d8[0];
                if (0xfff < uVar21) {
                  lVar12 = *(longlong *)(local_d8[0] + -8);
                  if (0x1f < (local_d8[0] - lVar12) - 8U) goto LAB_14017586c;
                  uVar21 = local_c0 + 0x28;
                }
                thunk_FUN_14028af80(lVar12,uVar21);
              }
            }
            if (*(char *)(lVar11 + 8) == '\x04') {
              pppppppuVar15 = (undefined8 *******)FUN_140085cc0(lVar11,local_d8);
              if (&local_150 != pppppppuVar15) {
                local_140 = pppppppuVar15[2];
                ppppppuVar28 = pppppppuVar15[3];
                pppppppuVar15[3] = (undefined8 ******)0xf;
                pppppuStack_138 = ppppppuVar28;
                pppppppuVar15[2] = (undefined8 ******)0x0;
                local_150 = *pppppppuVar15;
                pppppuStack_148 = pppppppuVar15[1];
                *(undefined1 *)pppppppuVar15 = 0;
                local_158 = local_140;
              }
              goto LAB_14017525a;
            }
          }
          pppppuVar8 = pppppuStack_160;
          _Size_00 = local_168;
          ppppppuVar20 = local_178;
          uVar21 = 0xcbf29ce484222325;
          pppppppuVar15 = &local_178;
          if ((undefined8 ******)0xf < pppppuStack_160) {
            pppppppuVar15 = (undefined8 *******)local_178;
          }
          if ((undefined8 ******)local_168 != (undefined8 ******)0x0) {
            do {
              pbVar2 = (byte *)((longlong)ppppppuVar22 + (longlong)pppppppuVar15);
              ppppppuVar22 = (undefined8 ******)((longlong)ppppppuVar22 + 1);
              uVar21 = (uVar21 ^ *pbVar2) * 0x100000001b3;
            } while (ppppppuVar22 < local_168);
          }
          uVar21 = uVar21 & *(ulonglong *)(param_2 + 0xd0);
          lVar11 = *(longlong *)(param_2 + 0xa8);
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 8 + uVar21 * 0x10);
          if (lVar12 != lVar11) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + uVar21 * 0x10);
            while( true ) {
              puVar16 = (undefined8 *)(lVar12 + 0x10);
              if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
                puVar16 = (undefined8 *)*puVar16;
              }
              pppppppuVar15 = &local_178;
              if ((undefined8 ******)0xf < pppppuVar8) {
                pppppppuVar15 = (undefined8 *******)ppppppuVar20;
              }
              if (((undefined8 ******)_Size_00 == *(undefined8 *******)(lVar12 + 0x20)) &&
                 (((undefined8 ******)_Size_00 == (undefined8 ******)0x0 ||
                  (iVar9 = memcmp(pppppppuVar15,puVar16,(size_t)_Size_00), iVar9 == 0))))
              goto LAB_14017535f;
              if (lVar12 == lVar3) break;
              lVar12 = *(longlong *)(lVar12 + 8);
            }
          }
          lVar12 = 0;
LAB_14017535f:
          local_110 = 0xf;
          local_f0 = 0xf;
          uStack_120 = 0;
          if (lVar12 == 0) {
            lVar12 = lVar11;
          }
          uStack_100 = 0;
          pppppppuVar15 = &local_198;
          if (0xf < local_180) {
            pppppppuVar15 = (undefined8 *******)local_198;
          }
          local_118 = 0;
          local_128 = 0;
          local_f8 = 0;
          local_108 = 0;
          FUN_14000f880(&local_128,pppppppuVar15,local_188);
          pppppppuVar15 = &local_150;
          if ((undefined8 ******)0xf < ppppppuVar28) {
            pppppppuVar15 = (undefined8 *******)local_150;
          }
          FUN_14000f880(&local_108,pppppppuVar15,local_158);
          if (lVar12 == *(longlong *)(param_2 + 0xa8)) {
            FUN_140016fc0(local_d8,&local_128);
            FUN_140016fc0(local_b8,&local_108);
            plVar10 = (longlong *)FUN_140179af0(param_2 + 0xa0,local_58,&local_178);
            FUN_140179da0(*plVar10 + 0x30,local_d8,1);
            lVar11 = 1;
            pplVar24 = &local_98;
            do {
              FUN_140017240(pplVar24 + -4);
              FUN_140017240(pplVar24 + -8);
              lVar11 = lVar11 + -1;
              pplVar24 = pplVar24 + -8;
            } while (lVar11 != 0);
          }
          else {
            lVar11 = *(longlong *)(lVar12 + 0x38);
            if (lVar11 == *(longlong *)(lVar12 + 0x40)) {
              FUN_14007c720(lVar12 + 0x30,lVar11,&local_128);
            }
            else {
              FUN_140016fc0(lVar11,&local_128);
              FUN_140016fc0(lVar11 + 0x20,&local_108);
              *(longlong *)(lVar12 + 0x38) = *(longlong *)(lVar12 + 0x38) + 0x40;
            }
          }
          FUN_140017240(&local_108);
          FUN_140017240();
          if ((undefined8 ******)0xf < pppppuStack_138) {
            ppppppuVar28 = (undefined8 ******)((longlong)pppppuStack_138 + 1);
            pppppppuVar15 = (undefined8 *******)local_150;
            if ((undefined8 ******)0xfff < ppppppuVar28) {
              pppppppuVar15 = (undefined8 *******)local_150[-1];
              if (0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)pppppppuVar15)))
              goto LAB_14017586c;
              ppppppuVar28 = (undefined8 ******)(pppppuStack_138 + 5);
            }
            thunk_FUN_14028af80(pppppppuVar15,ppppppuVar28);
          }
          if ((undefined8 ******)0xf < pppppuStack_160) {
            ppppppuVar28 = (undefined8 ******)((longlong)pppppuStack_160 + 1);
            pppppppuVar15 = (undefined8 *******)local_178;
            if ((undefined8 ******)0xfff < ppppppuVar28) {
              pppppppuVar15 = (undefined8 *******)local_178[-1];
              if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pppppppuVar15)))
              goto LAB_14017586c;
              ppppppuVar28 = (undefined8 ******)(pppppuStack_160 + 5);
            }
            thunk_FUN_14028af80(pppppppuVar15,ppppppuVar28);
          }
        }
      }
      else {
        pppppppuVar15 = &local_198;
        if (0xf < local_180) {
          pppppppuVar15 = (undefined8 *******)local_198;
        }
        uVar13 = FUN_140086de0(&local_98,pppppppuVar15,local_188 + (longlong)pppppppuVar15);
        FUN_140085520(uVar13,lVar11);
        plVar10 = (longlong *)**(longlong **)(param_2 + 0xa8);
        if (plVar10 != *(longlong **)(param_2 + 0xa8)) {
          do {
            puVar16 = (undefined8 *)plVar10[6];
            puVar29 = (undefined8 *)plVar10[7];
            if (puVar16 != puVar29) {
              do {
                _Size = puVar16[2];
                pppppppuVar15 = &local_198;
                if (0xf < local_180) {
                  pppppppuVar15 = (undefined8 *******)local_198;
                }
                _Buf1 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  _Buf1 = (undefined8 *)*puVar16;
                }
                if ((_Size == local_188) &&
                   ((puVar6 = puVar16, puVar7 = puVar16, _Size == 0 ||
                    (iVar9 = memcmp(_Buf1,pppppppuVar15,_Size), iVar9 == 0)))) {
                  while (puVar7 = puVar7 + 8, puVar7 != puVar29) {
                    FUN_14000de40(puVar6,puVar7);
                    FUN_14000de40(puVar6 + 4,puVar7 + 4);
                    puVar6 = puVar6 + 8;
                  }
                  FUN_140017240(plVar10[7] + -0x20);
                  FUN_140017240();
                  plVar10[7] = plVar10[7] + -0x40;
                  puVar29 = (undefined8 *)plVar10[7];
                }
                else {
                  puVar16 = puVar16 + 8;
                }
              } while (puVar16 != puVar29);
            }
            if ((undefined8 *)plVar10[6] == puVar29) {
              if ((ulonglong)plVar10[5] < 0x10) {
                puVar16 = plVar10 + 2;
              }
              else {
                puVar16 = (undefined8 *)plVar10[2];
              }
              uVar21 = 0;
              uVar23 = 0xcbf29ce484222325;
              if (plVar10[4] != 0) {
                do {
                  pbVar2 = (byte *)((longlong)puVar16 + uVar21);
                  uVar21 = uVar21 + 1;
                  uVar23 = (uVar23 ^ *pbVar2) * 0x100000001b3;
                } while (uVar21 < (ulonglong)plVar10[4]);
              }
              lVar11 = *(longlong *)(param_2 + 0xb8);
              uVar23 = *(ulonglong *)(param_2 + 0xd0) & uVar23;
              puVar16 = *(undefined8 **)(lVar11 + uVar23 * 0x10);
              if (*(undefined8 **)(lVar11 + 8 + uVar23 * 0x10) == plVar10) {
                if (puVar16 == plVar10) {
                  uVar13 = *(undefined8 *)(param_2 + 0xa8);
                  *(undefined8 *)(lVar11 + uVar23 * 0x10) = uVar13;
                  *(undefined8 *)(lVar11 + 8 + uVar23 * 0x10) = uVar13;
                }
                else {
                  *(longlong *)(lVar11 + 8 + uVar23 * 0x10) = plVar10[1];
                }
              }
              else if (puVar16 == plVar10) {
                *(longlong *)(lVar11 + uVar23 * 0x10) = *plVar10;
              }
              puVar16 = (undefined8 *)*plVar10;
              *(longlong *)(param_2 + 0xb0) = *(longlong *)(param_2 + 0xb0) + -1;
              *(undefined8 **)plVar10[1] = puVar16;
              puVar16[1] = plVar10[1];
              FUN_14003a630(plVar10 + 6);
              FUN_140017240(plVar10 + 2);
              thunk_FUN_14028af80(plVar10,0x48);
            }
            else {
              puVar16 = (undefined8 *)*plVar10;
            }
            plVar10 = puVar16;
          } while (puVar16 != *(undefined8 **)(param_2 + 0xa8));
        }
      }
      if (0xf < local_180) {
        uVar21 = local_180 + 1;
        pppppppuVar15 = (undefined8 *******)local_198;
        if (0xfff < uVar21) {
          pppppppuVar15 = (undefined8 *******)local_198[-1];
          if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)pppppppuVar15)))
          goto LAB_14017586c;
          uVar21 = local_180 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar15,uVar21);
      }
      puVar5 = local_e8;
    }
    puVar27 = puVar5;
    if (puVar5 != (ulonglong *)0x0) {
      for (; puVar27 != local_68; puVar27 = puVar27 + 4) {
        FUN_140017240(puVar27);
      }
      uVar21 = local_60 - (longlong)puVar5 & 0xffffffffffffffe0;
      puVar27 = puVar5;
      if (0xfff < uVar21) {
        puVar27 = (ulonglong *)puVar5[-1];
        if (0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar27))) goto LAB_14017586c;
        uVar21 = uVar21 + 0x27;
      }
      thunk_FUN_14028af80(puVar27,uVar21);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  lVar11 = *param_1;
  puVar16 = (undefined8 *)FUN_140004d00(local_d8,&local_98,0);
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  (**(code **)(lVar11 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),puVar16);
  if (0xf < local_c0) {
    uVar21 = local_c0 + 1;
    lVar11 = local_d8[0];
    if (0xfff < uVar21) {
      lVar11 = *(longlong *)(local_d8[0] + -8);
      if (0x1f < (local_d8[0] - lVar11) - 8U) {
LAB_14017586c:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar25 = auStack_1b0;
LAB_140175873:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar25 + -8) = &UNK_140175878;
        FUN_1400172e0();
      }
      uVar21 = local_c0 + 0x28;
    }
    thunk_FUN_14028af80(lVar11,uVar21);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_140085440(&local_98);
  return;
}

