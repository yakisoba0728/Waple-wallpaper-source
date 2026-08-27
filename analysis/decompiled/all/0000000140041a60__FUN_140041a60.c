// Function: FUN_140041a60
// Addr: 140041a60
// Size: 3335 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_140041a60(longlong param_1)

{
  short *psVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  longlong ******pppppplVar14;
  longlong *****ppppplVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  size_t sVar19;
  longlong lVar20;
  undefined4 *puVar21;
  tm *ptVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *******ppppppplVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong ******pppppplVar32;
  ulonglong uVar33;
  undefined8 unaff_RBX;
  short *psVar34;
  longlong *******ppppppplVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined8 unaff_RSI;
  longlong *******ppppppplVar38;
  LPCWSTR pWVar39;
  longlong ******pppppplVar40;
  undefined8 unaff_R14;
  undefined1 auStackY_2e0 [8];
  undefined1 auStackY_2d8 [24];
  longlong *******local_2a0;
  longlong lStack_298;
  longlong local_290;
  ulonglong uStack_288;
  longlong *******local_280;
  longlong lStack_278;
  longlong local_270;
  ulonglong uStack_268;
  undefined8 local_80;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong *******local_38;
  uint local_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  plVar29 = (longlong *)(param_1 + 8);
  if (7 < *(ulonglong *)(param_1 + 0x20)) {
    plVar29 = (longlong *)*plVar29;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_80 = 0x140041ab3;
  FUN_140016170(&local_58,plVar29,*(undefined8 *)(param_1 + 0x18));
  local_80 = 0x140041abc;
  cVar12 = FUN_140018f30(&local_58);
  if (cVar12 != '\0') {
    local_80 = 0x140041acd;
    FUN_140016600(&local_38,&local_58);
    ppppppplVar35 = (longlong *******)&local_38;
    if (7 < uStack_20) {
      ppppppplVar35 = local_38;
    }
    local_80 = 0x140041ae0;
    FUN_1402906f0(ppppppplVar35);
    local_80 = 0x140041ae9;
    FUN_140016770(&local_38);
  }
  local_30 = CONCAT31(local_30._1_3_,7);
  local_30 = local_30 & 0xfffffeff;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_80 = 0x140041b0a;
  pppppplVar14 = (longlong ******)FUN_14028af20(0x10);
  *pppppplVar14 = (longlong *****)0x0;
  pppppplVar14[1] = (longlong *****)0x0;
  local_80 = 0x140041b1e;
  ppppplVar15 = (longlong *****)FUN_14028af20(0x58);
  *ppppplVar15 = (longlong ****)ppppplVar15;
  ppppplVar15[1] = (longlong ****)ppppplVar15;
  ppppplVar15[2] = (longlong ****)ppppplVar15;
  *(undefined2 *)(ppppplVar15 + 3) = 0x101;
  *pppppplVar14 = ppppplVar15;
  local_80 = 0x140041b43;
  local_38 = (longlong *******)pppppplVar14;
  FUN_140085610(param_1 + 0x48,&local_38);
  ppppppplVar35 = local_38;
  switch((undefined1)local_30) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((local_30 >> 8 & 1) != 0) {
      local_80 = 0x140041b7a;
      thunk_FUN_1402d9040(local_38);
    }
    break;
  case 6:
  case 7:
    if (local_38 != (longlong *******)0x0) {
      local_80 = 0x140041b8d;
      FUN_140088e40(local_38);
      local_80 = 0x140041b9a;
      thunk_FUN_14028af80(ppppppplVar35,0x10);
    }
    break;
  default:
    local_80 = 0x140041bb5;
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar25 = local_28;
  if (local_28 != 0) {
    local_80 = 0x140041bc7;
    FUN_140017240(local_28 + 0x40);
    local_80 = 0x140041bd0;
    FUN_140017240(lVar25 + 0x20);
    local_80 = 0x140041bd8;
    FUN_140017240(lVar25);
    local_80 = 0x140041be5;
    thunk_FUN_14028af80(lVar25,0x60);
  }
  if (local_40 < 8) {
    return;
  }
  uVar31 = local_40 * 2 + 2;
  lVar25 = local_58;
  if (uVar31 < 0x1000) {
LAB_140041c28:
    local_80 = 0x140041c2d;
    thunk_FUN_14028af80(lVar25,uVar31);
    return;
  }
  lVar25 = *(longlong *)(local_58 + -8);
  if ((local_58 - lVar25) - 8U < 0x20) {
    uVar31 = local_40 * 2 + 0x29;
    goto LAB_140041c28;
  }
  uVar24 = 5;
  pcVar7 = (code *)swi(0x29);
  iVar13 = (*pcVar7)();
  uVar6 = iVar13 - *(int *)(longlong)(iVar13 * 2);
  lVar25 = CONCAT62((int6)((ulonglong)uVar24 >> 0x10),CONCAT11(0x1b,(char)uVar24));
  uVar31 = (ulonglong)uVar6;
  if (-1 < (char)uVar6) {
    if ((char)uVar6 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar29 = (longlong *)(ulonglong)(uVar6 - 0x188);
  puVar36 = auStackY_2e0;
  if (*(char *)(lVar25 + 0xe0) != '\0') {
    return;
  }
  *(undefined8 *)(uVar31 + 0x10) = unaff_RBX;
  *(undefined8 *)(uVar31 + 0x18) = unaff_RSI;
  *(longlong *)(uVar31 - 0x20) = param_1;
  *(undefined8 *)(uVar31 - 0x28) = unaff_R14;
  *(undefined4 *)(plVar29 + -9) = 0;
  uVar24 = FUN_140005ee0(&local_2a0);
  uVar24 = FUN_140005d20(uVar24,"config_backups");
  FUN_140016600(plVar29 + 8,uVar24);
  FUN_140016770(&local_2a0);
  cVar12 = FUN_140018e60(plVar29 + 8);
  if (cVar12 == '\0') {
    FUN_140016600(&local_2a0,plVar29 + 8);
    FUN_1400509f0(&local_2a0,plVar29 + -9);
    FUN_140016770(&local_2a0);
    FUN_140016600(&local_2a0,plVar29 + 8);
    FUN_14003b820(&local_2a0,plVar29 + -0x10);
    FUN_140016770(&local_2a0);
    puVar37 = auStackY_2e0;
    if ((int)plVar29[-9] != 0) goto LAB_14004273d;
  }
  plVar29[-10] = 0;
  plVar29[-0xc] = 0;
  plVar29[-0xb] = 0;
  FUN_140016600(&local_2a0,plVar29 + 8);
  FUN_14003b1c0(plVar29 + -6,&local_2a0,plVar29 + -9);
  FUN_140016770(&local_2a0);
  plVar5 = (longlong *)plVar29[-5];
  plVar29[-8] = (longlong)plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar23 = plVar29[-6];
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar23 = plVar29[-6];
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(int *)(plVar29 + -0x10) = (int)plVar29[-6];
  *(undefined4 *)((longlong)plVar29 + -0x7c) = *(undefined4 *)((longlong)plVar29 + -0x2c);
  *(int *)(plVar29 + -0xf) = (int)plVar29[-5];
  *(undefined4 *)((longlong)plVar29 + -0x74) = *(undefined4 *)((longlong)plVar29 + -0x24);
  plVar29[-9] = lVar23;
  FUN_1400507f0(plVar29 + -6,plVar29 + -0x10);
  lVar20 = plVar29[-6];
  while (lVar23 != lVar20) {
    FUN_140016600(plVar29 + 4,lVar23 + 0x20);
    plVar26 = plVar29 + 4;
    if (7 < (ulonglong)plVar29[7]) {
      plVar26 = (longlong *)plVar29[4];
    }
    psVar34 = (short *)((longlong)plVar26 + plVar29[6] * 2);
    psVar17 = psVar34;
    for (psVar16 = (short *)FUN_140015e90(); psVar16 != psVar17; psVar16 = psVar16 + 1) {
      if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) goto LAB_140041e10;
    }
LAB_140041e2c:
    psVar17 = (short *)thunk_FUN_14028d070(psVar34);
    psVar16 = psVar17;
    if ((psVar34 != psVar17) && (psVar1 = psVar17 + -1, psVar34 != psVar1)) {
      psVar18 = psVar17 + -2;
      if (*psVar1 == 0x2e) {
        if ((psVar34 != psVar18) || (psVar17[-2] != 0x2e)) {
          psVar16 = psVar1;
        }
      }
      else {
        for (; (psVar16 = psVar17, psVar34 != psVar18 && (psVar16 = psVar18, *psVar18 != 0x2e));
            psVar18 = psVar18 + -1) {
        }
      }
    }
    plVar29[-0xe] = 0;
    plVar29[-0xd] = 0;
    plVar29[-0x10] = 0;
    plVar29[-0xf] = 0;
    FUN_140016170(plVar29 + -0x10,psVar34,(longlong)psVar16 - (longlong)psVar34 >> 1);
    local_290 = plVar29[-0xe];
    uStack_288 = plVar29[-0xd];
    plVar29[-0xe] = 0;
    local_2a0 = (longlong *******)plVar29[-0x10];
    lStack_298 = plVar29[-0xf];
    plVar29[-0xd] = 0;
    ppppppplVar35 = (longlong *******)&local_2a0;
    if (7 < uStack_288) {
      ppppppplVar35 = local_2a0;
    }
    plVar29[-0x10] = 0;
    plVar29[-0xf] = 0;
    uVar24 = FUN_1402d6aa0(ppppppplVar35);
    FUN_140016170(plVar29 + -0x10,ppppppplVar35,uVar24);
    if (plVar29[-0xe] == 0) {
LAB_140041fa9:
      local_270 = 0;
      lStack_278 = 0;
      local_280 = (longlong *******)0x0;
      uStack_268 = 0xf;
    }
    else {
      pWVar39 = (LPCWSTR)(plVar29 + -0x10);
      if (7 < (ulonglong)plVar29[-0xd]) {
        pWVar39 = (LPCWSTR)plVar29[-0x10];
      }
      iVar13 = WideCharToMultiByte(0xfde9,0,pWVar39,(int)plVar29[-0xe],(LPSTR)0x0,0,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
      ppppppplVar35 = (longlong *******)(longlong)iVar13;
      if (iVar13 < 1) goto LAB_140041fa9;
      FUN_140016940(plVar29,ppppppplVar35,0);
      plVar26 = plVar29;
      if (0xf < (ulonglong)plVar29[3]) {
        plVar26 = (longlong *)*plVar29;
      }
      pWVar39 = (LPCWSTR)(plVar29 + -0x10);
      if (7 < (ulonglong)plVar29[-0xd]) {
        pWVar39 = (LPCWSTR)plVar29[-0x10];
      }
      WideCharToMultiByte(0xfde9,0,pWVar39,(int)plVar29[-0xe],(LPSTR)plVar26,iVar13,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      local_270 = plVar29[2];
      uStack_268 = plVar29[3];
      local_280 = (longlong *******)*plVar29;
      lStack_278 = plVar29[1];
    }
    uVar33 = uStack_268;
    uVar31 = plVar29[-0xd];
    if (7 < uVar31) {
      lVar23 = plVar29[-0x10];
      uVar30 = uVar31 * 2 + 2;
      lVar27 = lVar23;
      if (0xfff < uVar30) {
        lVar27 = *(longlong *)(lVar23 + -8);
        if (0x1f < (lVar23 - lVar27) - 8U) goto LAB_140042722;
        uVar30 = uVar31 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar27,uVar30);
    }
    if (7 < uStack_288) {
      uVar31 = uStack_288 * 2 + 2;
      ppppppplVar28 = local_2a0;
      if (0xfff < uVar31) {
        ppppppplVar28 = (longlong *******)local_2a0[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_2a0 + (-8 - (longlong)ppppppplVar28)))
        goto LAB_140042722;
        uVar31 = uStack_288 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar31);
    }
    ppppppplVar35 = local_280;
    ppppppplVar28 = (longlong *******)&local_280;
    if (0xf < uVar33) {
      ppppppplVar28 = local_280;
    }
    sVar19 = strlen((char *)ppppppplVar28);
    if ((int)sVar19 == 0x11) {
      uVar24 = FUN_140018ce0(plVar29 + 4,&local_2a0);
      FUN_140016fc0(&local_280,uVar24);
      FUN_1400187b0(&local_280);
      FUN_140030470(plVar29 + -0xc,&local_280);
      if (0xf < uStack_268) {
        uVar31 = uStack_268 + 1;
        ppppppplVar28 = local_280;
        if (0xfff < uVar31) {
          ppppppplVar28 = (longlong *******)local_280[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_280 + (-8 - (longlong)ppppppplVar28)))
          goto LAB_140042722;
          uVar31 = uStack_268 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar28,uVar31);
      }
      local_270 = 0;
      uStack_268 = 0xf;
      local_280 = (longlong *******)((ulonglong)local_280 & 0xffffffffffffff00);
      if (0xf < uStack_288) {
        uVar31 = uStack_288 + 1;
        ppppppplVar28 = local_2a0;
        if (0xfff < uVar31) {
          ppppppplVar28 = (longlong *******)local_2a0[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_2a0 + (-8 - (longlong)ppppppplVar28)))
          goto LAB_140042722;
          uVar31 = uStack_288 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar28,uVar31);
      }
    }
    if (0xf < uVar33) {
      uVar31 = uVar33 + 1;
      ppppppplVar28 = ppppppplVar35;
      if (0xfff < uVar31) {
        ppppppplVar28 = (longlong *******)ppppppplVar35[-1];
        ppppppplVar35 = (longlong *******)((longlong)ppppppplVar35 + (-8 - (longlong)ppppppplVar28))
        ;
        if ((longlong *******)0x1f < ppppppplVar35) goto LAB_140042722;
        uVar31 = uVar33 + 0x28;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar31);
    }
    FUN_140016770(plVar29 + 4);
    iVar13 = FUN_14003b5f0(plVar29 + -9);
    if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400507a0("directory_iterator::operator++",iVar13);
    }
    lVar23 = plVar29[-9];
  }
  plVar26 = (longlong *)plVar29[-5];
  ppppppplVar35 = (longlong *******)0xffffffff;
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar26 + 1;
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar3 = (int *)((longlong)plVar26 + 0xc);
      iVar13 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar26 + 8))(plVar26);
      }
    }
  }
  plVar26 = (longlong *)plVar29[-8];
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar26 + 1;
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar3 = (int *)((longlong)plVar26 + 0xc);
      iVar13 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar26 + 8))(plVar26);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar26 = plVar5 + 1;
    lVar23 = *plVar26;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      puVar4 = (uint *)((longlong)plVar5 + 0xc);
      uVar6 = *puVar4;
      ppppppplVar35 = (longlong *******)(ulonglong)uVar6;
      *puVar4 = *puVar4 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  FUN_14004e1e0(plVar29[-0xc],plVar29[-0xb],plVar29[-0xb] - plVar29[-0xc] >> 5,0);
  lVar23 = plVar29[-0xc];
  for (lVar20 = plVar29[-0xb] - lVar23; 7 < (ulonglong)(lVar20 >> 5);
      lVar20 = (lVar20 + -0x20) - lVar23) {
    puVar21 = (undefined4 *)FUN_140005880(&local_2a0,lVar23);
    uVar8 = *puVar21;
    uVar9 = puVar21[1];
    uVar10 = puVar21[2];
    uVar11 = puVar21[3];
    lVar23 = *(longlong *)(puVar21 + 4);
    lVar20 = *(longlong *)(puVar21 + 6);
    *(undefined8 *)(puVar21 + 4) = 0;
    *(undefined8 *)(puVar21 + 6) = 7;
    *(undefined2 *)puVar21 = 0;
    *(undefined4 *)plVar29 = uVar8;
    *(undefined4 *)((longlong)plVar29 + 4) = uVar9;
    *(undefined4 *)(plVar29 + 1) = uVar10;
    *(undefined4 *)((longlong)plVar29 + 0xc) = uVar11;
    plVar29[2] = lVar23;
    plVar29[3] = lVar20;
    if (7 < uStack_288) {
      uVar31 = uStack_288 * 2 + 2;
      ppppppplVar28 = local_2a0;
      if (0xfff < uVar31) {
        ppppppplVar28 = (longlong *******)local_2a0[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_2a0 + (-8 - (longlong)ppppppplVar28)))
        goto LAB_140042722;
        uVar31 = uStack_288 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar31);
    }
    FUN_140016600(&local_2a0,plVar29);
    ppppppplVar28 = (longlong *******)&local_2a0;
    if (7 < uStack_288) {
      ppppppplVar28 = local_2a0;
    }
    FUN_1402906f0(ppppppplVar28);
    FUN_140016770(&local_2a0);
    uVar31 = plVar29[3];
    if (7 < uVar31) {
      lVar23 = *plVar29;
      uVar33 = uVar31 * 2 + 2;
      lVar20 = lVar23;
      if (0xfff < uVar33) {
        lVar20 = *(longlong *)(lVar23 + -8);
        if (0x1f < (lVar23 - lVar20) - 8U) goto LAB_140042722;
        uVar33 = uVar31 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar20,uVar33);
    }
    ppppppplVar35 = (longlong *******)plVar29[-0xc];
    ppppppplVar38 = (longlong *******)plVar29[-0xb];
    ppppppplVar28 = ppppppplVar35 + 4;
    if (ppppppplVar28 != ppppppplVar38) {
      do {
        if (ppppppplVar35 != ppppppplVar28) {
          pppppplVar14 = ppppppplVar35[3];
          if ((longlong ******)0xf < pppppplVar14) {
            pppppplVar40 = *ppppppplVar35;
            pppppplVar32 = (longlong ******)((longlong)pppppplVar14 + 1);
            if ((longlong ******)0xfff < pppppplVar32) {
              if (0x1f < (ulonglong)((longlong)pppppplVar40 + (-8 - (longlong)pppppplVar40[-1])))
              goto LAB_140042722;
              pppppplVar32 = pppppplVar14 + 5;
              pppppplVar40 = (longlong ******)pppppplVar40[-1];
            }
            thunk_FUN_14028af80(pppppplVar40,pppppplVar32);
          }
          ppppppplVar35[2] = (longlong ******)0x0;
          ppppppplVar35[3] = (longlong ******)0xf;
          *(undefined1 *)ppppppplVar35 = 0;
          uVar8 = *(undefined4 *)((longlong)ppppppplVar28 + 4);
          uVar9 = *(undefined4 *)(ppppppplVar28 + 1);
          uVar10 = *(undefined4 *)((longlong)ppppppplVar28 + 0xc);
          *(undefined4 *)ppppppplVar35 = *(undefined4 *)ppppppplVar28;
          *(undefined4 *)((longlong)ppppppplVar35 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar35 + 1) = uVar9;
          *(undefined4 *)((longlong)ppppppplVar35 + 0xc) = uVar10;
          pppppplVar14 = ppppppplVar28[3];
          ppppppplVar35[2] = ppppppplVar28[2];
          ppppppplVar35[3] = pppppplVar14;
          ppppppplVar28[2] = (longlong ******)0x0;
          ppppppplVar28[3] = (longlong ******)0xf;
          *(undefined1 *)ppppppplVar28 = 0;
        }
        ppppppplVar35 = ppppppplVar35 + 4;
        ppppppplVar28 = ppppppplVar28 + 4;
      } while (ppppppplVar28 != ppppppplVar38);
      ppppppplVar38 = (longlong *******)plVar29[-0xb];
    }
    FUN_140017240(ppppppplVar38 + -4);
    lVar20 = plVar29[-0xb];
    lVar23 = plVar29[-0xc];
    plVar29[-0xb] = lVar20 + -0x20;
  }
  FUN_1402c83d4(plVar29 + 0x32);
  plVar29[-2] = 0;
  *(undefined2 *)(plVar29 + -1) = 0;
  *(undefined1 *)((longlong)plVar29 + -6) = 0;
  ptVar22 = _gmtime64(plVar29 + 0x32);
  FUN_1402c8b44(plVar29 + -2,0xb,"%Y-%m-%d",ptVar22);
  FUN_14000ef10(plVar29 + 0xc);
  uVar24 = FUN_14000c990(plVar29 + 0xe,"config_");
  uVar24 = FUN_14000c990(uVar24,plVar29 + -2);
  FUN_14000c990(uVar24,".json");
  FUN_140016600(&local_2a0,plVar29 + 8);
  plVar29[-0xe] = 0;
  plVar29[-4] = 0;
  plVar29[-3] = 0xf;
  plVar29[-6] = 0;
  plVar29[-5] = 0;
  *(undefined1 *)(plVar29 + -6) = 0;
  plVar29[-0x10] = 0;
  plVar29[-0xf] = 0;
  if ((((byte)*(uint *)(plVar29 + 0x1d) & 0x22) == 2) ||
     (uVar31 = *(ulonglong *)plVar29[0x17], uVar31 == 0)) {
    if ((*(uint *)(plVar29 + 0x1d) & 4) == 0) {
      lVar23 = 0;
      if (*(longlong *)plVar29[0x16] == 0) {
        lVar20 = plVar29[-0xf];
        lVar27 = plVar29[-0x10];
      }
      else {
        lVar23 = *(longlong *)plVar29[0x12];
        lVar20 = ((longlong)*(int *)plVar29[0x19] + *(longlong *)plVar29[0x16]) - lVar23;
        lVar27 = lVar23;
      }
      goto LAB_140042517;
    }
  }
  else {
    lVar23 = *(longlong *)plVar29[0x13];
    if (uVar31 < (ulonglong)plVar29[0x1c]) {
      uVar31 = plVar29[0x1c];
    }
    lVar20 = uVar31 - lVar23;
    lVar27 = lVar23;
LAB_140042517:
    if (lVar23 != 0) {
      FUN_14000f880(plVar29 + -6,lVar27,lVar20);
    }
  }
  uVar24 = FUN_140018c60(&local_2a0,plVar29 + -6);
  FUN_140016600(plVar29 + -0x10,uVar24);
  uVar31 = plVar29[-3];
  if (uVar31 < 0x10) {
LAB_14004257a:
    plVar29[-4] = 0;
    plVar29[-3] = 0xf;
    *(undefined1 *)(plVar29 + -6) = 0;
    FUN_140016770(&local_2a0);
    ppppppplVar35 = (longlong *******)(lVar25 + 8);
    ppppppplVar28 = ppppppplVar35;
    if (7 < *(ulonglong *)(lVar25 + 0x20)) {
      ppppppplVar28 = (longlong *******)*ppppppplVar35;
    }
    local_270 = 0;
    local_280 = (longlong *******)0x0;
    lStack_278 = 0;
    uStack_268 = 0;
    FUN_140016170(&local_280,ppppppplVar28,*(undefined8 *)(lVar25 + 0x18));
    cVar12 = FUN_140018f30(&local_280);
    if (7 < uStack_268) {
      uVar31 = uStack_268 * 2 + 2;
      ppppppplVar28 = local_280;
      if (0xfff < uVar31) {
        ppppppplVar28 = (longlong *******)local_280[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)local_280 + (-8 - (longlong)ppppppplVar28)))
        goto LAB_140042722;
        uVar31 = uStack_268 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar31);
    }
    if (cVar12 != '\0') {
      if (7 < *(ulonglong *)(lVar25 + 0x20)) {
        ppppppplVar35 = (longlong *******)*ppppppplVar35;
      }
      local_270 = 0;
      uStack_268 = 0;
      local_280 = (longlong *******)0x0;
      lStack_278 = 0;
      FUN_140016170(&local_280,ppppppplVar35,*(undefined8 *)(lVar25 + 0x18));
      *(undefined4 *)(plVar29 + -6) = 0;
      plVar29[-5] = (longlong)&PTR_PTR_1404df530;
      FUN_140016600(plVar29,plVar29 + -0x10);
      FUN_140016600(&local_2a0,&local_280);
      FUN_140051a30(&local_2a0,plVar29,2,plVar29 + -6);
      FUN_140016770(&local_2a0);
      FUN_140016770(plVar29);
      if (7 < uStack_268) {
        FUN_140016a90(&local_280,local_280);
      }
    }
    FUN_140016770(plVar29 + -0x10);
    FUN_1400056d0(plVar29 + 0xc);
    ppppppplVar28 = (longlong *******)plVar29[-0xc];
    puVar37 = auStackY_2e0;
    if (ppppppplVar28 == (longlong *******)0x0) goto LAB_14004273d;
    ppppppplVar35 = (longlong *******)plVar29[-0xb];
    if (ppppppplVar28 != ppppppplVar35) {
      do {
        FUN_140017240(ppppppplVar28);
        ppppppplVar28 = ppppppplVar28 + 4;
      } while (ppppppplVar28 != ppppppplVar35);
      ppppppplVar28 = (longlong *******)plVar29[-0xc];
    }
    if (0xfff < (plVar29[-10] - (longlong)ppppppplVar28 & 0xffffffffffffffe0U)) {
      ppppppplVar35 =
           (longlong *******)((longlong)ppppppplVar28 + (-8 - (longlong)ppppppplVar28[-1]));
      ppppppplVar28 = (longlong *******)ppppppplVar28[-1];
      puVar36 = auStackY_2e0;
      if ((longlong *******)0x1f < ppppppplVar35) goto LAB_140042722;
    }
  }
  else {
    lVar23 = plVar29[-6];
    uVar33 = uVar31 + 1;
    lVar20 = lVar23;
    if (uVar33 < 0x1000) {
LAB_140042575:
      thunk_FUN_14028af80(lVar20,uVar33);
      goto LAB_14004257a;
    }
    lVar20 = *(longlong *)(lVar23 + -8);
    if ((lVar23 - lVar20) - 8U < 0x20) {
      uVar33 = uVar31 + 0x28;
      goto LAB_140042575;
    }
LAB_140042722:
    ppppppplVar28 = ppppppplVar35;
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar36 = auStackY_2d8;
  }
  *(undefined8 *)(puVar36 + -8) = 0x140042731;
  thunk_FUN_14028af80(ppppppplVar28);
  plVar29[-10] = 0;
  plVar29[-0xc] = 0;
  plVar29[-0xb] = 0;
  puVar37 = puVar36;
LAB_14004273d:
  *(undefined8 *)(puVar37 + -8) = 0x140042746;
  FUN_140016770(plVar29 + 8);
  return;
LAB_140041e10:
  psVar17 = psVar34 + -1;
  if (psVar34[-1] == 0x5c) goto LAB_140041e2c;
  if ((psVar34[-1] == 0x2f) || (psVar34 = psVar17, psVar16 == psVar17)) goto LAB_140041e2c;
  goto LAB_140041e10;
}

