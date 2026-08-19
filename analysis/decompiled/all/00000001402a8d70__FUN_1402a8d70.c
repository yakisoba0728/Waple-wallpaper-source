// Function: FUN_1402a8d70
// Addr: 1402a8d70
// Size: 3012 bytes


void FUN_1402a8d70(undefined8 param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
                  longlong param_5,short param_6,char param_7,longlong *param_8,undefined2 param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  short *psVar7;
  code *pcVar8;
  short ******ppppppsVar9;
  byte bVar10;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  char ******ppppppcVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  short *psVar25;
  short ******ppppppsVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 uVar29;
  ulonglong *puVar30;
  undefined1 *puVar31;
  char cVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  ulonglong in_R10;
  ulonglong *puVar35;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 local_128;
  undefined2 local_120;
  short local_118;
  undefined1 local_114 [4];
  ulonglong *local_110;
  uint local_108;
  char acStack_104 [4];
  ulonglong *local_100;
  int local_f8;
  ulonglong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  short *****local_c0;
  ulonglong local_b8;
  short *****local_b0 [2];
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_88;
  ulonglong local_80;
  char *****local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_148;
  local_e8 = param_5;
  local_118 = param_6;
  local_d8 = param_8;
  local_f8 = CONCAT22(local_f8._2_2_,param_9);
  uVar6 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  puVar30 = param_3;
  local_110 = param_3;
  local_e0 = param_2;
  local_80 = uVar6;
  if ((char)param_4 == '\0') {
    (*(code *)PTR_FUN_140426bb8)(uVar6);
    puVar16 = (ulonglong *)FUN_14029d6e0(&local_88);
  }
  else {
    (*(code *)PTR_FUN_140426bb8)();
    puVar16 = (ulonglong *)FUN_14029d5c0(&local_88);
  }
  local_100 = puVar16;
  lVar17 = (*(code *)PTR_FUN_140426bb8)(uVar6);
  if (lVar17 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar17,1);
  }
  (*(code *)PTR_FUN_140426bb8)(puVar16,local_68);
  uVar14 = (*(code *)PTR_FUN_140426bb8)(puVar16);
  puVar16 = local_100;
  cVar32 = (char)param_4;
  uVar15 = -uVar14;
  if ((int)-uVar14 < 0) {
    uVar15 = uVar14;
  }
  puVar35 = (ulonglong *)(ulonglong)uVar15;
  local_108 = uVar15;
  local_f0 = puVar35;
  if (puVar35 < (ulonglong *)param_8[2]) {
    ppppppcVar18 = local_68;
    if (0xf < local_50) {
      ppppppcVar18 = (char ******)local_68[0];
    }
    if (*(char *)ppppppcVar18 != '\x7f') {
      ppppppcVar18 = local_68;
      if (0xf < local_50) {
        ppppppcVar18 = (char ******)local_68[0];
      }
      if ('\0' < *(char *)ppppppcVar18) {
        uVar11 = (*(code *)PTR_FUN_140426bb8)(local_100);
        cVar32 = (char)param_4;
        ppppppcVar18 = local_68;
        if (0xf < local_50) {
          ppppppcVar18 = (char ******)local_68[0];
        }
        uVar22 = param_8[2] - (longlong)puVar35;
        cVar4 = *(char *)ppppppcVar18;
        param_3 = local_110;
        param_6 = local_118;
        uVar15 = local_108;
        if (cVar4 != '\x7f') {
          bVar10 = (byte)local_118;
          do {
            cVar32 = (char)param_4;
            puVar35 = local_f0;
            puVar16 = local_100;
            param_3 = local_110;
            param_6 = local_118;
            uVar15 = local_108;
            if ((cVar4 < '\x01') || (uVar22 <= (ulonglong)(longlong)*(char *)ppppppcVar18)) break;
            uVar22 = uVar22 - (longlong)*(char *)ppppppcVar18;
            uVar28 = param_8[2];
            if (uVar28 < uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_140012a10();
            }
            uVar27 = param_8[3];
            if (uVar27 != uVar28) {
              uVar1 = uVar28 + 1;
              if (((uVar28 != uVar1) && (7 < uVar27)) && (DAT_140472300 != '\0')) {
                lVar17 = *param_8;
                uVar2 = lVar17 + (uVar28 + 1) * 2;
                uVar33 = lVar17 + 2 + uVar1 * 2;
                uVar20 = uVar27 * 2 + 9 + lVar17 & 0xfffffffffffffff8;
                uVar27 = uVar20;
                if (uVar2 <= uVar20) {
                  uVar27 = uVar2;
                }
                if (uVar20 < uVar33) {
                  uVar33 = uVar20;
                }
                func_0x00014000ed00(lVar17,uVar20,uVar27,uVar33);
              }
              param_8[2] = uVar1;
              if (7 < (ulonglong)param_8[3]) {
                param_8 = (longlong *)*param_8;
              }
              lVar17 = (longlong)param_8 + uVar22 * 2;
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(lVar17 + 2,lVar17,(uVar28 - uVar22) * 2 + 2);
            }
            local_128 = 1;
            puVar30 = (ulonglong *)(ulonglong)bVar10;
            param_4 = uVar22;
            local_120 = uVar11;
            FUN_1400133b0(param_8,1);
            cVar32 = (char)param_4;
            if ('\0' < *(char *)((longlong)ppppppcVar18 + 1)) {
              ppppppcVar18 = (char ******)((longlong)ppppppcVar18 + 1);
            }
            cVar4 = *(char *)ppppppcVar18;
            puVar35 = local_f0;
            puVar16 = local_100;
            param_3 = local_110;
            param_6 = local_118;
            uVar15 = local_108;
          } while (cVar4 != '\x7f');
        }
      }
    }
  }
  else {
    puVar30 = (ulonglong *)((longlong)puVar35 + (1 - param_8[2]));
    cVar32 = (char)param_9;
    FUN_140013200(param_8,0);
    puVar16 = local_100;
  }
  uStack_c8 = 0;
  local_c0 = (short *****)0x0;
  local_b8 = 7;
  local_d0 = 0;
  if (param_7 == '\0') {
    (*(code *)PTR_FUN_140426bb8)(puVar16,local_114);
  }
  else {
    (*(code *)PTR_FUN_140426bb8)();
  }
  (*(code *)PTR_FUN_140426bb8)(puVar16,&local_88);
  if (local_b8 < 8) {
    local_c0 = (short *****)0x0;
    local_b8 = 7;
    local_d0 = local_d0 & 0xffffffffffff0000;
    func_0x000140016820(&local_d0,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_140016840(&local_88);
  }
  if (DAT_140472300 != '\0') {
    puVar34 = (ulonglong *)(local_d0 + (local_b8 + 1) * 2);
    puVar3 = (ulonglong *)(local_d0 + ((longlong)local_c0 + 1) * 2);
    puVar21 = (ulonglong *)((ulonglong)((longlong)puVar34 + 7U) & 0xfffffffffffffff8);
    puVar30 = puVar21;
    if (puVar3 <= puVar21) {
      puVar30 = puVar3;
    }
    if (puVar21 < puVar34) {
      puVar34 = puVar21;
    }
    cVar32 = (char)puVar34;
    in_R10 = local_d0;
    func_0x00014000ed00(local_d0);
  }
  uVar22 = local_b8 * 2 + 2;
  uVar28 = local_d0;
  if (uVar22 < 0x1000) {
LAB_1402a9140:
    func_0x00014028b040(uVar28,uVar22);
    return;
  }
  uVar28 = *(ulonglong *)(local_d0 - 8);
  if ((local_d0 - uVar28) - 8 < 0x20) {
    uVar22 = local_b8 * 2 + 0x29;
    goto LAB_1402a9140;
  }
  pcVar8 = (code *)swi(0x29);
  (*pcVar8)(5);
  pcVar8 = (code *)swi(0x29);
  (*pcVar8)(5);
  puVar34 = (ulonglong *)param_8[2];
  if (puVar34 <= puVar35) {
    puVar30 = (ulonglong *)((longlong)puVar35 + (1 - (longlong)puVar34));
  }
  puVar31 = (undefined1 *)((longlong)puVar30 + (longlong)puVar34) + (uVar15 != 0);
  if (acStack_104[1] == ' ') {
    puVar31 = puVar31 + 1;
LAB_1402a9310:
    cVar32 = '\x01';
  }
  else if (acStack_104[1] == '$') {
    puVar31 = puVar31 + local_a0;
  }
  else if (acStack_104[1] == '+') {
    puVar31 = puVar31 + (longlong)local_c0;
  }
  else if (acStack_104[1] == 'v') {
    puVar30 = (ulonglong *)param_8[2];
    puVar19 = (undefined1 *)0x0;
    if (puVar30 <= puVar35) {
      puVar19 = (undefined1 *)((longlong)puVar35 + (1 - (longlong)puVar30));
    }
    puVar31 = puVar31 + (longlong)((longlong)puVar30 + (longlong)(puVar19 + (uVar15 != 0)));
  }
  else if (acStack_104[1] == 'x') goto LAB_1402a9310;
  if (acStack_104[2] == ' ') {
    puVar31 = puVar31 + 1;
  }
  else {
    if (acStack_104[2] == '$') {
      puVar31 = puVar31 + local_a0;
      goto LAB_1402a9363;
    }
    if (acStack_104[2] == '+') {
      puVar31 = puVar31 + (longlong)local_c0;
      goto LAB_1402a9363;
    }
    if (acStack_104[2] == 'v') {
      puVar30 = (ulonglong *)param_8[2];
      puVar19 = (undefined1 *)0x0;
      if (puVar30 <= puVar35) {
        puVar19 = (undefined1 *)((longlong)puVar35 + (1 - (longlong)puVar30));
      }
      puVar31 = puVar31 + (longlong)((longlong)puVar30 + (longlong)(puVar19 + (uVar15 != 0)));
      goto LAB_1402a9363;
    }
    if (acStack_104[2] != 'x') goto LAB_1402a9363;
  }
  cVar32 = '\x01';
LAB_1402a9363:
  if (acStack_104[3] == ' ') {
    puVar31 = puVar31 + 1;
  }
  else if (acStack_104[3] == '$') {
    puVar31 = puVar31 + local_a0;
  }
  else if (acStack_104[3] == '+') {
    puVar31 = puVar31 + (longlong)local_c0;
  }
  else if (acStack_104[3] == 'v') {
    puVar30 = (ulonglong *)param_8[2];
    puVar19 = (undefined1 *)0x0;
    if (puVar30 <= puVar35) {
      puVar19 = (undefined1 *)((longlong)puVar35 + (1 - (longlong)puVar30));
    }
    puVar31 = puVar31 + (longlong)((longlong)puVar30 + (longlong)(puVar19 + (uVar15 != 0)));
  }
  puVar19 = *(undefined1 **)(in_R10 + 0x28);
  if (((longlong)puVar19 < 1) || (puVar19 <= puVar31)) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)puVar19 - (longlong)puVar31;
  }
  uVar15 = *(uint *)(in_R10 + 0x18) & 0x1c0;
  local_e8 = CONCAT44(*(uint *)(in_R10 + 0x18),(undefined4)local_e8) & 0x1c0ffffffff;
  if ((uVar15 != 0x40) && ((uVar15 != 0x100 || (cVar32 == '\0')))) {
    uVar29 = (undefined1)*param_3;
    uVar22 = param_3[1];
    puVar16 = local_f0;
    for (; local_f0 = puVar16, lVar17 != 0; lVar17 = lVar17 + -1) {
      if (uVar22 == 0) {
LAB_1402a943e:
        uVar29 = 1;
      }
      else {
        if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9425:
          puStack_140 = (undefined *)0x1402a9439;
          sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,param_6);
        }
        else {
          iVar5 = **(int **)(uVar22 + 0x58);
          if (iVar5 < 1) goto LAB_1402a9425;
          **(int **)(uVar22 + 0x58) = iVar5 + -1;
          psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
          **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = param_6;
          sVar13 = param_6;
        }
        if (sVar13 == -1) goto LAB_1402a943e;
      }
      puVar16 = local_f0;
    }
    *(undefined1 *)param_3 = uVar29;
    lVar17 = 0;
  }
  local_88 = 0;
  do {
    uVar28 = local_e0;
    uVar22 = local_e8;
    cVar32 = acStack_104[local_88];
    if (cVar32 == ' ') {
      uVar29 = (undefined1)*param_3;
      uVar22 = param_3[1];
      lVar24 = 1;
      do {
        if (uVar22 == 0) {
LAB_1402a9961:
          uVar29 = 1;
        }
        else {
          if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9947:
            puStack_140 = (undefined *)0x1402a995b;
            sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,param_6);
          }
          else {
            iVar5 = **(int **)(uVar22 + 0x58);
            if (iVar5 < 1) goto LAB_1402a9947;
            **(int **)(uVar22 + 0x58) = iVar5 + -1;
            psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
            **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
            *psVar25 = param_6;
            sVar13 = param_6;
          }
          if (sVar13 == -1) goto LAB_1402a9961;
        }
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      *(undefined1 *)local_100 = uVar29;
      param_3 = local_100;
LAB_1402a9977:
      if (local_e8._4_4_ == 0x100) {
        uVar29 = (undefined1)*param_3;
        uVar22 = param_3[1];
        for (; lVar17 != 0; lVar17 = lVar17 + -1) {
          if (uVar22 == 0) {
LAB_1402a99de:
            uVar29 = 1;
          }
          else {
            if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a99c5:
              puStack_140 = (undefined *)0x1402a99d9;
              sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,param_6);
            }
            else {
              iVar5 = **(int **)(uVar22 + 0x58);
              if (iVar5 < 1) goto LAB_1402a99c5;
              **(int **)(uVar22 + 0x58) = iVar5 + -1;
              psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
              **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
              *psVar25 = param_6;
              sVar13 = param_6;
            }
            if (sVar13 == -1) goto LAB_1402a99de;
          }
        }
        *(undefined1 *)param_3 = uVar29;
        lVar17 = 0;
      }
    }
    else if (cVar32 == '$') {
      ppppppsVar26 = local_b0;
      if (7 < local_98) {
        ppppppsVar26 = (short ******)local_b0[0];
      }
      uVar29 = (undefined1)*param_3;
      uVar22 = param_3[1];
      for (lVar24 = local_a0; lVar24 != 0; lVar24 = lVar24 + -1) {
        if (uVar22 == 0) {
LAB_1402a98e5:
          uVar29 = 1;
        }
        else {
          sVar13 = *(short *)ppppppsVar26;
          if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a98c7:
            puStack_140 = (undefined *)0x1402a98db;
            sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
          }
          else {
            iVar5 = **(int **)(uVar22 + 0x58);
            if (iVar5 < 1) goto LAB_1402a98c7;
            **(int **)(uVar22 + 0x58) = iVar5 + -1;
            psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
            **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
            *psVar25 = sVar13;
          }
          if (sVar13 == -1) goto LAB_1402a98e5;
        }
        ppppppsVar26 = (short ******)((longlong)ppppppsVar26 + 2);
        param_3 = local_100;
      }
      *(undefined1 *)param_3 = uVar29;
    }
    else if (cVar32 == '+') {
      if ((short ******)local_c0 != (short ******)0x0) {
        ppppppsVar26 = &local_c0;
        if (7 < local_b8) {
          ppppppsVar26 = (short ******)local_c0;
        }
        uVar29 = (undefined1)*param_3;
        uVar22 = param_3[1];
        lVar24 = 1;
        do {
          if (uVar22 == 0) {
LAB_1402a9853:
            uVar29 = 1;
          }
          else {
            sVar13 = *(short *)ppppppsVar26;
            if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9835:
              puStack_140 = (undefined *)0x1402a9849;
              sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
            }
            else {
              iVar5 = **(int **)(uVar22 + 0x58);
              if (iVar5 < 1) goto LAB_1402a9835;
              **(int **)(uVar22 + 0x58) = iVar5 + -1;
              psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
              **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
              *psVar25 = sVar13;
            }
            if (sVar13 == -1) goto LAB_1402a9853;
          }
          ppppppsVar26 = (short ******)((longlong)ppppppsVar26 + 2);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        *(undefined1 *)local_100 = uVar29;
        param_3 = local_100;
      }
    }
    else if (cVar32 == 'v') {
      uVar27 = param_8[2];
      if (local_f8 == 0) {
        plVar23 = param_8;
        if (7 < (ulonglong)param_8[3]) {
          plVar23 = (longlong *)*param_8;
        }
        uVar29 = (undefined1)*param_3;
        uVar22 = param_3[1];
        if (uVar27 != 0) {
          do {
            if (uVar22 == 0) {
LAB_1402a9523:
              uVar29 = 1;
            }
            else {
              sVar13 = (short)*plVar23;
              if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9505:
                puStack_140 = (undefined *)0x1402a9519;
                sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
              }
              else {
                iVar5 = **(int **)(uVar22 + 0x58);
                if (iVar5 < 1) goto LAB_1402a9505;
                **(int **)(uVar22 + 0x58) = iVar5 + -1;
                psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
                **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
                *psVar25 = sVar13;
              }
              if (sVar13 == -1) goto LAB_1402a9523;
            }
            plVar23 = (longlong *)((longlong)plVar23 + 2);
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
          *(undefined1 *)local_100 = uVar29;
          param_3 = local_100;
          goto LAB_1402a99ed;
        }
      }
      else if (local_e0 < uVar27) {
        lVar24 = uVar27 - local_e0;
        plVar23 = param_8;
        if (7 < (ulonglong)param_8[3]) {
          plVar23 = (longlong *)*param_8;
        }
        uVar29 = (undefined1)*param_3;
        uVar22 = param_3[1];
        for (; lVar24 != 0; lVar24 = lVar24 + -1) {
          if (uVar22 == 0) {
LAB_1402a96f7:
            uVar29 = 1;
          }
          else {
            sVar13 = (short)*plVar23;
            if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a96d9:
              puStack_140 = (undefined *)0x1402a96ed;
              sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
            }
            else {
              iVar5 = **(int **)(uVar22 + 0x58);
              if (iVar5 < 1) goto LAB_1402a96d9;
              **(int **)(uVar22 + 0x58) = iVar5 + -1;
              psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
              **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
              *psVar25 = sVar13;
            }
            if (sVar13 == -1) goto LAB_1402a96f7;
          }
          plVar23 = (longlong *)((longlong)plVar23 + 2);
          param_3 = local_100;
        }
        *(undefined1 *)param_3 = uVar29;
        puStack_140 = (undefined *)0x1402a9721;
        uVar11 = (*(code *)PTR_FUN_140426bb8)(local_f0);
        puStack_140 = (undefined *)0x1402a972c;
        func_0x0001400130b0(param_3,uVar11);
        plVar23 = param_8;
        if (7 < (ulonglong)param_8[3]) {
          plVar23 = (longlong *)*param_8;
        }
        uVar29 = (undefined1)*param_3;
        uVar22 = param_3[1];
        psVar25 = (short *)(local_e0 * -2 + param_8[2] * 2 + (longlong)plVar23);
        uVar28 = local_e0;
        do {
          if (uVar22 == 0) {
LAB_1402a97b3:
            uVar29 = 1;
          }
          else {
            sVar13 = *psVar25;
            if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9795:
              puStack_140 = (undefined *)0x1402a97a9;
              sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
            }
            else {
              iVar5 = **(int **)(uVar22 + 0x58);
              if (iVar5 < 1) goto LAB_1402a9795;
              **(int **)(uVar22 + 0x58) = iVar5 + -1;
              psVar7 = (short *)**(longlong **)(uVar22 + 0x40);
              **(longlong **)(uVar22 + 0x40) = (longlong)(psVar7 + 1);
              *psVar7 = sVar13;
            }
            if (sVar13 == -1) goto LAB_1402a97b3;
          }
          psVar25 = psVar25 + 1;
          uVar28 = uVar28 - 1;
          param_3 = local_100;
        } while (uVar28 != 0);
      }
      else {
        sVar13 = (short)local_e8;
        puStack_140 = (undefined *)0x1402a955e;
        func_0x0001400130b0(param_3,local_e8 & 0xffff);
        puStack_140 = (undefined *)0x1402a956e;
        uVar11 = (*(code *)PTR_FUN_140426bb8)(puVar16);
        puStack_140 = (undefined *)0x1402a9579;
        func_0x0001400130b0(param_3,uVar11);
        uVar29 = (undefined1)*param_3;
        uVar27 = param_3[1];
        for (lVar24 = uVar28 - param_8[2]; lVar24 != 0; lVar24 = lVar24 + -1) {
          if (uVar27 == 0) {
LAB_1402a95dc:
            uVar29 = 1;
          }
          else {
            if (**(longlong **)(uVar27 + 0x40) == 0) {
LAB_1402a95c3:
              puStack_140 = (undefined *)0x1402a95d6;
              sVar12 = (*(code *)PTR_FUN_140426bb8)(uVar27,uVar22 & 0xffff);
            }
            else {
              iVar5 = **(int **)(uVar27 + 0x58);
              if (iVar5 < 1) goto LAB_1402a95c3;
              **(int **)(uVar27 + 0x58) = iVar5 + -1;
              psVar25 = (short *)**(longlong **)(uVar27 + 0x40);
              **(longlong **)(uVar27 + 0x40) = (longlong)(psVar25 + 1);
              *psVar25 = sVar13;
              sVar12 = sVar13;
            }
            if (sVar12 == -1) goto LAB_1402a95dc;
          }
          param_3 = local_100;
        }
        *(undefined1 *)param_3 = uVar29;
        lVar24 = param_8[2];
        plVar23 = param_8;
        if (7 < (ulonglong)param_8[3]) {
          plVar23 = (longlong *)*param_8;
        }
        if (lVar24 != 0) {
          do {
            if (uVar27 == 0) {
LAB_1402a9663:
              uVar29 = 1;
            }
            else {
              sVar13 = (short)*plVar23;
              if (**(longlong **)(uVar27 + 0x40) == 0) {
LAB_1402a9645:
                puStack_140 = (undefined *)0x1402a9659;
                sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar27,sVar13);
              }
              else {
                iVar5 = **(int **)(uVar27 + 0x58);
                if (iVar5 < 1) goto LAB_1402a9645;
                **(int **)(uVar27 + 0x58) = iVar5 + -1;
                psVar25 = (short *)**(longlong **)(uVar27 + 0x40);
                **(longlong **)(uVar27 + 0x40) = (longlong)(psVar25 + 1);
                *psVar25 = sVar13;
              }
              if (sVar13 == -1) goto LAB_1402a9663;
            }
            plVar23 = (longlong *)((longlong)plVar23 + 2);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          *(undefined1 *)local_100 = uVar29;
          param_3 = local_100;
          goto LAB_1402a99ed;
        }
      }
      *(undefined1 *)param_3 = uVar29;
    }
    else if (cVar32 == 'x') goto LAB_1402a9977;
LAB_1402a99ed:
    local_88 = local_88 + 1;
    puVar16 = local_f0;
    param_6 = (short)local_108;
  } while (local_88 < 4);
  if ((short ******)0x1 < local_c0) {
    ppppppsVar26 = &local_c0;
    if (7 < local_b8) {
      ppppppsVar26 = (short ******)local_c0;
    }
    uVar29 = (undefined1)*param_3;
    uVar22 = param_3[1];
    ppppppsVar9 = (short ******)local_c0;
    while (ppppppsVar9 = (short ******)((longlong)ppppppsVar9 + -1),
          ppppppsVar9 != (short ******)0x0) {
      ppppppsVar26 = (short ******)((longlong)ppppppsVar26 + 2);
      if (uVar22 == 0) goto UNWIND_INFO_1402a9a8f_UnwindCodes_1__UnwindOpCode;
      sVar13 = *(short *)ppppppsVar26;
      if (**(longlong **)(uVar22 + 0x40) == 0) {
LAB_1402a9a78:
        puStack_140 = &UNK_1402a9a8c;
        sVar13 = (*(code *)PTR_FUN_140426bb8)(uVar22,sVar13);
      }
      else {
        iVar5 = **(int **)(uVar22 + 0x58);
        if (iVar5 < 1) goto LAB_1402a9a78;
        **(int **)(uVar22 + 0x58) = iVar5 + -1;
        psVar25 = (short *)**(longlong **)(uVar22 + 0x40);
        **(longlong **)(uVar22 + 0x40) = (longlong)(psVar25 + 1);
        *psVar25 = sVar13;
      }
      param_3 = local_100;
      if (sVar13 == -1) {
UNWIND_INFO_1402a9a8f_UnwindCodes_1__UnwindOpCode:
        uVar29 = 1;
        param_3 = local_100;
      }
    }
    *(undefined1 *)param_3 = uVar29;
  }
  local_d8[5] = 0;
  local_88 = *param_3;
  local_80 = param_3[1];
  puStack_140 = (undefined *)0x1402a9ad7;
  FUN_1402a9b40(local_d0,&local_88,(short)local_108,lVar17);
                    /* WARNING: Subroutine does not return */
  puStack_140 = (undefined *)0x1402a9ae1;
  FUN_140016840(local_b0);
}

