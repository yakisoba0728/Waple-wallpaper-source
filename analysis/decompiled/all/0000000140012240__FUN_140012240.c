// Function: FUN_140012240
// Addr: 140012240
// Size: 1399 bytes


undefined8
FUN_140012240(undefined8 param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
             short param_5,char *param_6,ulonglong param_7)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  code *pcVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  short *******pppppppsVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
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
  longlong *local_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  ulonglong local_50;
  
  pcVar16 = param_6;
  puVar15 = auStack_c8;
  uVar19 = 0;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar14 = 2;
    lVar13 = 1;
  }
  else {
    uVar19 = 1;
    uVar14 = 3;
    lVar13 = 2;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar14 <= param_7)) &&
      (param_6[uVar19] == '0')) && ((param_6[lVar13] + 0xa8U & 0xdf) == 0)) {
    uVar19 = uVar14;
  }
  param_6 = (char *)uVar19;
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_90 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar10 = (longlong *)FUN_14000f520(&local_98);
  puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  FUN_1400168b0(&local_88,0,param_7);
  pppppppsVar12 = &local_88;
  if (7 < local_70) {
    pppppppsVar12 = (short *******)local_88;
  }
  (**(code **)(*plVar10 + 0x58))(plVar10,pcVar16,pcVar16 + param_7,pppppppsVar12);
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_90 = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4);
  plVar10 = (longlong *)FUN_1400119c0(&local_98);
  puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_68);
  pcVar16 = &local_68;
  if (0xf < local_50) {
    pcVar16 = (char *)CONCAT71(uStack_67,local_68);
  }
  if ((byte)(*pcVar16 - 1U) < 0x7e) {
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
    cVar2 = *pcVar16;
    while (((cVar2 != '\x7f' && (cVar2 = *pcVar16, '\0' < cVar2)) &&
           ((ulonglong)(longlong)cVar2 < param_7 - (longlong)param_6))) {
      param_7 = param_7 - (longlong)cVar2;
      if (local_78 < param_7) goto LAB_140012893;
      if (local_70 != local_78) {
        pppppppsVar12 = &local_88;
        if (7 < local_70) {
          pppppppsVar12 = (short *******)local_88;
        }
        lVar13 = local_78 - param_7;
        puVar1 = (undefined2 *)((longlong)pppppppsVar12 + param_7 * 2);
        local_78 = local_78 + 1;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar1 + 1,puVar1,lVar13 * 2 + 2);
      }
      local_a8 = 1;
      local_a0 = uVar7;
      FUN_1400133b0(&local_88,1,param_4 & 0xff,param_7);
      if ('\0' < pcVar16[1]) {
        pcVar16 = pcVar16 + 1;
      }
      cVar2 = *pcVar16;
    }
  }
  uVar14 = local_78;
  uVar19 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar19 < 1) || (uVar19 <= local_78)) {
    lVar13 = 0;
  }
  else {
    lVar13 = uVar19 - local_78;
  }
  uVar9 = *(uint *)(param_4 + 0x18) & 0x1c0;
  if (uVar9 == 0x40) {
    pppppppsVar12 = &local_88;
    if (7 < local_70) {
      pppppppsVar12 = (short *******)local_88;
    }
    uVar20 = *(undefined1 *)param_3;
    plVar4 = *(longlong **)(param_3 + 2);
    for (uVar19 = (ulonglong)param_6; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140012714:
        uVar20 = 1;
      }
      else {
        sVar8 = *(short *)pppppppsVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_1400126fd:
          sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar8);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_1400126fd;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar17 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar17 + 1;
          *psVar17 = sVar8;
        }
        if (sVar8 == -1) goto LAB_140012714;
      }
      pppppppsVar12 = (short *******)((longlong)pppppppsVar12 + 2);
    }
  }
  else if (uVar9 == 0x100) {
    pppppppsVar12 = &local_88;
    if (7 < local_70) {
      pppppppsVar12 = (short *******)local_88;
    }
    uVar20 = *(undefined1 *)param_3;
    plVar4 = *(longlong **)(param_3 + 2);
    for (uVar19 = (ulonglong)param_6; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_14001262c:
        uVar20 = 1;
      }
      else {
        sVar8 = *(short *)pppppppsVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140012615:
          sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar8);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140012615;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar17 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar17 + 1;
          *psVar17 = sVar8;
        }
        if (sVar8 == -1) goto LAB_14001262c;
      }
      pppppppsVar12 = (short *******)((longlong)pppppppsVar12 + 2);
    }
    *(undefined1 *)param_3 = uVar20;
    for (; lVar13 != 0; lVar13 = lVar13 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_14001268d:
        uVar20 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_14001267a:
          sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_14001267a;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar17 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar17 + 1;
          *psVar17 = param_5;
          sVar8 = param_5;
        }
        if (sVar8 == -1) goto LAB_14001268d;
      }
    }
    lVar13 = 0;
  }
  else {
    uVar20 = *(undefined1 *)param_3;
    plVar4 = *(longlong **)(param_3 + 2);
    for (; lVar13 != 0; lVar13 = lVar13 + -1) {
      if (plVar4 == (longlong *)0x0) {
LAB_140012528:
        uVar20 = 1;
      }
      else {
        if (*(longlong *)plVar4[8] == 0) {
LAB_140012515:
          sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_5);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140012515;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar17 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar17 + 1;
          *psVar17 = param_5;
          sVar8 = param_5;
        }
        if (sVar8 == -1) goto LAB_140012528;
      }
    }
    lVar13 = 0;
    *(undefined1 *)param_3 = uVar20;
    pppppppsVar12 = &local_88;
    uVar19 = (ulonglong)param_6;
    if (7 < local_70) {
      pppppppsVar12 = (short *******)local_88;
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      if (plVar4 == (longlong *)0x0) {
LAB_1400125a0:
        uVar20 = 1;
      }
      else {
        sVar8 = *(short *)pppppppsVar12;
        if (*(longlong *)plVar4[8] == 0) {
LAB_140012589:
          sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar8);
        }
        else {
          iVar3 = *(int *)plVar4[0xb];
          if (iVar3 < 1) goto LAB_140012589;
          *(int *)plVar4[0xb] = iVar3 + -1;
          psVar17 = *(short **)plVar4[8];
          *(short **)plVar4[8] = psVar17 + 1;
          *psVar17 = sVar8;
        }
        if (sVar8 == -1) goto LAB_1400125a0;
      }
      pppppppsVar12 = (short *******)((longlong)pppppppsVar12 + 2);
    }
  }
  pppppppsVar12 = &local_88;
  if (7 < local_70) {
    pppppppsVar12 = (short *******)local_88;
  }
  psVar17 = (short *)((longlong)pppppppsVar12 + (longlong)param_6 * 2);
  plVar4 = *(longlong **)(param_3 + 2);
  for (lVar18 = uVar14 - (longlong)param_6; lVar18 != 0; lVar18 = lVar18 + -1) {
    if (plVar4 == (longlong *)0x0) {
LAB_1400127a0:
      uVar20 = 1;
    }
    else {
      sVar8 = *psVar17;
      if (*(longlong *)plVar4[8] == 0) {
LAB_140012785:
        sVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,sVar8);
      }
      else {
        iVar3 = *(int *)plVar4[0xb];
        if (iVar3 < 1) goto LAB_140012785;
        *(int *)plVar4[0xb] = iVar3 + -1;
        psVar5 = *(short **)plVar4[8];
        *(short **)plVar4[8] = psVar5 + 1;
        *psVar5 = sVar8;
      }
      if (sVar8 == -1) goto LAB_1400127a0;
    }
    psVar17 = psVar17 + 1;
  }
  *(undefined1 *)param_3 = uVar20;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  local_90 = *(longlong **)(param_3 + 2);
  *(undefined8 *)(param_4 + 0x28) = 0;
  local_a8 = lVar13;
  FUN_140012190(param_1,param_2,&local_98,param_5);
  if (0xf < local_50) {
    lVar18 = CONCAT71(uStack_67,local_68);
    uVar19 = local_50 + 1;
    lVar13 = lVar18;
    if (0xfff < uVar19) {
      lVar13 = *(longlong *)(lVar18 + -8);
      if (0x1f < (lVar18 - lVar13) - 8U) goto code_r0x00014001288c;
      uVar19 = local_50 + 0x28;
    }
    func_0x00014028b040(lVar13,uVar19);
  }
  uStack_58 = 0;
  local_50 = 0xf;
  local_68 = '\0';
  if (7 < local_70) {
    uVar19 = local_70 * 2 + 2;
    pppppppsVar12 = (short *******)local_88;
    if (0xfff < uVar19) {
      pppppppsVar12 = (short *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppsVar12))) {
code_r0x00014001288c:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar15 = auStack_c0;
LAB_140012893:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar15 + -8) = &UNK_140012898;
        FUN_140012a10();
      }
      uVar19 = local_70 * 2 + 0x29;
    }
    func_0x00014028b040(pppppppsVar12,uVar19);
  }
  return param_2;
}

