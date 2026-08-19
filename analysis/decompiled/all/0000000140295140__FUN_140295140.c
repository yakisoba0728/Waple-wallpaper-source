// Function: FUN_140295140
// Addr: 140295140
// Size: 1728 bytes


void FUN_140295140(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  short param_5,char *param_6,ulonglong param_7,char param_8)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  short *psVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  char cVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  short *******pppppppsVar18;
  undefined *puVar19;
  undefined2 *puVar20;
  undefined1 uVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *******pppppppcVar26;
  short *psVar27;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined2 local_d0;
  short local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  ulonglong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  short ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  char ******local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  local_c8 = param_5;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    local_c0 = 0;
  }
  else {
    local_c0 = 1;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar19 = &DAT_140474090;
    if (((local_c0 + 2 <= param_7) && (param_6[local_c0] == '0')) &&
       ((param_6[local_c0 + 1] + 0xa8U & 0xdf) == 0)) {
      local_c0 = local_c0 + 2;
    }
  }
  else {
    puVar19 = &DAT_14047408c;
  }
  uVar24 = local_c0;
  local_b8 = param_3;
  local_b0 = param_4;
  local_90 = param_2;
  local_88 = param_1;
  local_98 = func_0x0001402ca6c0(param_6,puVar19);
  local_c3 = 0;
  puVar14 = (undefined8 *)FUN_1402caa90();
  local_c4 = *(undefined1 *)*puVar14;
  uVar15 = func_0x0001402ca6c0(param_6,&local_c4);
  uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = uVar3;
  (*(code *)PTR_FUN_140426bb8)(uVar3);
  uVar16 = FUN_14029d260(&local_a8);
  lVar17 = (*(code *)PTR_FUN_140426bb8)(uVar3);
  if (lVar17 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar17,1);
  }
  local_80 = (short ******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_140294f90(&local_80,0,param_7);
  pppppppsVar18 = &local_80;
  if (7 < local_68) {
    pppppppsVar18 = (short *******)local_80;
  }
  (*(code *)PTR_FUN_140426bb8)(uVar16,param_6,param_6 + param_7,pppppppsVar18);
  uVar3 = *(undefined8 *)(*(longlong *)(local_b0 + 0x40) + 8);
  uStack_a0 = uVar3;
  (*(code *)PTR_FUN_140426bb8)(uVar3);
  uVar16 = FUN_14029d800(&local_a8);
  lVar17 = (*(code *)PTR_FUN_140426bb8)(uVar3);
  if (lVar17 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar17,1);
  }
  (*(code *)PTR_FUN_140426bb8)(uVar16,local_60);
  uVar9 = (*(code *)PTR_FUN_140426bb8)(uVar16);
  if (uVar15 != param_7) {
    uVar10 = (*(code *)PTR_FUN_140426bb8)(uVar16);
    pppppppsVar18 = &local_80;
    if (7 < local_68) {
      pppppppsVar18 = (short *******)local_80;
    }
    *(undefined2 *)((longlong)pppppppsVar18 + uVar15 * 2) = uVar10;
  }
  if (param_8 != '\0') {
    if (uVar15 == param_7) {
      uVar15 = local_98;
    }
    pppppppcVar26 = local_60;
    if (0xf < local_48) {
      pppppppcVar26 = (char *******)local_60[0];
    }
    cVar8 = *(char *)pppppppcVar26;
    param_5 = local_c8;
    if (cVar8 != '\x7f') {
      uVar21 = (undefined1)local_c8;
      do {
        uVar7 = local_70;
        param_5 = local_c8;
        if ((cVar8 < '\x01') || (uVar15 - uVar24 <= (ulonglong)(longlong)*(char *)pppppppcVar26))
        break;
        uVar15 = uVar15 - (longlong)*(char *)pppppppcVar26;
        if (local_70 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_140012a10();
        }
        if (local_68 != local_70) {
          uVar24 = local_70 + 1;
          if (((local_70 != uVar24) && (7 < local_68)) && (DAT_140472300 != '\0')) {
            puVar1 = (undefined2 *)((longlong)local_80 + (local_70 + 1) * 2);
            puVar23 = (undefined2 *)((longlong)local_80 + (local_70 + 2) * 2);
            puVar20 = (undefined2 *)(local_68 * 2 + 9 + (longlong)local_80 & 0xfffffffffffffff8);
            puVar22 = puVar20;
            if (puVar1 <= puVar20) {
              puVar22 = puVar1;
            }
            if (puVar20 < puVar23) {
              puVar23 = puVar20;
            }
            func_0x00014000ed00(local_80,puVar20,puVar22,puVar23);
          }
          pppppppsVar18 = &local_80;
          if (7 < local_68) {
            pppppppsVar18 = (short *******)local_80;
          }
          puVar1 = (undefined2 *)((longlong)pppppppsVar18 + uVar15 * 2);
          local_70 = uVar24;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar1 + 1,puVar1,(uVar7 - uVar15) * 2 + 2);
        }
        local_d8 = 1;
        local_d0 = uVar9;
        FUN_14029ce10(&local_80,1,uVar21,uVar15);
        if ('\0' < *(char *)((longlong)pppppppcVar26 + 1)) {
          pppppppcVar26 = (char *******)((longlong)pppppppcVar26 + 1);
        }
        cVar8 = *(char *)pppppppcVar26;
        param_5 = local_c8;
      } while (cVar8 != '\x7f');
    }
  }
  uVar15 = local_70;
  puVar6 = local_b8;
  uVar24 = *(ulonglong *)(local_b0 + 0x28);
  if (((longlong)uVar24 < 1) || (uVar24 <= local_70)) {
    lVar17 = 0;
  }
  else {
    lVar17 = uVar24 - local_70;
  }
  uVar13 = *(uint *)(local_b0 + 0x18) & 0x1c0;
  sVar11 = local_c8;
  if (uVar13 == 0x40) {
    pppppppsVar18 = &local_80;
    if (7 < local_68) {
      pppppppsVar18 = (short *******)local_80;
    }
    uVar21 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar24 = local_c0; local_c8 = sVar11, uVar24 != 0; uVar24 = uVar24 - 1) {
      if (lVar4 == 0) {
LAB_14029575a:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar18;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_14029573c:
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar11);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_14029573c;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar27 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar27 + 1);
          *psVar27 = sVar11;
        }
        if (sVar11 == -1) goto LAB_14029575a;
      }
      pppppppsVar18 = (short *******)((longlong)pppppppsVar18 + 2);
      sVar11 = local_c8;
    }
  }
  else if (uVar13 == 0x100) {
    pppppppsVar18 = &local_80;
    if (7 < local_68) {
      pppppppsVar18 = (short *******)local_80;
    }
    uVar21 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar24 = local_c0; local_c8 = sVar11, uVar24 != 0; uVar24 = uVar24 - 1) {
      if (lVar4 == 0) {
LAB_140295663:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar18;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_140295645:
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar11);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_140295645;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar27 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar27 + 1);
          *psVar27 = sVar11;
        }
        if (sVar11 == -1) goto LAB_140295663;
      }
      pppppppsVar18 = (short *******)((longlong)pppppppsVar18 + 2);
      sVar11 = local_c8;
    }
    *(undefined1 *)local_b8 = uVar21;
    for (; lVar17 != 0; lVar17 = lVar17 + -1) {
      if (lVar4 == 0) {
LAB_1402956d1:
        uVar21 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402956b7:
          sVar12 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar11);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402956b7;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar27 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar27 + 1);
          *psVar27 = sVar11;
          sVar12 = sVar11;
        }
        if (sVar12 == -1) goto LAB_1402956d1;
      }
    }
    lVar17 = 0;
  }
  else {
    uVar21 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (; lVar17 != 0; lVar17 = lVar17 + -1) {
      if (lVar4 == 0) {
LAB_140295552:
        uVar21 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_140295538:
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,param_5);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_140295538;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar27 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar27 + 1);
          *psVar27 = param_5;
          sVar11 = param_5;
        }
        if (sVar11 == -1) goto LAB_140295552;
      }
    }
    *(undefined1 *)puVar6 = uVar21;
    lVar17 = 0;
    pppppppsVar18 = &local_80;
    sVar11 = local_c8;
    uVar24 = local_c0;
    if (7 < local_68) {
      pppppppsVar18 = (short *******)local_80;
    }
    for (; local_c8 = sVar11, uVar24 != 0; uVar24 = uVar24 - 1) {
      if (lVar4 == 0) {
LAB_1402955d2:
        uVar21 = 1;
      }
      else {
        sVar11 = *(short *)pppppppsVar18;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402955b4:
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar11);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402955b4;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar27 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar27 + 1);
          *psVar27 = sVar11;
        }
        if (sVar11 == -1) goto LAB_1402955d2;
      }
      pppppppsVar18 = (short *******)((longlong)pppppppsVar18 + 2);
      sVar11 = local_c8;
    }
  }
  pppppppsVar18 = &local_80;
  if (7 < local_68) {
    pppppppsVar18 = (short *******)local_80;
  }
  psVar27 = (short *)((longlong)pppppppsVar18 + local_c0 * 2);
  lVar4 = *(longlong *)(local_b8 + 2);
  lVar25 = uVar15 - local_c0;
  do {
    if (lVar25 == 0) {
      *(undefined1 *)local_b8 = uVar21;
      *(undefined8 *)(local_b0 + 0x28) = 0;
      local_a8 = *local_b8;
      uStack_a4 = local_b8[1];
      uStack_a0 = *(undefined8 *)(local_b8 + 2);
      local_d8 = lVar17;
      FUN_1402a9bf0(local_88,local_90,&local_a8,sVar11);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_140017310(local_60);
    }
    if (lVar4 == 0) {
LAB_1402957e4:
      uVar21 = 1;
    }
    else {
      sVar12 = *psVar27;
      if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402957c6:
        sVar12 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar12);
      }
      else {
        iVar2 = **(int **)(lVar4 + 0x58);
        if (iVar2 < 1) goto LAB_1402957c6;
        **(int **)(lVar4 + 0x58) = iVar2 + -1;
        psVar5 = (short *)**(longlong **)(lVar4 + 0x40);
        **(longlong **)(lVar4 + 0x40) = (longlong)(psVar5 + 1);
        *psVar5 = sVar12;
      }
      if (sVar12 == -1) goto LAB_1402957e4;
    }
    psVar27 = psVar27 + 1;
    lVar25 = lVar25 + -1;
  } while( true );
}

