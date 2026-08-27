// Function: FUN_140070dd0
// Addr: 140070dd0
// Size: 3631 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140070dd0(ulonglong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BOOL BVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  HMODULE hInstance;
  HICON pHVar19;
  HWND hWnd;
  longlong *plVar20;
  longlong *plVar21;
  char ******ppppppcVar22;
  char *******pppppppcVar23;
  size_t sVar24;
  undefined4 *puVar25;
  char *pcVar26;
  char ******ppppppcVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  char *******pppppppcVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  char ******ppppppcVar36;
  undefined1 uVar37;
  char *******pppppppcVar38;
  ulonglong local_res8;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  longlong *local_248;
  tagRECT local_238;
  ulonglong local_228;
  ulonglong uStack_220;
  undefined4 *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0 [2];
  char ******local_1e0;
  ulonglong local_1d8;
  char local_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c0;
  ulonglong local_1b8;
  char *******local_1b0;
  char ******ppppppcStack_1a8;
  char ******local_1a0;
  char ******ppppppcStack_198;
  longlong local_190;
  uint local_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  HWND local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 *local_150;
  ulonglong uStack_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8 [4];
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [64];
  
  local_res8 = param_1;
  lVar10 = FUN_140086de0(param_2,&DAT_140473b68,&DAT_140473b6c);
  lVar11 = FUN_140086de0(param_2,"location","");
  local_d0 = (undefined8 *)FUN_140086de0(param_2,"propertylocation","");
  if (*(char *)(lVar10 + 8) != '\x04') {
    return;
  }
  if (*(char *)(lVar11 + 8) != '\x04') {
    return;
  }
  lVar12 = FUN_140086de0(param_2,"width","");
  lVar13 = FUN_140086de0(param_2,"height","");
  lVar14 = FUN_140086de0(param_2,&DAT_140473c0c,&DAT_140473c0d);
  lVar15 = FUN_140086de0(param_2,&DAT_140473c14,&DAT_140473c15);
  lVar16 = FUN_140086de0(param_2,"maximized","");
  local_c8 = FUN_140086de0(param_2,"activate","");
  lVar17 = FUN_140086de0(param_2,"borderless","");
  local_d8 = (undefined8 *)FUN_140086de0(param_2,"preset","");
  uVar18 = FUN_140085cc0(lVar10,&local_218);
  FUN_140018b00(local_98,uVar18);
  if (0xf < uStack_200) {
    uVar30 = uStack_200 + 1;
    puVar25 = local_218;
    if (uVar30 < 0x1000) {
LAB_140070fac:
      thunk_FUN_14028af80(puVar25,uVar30);
      goto LAB_140070fb1;
    }
    puVar25 = *(undefined4 **)(local_218 + -2);
    if ((ulonglong)((longlong)local_218 + (-8 - (longlong)puVar25)) < 0x20) {
      uVar30 = uStack_200 + 0x28;
      goto LAB_140070fac;
    }
LAB_140071bd3:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar35 = auStack_260;
LAB_140071bda:
    *(undefined8 *)(puVar35 + -8) = 0x140071beb;
    FUN_140017170(puVar35 + 0x50,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar35 + -8) = &UNK_140071bf5;
    FUN_140084bc0(puVar35 + 0x50);
  }
LAB_140070fb1:
  FUN_140016600(local_78,local_98);
  FUN_140085cc0(lVar11,local_1f0);
  FUN_140030de0(&DAT_1404e63c8,&local_res8,local_1f0);
  if (local_res8 == DAT_1404e63d0) {
    if ((*(char *)(lVar17 + 8) == '\x05') && (cVar2 = FUN_140086300(lVar17), cVar2 != '\0')) {
      uVar37 = 1;
    }
    else {
      uVar37 = 0;
    }
    plVar21 = (longlong *)FUN_14028af20(0x18);
    *plVar21 = 0;
    plVar21[1] = 0;
    *(undefined1 *)(plVar21 + 2) = uVar37;
    plVar20 = (longlong *)FUN_14007bc80(&DAT_1404e63c8,&local_238,local_1f0);
    *(longlong **)(*plVar20 + 0x30) = plVar21;
  }
  else {
    plVar21 = *(longlong **)(local_res8 + 0x30);
  }
  uVar4 = 0x80000000;
  if (*(byte *)(lVar14 + 8) - 1 < 3) {
    uVar3 = FUN_140085ee0(lVar14);
  }
  else {
    uVar3 = 0x80000000;
  }
  if (*(byte *)(lVar15 + 8) - 1 < 3) {
    uVar4 = FUN_140085ee0(lVar15);
  }
  if ((*(byte *)(lVar12 + 8) - 1 < 3) && (iVar5 = FUN_140085ee0(lVar12), 0 < iVar5)) {
    uVar6 = FUN_140085ee0(lVar12);
  }
  else {
    uVar6 = 0x780;
  }
  if ((*(byte *)(lVar13 + 8) - 1 < 3) && (iVar5 = FUN_140085ee0(lVar13), 0 < iVar5)) {
    uVar7 = FUN_140085ee0(lVar13);
  }
  else {
    uVar7 = 0x438;
  }
  if ((*(char *)(lVar16 + 8) == '\x05') && (cVar2 = FUN_140086300(lVar16), cVar2 != '\0')) {
    uVar37 = 1;
  }
  else {
    uVar37 = 0;
  }
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar19 = LoadIconW(hInstance,(LPCWSTR)0x65);
  puVar31 = (undefined1 *)local_1f0;
  if (0xf < local_1d8) {
    puVar31 = (undefined1 *)CONCAT71(local_1f0[0]._1_7_,(undefined1)local_1f0[0]);
  }
  local_238.top = uVar4;
  local_238.left = uVar3;
  local_238.bottom = uVar7;
  local_238.right = uVar6;
  local_248 = (longlong *)CONCAT71(local_248._1_7_,uVar37);
  hWnd = (HWND)FUN_14011e9d0(plVar21,puVar31,pHVar19,&local_238);
  BVar8 = IsWindow(hWnd);
  if (BVar8 != 0) {
    FUN_140063cb0(local_98,local_78);
    FUN_140018ce0(local_98,&local_1d0);
    FUN_140018ce0(local_78,&local_118);
    iVar5 = FUN_14011e520(&local_118);
    if (iVar5 != 0) {
      plVar20 = (longlong *)*plVar21;
      if ((plVar20 != (longlong *)0x0) &&
         (iVar9 = (**(code **)(*plVar20 + 0x20))(plVar20), iVar9 != iVar5)) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
        plVar20 = (longlong *)0x0;
        *plVar21 = 0;
      }
      if ((iVar5 != 2) || (cVar2 = FUN_140018980(&local_118), cVar2 == '\0')) {
        FUN_1400187b0(&local_1d0);
        FUN_1400187b0(&local_118);
      }
      pppppppcVar23 = (char *******)0x0;
      local_138 = 7;
      local_168 = (HWND)0x0;
      uStack_148 = 0;
      local_150 = (undefined4 *)0x0;
      local_158 = 0;
      local_140 = 0;
      local_130 = (undefined *)0x0;
      local_128 = 0;
      local_124 = 0;
      local_122 = 0;
      local_160 = DAT_1404e5280;
      uVar18 = FUN_140005ee0(local_f8);
      FUN_140016600(&local_218,uVar18);
      if (7 < local_138) {
        uVar30 = local_138 * 2 + 2;
        puVar25 = local_150;
        if (0xfff < uVar30) {
          puVar25 = *(undefined4 **)(local_150 + -2);
          if (0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)puVar25)))
          goto LAB_140071bd3;
          uVar30 = local_138 * 2 + 0x29;
        }
        thunk_FUN_14028af80(puVar25,uVar30);
      }
      local_150 = local_218;
      uStack_148 = uStack_210;
      local_140 = local_208;
      local_138 = uStack_200;
      FUN_140016770(local_f8);
      local_130 = &DAT_1404e55a0;
      local_122 = 2;
      local_124 = CONCAT11(local_124._1_1_,200);
      local_168 = hWnd;
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)FUN_1401048b0(iVar5,&local_168);
        if (plVar20 != (longlong *)0x0) {
          puVar31 = (undefined1 *)local_1f0;
          if (0xf < local_1d8) {
            puVar31 = (undefined1 *)CONCAT71(local_1f0[0]._1_7_,(undefined1)local_1f0[0]);
          }
          FUN_1400638c0(&DAT_1404e6268,puVar31,plVar20);
          GetClientRect(hWnd,&local_238);
          (**(code **)(*plVar20 + 0x40))(plVar20,&local_238);
          *plVar21 = (longlong)plVar20;
          goto LAB_140071330;
        }
      }
      else {
LAB_140071330:
        local_b8 = CONCAT31(local_b8._1_3_,7);
        local_b8 = local_b8 & 0xfffffeff;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        plVar21 = (longlong *)FUN_14028af20(0x10);
        *plVar21 = 0;
        plVar21[1] = 0;
        lVar10 = FUN_14028af20(0x58);
        local_c0 = plVar21;
        *(longlong *)lVar10 = lVar10;
        *(longlong *)(lVar10 + 8) = lVar10;
        *(longlong *)(lVar10 + 0x10) = lVar10;
        *(undefined2 *)(lVar10 + 0x18) = 0x101;
        *plVar21 = lVar10;
        if ((char)*(uint *)(local_d8 + 1) == '\x04') {
          pppppppcVar38 = (char *******)*local_d8;
          pppppppcVar32 = pppppppcVar23;
          if ((pppppppcVar38 != (char *******)0x0) &&
             (pppppppcVar32 = pppppppcVar38, (*(uint *)(local_d8 + 1) >> 8 & 1) != 0)) {
            pppppppcVar32 = (char *******)((longlong)pppppppcVar38 + 4);
          }
          pcVar26 = &local_1d0;
          if (0xf < local_1b8) {
            pcVar26 = (char *)CONCAT71(uStack_1cf,local_1d0);
          }
          FUN_140063f00(pcVar26,pppppppcVar32,&local_c0);
        }
        puVar29 = local_1f0;
        if (0xf < local_1d8) {
          puVar29 = (undefined8 *)CONCAT71(local_1f0[0]._1_7_,(undefined1)local_1f0[0]);
        }
        ppppppcStack_1a8 = (char ******)0x0;
        if ((char ******)0x7fffffffffffffff < local_1e0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400172e0();
        }
        if (local_1e0 < (char ******)0x10) {
          pppppppcVar38 = (char *******)*puVar29;
          ppppppcStack_1a8 = (char ******)puVar29[1];
          ppppppcVar36 = (char ******)0xf;
          local_1a0 = local_1e0;
          ppppppcStack_198 = (char ******)0xf;
          local_1b0 = pppppppcVar38;
        }
        else {
          ppppppcVar36 = (char ******)((ulonglong)local_1e0 | 0xf);
          if (ppppppcVar36 < (char ******)0x8000000000000000) {
            if (ppppppcVar36 < (char ******)0x16) {
              ppppppcVar36 = (char ******)0x16;
            }
            ppppppcVar22 = (char ******)((longlong)ppppppcVar36 + 1);
            pppppppcVar38 = pppppppcVar23;
            if (ppppppcVar22 != (char ******)0x0) {
              if ((char ******)0xfff < ppppppcVar22) {
                ppppppcVar27 = ppppppcVar36 + 5;
                if (ppppppcVar27 <= ppppppcVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_140071436;
              }
              pppppppcVar38 = (char *******)FUN_14028af20(ppppppcVar22);
            }
          }
          else {
            ppppppcVar27 = (char ******)0x8000000000000027;
            ppppppcVar36 = (char ******)0x7fffffffffffffff;
LAB_140071436:
            ppppppcVar22 = (char ******)FUN_14028af20(ppppppcVar27);
            if (ppppppcVar22 == (char ******)0x0) goto LAB_140071bd3;
            pppppppcVar38 = (char *******)((longlong)ppppppcVar22 + 0x27U & 0xffffffffffffffe0);
            pppppppcVar38[-1] = ppppppcVar22;
          }
          local_1a0 = local_1e0;
          local_1b0 = pppppppcVar38;
          ppppppcStack_198 = ppppppcVar36;
          FUN_1404210f0(pppppppcVar38,puVar29,(longlong)local_1e0 + 1);
        }
        if ((char)*(uint *)(local_d0 + 1) == '\x04') {
          pppppppcVar32 = (char *******)*local_d0;
          if ((pppppppcVar32 != (char *******)0x0) &&
             (pppppppcVar23 = pppppppcVar32, (*(uint *)(local_d0 + 1) >> 8 & 1) != 0)) {
            pppppppcVar23 = (char *******)((longlong)pppppppcVar32 + 4);
          }
          if (*(char *)pppppppcVar23 != '\0') {
            pppppppcVar23 = (char *******)FUN_140085cc0(local_d0,&local_218);
            if (&local_1b0 != (char ********)pppppppcVar23) {
              if ((char ******)0xf < ppppppcVar36) {
                ppppppcVar22 = (char ******)((longlong)ppppppcVar36 + 1);
                pppppppcVar32 = pppppppcVar38;
                if ((char ******)0xfff < ppppppcVar22) {
                  pppppppcVar32 = (char *******)pppppppcVar38[-1];
                  if ((char *)0x1f <
                      (char *)((longlong)pppppppcVar38 + (-8 - (longlong)pppppppcVar32)))
                  goto LAB_140071bd3;
                  ppppppcVar22 = ppppppcVar36 + 5;
                }
                thunk_FUN_14028af80(pppppppcVar32,ppppppcVar22);
              }
              local_1a0 = pppppppcVar23[2];
              ppppppcVar36 = pppppppcVar23[3];
              pppppppcVar38 = (char *******)*pppppppcVar23;
              ppppppcStack_1a8 = pppppppcVar23[1];
              pppppppcVar23[2] = (char ******)0x0;
              pppppppcVar23[3] = (char ******)0xf;
              *(undefined1 *)pppppppcVar23 = 0;
              local_1b0 = pppppppcVar38;
              ppppppcStack_198 = ppppppcVar36;
            }
            FUN_140017240(&local_218);
          }
        }
        local_188 = (local_188 >> 8 & 0xfffffe) << 8;
        local_180 = 0;
        uStack_178 = 0;
        pcVar26 = &local_1d0;
        if (0xf < local_1b8) {
          pcVar26 = (char *)CONCAT71(uStack_1cf,local_1d0);
        }
        local_170 = 0;
        local_218 = (undefined4 *)0x0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        sVar24 = strlen(pcVar26);
        FUN_140017480(&local_218,pcVar26,sVar24);
        local_f8[2] = 0;
        local_f8[3] = 0;
        pppppppcVar23 = (char *******)&local_1b0;
        if ((char ******)0xf < ppppppcVar36) {
          pppppppcVar23 = pppppppcVar38;
        }
        local_f8[0] = 0;
        local_f8[1] = 0;
        sVar24 = strlen((char *)pppppppcVar23);
        uVar18 = FUN_140017480(local_f8,pppppppcVar23,sVar24);
        local_248 = &local_190;
        FUN_140073d00(uVar18,local_f8,&local_218,&local_c0);
        if (0xf < local_f8[3]) {
          uVar33 = local_f8[3] + 1;
          uVar30 = local_f8[0];
          if (0xfff < uVar33) {
            uVar30 = *(ulonglong *)(local_f8[0] - 8);
            if (0x1f < (local_f8[0] - uVar30) - 8) goto LAB_140071bd3;
            uVar33 = local_f8[3] + 0x28;
          }
          thunk_FUN_14028af80(uVar30,uVar33);
        }
        local_f8[2] = 0;
        local_f8[3] = 0xf;
        local_f8[0] = local_f8[0] & 0xffffffffffffff00;
        if (0xf < uStack_200) {
          uVar30 = uStack_200 + 1;
          puVar25 = local_218;
          if (0xfff < uVar30) {
            puVar25 = *(undefined4 **)(local_218 + -2);
            if (0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)puVar25)))
            goto LAB_140071bd3;
            uVar30 = uStack_200 + 0x28;
          }
          thunk_FUN_14028af80(puVar25,uVar30);
        }
        local_228 = 0;
        local_238.right = 0;
        local_238.bottom = 0;
        local_238._0_8_ = (undefined8 *)0x0;
        uStack_220 = 0xf;
        uVar18 = FUN_140086de0(&local_190,"general","");
        lVar10 = FUN_140086de0(uVar18,"cefcommandline","");
        if (*(char *)(lVar10 + 8) == '\x04') {
          uVar18 = FUN_140086de0(&local_190,"general","");
          uVar18 = FUN_140086de0(uVar18,"cefcommandline","");
          uVar18 = FUN_140085cc0(uVar18,&local_218);
          plVar21 = (longlong *)FUN_1400532a0(uVar18,&DAT_1404738a8,1);
          puVar29 = (undefined8 *)*plVar21;
          lVar10 = plVar21[1];
          uVar30 = plVar21[2];
          uVar33 = plVar21[3];
          plVar21[2] = 0;
          plVar21[3] = 0xf;
          *(undefined1 *)plVar21 = 0;
          if (0xf < uStack_220) {
            uVar34 = uStack_220 + 1;
            puVar28 = (undefined8 *)local_238._0_8_;
            if (0xfff < uVar34) {
              puVar28 = *(undefined8 **)(local_238._0_8_ + 0xfffffffffffffff8);
              if (0x1f < (ulonglong)(local_238._0_8_ + (-8 - (longlong)puVar28)))
              goto LAB_140071bd3;
              uVar34 = uStack_220 + 0x28;
            }
            thunk_FUN_14028af80(puVar28,uVar34);
          }
          local_238._0_8_ = puVar29;
          local_238._8_8_ = lVar10;
          local_228 = uVar30;
          uStack_220 = uVar33;
          FUN_140017240(&local_218);
        }
        if (uStack_220 - local_228 < 0xf) {
          local_248 = (longlong *)0xf;
          FUN_140053110(&local_238,0xf,local_res8 & 0xff,"--disable-d3d11");
        }
        else {
          puVar29 = (undefined8 *)&local_238;
          if (0xf < uStack_220) {
            puVar29 = (undefined8 *)local_238._0_8_;
          }
          lVar10 = (longlong)puVar29 + local_228;
          local_228 = local_228 + 0xf;
          FUN_1404210f0(lVar10,"--disable-d3d11",0xf);
          *(undefined1 *)(lVar10 + 0xf) = 0;
        }
        uVar33 = uStack_210;
        uVar30 = local_228;
        uVar4 = (undefined4)local_228;
        uVar34 = local_228 & 0xffffffff;
        uStack_210 = CONCAT71(uStack_210._1_7_,4);
        uStack_210._4_4_ = SUB84(uVar33,4);
        uStack_210 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) | 0x100;
        local_1f8 = 0;
        puVar29 = (undefined8 *)&local_238;
        if (0xf < uStack_220) {
          puVar29 = (undefined8 *)local_238._0_8_;
        }
        local_208 = 0;
        uStack_200 = 0;
        puVar25 = (undefined4 *)_malloc_base(uVar34 + 5);
        puVar35 = auStack_268;
        if (puVar25 == (undefined4 *)0x0) goto LAB_140071bda;
        *puVar25 = uVar4;
        FUN_1404210f0(puVar25 + 1,puVar29,uVar30 & 0xffffffff);
        *(undefined1 *)((longlong)puVar25 + uVar34 + 4) = 0;
        local_218 = puVar25;
        uVar18 = FUN_140086de0(&local_190,"general","");
        uVar18 = FUN_140086de0(uVar18,"cefcommandline","");
        FUN_140085610(uVar18,&local_218);
        FUN_140085440(&local_218);
        puVar31 = &local_118;
        if (0xf < local_100) {
          puVar31 = (undefined1 *)CONCAT71(uStack_117,local_118);
        }
        pcVar26 = &local_1d0;
        if (0xf < local_1b8) {
          pcVar26 = (char *)CONCAT71(uStack_1cf,local_1d0);
        }
        (**(code **)(*plVar20 + 8))(plVar20,pcVar26,puVar31,&local_190);
        if (0xf < uStack_220) {
          uVar30 = uStack_220 + 1;
          puVar29 = (undefined8 *)local_238._0_8_;
          if (0xfff < uVar30) {
            puVar29 = *(undefined8 **)(local_238._0_8_ + 0xfffffffffffffff8);
            if (0x1f < (ulonglong)(local_238._0_8_ + (-8 - (longlong)puVar29))) goto LAB_140071bd3;
            uVar30 = uStack_220 + 0x28;
          }
          thunk_FUN_14028af80(puVar29,uVar30);
        }
        local_228 = 0;
        uStack_220 = 0xf;
        local_238._0_8_ = local_238._0_8_ & 0xffffffffffffff00;
        switch((undefined1)local_188) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
          break;
        case 4:
          if ((local_188 >> 8 & 1) != 0) {
            thunk_FUN_1402d9040(local_190);
          }
          break;
        case 6:
        case 7:
          if (local_190 != 0) {
            FUN_140088e40(local_190);
            thunk_FUN_14028af80(local_190,0x10);
          }
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        }
        lVar10 = local_180;
        local_190 = 0;
        if (local_180 != 0) {
          FUN_140017240(local_180 + 0x40);
          FUN_140017240(lVar10 + 0x20);
          FUN_140017240(lVar10);
          thunk_FUN_14028af80(lVar10,0x60);
        }
        if ((char ******)0xf < ppppppcStack_198) {
          ppppppcVar36 = (char ******)((longlong)ppppppcStack_198 + 1);
          pppppppcVar23 = local_1b0;
          if ((char ******)0xfff < ppppppcVar36) {
            pppppppcVar23 = (char *******)local_1b0[-1];
            if ((char *)0x1f < (char *)((longlong)local_1b0 + (-8 - (longlong)pppppppcVar23)))
            goto LAB_140071bd3;
            ppppppcVar36 = ppppppcStack_198 + 5;
          }
          thunk_FUN_14028af80(pppppppcVar23,ppppppcVar36);
        }
        FUN_140085440(&local_c0);
      }
      FUN_14006e0c0();
      if ((*(char *)(local_c8 + 8) == '\x05') && (cVar2 = FUN_140086300(local_c8), cVar2 != '\0')) {
        SetActiveWindow(hWnd);
      }
      if (7 < local_138) {
        uVar30 = local_138 * 2 + 2;
        puVar25 = local_150;
        if (0xfff < uVar30) {
          puVar25 = *(undefined4 **)(local_150 + -2);
          if (0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)puVar25)))
          goto LAB_140071bd3;
          uVar30 = local_138 * 2 + 0x29;
        }
        thunk_FUN_14028af80(puVar25,uVar30);
      }
      local_140 = 0;
      local_138 = 7;
      local_150 = (undefined4 *)((ulonglong)local_150 & 0xffffffffffff0000);
    }
    if (0xf < local_100) {
      lVar11 = CONCAT71(uStack_117,local_118);
      uVar30 = local_100 + 1;
      lVar10 = lVar11;
      if (0xfff < uVar30) {
        lVar10 = *(longlong *)(lVar11 + -8);
        if (0x1f < (lVar11 - lVar10) - 8U) goto LAB_140071bd3;
        uVar30 = local_100 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar30);
    }
    local_108 = 0;
    local_100 = 0xf;
    local_118 = 0;
    if (0xf < local_1b8) {
      lVar11 = CONCAT71(uStack_1cf,local_1d0);
      uVar30 = local_1b8 + 1;
      lVar10 = lVar11;
      if (0xfff < uVar30) {
        lVar10 = *(longlong *)(lVar11 + -8);
        if (0x1f < (lVar11 - lVar10) - 8U) goto LAB_140071bd3;
        uVar30 = local_1b8 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar30);
    }
    local_1c0 = 0;
    local_1b8 = 0xf;
    local_1d0 = '\0';
  }
  if (local_1d8 < 0x10) goto LAB_140071b6d;
  lVar11 = CONCAT71(local_1f0[0]._1_7_,(undefined1)local_1f0[0]);
  uVar30 = local_1d8 + 1;
  lVar10 = lVar11;
  if (0xfff < uVar30) {
    lVar10 = *(longlong *)(lVar11 + -8);
    if (0x1f < (lVar11 - lVar10) - 8U) goto LAB_140071bd3;
    uVar30 = local_1d8 + 0x28;
  }
  thunk_FUN_14028af80(lVar10,uVar30);
LAB_140071b6d:
  local_1e0 = (char ******)0x0;
  local_1d8 = 0xf;
  local_1f0[0]._0_1_ = 0;
  FUN_140016770(local_78);
  FUN_140016770(local_98);
  return;
}

