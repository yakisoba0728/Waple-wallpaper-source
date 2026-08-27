// Function: FUN_140011220
// Addr: 140011220
// Size: 1740 bytes


undefined8
FUN_140011220(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
             short param_5,char *param_6,ulonglong param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  short *psVar4;
  bool bVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  short *******pppppppsVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 uVar21;
  char *pcVar22;
  undefined2 *puVar23;
  short *psVar24;
  undefined *puVar25;
  ulonglong uVar26;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong local_a8;
  undefined2 local_a0;
  ulonglong local_98;
  longlong *plStack_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  
  uVar19 = param_7;
  pcVar22 = param_6;
  puVar20 = auStack_c8;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar26 = 0;
    uVar18 = 2;
    lVar17 = 1;
  }
  else {
    uVar26 = 1;
    uVar18 = 3;
    lVar17 = 2;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar25 = &DAT_140473fc0;
    bVar5 = uVar18 <= param_7;
    param_7 = uVar26;
    if (((bVar5) && (param_6[uVar26] == '0')) && ((param_6[lVar17] + 0xa8U & 0xdf) == 0)) {
      param_7 = uVar18;
    }
  }
  else {
    puVar25 = &DAT_140473fbc;
    param_7 = uVar26;
  }
  uVar26 = param_7;
  uVar13 = FUN_1402ca5f0(param_6,puVar25);
  param_6._0_1_ = 0x2e;
  param_6._1_1_ = 0;
  puVar14 = (undefined8 *)FUN_1402ca9c0();
  param_6._0_1_ = *(undefined1 *)*puVar14;
  uVar18 = FUN_1402ca5f0(pcVar22,&param_6);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_90 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar15 = (longlong *)FUN_14000f450(&local_98);
  puVar14 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,1);
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  FUN_1400167e0(&local_88,0,uVar19);
  pppppppsVar16 = &local_88;
  if (7 < local_70) {
    pppppppsVar16 = (short *******)local_88;
  }
  (**(code **)(*plVar15 + 0x58))(plVar15,pcVar22,pcVar22 + uVar19,pppppppsVar16);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_90 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar15 = (longlong *)FUN_1400118f0(&local_98);
  puVar14 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,1);
  }
  (**(code **)(*plVar15 + 0x28))(plVar15,&local_68);
  uVar9 = (**(code **)(*plVar15 + 0x20))(plVar15);
  if (uVar18 != uVar19) {
    uVar10 = (**(code **)(*plVar15 + 0x18))(plVar15);
    pppppppsVar16 = &local_88;
    if (7 < local_70) {
      pppppppsVar16 = (short *******)local_88;
    }
    *(undefined2 *)((longlong)pppppppsVar16 + uVar18 * 2) = uVar10;
  }
  cVar8 = param_8;
  if (param_8 != '\0') {
    if (uVar18 == uVar19) {
      uVar18 = uVar13;
    }
    pcVar22 = &local_68;
    if (0xf < local_50) {
      pcVar22 = (char *)CONCAT71(uStack_67,local_68);
    }
    cVar1 = *pcVar22;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar22, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < uVar18 - uVar26))) {
      uVar18 = uVar18 - (longlong)cVar1;
      if (local_78 < uVar18) goto LAB_1400118e7;
      if (local_70 == local_78) {
        local_a8 = 1;
        local_a0 = uVar9;
        FUN_1400132e0(&local_88,1,cVar8,uVar18);
      }
      else {
        pppppppsVar16 = &local_88;
        if (7 < local_70) {
          pppppppsVar16 = (short *******)local_88;
        }
        lVar17 = local_78 - uVar18;
        puVar23 = (undefined2 *)((longlong)pppppppsVar16 + uVar18 * 2);
        local_78 = local_78 + 1;
        FUN_1404210f0(puVar23 + 1,puVar23,lVar17 * 2 + 2);
        lVar17 = 1;
        do {
          *puVar23 = uVar9;
          puVar23 = puVar23 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if ('\0' < pcVar22[1]) {
        pcVar22 = pcVar22 + 1;
      }
      cVar1 = *pcVar22;
    }
  }
  uVar19 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar19 < 1) || (uVar19 <= local_78)) {
    lVar17 = 0;
  }
  else {
    lVar17 = uVar19 - local_78;
  }
  uVar12 = *(uint *)(param_4 + 0x18) & 0x1c0;
  local_98 = local_78;
  if (uVar12 == 0x40) {
    pppppppsVar16 = &local_88;
    if (7 < local_70) {
      pppppppsVar16 = (short *******)local_88;
    }
    uVar21 = (undefined1)*param_3;
    plVar3 = (longlong *)param_3[1];
    for (uVar19 = param_7; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_14001176c:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar16;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140011755:
          sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar11);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140011755;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar24 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar24 + 1;
          *psVar24 = sVar11;
        }
        if (sVar11 == -1) goto LAB_14001176c;
      }
      pppppppsVar16 = (short *******)((longlong)pppppppsVar16 + 2);
    }
  }
  else if (uVar12 == 0x100) {
    pppppppsVar16 = &local_88;
    if (7 < local_70) {
      pppppppsVar16 = (short *******)local_88;
    }
    uVar21 = (undefined1)*param_3;
    plVar3 = (longlong *)param_3[1];
    for (uVar19 = param_7; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_14001168c:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar16;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140011675:
          sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar11);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140011675;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar24 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar24 + 1;
          *psVar24 = sVar11;
        }
        if (sVar11 == -1) goto LAB_14001168c;
      }
      pppppppsVar16 = (short *******)((longlong)pppppppsVar16 + 2);
    }
    *(undefined1 *)param_3 = uVar21;
    for (; lVar17 != 0; lVar17 = lVar17 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1400116ed:
        uVar21 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_1400116da:
          sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1400116da;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar24 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar24 + 1;
          *psVar24 = param_5;
          sVar11 = param_5;
        }
        if (sVar11 == -1) goto LAB_1400116ed;
      }
    }
    lVar17 = 0;
  }
  else {
    uVar21 = (undefined1)*param_3;
    plVar3 = (longlong *)param_3[1];
    for (; lVar17 != 0; lVar17 = lVar17 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_14001158a:
        uVar21 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_140011577:
          sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140011577;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar24 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar24 + 1;
          *psVar24 = param_5;
          sVar11 = param_5;
        }
        if (sVar11 == -1) goto LAB_14001158a;
      }
    }
    lVar17 = 0;
    *(undefined1 *)param_3 = uVar21;
    pppppppsVar16 = &local_88;
    uVar19 = param_7;
    if (7 < local_70) {
      pppppppsVar16 = (short *******)local_88;
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140011602:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar16;
        if (*(longlong *)plVar3[8] == 0) {
LAB_1400115eb:
          sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar11);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1400115eb;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar24 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar24 + 1;
          *psVar24 = sVar11;
        }
        if (sVar11 == -1) goto LAB_140011602;
      }
      pppppppsVar16 = (short *******)((longlong)pppppppsVar16 + 2);
    }
  }
  pppppppsVar16 = &local_88;
  if (7 < local_70) {
    pppppppsVar16 = (short *******)local_88;
  }
  psVar24 = (short *)((longlong)pppppppsVar16 + param_7 * 2);
  plVar3 = (longlong *)param_3[1];
  for (local_98 = local_98 - param_7; local_98 != 0; local_98 = local_98 - 1) {
    if (plVar3 == (longlong *)0x0) {
LAB_1400117f4:
      uVar21 = 1;
    }
    else {
      sVar11 = *psVar24;
      if (*(longlong *)plVar3[8] == 0) {
LAB_1400117d9:
        sVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar11);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_1400117d9;
        *(int *)plVar3[0xb] = iVar2 + -1;
        psVar4 = *(short **)plVar3[8];
        *(short **)plVar3[8] = psVar4 + 1;
        *psVar4 = sVar11;
      }
      if (sVar11 == -1) goto LAB_1400117f4;
    }
    psVar24 = psVar24 + 1;
  }
  *(undefined1 *)param_3 = uVar21;
  local_98 = *param_3;
  plStack_90 = (longlong *)param_3[1];
  *(undefined8 *)(param_4 + 0x28) = 0;
  local_a8 = lVar17;
  FUN_1400120c0(param_1,param_2,&local_98,param_5);
  if (0xf < local_50) {
    lVar7 = CONCAT71(uStack_67,local_68);
    uVar19 = local_50 + 1;
    lVar17 = lVar7;
    if (0xfff < uVar19) {
      lVar17 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar17) - 8U) goto LAB_1400118e0;
      uVar19 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar17,uVar19);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68 = '\0';
  if (7 < local_70) {
    uVar19 = local_70 * 2 + 2;
    pppppppsVar16 = (short *******)local_88;
    if (0xfff < uVar19) {
      pppppppsVar16 = (short *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppsVar16))) {
LAB_1400118e0:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar20 = auStack_c0;
LAB_1400118e7:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + -8) = &UNK_1400118ec;
        FUN_140012940();
      }
      uVar19 = local_70 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppsVar16,uVar19);
  }
  return param_2;
}

