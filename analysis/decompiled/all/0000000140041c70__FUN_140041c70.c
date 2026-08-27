// Function: FUN_140041c70
// Addr: 140041c70
// Size: 8 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140041c70(longlong param_1)

{
  short *psVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined **ppuVar4;
  uint *puVar5;
  uint uVar6;
  longlong ******pppppplVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *******ppppppplVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  undefined **ppuVar15;
  longlong *******ppppppplVar16;
  char cVar17;
  int iVar18;
  undefined8 uVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  size_t sVar23;
  longlong lVar24;
  undefined4 *puVar25;
  tm *ptVar26;
  undefined8 *******pppppppuVar27;
  LPSTR lpMultiByteStr;
  LPCWSTR ******pppppppWVar28;
  longlong *******ppppppplVar29;
  LPCWSTR ******pppppppWVar30;
  ulonglong uVar31;
  longlong ******pppppplVar32;
  ulonglong uVar33;
  short *psVar34;
  LPCWSTR ******pppppppWVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  longlong ******pppppplVar38;
  longlong lVar39;
  __time64_t _StackX_8;
  undefined1 auStackY_288 [8];
  undefined1 auStackY_280 [24];
  longlong *******ppppppplStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulonglong uStack_210;
  LPCWSTR ******pppppppWStack_208;
  undefined **ppuStack_200;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  longlong *******ppppppplStack_1e8;
  longlong *******ppppppplStack_1e0;
  longlong lStack_1d8;
  LPCWSTR ******pppppppWStack_1d0;
  undefined **ppuStack_1c8;
  LPCWSTR ******pppppppWStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined1 uStack_18e;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined8 *******apppppppuStack_168 [2];
  longlong lStack_158;
  ulonglong uStack_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [32];
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_d8;
  ulonglong *puStack_d0;
  int *piStack_c0;
  ulonglong uStack_a8;
  uint uStack_a0;
  
  puVar36 = auStackY_288;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  pppppppWStack_1d0 = (LPCWSTR ******)((ulonglong)pppppppWStack_1d0 & 0xffffffff00000000);
  uVar19 = FUN_140005ee0(&ppppppplStack_248);
  uVar19 = FUN_140005d20(uVar19,"config_backups");
  FUN_140016600(auStack_148,uVar19);
  FUN_140016770(&ppppppplStack_248);
  cVar17 = FUN_140018e60(auStack_148);
  if (cVar17 == '\0') {
    FUN_140016600(&ppppppplStack_248,auStack_148);
    FUN_1400509f0(&ppppppplStack_248,&pppppppWStack_1d0);
    FUN_140016770(&ppppppplStack_248);
    FUN_140016600(&ppppppplStack_248,auStack_148);
    FUN_14003b820(&ppppppplStack_248,&pppppppWStack_208);
    FUN_140016770(&ppppppplStack_248);
    puVar37 = auStackY_288;
    if ((int)pppppppWStack_1d0 != 0) goto LAB_14004273d;
  }
  lStack_1d8 = 0;
  ppppppplStack_1e8 = (longlong *******)0x0;
  ppppppplStack_1e0 = (longlong *******)0x0;
  FUN_140016600(&ppppppplStack_248,auStack_148);
  FUN_14003b1c0(&pppppppWStack_1b8,&ppppppplStack_248,&pppppppWStack_1d0);
  FUN_140016770(&ppppppplStack_248);
  ppuVar15 = ppuStack_1b0;
  pppppppWVar35 = pppppppWStack_1b8;
  ppuStack_1c8 = ppuStack_1b0;
  if (ppuStack_1b0 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuStack_1b0 + 1) = *(int *)(ppuStack_1b0 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppuStack_1b0 + 1) = *(int *)(ppuStack_1b0 + 1) + 1;
    UNLOCK();
  }
  pppppppWStack_208 = pppppppWStack_1b8;
  ppuStack_200 = ppuStack_1b0;
  pppppppWStack_1d0 = pppppppWStack_1b8;
  FUN_1400507f0(&pppppppWStack_1b8,&pppppppWStack_208);
  pppppppWVar30 = pppppppWStack_1b8;
  while (ppuVar4 = ppuStack_1b0, pppppppWVar35 != pppppppWVar30) {
    FUN_140016600(apppppppuStack_168,pppppppWVar35 + 4);
    pppppppuVar27 = apppppppuStack_168;
    if (7 < uStack_150) {
      pppppppuVar27 = apppppppuStack_168[0];
    }
    psVar34 = (short *)((longlong)pppppppuVar27 + lStack_158 * 2);
    psVar21 = psVar34;
    for (psVar20 = (short *)FUN_140015e90(); psVar20 != psVar21; psVar20 = psVar20 + 1) {
      if ((*psVar20 != 0x5c) && (*psVar20 != 0x2f)) goto LAB_140041e10;
    }
LAB_140041e2c:
    psVar21 = (short *)thunk_FUN_14028d070(psVar34);
    psVar20 = psVar21;
    if ((psVar34 != psVar21) && (psVar1 = psVar21 + -1, psVar34 != psVar1)) {
      psVar22 = psVar21 + -2;
      if (*psVar1 == 0x2e) {
        if ((psVar34 != psVar22) || (psVar21[-2] != 0x2e)) {
          psVar20 = psVar1;
        }
      }
      else {
        for (; (psVar20 = psVar21, psVar34 != psVar22 && (psVar20 = psVar22, *psVar22 != 0x2e));
            psVar22 = psVar22 + -1) {
        }
      }
    }
    lStack_1f8 = 0;
    uStack_1f0 = 0;
    pppppppWStack_208 = (LPCWSTR ******)0x0;
    ppuStack_200 = (undefined **)0x0;
    FUN_140016170(&pppppppWStack_208,psVar34,(longlong)psVar20 - (longlong)psVar34 >> 1);
    uStack_230 = uStack_1f0;
    uStack_238 = lStack_1f8;
    lStack_1f8 = 0;
    uStack_1f0 = 0;
    ppppppplStack_248 = (longlong *******)pppppppWStack_208;
    uStack_240 = ppuStack_200;
    pppppppWVar35 = (LPCWSTR ******)&ppppppplStack_248;
    if (7 < uStack_230) {
      pppppppWVar35 = pppppppWStack_208;
    }
    pppppppWStack_208 = (LPCWSTR ******)0x0;
    ppuStack_200 = (undefined **)0x0;
    uVar19 = FUN_1402d6aa0(pppppppWVar35);
    FUN_140016170(&pppppppWStack_208,pppppppWVar35,uVar19);
    if (lStack_1f8 == 0) {
LAB_140041fa9:
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_228 = (longlong *******)0x0;
      uStack_210 = 0xf;
    }
    else {
      pppppppWVar35 = (LPCWSTR ******)&pppppppWStack_208;
      if (7 < uStack_1f0) {
        pppppppWVar35 = pppppppWStack_208;
      }
      iVar18 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar35,(int)lStack_1f8,(LPSTR)0x0,0,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
      pppppppWVar35 = (LPCWSTR ******)(longlong)iVar18;
      if (iVar18 < 1) goto LAB_140041fa9;
      FUN_140016940(&uStack_188,pppppppWVar35,0);
      lpMultiByteStr = (LPSTR)&uStack_188;
      if (0xf < uStack_170) {
        lpMultiByteStr = (LPSTR)CONCAT44(uStack_184,uStack_188);
      }
      pppppppWVar28 = (LPCWSTR ******)&pppppppWStack_208;
      if (7 < uStack_1f0) {
        pppppppWVar28 = pppppppWStack_208;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar28,(int)lStack_1f8,lpMultiByteStr,iVar18,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      uStack_218 = uStack_178;
      uStack_210 = uStack_170;
      uStack_228 = (longlong *******)CONCAT44(uStack_184,uStack_188);
      uStack_220 = CONCAT44(uStack_17c,uStack_180);
    }
    uVar33 = uStack_210;
    if (7 < uStack_1f0) {
      uVar31 = uStack_1f0 * 2 + 2;
      pppppppWVar28 = pppppppWStack_208;
      if (0xfff < uVar31) {
        pppppppWVar28 = (LPCWSTR ******)pppppppWStack_208[-1];
        if (0x1f < (ulonglong)((longlong)pppppppWStack_208 + (-8 - (longlong)pppppppWVar28)))
        goto LAB_140042722;
        uVar31 = uStack_1f0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar28,uVar31);
    }
    if (7 < uStack_230) {
      uVar31 = uStack_230 * 2 + 2;
      ppppppplVar29 = ppppppplStack_248;
      if (0xfff < uVar31) {
        ppppppplVar29 = (longlong *******)ppppppplStack_248[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)ppppppplStack_248 + (-8 - (longlong)ppppppplVar29)))
        goto LAB_140042722;
        uVar31 = uStack_230 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar29,uVar31);
    }
    pppppppWVar35 = (LPCWSTR ******)uStack_228;
    ppppppplVar29 = (longlong *******)&uStack_228;
    if (0xf < uVar33) {
      ppppppplVar29 = uStack_228;
    }
    sVar23 = strlen((char *)ppppppplVar29);
    if ((int)sVar23 == 0x11) {
      uVar19 = FUN_140018ce0(apppppppuStack_168,&ppppppplStack_248);
      FUN_140016fc0(&uStack_228,uVar19);
      FUN_1400187b0(&uStack_228);
      FUN_140030470(&ppppppplStack_1e8,&uStack_228);
      if (0xf < uStack_210) {
        uVar31 = uStack_210 + 1;
        ppppppplVar29 = uStack_228;
        if (0xfff < uVar31) {
          ppppppplVar29 = (longlong *******)uStack_228[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)uStack_228 + (-8 - (longlong)ppppppplVar29)))
          goto LAB_140042722;
          uVar31 = uStack_210 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar29,uVar31);
      }
      uStack_218 = 0;
      uStack_210 = 0xf;
      uStack_228 = (longlong *******)((ulonglong)uStack_228 & 0xffffffffffffff00);
      if (0xf < uStack_230) {
        uVar31 = uStack_230 + 1;
        ppppppplVar29 = ppppppplStack_248;
        if (0xfff < uVar31) {
          ppppppplVar29 = (longlong *******)ppppppplStack_248[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)ppppppplStack_248 + (-8 - (longlong)ppppppplVar29)))
          goto LAB_140042722;
          uVar31 = uStack_230 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar29,uVar31);
      }
    }
    if (0xf < uVar33) {
      uVar31 = uVar33 + 1;
      ppppppplVar29 = (longlong *******)pppppppWVar35;
      if (0xfff < uVar31) {
        ppppppplVar29 = (longlong *******)pppppppWVar35[-1];
        pppppppWVar35 = (LPCWSTR ******)((longlong)pppppppWVar35 + (-8 - (longlong)ppppppplVar29));
        if ((longlong *******)0x1f < pppppppWVar35) goto LAB_140042722;
        uVar31 = uVar33 + 0x28;
      }
      thunk_FUN_14028af80(ppppppplVar29,uVar31);
    }
    FUN_140016770(apppppppuStack_168);
    iVar18 = FUN_14003b5f0(&pppppppWStack_1d0);
    pppppppWVar35 = pppppppWStack_1d0;
    if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400507a0("directory_iterator::operator++",iVar18);
    }
  }
  pppppppWVar35 = (LPCWSTR ******)0xffffffff;
  if (ppuStack_1b0 != (undefined **)0x0) {
    LOCK();
    ppuVar2 = ppuStack_1b0 + 1;
    iVar18 = *(int *)ppuVar2;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)*ppuStack_1b0)(ppuStack_1b0);
      LOCK();
      piVar3 = (int *)((longlong)ppuVar4 + 0xc);
      iVar18 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*ppuVar4 + 8))(ppuVar4);
      }
    }
  }
  ppuVar4 = ppuStack_1c8;
  if (ppuStack_1c8 != (undefined **)0x0) {
    LOCK();
    ppuVar2 = ppuStack_1c8 + 1;
    iVar18 = *(int *)ppuVar2;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)*ppuStack_1c8)(ppuStack_1c8);
      LOCK();
      piVar3 = (int *)((longlong)ppuVar4 + 0xc);
      iVar18 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*ppuVar4 + 8))(ppuVar4);
      }
    }
  }
  if (ppuVar15 != (undefined **)0x0) {
    LOCK();
    ppuVar4 = ppuVar15 + 1;
    iVar18 = *(int *)ppuVar4;
    *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)*ppuVar15)(ppuVar15);
      LOCK();
      puVar5 = (uint *)((longlong)ppuVar15 + 0xc);
      uVar6 = *puVar5;
      pppppppWVar35 = (LPCWSTR ******)(ulonglong)uVar6;
      *puVar5 = *puVar5 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        (**(code **)(*ppuVar15 + 8))(ppuVar15);
      }
    }
  }
  FUN_14004e1e0(ppppppplStack_1e8,ppppppplStack_1e0,
                (longlong)ppppppplStack_1e0 - (longlong)ppppppplStack_1e8 >> 5,0);
  lVar24 = (longlong)ppppppplStack_1e0 - (longlong)ppppppplStack_1e8;
  while (7 < (ulonglong)(lVar24 >> 5)) {
    puVar25 = (undefined4 *)FUN_140005880(&ppppppplStack_248,ppppppplStack_1e8);
    uStack_188 = *puVar25;
    uStack_184 = puVar25[1];
    uStack_180 = puVar25[2];
    uStack_17c = puVar25[3];
    uStack_178 = *(undefined8 *)(puVar25 + 4);
    uStack_170 = *(ulonglong *)(puVar25 + 6);
    *(undefined8 *)(puVar25 + 4) = 0;
    *(undefined8 *)(puVar25 + 6) = 7;
    *(undefined2 *)puVar25 = 0;
    if (7 < uStack_230) {
      uVar33 = uStack_230 * 2 + 2;
      ppppppplVar29 = ppppppplStack_248;
      if (0xfff < uVar33) {
        ppppppplVar29 = (longlong *******)ppppppplStack_248[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)ppppppplStack_248 + (-8 - (longlong)ppppppplVar29)))
        goto LAB_140042722;
        uVar33 = uStack_230 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar29,uVar33);
    }
    FUN_140016600(&ppppppplStack_248,&uStack_188);
    ppppppplVar29 = (longlong *******)&ppppppplStack_248;
    if (7 < uStack_230) {
      ppppppplVar29 = ppppppplStack_248;
    }
    FUN_1402906f0(ppppppplVar29);
    FUN_140016770(&ppppppplStack_248);
    ppppppplVar16 = ppppppplStack_1e8;
    ppppppplVar29 = ppppppplStack_1e0;
    ppppppplVar13 = ppppppplStack_1e8;
    if (7 < uStack_170) {
      lVar39 = CONCAT44(uStack_184,uStack_188);
      uVar33 = uStack_170 * 2 + 2;
      lVar24 = lVar39;
      if (0xfff < uVar33) {
        lVar24 = *(longlong *)(lVar39 + -8);
        if (0x1f < (lVar39 - lVar24) - 8U) goto LAB_140042722;
        uVar33 = uStack_170 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar24,uVar33);
      ppppppplVar16 = ppppppplStack_1e8;
      ppppppplVar29 = ppppppplStack_1e0;
      ppppppplVar13 = ppppppplStack_1e8;
    }
    while (pppppppWVar35 = (LPCWSTR ******)ppppppplVar16, ppppppplVar14 = ppppppplStack_1e0,
          ppppppplVar12 = ppppppplVar13 + 4, ppppppplVar12 != ppppppplStack_1e0) {
      ppppppplStack_1e0 = ppppppplVar29;
      if (pppppppWVar35 != (LPCWSTR ******)ppppppplVar12) {
        pppppplVar7 = (longlong ******)pppppppWVar35[3];
        if ((longlong ******)0xf < pppppplVar7) {
          pppppplVar38 = (longlong ******)*pppppppWVar35;
          pppppplVar32 = (longlong ******)((longlong)pppppplVar7 + 1);
          if ((longlong ******)0xfff < pppppplVar32) {
            if (0x1f < (ulonglong)((longlong)pppppplVar38 + (-8 - (longlong)pppppplVar38[-1])))
            goto LAB_140042722;
            pppppplVar32 = pppppplVar7 + 5;
            pppppplVar38 = (longlong ******)pppppplVar38[-1];
          }
          thunk_FUN_14028af80(pppppplVar38,pppppplVar32);
        }
        pppppppWVar35[2] = (LPCWSTR *****)0x0;
        pppppppWVar35[3] = (LPCWSTR *****)0xf;
        *(undefined1 *)pppppppWVar35 = 0;
        uVar9 = *(undefined4 *)((longlong)ppppppplVar13 + 0x24);
        uVar10 = *(undefined4 *)(ppppppplVar12 + 1);
        uVar11 = *(undefined4 *)((longlong)ppppppplVar13 + 0x2c);
        *(undefined4 *)pppppppWVar35 = *(undefined4 *)ppppppplVar12;
        *(undefined4 *)((longlong)pppppppWVar35 + 4) = uVar9;
        *(undefined4 *)(pppppppWVar35 + 1) = uVar10;
        *(undefined4 *)((longlong)pppppppWVar35 + 0xc) = uVar11;
        pppppplVar7 = ppppppplVar12[3];
        pppppppWVar35[2] = (LPCWSTR *****)ppppppplVar12[2];
        pppppppWVar35[3] = (LPCWSTR *****)pppppplVar7;
        ppppppplVar12[2] = (longlong ******)0x0;
        ppppppplVar12[3] = (longlong ******)0xf;
        *(undefined1 *)ppppppplVar12 = 0;
      }
      ppppppplVar16 = (longlong *******)(pppppppWVar35 + 4);
      ppppppplVar29 = ppppppplStack_1e0;
      ppppppplVar13 = ppppppplVar12;
      ppppppplStack_1e0 = ppppppplVar14;
    }
    ppppppplStack_1e0 = ppppppplVar29;
    FUN_140017240(ppppppplVar29 + -4);
    ppppppplStack_1e0 = ppppppplStack_1e0 + -4;
    lVar24 = (longlong)ppppppplStack_1e0 - (longlong)ppppppplStack_1e8;
  }
  FUN_1402c83d4(&_StackX_8);
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_18e = 0;
  ptVar26 = _gmtime64(&_StackX_8);
  FUN_1402c8b44(&uStack_198,0xb,"%Y-%m-%d",ptVar26);
  FUN_14000ef10(auStack_128);
  uVar19 = FUN_14000c990(auStack_118,"config_");
  uVar19 = FUN_14000c990(uVar19,&uStack_198);
  FUN_14000c990(uVar19,".json");
  FUN_140016600(&ppppppplStack_248,auStack_148);
  lStack_1f8 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0xf;
  ppuStack_1b0 = (undefined **)0x0;
  pppppppWStack_1b8 = (LPCWSTR ******)0x0;
  pppppppWStack_208 = (LPCWSTR ******)0x0;
  ppuStack_200 = (undefined **)0x0;
  if ((((byte)uStack_a0 & 0x22) == 2) || (uVar33 = *puStack_d0, uVar33 == 0)) {
    if ((uStack_a0 & 4) == 0) {
      if (*plStack_d8 == 0) {
        lVar39 = 0;
        lVar24 = 0;
      }
      else {
        lVar24 = *plStack_f8;
        lVar39 = ((longlong)*piStack_c0 + *plStack_d8) - lVar24;
      }
      goto LAB_140042517;
    }
  }
  else {
    lVar24 = *plStack_f0;
    if (uVar33 < uStack_a8) {
      uVar33 = uStack_a8;
    }
    lVar39 = uVar33 - lVar24;
LAB_140042517:
    if (lVar24 != 0) {
      FUN_14000f880(&pppppppWStack_1b8,lVar24,lVar39);
    }
  }
  uVar19 = FUN_140018c60(&ppppppplStack_248,&pppppppWStack_1b8);
  FUN_140016600(&pppppppWStack_208,uVar19);
  if (uStack_1a0 < 0x10) {
LAB_14004257a:
    uStack_1a8 = 0;
    uStack_1a0 = 0xf;
    pppppppWStack_1b8 = (LPCWSTR ******)((ulonglong)pppppppWStack_1b8 & 0xffffffffffffff00);
    FUN_140016770(&ppppppplStack_248);
    pppppppWVar35 = (LPCWSTR ******)(param_1 + 8);
    ppppppplVar29 = (longlong *******)pppppppWVar35;
    if (7 < *(ulonglong *)(param_1 + 0x20)) {
      ppppppplVar29 = (longlong *******)*pppppppWVar35;
    }
    uStack_218 = 0;
    uStack_228 = (longlong *******)0x0;
    uStack_220 = 0;
    uStack_210 = 0;
    FUN_140016170(&uStack_228,ppppppplVar29,*(undefined8 *)(param_1 + 0x18));
    cVar17 = FUN_140018f30(&uStack_228);
    if (7 < uStack_210) {
      uVar33 = uStack_210 * 2 + 2;
      ppppppplVar29 = uStack_228;
      if (0xfff < uVar33) {
        ppppppplVar29 = (longlong *******)uStack_228[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)uStack_228 + (-8 - (longlong)ppppppplVar29)))
        goto LAB_140042722;
        uVar33 = uStack_210 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar29,uVar33);
    }
    if (cVar17 != '\0') {
      if (7 < *(ulonglong *)(param_1 + 0x20)) {
        pppppppWVar35 = (LPCWSTR ******)*pppppppWVar35;
      }
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_228 = (longlong *******)0x0;
      uStack_220 = 0;
      FUN_140016170(&uStack_228,pppppppWVar35,*(undefined8 *)(param_1 + 0x18));
      pppppppWStack_1b8 = (LPCWSTR ******)((ulonglong)pppppppWStack_1b8 & 0xffffffff00000000);
      ppuStack_1b0 = &PTR_PTR_1404df530;
      FUN_140016600(&uStack_188,&pppppppWStack_208);
      FUN_140016600(&ppppppplStack_248,&uStack_228);
      FUN_140051a30(&ppppppplStack_248,&uStack_188,2,&pppppppWStack_1b8);
      FUN_140016770(&ppppppplStack_248);
      FUN_140016770(&uStack_188);
      if (7 < uStack_210) {
        FUN_140016a90(&uStack_228,uStack_228);
      }
    }
    FUN_140016770(&pppppppWStack_208);
    FUN_1400056d0(auStack_128);
    ppppppplVar13 = ppppppplStack_1e0;
    puVar37 = auStackY_288;
    ppppppplVar29 = ppppppplStack_1e8;
    if (ppppppplStack_1e8 == (longlong *******)0x0) goto LAB_14004273d;
    for (; ppppppplVar29 != ppppppplVar13; ppppppplVar29 = ppppppplVar29 + 4) {
      FUN_140017240(ppppppplVar29);
    }
    ppppppplVar29 = ppppppplStack_1e8;
    if (0xfff < (lStack_1d8 - (longlong)ppppppplStack_1e8 & 0xffffffffffffffe0U)) {
      pppppppWVar35 =
           (LPCWSTR ******)((longlong)ppppppplStack_1e8 + (-8 - (longlong)ppppppplStack_1e8[-1]));
      ppppppplVar29 = (longlong *******)ppppppplStack_1e8[-1];
      puVar36 = auStackY_288;
      if ((longlong *******)0x1f < pppppppWVar35) goto LAB_140042722;
    }
  }
  else {
    uVar33 = uStack_1a0 + 1;
    pppppppWVar30 = pppppppWStack_1b8;
    if (uVar33 < 0x1000) {
LAB_140042575:
      thunk_FUN_14028af80(pppppppWVar30,uVar33);
      goto LAB_14004257a;
    }
    pppppppWVar30 = (LPCWSTR ******)pppppppWStack_1b8[-1];
    if ((ulonglong)((longlong)pppppppWStack_1b8 + (-8 - (longlong)pppppppWVar30)) < 0x20) {
      uVar33 = uStack_1a0 + 0x28;
      goto LAB_140042575;
    }
LAB_140042722:
    pcVar8 = (code *)swi(0x29);
    (*pcVar8)(5);
    puVar36 = auStackY_280;
    ppppppplVar29 = (longlong *******)pppppppWVar35;
  }
  *(undefined8 *)(puVar36 + -8) = 0x140042731;
  thunk_FUN_14028af80(ppppppplVar29);
  lStack_1d8 = 0;
  ppppppplStack_1e8 = (longlong *******)0x0;
  ppppppplStack_1e0 = (longlong *******)0x0;
  puVar37 = puVar36;
LAB_14004273d:
  *(undefined8 *)(puVar37 + -8) = 0x140042746;
  FUN_140016770(auStack_148);
  return;
LAB_140041e10:
  psVar21 = psVar34 + -1;
  if (psVar34[-1] == 0x5c) goto LAB_140041e2c;
  if ((psVar34[-1] == 0x2f) || (psVar34 = psVar21, psVar20 == psVar21)) goto LAB_140041e2c;
  goto LAB_140041e10;
}

