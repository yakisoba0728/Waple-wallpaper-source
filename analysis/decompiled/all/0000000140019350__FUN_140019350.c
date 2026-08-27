// Function: FUN_140019350
// Addr: 140019350
// Size: 3074 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140019350(char param_1)

{
  short *psVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined **ppuVar4;
  uint *puVar5;
  longlong ******pppppplVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  undefined **ppuVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  size_t sVar20;
  longlong lVar21;
  undefined4 *puVar22;
  tm *ptVar23;
  LPSTR lpMultiByteStr;
  LPCWSTR ******pppppppWVar24;
  longlong *******ppppppplVar25;
  LPCWSTR ******pppppppWVar26;
  undefined8 *******pppppppuVar27;
  ulonglong uVar28;
  longlong ******pppppplVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  short *psVar32;
  LPCWSTR ******pppppppWVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  longlong ******pppppplVar36;
  longlong lVar37;
  bool bVar38;
  __time64_t local_res10;
  undefined1 auStackY_2a8 [8];
  undefined1 auStackY_2a0 [24];
  LPCWSTR ******local_268;
  undefined **local_260;
  longlong *******local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulonglong uStack_240;
  LPCWSTR ******local_238;
  undefined **ppuStack_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong uStack_200;
  longlong *******local_1f8;
  longlong *******ppppppplStack_1f0;
  longlong local_1e8;
  LPCWSTR ******local_1d8;
  undefined **ppuStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *******local_1b8 [2];
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  ulonglong uStack_170;
  undefined8 *******local_168 [2];
  longlong local_158;
  ulonglong local_150;
  undefined1 local_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  
  puVar34 = auStackY_2a8;
  if (param_1 == '\0') {
    KillTimer(DAT_1404e5280,0x72);
                    /* WARNING: Could not recover jumptable at 0x000140019f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetTimer(DAT_1404e5280,0x72,5000,(TIMERPROC)0x0);
    return;
  }
  if (DAT_1404df680 != '\0') {
    return;
  }
  local_268 = (LPCWSTR ******)((ulonglong)local_268 & 0xffffffff00000000);
  uVar16 = FUN_140005ee0(&local_258);
  uVar16 = FUN_140005d20(uVar16,"config_backups");
  FUN_140016600(local_148,uVar16);
  FUN_140016770(&local_258);
  cVar13 = FUN_140018e60(local_148);
  if (cVar13 == '\0') {
    FUN_140016600(&local_258,local_148);
    FUN_1400509f0(&local_258,&local_268);
    FUN_140016770(&local_258);
    FUN_140016600(&local_258,local_148);
    FUN_14003b820(&local_258,&local_238);
    FUN_140016770(&local_258);
    puVar35 = auStackY_2a8;
    if ((int)local_268 != 0) goto LAB_140019ede;
  }
  local_1e8 = 0;
  local_1f8 = (longlong *******)0x0;
  ppppppplStack_1f0 = (longlong *******)0x0;
  FUN_140016600(&local_258,local_148);
  FUN_14003b1c0(&local_1d8,&local_258,&local_268);
  FUN_140016770(&local_258);
  ppuVar12 = ppuStack_1d0;
  pppppppWVar33 = local_1d8;
  if (ppuStack_1d0 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuStack_1d0 + 1) = *(int *)(ppuStack_1d0 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppuStack_1d0 + 1) = *(int *)(ppuStack_1d0 + 1) + 1;
    UNLOCK();
  }
  local_260 = ppuStack_1d0;
  local_268 = local_1d8;
  local_238 = local_1d8;
  ppuStack_230 = ppuStack_1d0;
  FUN_1400507f0(&local_1d8,&local_238);
  pppppppWVar26 = local_1d8;
  while (ppuVar4 = ppuStack_1d0, pppppppWVar33 != pppppppWVar26) {
    FUN_140016600(local_168,pppppppWVar33 + 4);
    pppppppuVar27 = local_168;
    if (7 < local_150) {
      pppppppuVar27 = local_168[0];
    }
    psVar32 = (short *)((longlong)pppppppuVar27 + local_158 * 2);
    psVar18 = psVar32;
    for (psVar17 = (short *)FUN_140015e90(); psVar17 != psVar18; psVar17 = psVar17 + 1) {
      if ((*psVar17 != 0x5c) && (*psVar17 != 0x2f)) goto LAB_140019510;
    }
LAB_14001952c:
    psVar18 = (short *)thunk_FUN_14028d070(psVar32);
    psVar17 = psVar18;
    if ((psVar32 != psVar18) && (psVar1 = psVar18 + -1, psVar32 != psVar1)) {
      psVar19 = psVar18 + -2;
      if (*psVar1 == 0x2e) {
        if ((psVar32 != psVar19) || (psVar18[-2] != 0x2e)) {
          psVar17 = psVar1;
        }
      }
      else {
        for (; (psVar17 = psVar18, psVar32 != psVar19 && (psVar17 = psVar19, *psVar19 != 0x2e));
            psVar19 = psVar19 + -1) {
        }
      }
    }
    local_228 = 0;
    uStack_220 = 0;
    local_238 = (LPCWSTR ******)0x0;
    ppuStack_230 = (undefined **)0x0;
    FUN_140016170(&local_238,psVar32,(longlong)psVar17 - (longlong)psVar32 >> 1);
    uStack_240 = uStack_220;
    local_248 = local_228;
    local_228 = 0;
    uStack_220 = 0;
    local_258 = (longlong *******)local_238;
    uStack_250 = ppuStack_230;
    pppppppWVar33 = (LPCWSTR ******)&local_258;
    if (7 < uStack_240) {
      pppppppWVar33 = local_238;
    }
    local_238 = (LPCWSTR ******)0x0;
    ppuStack_230 = (undefined **)0x0;
    uVar16 = FUN_1402d6aa0(pppppppWVar33);
    FUN_140016170(&local_238,pppppppWVar33,uVar16);
    if (local_228 == 0) {
LAB_1400196b0:
      local_208 = 0;
      uStack_210 = 0;
      local_218 = (longlong *******)0x0;
      uStack_200 = 0xf;
    }
    else {
      pppppppWVar33 = (LPCWSTR ******)&local_238;
      if (7 < uStack_220) {
        pppppppWVar33 = local_238;
      }
      iVar14 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar33,(int)local_228,(LPSTR)0x0,0,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
      pppppppWVar33 = (LPCWSTR ******)(longlong)iVar14;
      if (iVar14 < 1) goto LAB_1400196b0;
      FUN_140016940(&local_188,pppppppWVar33,0);
      lpMultiByteStr = (LPSTR)&local_188;
      if (0xf < uStack_170) {
        lpMultiByteStr = (LPSTR)CONCAT44(uStack_184,local_188);
      }
      pppppppWVar24 = (LPCWSTR ******)&local_238;
      if (7 < uStack_220) {
        pppppppWVar24 = local_238;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar24,(int)local_228,lpMultiByteStr,iVar14,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_208 = local_178;
      uStack_200 = uStack_170;
      local_218 = (longlong *******)CONCAT44(uStack_184,local_188);
      uStack_210 = CONCAT44(uStack_17c,uStack_180);
    }
    uVar30 = uStack_200;
    if (7 < uStack_220) {
      uVar28 = uStack_220 * 2 + 2;
      pppppppWVar24 = local_238;
      if (0xfff < uVar28) {
        pppppppWVar24 = (LPCWSTR ******)local_238[-1];
        if (0x1f < (ulonglong)((longlong)local_238 + (-8 - (longlong)pppppppWVar24)))
        goto LAB_140019ec3;
        uVar28 = uStack_220 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar24,uVar28);
    }
    if (7 < uStack_240) {
      uVar28 = uStack_240 * 2 + 2;
      ppppppplVar25 = local_258;
      if (0xfff < uVar28) {
        ppppppplVar25 = (longlong *******)local_258[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_258 + (-8 - (longlong)ppppppplVar25)))
        goto LAB_140019ec3;
        uVar28 = uStack_240 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar25,uVar28);
    }
    pppppppWVar33 = (LPCWSTR ******)local_218;
    ppppppplVar25 = (longlong *******)&local_218;
    if (0xf < uVar30) {
      ppppppplVar25 = local_218;
    }
    sVar20 = strlen((char *)ppppppplVar25);
    if ((int)sVar20 == 0x11) {
      uVar16 = FUN_140018ce0(local_168,&local_258);
      FUN_140016fc0(&local_218,uVar16);
      FUN_1400187b0(&local_218);
      FUN_140030470(&local_1f8,&local_218);
      if (0xf < uStack_200) {
        uVar28 = uStack_200 + 1;
        ppppppplVar25 = local_218;
        if (0xfff < uVar28) {
          ppppppplVar25 = (longlong *******)local_218[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_218 + (-8 - (longlong)ppppppplVar25)))
          goto LAB_140019ec3;
          uVar28 = uStack_200 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar25,uVar28);
      }
      local_208 = 0;
      uStack_200 = 0xf;
      local_218 = (longlong *******)((ulonglong)local_218 & 0xffffffffffffff00);
      if (0xf < uStack_240) {
        uVar28 = uStack_240 + 1;
        ppppppplVar25 = local_258;
        if (0xfff < uVar28) {
          ppppppplVar25 = (longlong *******)local_258[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_258 + (-8 - (longlong)ppppppplVar25)))
          goto LAB_140019ec3;
          uVar28 = uStack_240 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar25,uVar28);
      }
    }
    if (0xf < uVar30) {
      uVar28 = uVar30 + 1;
      ppppppplVar25 = (longlong *******)pppppppWVar33;
      if (0xfff < uVar28) {
        ppppppplVar25 = (longlong *******)pppppppWVar33[-1];
        pppppppWVar33 = (LPCWSTR ******)((longlong)pppppppWVar33 + (-8 - (longlong)ppppppplVar25));
        if ((longlong *******)0x1f < pppppppWVar33) goto LAB_140019ec3;
        uVar28 = uVar30 + 0x28;
      }
      thunk_FUN_14028af80(ppppppplVar25,uVar28);
    }
    FUN_140016770(local_168);
    iVar14 = FUN_14003b5f0(&local_268);
    pppppppWVar33 = local_268;
    if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400507a0("directory_iterator::operator++",iVar14);
    }
  }
  pppppppWVar33 = (LPCWSTR ******)0xffffffff;
  if (ppuStack_1d0 != (undefined **)0x0) {
    LOCK();
    ppuVar2 = ppuStack_1d0 + 1;
    iVar14 = *(int *)ppuVar2;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)*ppuStack_1d0)(ppuStack_1d0);
      LOCK();
      piVar3 = (int *)((longlong)ppuVar4 + 0xc);
      iVar14 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*ppuVar4 + 8))(ppuVar4);
      }
    }
  }
  ppuVar4 = local_260;
  if (local_260 != (undefined **)0x0) {
    LOCK();
    ppuVar2 = local_260 + 1;
    iVar14 = *(int *)ppuVar2;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar3 = (int *)((longlong)ppuVar4 + 0xc);
      iVar14 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*ppuVar4 + 8))(ppuVar4);
      }
    }
  }
  if (ppuVar12 != (undefined **)0x0) {
    LOCK();
    ppuVar4 = ppuVar12 + 1;
    iVar14 = *(int *)ppuVar4;
    *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)*ppuVar12)(ppuVar12);
      LOCK();
      puVar5 = (uint *)((longlong)ppuVar12 + 0xc);
      uVar15 = *puVar5;
      pppppppWVar33 = (LPCWSTR ******)(ulonglong)uVar15;
      *puVar5 = *puVar5 - 1;
      UNLOCK();
      if (uVar15 == 1) {
        (**(code **)(*ppuVar12 + 8))(ppuVar12);
      }
    }
  }
  FUN_14004e1e0(local_1f8,ppppppplStack_1f0,(longlong)ppppppplStack_1f0 - (longlong)local_1f8 >> 5,0
               );
  lVar21 = (longlong)ppppppplStack_1f0 - (longlong)local_1f8;
  while (7 < (ulonglong)(lVar21 >> 5)) {
    puVar22 = (undefined4 *)FUN_140005880(&local_258,local_1f8);
    local_188 = *puVar22;
    uStack_184 = puVar22[1];
    uStack_180 = puVar22[2];
    uStack_17c = puVar22[3];
    local_178 = *(undefined8 *)(puVar22 + 4);
    uStack_170 = *(ulonglong *)(puVar22 + 6);
    *(undefined8 *)(puVar22 + 4) = 0;
    *(undefined8 *)(puVar22 + 6) = 7;
    *(undefined2 *)puVar22 = 0;
    if (7 < uStack_240) {
      uVar30 = uStack_240 * 2 + 2;
      ppppppplVar25 = local_258;
      if (0xfff < uVar30) {
        ppppppplVar25 = (longlong *******)local_258[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_258 + (-8 - (longlong)ppppppplVar25)))
        goto LAB_140019ec3;
        uVar30 = uStack_240 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar25,uVar30);
    }
    FUN_140016600(&local_258,&local_188);
    ppppppplVar25 = (longlong *******)&local_258;
    if (7 < uStack_240) {
      ppppppplVar25 = local_258;
    }
    FUN_1402906f0(ppppppplVar25);
    FUN_140016770(&local_258);
    FUN_140016770(&local_188);
    ppppppplVar11 = ppppppplStack_1f0;
    pppppppWVar33 = (LPCWSTR ******)local_1f8;
    ppppppplVar25 = local_1f8;
    while (ppppppplVar10 = ppppppplVar25 + 4, ppppppplVar10 != ppppppplVar11) {
      if (pppppppWVar33 != (LPCWSTR ******)ppppppplVar10) {
        pppppplVar6 = (longlong ******)pppppppWVar33[3];
        if ((longlong ******)0xf < pppppplVar6) {
          pppppplVar36 = (longlong ******)*pppppppWVar33;
          pppppplVar29 = (longlong ******)((longlong)pppppplVar6 + 1);
          if ((longlong ******)0xfff < pppppplVar29) {
            if (0x1f < (ulonglong)((longlong)pppppplVar36 + (-8 - (longlong)pppppplVar36[-1])))
            goto LAB_140019ec3;
            pppppplVar29 = pppppplVar6 + 5;
            pppppplVar36 = (longlong ******)pppppplVar36[-1];
          }
          thunk_FUN_14028af80(pppppplVar36,pppppplVar29);
        }
        pppppppWVar33[2] = (LPCWSTR *****)0x0;
        pppppppWVar33[3] = (LPCWSTR *****)0xf;
        *(undefined1 *)pppppppWVar33 = 0;
        uVar31 = *(undefined4 *)((longlong)ppppppplVar25 + 0x24);
        uVar8 = *(undefined4 *)(ppppppplVar10 + 1);
        uVar9 = *(undefined4 *)((longlong)ppppppplVar25 + 0x2c);
        *(undefined4 *)pppppppWVar33 = *(undefined4 *)ppppppplVar10;
        *(undefined4 *)((longlong)pppppppWVar33 + 4) = uVar31;
        *(undefined4 *)(pppppppWVar33 + 1) = uVar8;
        *(undefined4 *)((longlong)pppppppWVar33 + 0xc) = uVar9;
        pppppplVar6 = ppppppplVar10[3];
        pppppppWVar33[2] = (LPCWSTR *****)ppppppplVar10[2];
        pppppppWVar33[3] = (LPCWSTR *****)pppppplVar6;
        ppppppplVar10[2] = (longlong ******)0x0;
        ppppppplVar10[3] = (longlong ******)0xf;
        *(undefined1 *)ppppppplVar10 = 0;
      }
      pppppppWVar33 = pppppppWVar33 + 4;
      ppppppplVar25 = ppppppplVar10;
    }
    FUN_140017240(ppppppplStack_1f0 + -4);
    ppppppplStack_1f0 = ppppppplStack_1f0 + -4;
    lVar21 = (longlong)ppppppplStack_1f0 - (longlong)local_1f8;
  }
  FUN_1402c83d4(&local_res10);
  local_198 = 0;
  local_190 = 0;
  local_18e = 0;
  ptVar23 = _gmtime64(&local_res10);
  FUN_1402c8b44(&local_198,0xb,"%Y-%m-%d",ptVar23);
  FUN_14000ef10(local_128);
  uVar16 = FUN_14000c990(local_118,"config_");
  uVar16 = FUN_14000c990(uVar16,&local_198);
  FUN_14000c990(uVar16,".json");
  FUN_140016600(&local_258,local_148);
  local_228 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0xf;
  ppuStack_1d0 = (undefined **)0x0;
  local_1d8 = (LPCWSTR ******)0x0;
  local_238 = (LPCWSTR ******)0x0;
  ppuStack_230 = (undefined **)0x0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar30 = *local_d0, uVar30 == 0)) {
    if ((local_a0 & 4) == 0) {
      if (*local_d8 == 0) {
        lVar37 = 0;
        lVar21 = 0;
      }
      else {
        lVar21 = *local_f8;
        lVar37 = ((longlong)*local_c0 + *local_d8) - lVar21;
      }
      goto LAB_140019be0;
    }
  }
  else {
    lVar21 = *local_f0;
    if (uVar30 < local_a8) {
      uVar30 = local_a8;
    }
    lVar37 = uVar30 - lVar21;
LAB_140019be0:
    if (lVar21 != 0) {
      FUN_14000f880(&local_1d8,lVar21,lVar37);
    }
  }
  uVar16 = FUN_140018c60(&local_258,&local_1d8);
  FUN_140016600(&local_238,uVar16);
  if (uStack_1c0 < 0x10) {
LAB_140019c44:
    local_1c8 = 0;
    uStack_1c0 = 0xf;
    local_1d8 = (LPCWSTR ******)((ulonglong)local_1d8 & 0xffffffffffffff00);
    FUN_140016770(&local_258);
    pppppppWVar33 = (LPCWSTR ******)&DAT_1404df5a8;
    local_208 = 0;
    uStack_200 = 0;
    ppppppplVar25 = (longlong *******)&DAT_1404df5a8;
    if (7 < DAT_1404df5c0) {
      ppppppplVar25 = DAT_1404df5a8;
    }
    local_218 = (longlong *******)0x0;
    uStack_210 = 0;
    FUN_140016170(&local_218,ppppppplVar25,DAT_1404df5b8);
    cVar13 = FUN_140018f30(&local_218);
    if (7 < uStack_200) {
      uVar30 = uStack_200 * 2 + 2;
      ppppppplVar25 = local_218;
      if (0xfff < uVar30) {
        ppppppplVar25 = (longlong *******)local_218[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_218 + (-8 - (longlong)ppppppplVar25)))
        goto LAB_140019ec3;
        uVar30 = uStack_200 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar25,uVar30);
    }
    if (cVar13 != '\0') {
      if (7 < DAT_1404df5c0) {
        pppppppWVar33 = (LPCWSTR ******)DAT_1404df5a8;
      }
      local_208 = 0;
      local_218 = (longlong *******)0x0;
      uStack_210 = 0;
      uStack_200 = 0;
      FUN_140016170(&local_218,pppppppWVar33,DAT_1404df5b8);
      local_268 = (LPCWSTR ******)((ulonglong)local_268 & 0xffffffff00000000);
      local_260 = &PTR_PTR_1404df530;
      FUN_140016600(&local_188,&local_238);
      FUN_140016600(&local_258,&local_218);
      local_1d8 = (LPCWSTR ******)0x0;
      ppuStack_1d0 = (undefined **)0x0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      FUN_140016600(local_1b8,&local_258);
      local_268 = (LPCWSTR ******)((ulonglong)local_268 & 0xffffffff00000000);
      pppppppuVar27 = local_1b8;
      if (7 < local_1a0) {
        pppppppuVar27 = local_1b8[0];
      }
      local_260 = &PTR_PTR_1404df530;
      uVar31 = 0x3e;
      uVar15 = FUN_140290230(pppppppuVar27,&local_1d8,0x3e,0xffffffff);
      if (uVar15 == 0) {
        if (((uint)local_1c8 >> 10 & 1) != 0) {
          uVar31 = 6;
        }
        uStack_1c0 = CONCAT44(uVar31,(undefined4)uStack_1c0);
      }
      else {
        uStack_1c0 = uStack_1c0 & 0xffffffff;
        if (uVar15 < 0x41) {
          if (((uVar15 != 0x40) && (uVar15 != 2)) && (uVar15 != 3)) {
            bVar38 = uVar15 == 0x35;
LAB_140019dd9:
            if (!bVar38) {
              local_268 = (LPCWSTR ******)CONCAT44((int)((ulonglong)local_238 >> 0x20),uVar15);
              local_260 = &PTR_PTR_1404df530;
            }
          }
        }
        else if ((uVar15 != 0x7b) && (uVar15 != 0xa1)) {
          bVar38 = uVar15 == 0x10b;
          goto LAB_140019dd9;
        }
      }
      if ((int)local_268 == 0) {
LAB_140019e10:
        FUN_140051290(&local_1d8,&local_188,2,&local_268);
      }
      else {
        local_1a8 = 0;
        pppppppuVar27 = local_1b8;
        if (7 < local_1a0) {
          pppppppuVar27 = local_1b8[0];
        }
        *(undefined2 *)pppppppuVar27 = 0;
        if ((int)local_268 == 0) goto LAB_140019e10;
      }
      FUN_140016770(local_1b8);
      FUN_140016770(&local_258);
      FUN_140016770(&local_188);
      if (7 < uStack_200) {
        FUN_140016a90(&local_218,local_218);
      }
    }
    FUN_140016770(&local_238);
    FUN_1400056d0(local_128);
    ppppppplVar11 = ppppppplStack_1f0;
    puVar35 = auStackY_2a8;
    ppppppplVar25 = local_1f8;
    if (local_1f8 == (longlong *******)0x0) goto LAB_140019ede;
    for (; ppppppplVar25 != ppppppplVar11; ppppppplVar25 = ppppppplVar25 + 4) {
      FUN_140017240(ppppppplVar25);
    }
    ppppppplVar25 = local_1f8;
    if (0xfff < (local_1e8 - (longlong)local_1f8 & 0xffffffffffffffe0U)) {
      pppppppWVar33 = (LPCWSTR ******)((longlong)local_1f8 + (-8 - (longlong)local_1f8[-1]));
      ppppppplVar25 = (longlong *******)local_1f8[-1];
      puVar34 = auStackY_2a8;
      if ((longlong *******)0x1f < pppppppWVar33) goto LAB_140019ec3;
    }
  }
  else {
    uVar30 = uStack_1c0 + 1;
    pppppppWVar26 = local_1d8;
    if (uVar30 < 0x1000) {
LAB_140019c3f:
      thunk_FUN_14028af80(pppppppWVar26,uVar30);
      goto LAB_140019c44;
    }
    pppppppWVar26 = (LPCWSTR ******)local_1d8[-1];
    if ((ulonglong)((longlong)local_1d8 + (-8 - (longlong)pppppppWVar26)) < 0x20) {
      uVar30 = uStack_1c0 + 0x28;
      goto LAB_140019c3f;
    }
LAB_140019ec3:
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar34 = auStackY_2a0;
    ppppppplVar25 = (longlong *******)pppppppWVar33;
  }
  *(undefined8 *)(puVar34 + -8) = 0x140019ed2;
  thunk_FUN_14028af80(ppppppplVar25);
  local_1e8 = 0;
  local_1f8 = (longlong *******)0x0;
  ppppppplStack_1f0 = (longlong *******)0x0;
  puVar35 = puVar34;
LAB_140019ede:
  *(undefined8 *)(puVar35 + -8) = 0x140019ee7;
  FUN_140016770(local_148);
  return;
LAB_140019510:
  psVar18 = psVar32 + -1;
  if (psVar32[-1] == 0x5c) goto LAB_14001952c;
  if ((psVar32[-1] == 0x2f) || (psVar32 = psVar18, psVar17 == psVar18)) goto LAB_14001952c;
  goto LAB_140019510;
}

