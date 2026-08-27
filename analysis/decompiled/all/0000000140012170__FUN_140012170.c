// Function: FUN_140012170
// Addr: 140012170
// Size: 1624 bytes


undefined8
FUN_140012170(undefined8 param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
             short param_5,char *param_6,ulonglong param_7)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  short *psVar4;
  code *pcVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  short *******pppppppsVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined2 *puVar16;
  short *psVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong local_a8;
  undefined2 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  
  pcVar15 = param_6;
  puVar14 = auStack_c8;
  uVar19 = 0;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar13 = 2;
    lVar12 = 1;
  }
  else {
    uVar19 = 1;
    uVar13 = 3;
    lVar12 = 2;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar13 <= param_7)) &&
      (param_6[uVar19] == '0')) && ((param_6[lVar12] + 0xa8U & 0xdf) == 0)) {
    uVar19 = uVar13;
  }
  param_6 = (char *)uVar19;
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_90 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar9 = (longlong *)FUN_14000f450(&local_98);
  puVar10 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  FUN_1400167e0(&local_88,0,param_7);
  pppppppsVar11 = &local_88;
  if (7 < local_70) {
    pppppppsVar11 = (short *******)local_88;
  }
  (**(code **)(*plVar9 + 0x58))(plVar9,pcVar15,pcVar15 + param_7,pppppppsVar11);
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  plStack_90 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  plVar9 = (longlong *)FUN_1400118f0(&local_98);
  puVar10 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
  pcVar15 = &local_68;
  if (0xf < local_50) {
    pcVar15 = (char *)CONCAT71(uStack_67,local_68);
  }
  if ((byte)(*pcVar15 - 1U) < 0x7e) {
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
    cVar1 = *pcVar15;
    while (((cVar1 != '\x7f' && (cVar1 = *pcVar15, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < param_7 - (longlong)param_6))) {
      param_7 = param_7 - (longlong)cVar1;
      if (local_78 < param_7) goto LAB_1400127c3;
      if (local_70 == local_78) {
        local_a8 = 1;
        local_a0 = uVar6;
        FUN_1400132e0(&local_88,1,param_4 & 0xff,param_7);
      }
      else {
        pppppppsVar11 = &local_88;
        if (7 < local_70) {
          pppppppsVar11 = (short *******)local_88;
        }
        lVar12 = local_78 - param_7;
        puVar16 = (undefined2 *)((longlong)pppppppsVar11 + param_7 * 2);
        local_78 = local_78 + 1;
        FUN_1404210f0(puVar16 + 1,puVar16,lVar12 * 2 + 2);
        lVar12 = 1;
        do {
          *puVar16 = uVar6;
          puVar16 = puVar16 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if ('\0' < pcVar15[1]) {
        pcVar15 = pcVar15 + 1;
      }
      cVar1 = *pcVar15;
    }
  }
  uVar13 = local_78;
  uVar19 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar19 < 1) || (uVar19 <= local_78)) {
    lVar12 = 0;
  }
  else {
    lVar12 = uVar19 - local_78;
  }
  uVar8 = *(uint *)(param_4 + 0x18) & 0x1c0;
  if (uVar8 == 0x40) {
    pppppppsVar11 = &local_88;
    if (7 < local_70) {
      pppppppsVar11 = (short *******)local_88;
    }
    uVar20 = *(undefined1 *)param_3;
    plVar3 = *(longlong **)(param_3 + 2);
    for (uVar19 = (ulonglong)param_6; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140012644:
        uVar20 = 1;
      }
      else {
        sVar7 = *(short *)pppppppsVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_14001262d:
          sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar7);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_14001262d;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar17 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar17 + 1;
          *psVar17 = sVar7;
        }
        if (sVar7 == -1) goto LAB_140012644;
      }
      pppppppsVar11 = (short *******)((longlong)pppppppsVar11 + 2);
    }
  }
  else if (uVar8 == 0x100) {
    pppppppsVar11 = &local_88;
    if (7 < local_70) {
      pppppppsVar11 = (short *******)local_88;
    }
    uVar20 = *(undefined1 *)param_3;
    plVar3 = *(longlong **)(param_3 + 2);
    for (uVar19 = (ulonglong)param_6; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_14001255c:
        uVar20 = 1;
      }
      else {
        sVar7 = *(short *)pppppppsVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_140012545:
          sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar7);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140012545;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar17 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar17 + 1;
          *psVar17 = sVar7;
        }
        if (sVar7 == -1) goto LAB_14001255c;
      }
      pppppppsVar11 = (short *******)((longlong)pppppppsVar11 + 2);
    }
    *(undefined1 *)param_3 = uVar20;
    for (; lVar12 != 0; lVar12 = lVar12 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1400125bd:
        uVar20 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_1400125aa:
          sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1400125aa;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar17 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar17 + 1;
          *psVar17 = param_5;
          sVar7 = param_5;
        }
        if (sVar7 == -1) goto LAB_1400125bd;
      }
    }
    lVar12 = 0;
  }
  else {
    uVar20 = *(undefined1 *)param_3;
    plVar3 = *(longlong **)(param_3 + 2);
    for (; lVar12 != 0; lVar12 = lVar12 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_140012458:
        uVar20 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_140012445:
          sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140012445;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar17 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar17 + 1;
          *psVar17 = param_5;
          sVar7 = param_5;
        }
        if (sVar7 == -1) goto LAB_140012458;
      }
    }
    lVar12 = 0;
    *(undefined1 *)param_3 = uVar20;
    pppppppsVar11 = &local_88;
    uVar19 = (ulonglong)param_6;
    if (7 < local_70) {
      pppppppsVar11 = (short *******)local_88;
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1400124d0:
        uVar20 = 1;
      }
      else {
        sVar7 = *(short *)pppppppsVar11;
        if (*(longlong *)plVar3[8] == 0) {
LAB_1400124b9:
          sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar7);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1400124b9;
          *(int *)plVar3[0xb] = iVar2 + -1;
          psVar17 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar17 + 1;
          *psVar17 = sVar7;
        }
        if (sVar7 == -1) goto LAB_1400124d0;
      }
      pppppppsVar11 = (short *******)((longlong)pppppppsVar11 + 2);
    }
  }
  pppppppsVar11 = &local_88;
  if (7 < local_70) {
    pppppppsVar11 = (short *******)local_88;
  }
  psVar17 = (short *)((longlong)pppppppsVar11 + (longlong)param_6 * 2);
  plVar3 = *(longlong **)(param_3 + 2);
  for (lVar18 = uVar13 - (longlong)param_6; lVar18 != 0; lVar18 = lVar18 + -1) {
    if (plVar3 == (longlong *)0x0) {
LAB_1400126d0:
      uVar20 = 1;
    }
    else {
      sVar7 = *psVar17;
      if (*(longlong *)plVar3[8] == 0) {
LAB_1400126b5:
        sVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar7);
      }
      else {
        iVar2 = *(int *)plVar3[0xb];
        if (iVar2 < 1) goto LAB_1400126b5;
        *(int *)plVar3[0xb] = iVar2 + -1;
        psVar4 = *(short **)plVar3[8];
        *(short **)plVar3[8] = psVar4 + 1;
        *psVar4 = sVar7;
      }
      if (sVar7 == -1) goto LAB_1400126d0;
    }
    psVar17 = psVar17 + 1;
  }
  *(undefined1 *)param_3 = uVar20;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  plStack_90 = *(longlong **)(param_3 + 2);
  *(undefined8 *)(param_4 + 0x28) = 0;
  local_a8 = lVar12;
  FUN_1400120c0(param_1,param_2,&local_98,param_5);
  if (0xf < local_50) {
    lVar18 = CONCAT71(uStack_67,local_68);
    uVar19 = local_50 + 1;
    lVar12 = lVar18;
    if (0xfff < uVar19) {
      lVar12 = *(longlong *)(lVar18 + -8);
      if (0x1f < (lVar18 - lVar12) - 8U) goto LAB_1400127bc;
      uVar19 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar19);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68 = '\0';
  if (7 < local_70) {
    uVar19 = local_70 * 2 + 2;
    pppppppsVar11 = (short *******)local_88;
    if (0xfff < uVar19) {
      pppppppsVar11 = (short *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppsVar11))) {
LAB_1400127bc:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar14 = auStack_c0;
LAB_1400127c3:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar14 + -8) = &UNK_1400127c8;
        FUN_140012940();
      }
      uVar19 = local_70 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppsVar11,uVar19);
  }
  return param_2;
}

