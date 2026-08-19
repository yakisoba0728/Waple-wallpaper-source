// Function: FUN_1402a4d20
// Addr: 1402a4d20
// Size: 1608 bytes


void FUN_1402a4d20(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  short param_5,char *param_6,ulonglong param_7)

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
  short sVar10;
  short sVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  short *******pppppppsVar15;
  undefined2 *puVar16;
  undefined1 uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *******pppppppcVar22;
  short *psVar23;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined2 local_d0;
  short local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char ******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  local_c8 = param_5;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    local_c0 = 0;
  }
  else {
    local_c0 = 1;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (local_c0 + 2 <= param_7)) &&
      (param_6[local_c0] == '0')) && ((param_6[local_c0 + 1] + 0xa8U & 0xdf) == 0)) {
    local_c0 = local_c0 + 2;
  }
  uVar20 = local_c0;
  uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  local_b8 = param_3;
  local_b0 = param_4;
  uStack_a0 = uVar3;
  local_98 = param_2;
  local_90 = param_1;
  (*(code *)PTR_FUN_140426bb8)(uVar3);
  uVar13 = FUN_14029d260(&local_a8);
  lVar14 = (*(code *)PTR_FUN_140426bb8)(uVar3);
  if (lVar14 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar14,1);
  }
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_140294f90(&local_88,0,param_7);
  pppppppsVar15 = &local_88;
  if (7 < local_70) {
    pppppppsVar15 = (short *******)local_88;
  }
  (*(code *)PTR_FUN_140426bb8)(uVar13,param_6,param_6 + param_7,pppppppsVar15);
  uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = uVar3;
  (*(code *)PTR_FUN_140426bb8)(uVar3);
  uVar13 = FUN_14029d800(&local_a8);
  lVar14 = (*(code *)PTR_FUN_140426bb8)(uVar3);
  if (lVar14 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar14,1);
  }
  (*(code *)PTR_FUN_140426bb8)(uVar13,local_68);
  pppppppcVar22 = local_68;
  if (0xf < local_50) {
    pppppppcVar22 = (char *******)local_68[0];
  }
  if ((byte)(*(char *)pppppppcVar22 - 1U) < 0x7e) {
    uVar9 = (*(code *)PTR_FUN_140426bb8)(uVar13);
    cVar8 = *(char *)pppppppcVar22;
    param_5 = local_c8;
    if (cVar8 != '\x7f') {
      uVar17 = (undefined1)local_c8;
      do {
        uVar7 = local_78;
        param_5 = local_c8;
        if ((cVar8 < '\x01') || (param_7 - uVar20 <= (ulonglong)(longlong)*(char *)pppppppcVar22))
        break;
        param_7 = param_7 - (longlong)*(char *)pppppppcVar22;
        if (local_78 < param_7) {
                    /* WARNING: Subroutine does not return */
          FUN_140012a10();
        }
        if (local_70 != local_78) {
          uVar20 = local_78 + 1;
          if (((local_78 != uVar20) && (7 < local_70)) && (DAT_140472300 != '\0')) {
            puVar1 = (undefined2 *)((longlong)local_88 + (local_78 + 1) * 2);
            puVar19 = (undefined2 *)((longlong)local_88 + (local_78 + 2) * 2);
            puVar16 = (undefined2 *)(local_70 * 2 + 9 + (longlong)local_88 & 0xfffffffffffffff8);
            puVar18 = puVar16;
            if (puVar1 <= puVar16) {
              puVar18 = puVar1;
            }
            if (puVar16 < puVar19) {
              puVar19 = puVar16;
            }
            func_0x00014000ed00(local_88,puVar16,puVar18,puVar19);
          }
          pppppppsVar15 = &local_88;
          if (7 < local_70) {
            pppppppsVar15 = (short *******)local_88;
          }
          puVar1 = (undefined2 *)((longlong)pppppppsVar15 + param_7 * 2);
          local_78 = uVar20;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar1 + 1,puVar1,(uVar7 - param_7) * 2 + 2);
        }
        local_d8 = 1;
        local_d0 = uVar9;
        FUN_14029ce10(&local_88,1,uVar17,param_7);
        if ('\0' < *(char *)((longlong)pppppppcVar22 + 1)) {
          pppppppcVar22 = (char *******)((longlong)pppppppcVar22 + 1);
        }
        cVar8 = *(char *)pppppppcVar22;
        uVar20 = local_c0;
        param_5 = local_c8;
      } while (cVar8 != '\x7f');
    }
  }
  uVar7 = local_78;
  puVar6 = local_b8;
  uVar20 = *(ulonglong *)(local_b0 + 0x28);
  if (((longlong)uVar20 < 1) || (uVar20 <= local_78)) {
    lVar14 = 0;
  }
  else {
    lVar14 = uVar20 - local_78;
  }
  uVar12 = *(uint *)(local_b0 + 0x18) & 0x1c0;
  sVar10 = local_c8;
  if (uVar12 == 0x40) {
    pppppppsVar15 = &local_88;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    uVar17 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar20 = local_c0; local_c8 = sVar10, uVar20 != 0; uVar20 = uVar20 - 1) {
      if (lVar4 == 0) {
LAB_1402a52c9:
        uVar17 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a52ab:
          sVar10 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar10);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402a52ab;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar23 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar23 + 1);
          *psVar23 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1402a52c9;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
  }
  else if (uVar12 == 0x100) {
    pppppppsVar15 = &local_88;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    uVar17 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar20 = local_c0; local_c8 = sVar10, uVar20 != 0; uVar20 = uVar20 - 1) {
      if (lVar4 == 0) {
LAB_1402a51d3:
        uVar17 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a51b5:
          sVar10 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar10);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402a51b5;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar23 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar23 + 1);
          *psVar23 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1402a51d3;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
    *(undefined1 *)local_b8 = uVar17;
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (lVar4 == 0) {
LAB_1402a5241:
        uVar17 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a5227:
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar10);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402a5227;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar23 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar23 + 1);
          *psVar23 = sVar10;
          sVar11 = sVar10;
        }
        if (sVar11 == -1) goto LAB_1402a5241;
      }
    }
    lVar14 = 0;
  }
  else {
    uVar17 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (lVar4 == 0) {
LAB_1402a50c4:
        uVar17 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a50aa:
          sVar10 = (*(code *)PTR_FUN_140426bb8)(lVar4,param_5);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402a50aa;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar23 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar23 + 1);
          *psVar23 = param_5;
          sVar10 = param_5;
        }
        if (sVar10 == -1) goto LAB_1402a50c4;
      }
    }
    *(undefined1 *)puVar6 = uVar17;
    lVar14 = 0;
    pppppppsVar15 = &local_88;
    sVar10 = local_c8;
    uVar20 = local_c0;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    for (; local_c8 = sVar10, uVar20 != 0; uVar20 = uVar20 - 1) {
      if (lVar4 == 0) {
LAB_1402a5142:
        uVar17 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a5124:
          sVar10 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar10);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_1402a5124;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar23 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar23 + 1);
          *psVar23 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1402a5142;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
  }
  pppppppsVar15 = &local_88;
  if (7 < local_70) {
    pppppppsVar15 = (short *******)local_88;
  }
  psVar23 = (short *)((longlong)pppppppsVar15 + local_c0 * 2);
  lVar4 = *(longlong *)(local_b8 + 2);
  lVar21 = uVar7 - local_c0;
  do {
    if (lVar21 == 0) {
      *(undefined1 *)local_b8 = uVar17;
      *(undefined8 *)(local_b0 + 0x28) = 0;
      local_a8 = *local_b8;
      uStack_a4 = local_b8[1];
      uStack_a0 = *(undefined8 *)(local_b8 + 2);
      local_d8 = lVar14;
      FUN_1402a9bf0(local_90,local_98,&local_a8,sVar10);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_140017310(local_68);
    }
    if (lVar4 == 0) {
LAB_1402a5353:
      uVar17 = 1;
    }
    else {
      sVar11 = *psVar23;
      if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_1402a5335:
        sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar4,sVar11);
      }
      else {
        iVar2 = **(int **)(lVar4 + 0x58);
        if (iVar2 < 1) goto LAB_1402a5335;
        **(int **)(lVar4 + 0x58) = iVar2 + -1;
        psVar5 = (short *)**(longlong **)(lVar4 + 0x40);
        **(longlong **)(lVar4 + 0x40) = (longlong)(psVar5 + 1);
        *psVar5 = sVar11;
      }
      if (sVar11 == -1) goto LAB_1402a5353;
    }
    psVar23 = psVar23 + 1;
    lVar21 = lVar21 + -1;
  } while( true );
}

