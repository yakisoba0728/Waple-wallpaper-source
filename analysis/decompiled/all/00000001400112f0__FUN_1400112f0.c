// Function: FUN_1400112f0
// Addr: 1400112f0
// Size: 1502 bytes


undefined8
FUN_1400112f0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
             short param_5,char *param_6,ulonglong param_7,char param_8)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  bool bVar6;
  code *pcVar7;
  longlong lVar8;
  char cVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  short sVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  short *******pppppppsVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 uVar22;
  char *pcVar23;
  short *psVar24;
  undefined *puVar25;
  ulonglong uVar26;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong local_a8;
  undefined2 local_a0;
  ulonglong local_98;
  longlong *local_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  ulonglong local_50;
  
  uVar20 = param_7;
  pcVar23 = param_6;
  puVar21 = auStack_c8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar26 = 0;
    uVar19 = 2;
    lVar18 = 1;
  }
  else {
    uVar26 = 1;
    uVar19 = 3;
    lVar18 = 2;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar25 = &DAT_140474090;
    bVar6 = uVar19 <= param_7;
    param_7 = uVar26;
    if (((bVar6) && (param_6[uVar26] == '0')) && ((param_6[lVar18] + 0xa8U & 0xdf) == 0)) {
      param_7 = uVar19;
    }
  }
  else {
    puVar25 = &DAT_14047408c;
    param_7 = uVar26;
  }
  uVar26 = param_7;
  uVar14 = func_0x0001402ca6c0(param_6,puVar25);
  param_6._0_1_ = 0x2e;
  param_6._1_1_ = 0;
  puVar15 = (undefined8 *)FUN_1402caa90();
  param_6._0_1_ = *(undefined1 *)*puVar15;
  uVar19 = func_0x0001402ca6c0(pcVar23,&param_6);
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_90 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar16 = (longlong *)FUN_14000f520(&local_98);
  puVar15 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  FUN_1400168b0(&local_88,0,uVar20);
  pppppppsVar17 = &local_88;
  if (7 < local_70) {
    pppppppsVar17 = (short *******)local_88;
  }
  (**(code **)(*plVar16 + 0x58))(plVar16,pcVar23,pcVar23 + uVar20,pppppppsVar17);
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_90 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar16 = (longlong *)FUN_1400119c0(&local_98);
  puVar15 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
  (**(code **)(*plVar16 + 0x28))(plVar16,&local_68);
  uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
  if (uVar19 != uVar20) {
    uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16);
    pppppppsVar17 = &local_88;
    if (7 < local_70) {
      pppppppsVar17 = (short *******)local_88;
    }
    *(undefined2 *)((longlong)pppppppsVar17 + uVar19 * 2) = uVar11;
  }
  cVar9 = param_8;
  if (param_8 != '\0') {
    if (uVar19 == uVar20) {
      uVar19 = uVar14;
    }
    pcVar23 = &local_68;
    if (0xf < local_50) {
      pcVar23 = (char *)CONCAT71(uStack_67,local_68);
    }
    cVar2 = *pcVar23;
    while (((cVar2 != '\x7f' && (cVar2 = *pcVar23, '\0' < cVar2)) &&
           ((ulonglong)(longlong)cVar2 < uVar19 - uVar26))) {
      uVar19 = uVar19 - (longlong)cVar2;
      if (local_78 < uVar19) goto LAB_1400119b7;
      if (local_70 != local_78) {
        pppppppsVar17 = &local_88;
        if (7 < local_70) {
          pppppppsVar17 = (short *******)local_88;
        }
        lVar18 = local_78 - uVar19;
        puVar1 = (undefined2 *)((longlong)pppppppsVar17 + uVar19 * 2);
        local_78 = local_78 + 1;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar1 + 1,puVar1,lVar18 * 2 + 2);
      }
      local_a8 = 1;
      local_a0 = uVar10;
      FUN_1400133b0(&local_88,1,cVar9,uVar19);
      if ('\0' < pcVar23[1]) {
        pcVar23 = pcVar23 + 1;
      }
      cVar2 = *pcVar23;
    }
  }
  uVar20 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar20 < 1) || (uVar20 <= local_78)) {
    lVar18 = 0;
  }
  else {
    lVar18 = uVar20 - local_78;
  }
  uVar13 = *(uint *)(param_4 + 0x18) & 0x1c0;
  local_98 = local_78;
  if (uVar13 == 0x40) {
    pppppppsVar17 = &local_88;
    if (7 < local_70) {
      pppppppsVar17 = (short *******)local_88;
    }
    uVar22 = (undefined1)*param_3;
    plVar4 = (longlong *)param_3[1];
    for (uVar20 = param_7; uVar20 != 0; uVar20 = uVar20 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_14001183c:
        uVar22 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar17;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140011825:
          sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar12);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140011825;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar24 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar24 + 1;
          *psVar24 = sVar12;
        }
        if (sVar12 == -1) goto LAB_14001183c;
      }
      pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
    }
  }
  else if (uVar13 == 0x100) {
    pppppppsVar17 = &local_88;
    if (7 < local_70) {
      pppppppsVar17 = (short *******)local_88;
    }
    uVar22 = (undefined1)*param_3;
    plVar4 = (longlong *)param_3[1];
    for (uVar20 = param_7; uVar20 != 0; uVar20 = uVar20 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_14001175c:
        uVar22 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar17;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140011745:
          sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar12);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140011745;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar24 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar24 + 1;
          *psVar24 = sVar12;
        }
        if (sVar12 == -1) goto LAB_14001175c;
      }
      pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
    }
    *(undefined1 *)param_3 = uVar22;
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_1400117bd:
        uVar22 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_1400117aa:
          sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_1400117aa;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar24 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar24 + 1;
          *psVar24 = param_5;
          sVar12 = param_5;
        }
        if (sVar12 == -1) goto LAB_1400117bd;
      }
    }
    lVar18 = 0;
  }
  else {
    uVar22 = (undefined1)*param_3;
    plVar4 = (longlong *)param_3[1];
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_14001165a:
        uVar22 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_140011647:
          sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140011647;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar24 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar24 + 1;
          *psVar24 = param_5;
          sVar12 = param_5;
        }
        if (sVar12 == -1) goto LAB_14001165a;
      }
    }
    lVar18 = 0;
    *(undefined1 *)param_3 = uVar22;
    pppppppsVar17 = &local_88;
    uVar20 = param_7;
    if (7 < local_70) {
      pppppppsVar17 = (short *******)local_88;
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_1400116d2:
        uVar22 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar17;
        if (*(longlong *)plVar4[8] == 0) {
LAB_1400116bb:
          sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar12);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_1400116bb;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar24 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar24 + 1;
          *psVar24 = sVar12;
        }
        if (sVar12 == -1) goto LAB_1400116d2;
      }
      pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
    }
  }
  pppppppsVar17 = &local_88;
  if (7 < local_70) {
    pppppppsVar17 = (short *******)local_88;
  }
  psVar24 = (short *)((longlong)pppppppsVar17 + param_7 * 2);
  plVar4 = (longlong *)param_3[1];
  for (local_98 = local_98 - param_7; local_98 != 0; local_98 = local_98 - 1) {
    if (plVar4 == (longlong *)0x0) {
LAB_1400118c4:
      uVar22 = 1;
    }
    else {
      sVar12 = *psVar24;
      if (*(longlong *)plVar4[8] == 0) {
LAB_1400118a9:
        sVar12 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar12);
      }
      else {
        iVar3 = *(int *)plVar4[0xb];
        if (iVar3 < 1) goto LAB_1400118a9;
        *(int *)plVar4[0xb] = iVar3 + -1;
        psVar5 = *(short **)plVar4[8];
        *(short **)plVar4[8] = psVar5 + 1;
        *psVar5 = sVar12;
      }
      if (sVar12 == -1) goto LAB_1400118c4;
    }
    psVar24 = psVar24 + 1;
  }
  *(undefined1 *)param_3 = uVar22;
  local_98 = *param_3;
  local_90 = (longlong *)param_3[1];
  *(undefined8 *)(param_4 + 0x28) = 0;
  local_a8 = lVar18;
  FUN_140012190(param_1,param_2,&local_98,param_5);
  if (0xf < local_50) {
    lVar8 = CONCAT71(uStack_67,local_68);
    uVar20 = local_50 + 1;
    lVar18 = lVar8;
    if (0xfff < uVar20) {
      lVar18 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar18) - 8U) goto code_r0x0001400119b0;
      uVar20 = local_50 + 0x28;
    }
    func_0x00014028b040(lVar18,uVar20);
  }
  uStack_58 = 0;
  local_50 = 0xf;
  local_68 = '\0';
  if (7 < local_70) {
    uVar20 = local_70 * 2 + 2;
    pppppppsVar17 = (short *******)local_88;
    if (0xfff < uVar20) {
      pppppppsVar17 = (short *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppsVar17))) {
code_r0x0001400119b0:
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        puVar21 = auStack_c0;
LAB_1400119b7:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar21 + -8) = &UNK_1400119bc;
        FUN_140012a10();
      }
      uVar20 = local_70 * 2 + 0x29;
    }
    func_0x00014028b040(pppppppsVar17,uVar20);
  }
  return param_2;
}

