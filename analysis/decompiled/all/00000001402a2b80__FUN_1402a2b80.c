// Function: FUN_1402a2b80
// Addr: 1402a2b80
// Size: 6595 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1402a2b80(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             char param_5,longlong param_6,longlong param_7)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *******pppppppcVar12;
  longlong lVar13;
  short *******pppppppsVar14;
  byte *pbVar15;
  short *******pppppppsVar16;
  byte *******pppppppbVar17;
  char *pcVar18;
  ulonglong uVar19;
  byte *pbVar20;
  short *psVar21;
  short *psVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  char *pcVar28;
  short *psVar29;
  char *pcVar30;
  byte *pbVar31;
  short *psVar32;
  char *pcVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  uint local_1b8;
  uint local_1b4;
  char local_1b0 [8];
  undefined8 *local_1a8 [2];
  int local_198;
  uint local_194;
  char local_190 [8];
  ulonglong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  short *******local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  char *******local_140;
  undefined8 uStack_138;
  longlong local_130;
  ulonglong local_128;
  short *******local_120 [2];
  longlong local_110;
  ulonglong local_108;
  byte *******local_100 [2];
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  short *******local_c0 [3];
  ulonglong local_a8;
  short *******local_a0 [3];
  ulonglong local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_1e8;
  local_180 = param_7;
  local_1b4 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_1a8[0] = param_2;
  local_170 = uVar2;
  local_168 = param_2;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
  if (param_5 == '\0') {
    puVar9 = (undefined8 *)FUN_14029d610(&local_178);
  }
  else {
    puVar9 = (undefined8 *)FUN_14029d4f0(&local_178);
  }
  local_1a8[1] = puVar9;
  lVar10 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
  puVar24 = auStack_1e8;
  if (lVar10 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10,1);
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_1b0[0] = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 7;
  local_160 = (short *******)0x0;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_190);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar35 = 1;
  local_1b4 = 1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar2;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
  uVar11 = FUN_14000f450(&local_178);
  local_178 = uVar11;
  lVar10 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
  if (lVar10 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar11,"0123456789-",&DAT_14042bf3c,param_7);
  local_188 = 0;
LAB_1402a2d35:
  uVar2 = local_178;
  uVar19 = local_188;
  lVar10 = 0;
  puVar23 = auStack_1e8;
  if (3 < local_188) goto LAB_1402a43bb;
  cVar6 = local_190[local_188];
  if (cVar6 == ' ') {
LAB_1402a2d65:
    if (local_188 != 3) {
      bVar4 = false;
LAB_1402a2d80:
      if ((char)param_3[1] == '\0') {
        lVar10 = *param_3;
        if (lVar10 == 0) {
LAB_1402a4240:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a4240;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar10 = *param_4;
        if (lVar10 == 0) {
LAB_1402a428d:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a428d;
          *(short *)((longlong)param_4 + 10) = sVar8;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
        if (*param_4 == 0) goto LAB_1402a42a6;
      }
      else if (*param_4 != 0) goto LAB_1402a42a6;
      if ((char)param_3[1] == '\0') {
        if (lVar10 == 0) {
LAB_1402a4319:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a4319;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                        (uVar2,0x48,*(undefined2 *)((longlong)param_3 + 10));
      if (cVar6 == '\0') goto LAB_1402a42a6;
      bVar4 = true;
      lVar10 = *param_3;
      if (lVar10 == 0) {
LAB_1402a439e:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a437c:
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar36 = **(int **)(lVar10 + 0x50);
          if (iVar36 < 1) goto LAB_1402a437c;
          **(int **)(lVar10 + 0x50) = iVar36 + -1;
          psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
          **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
          sVar8 = *psVar32;
        }
        if (sVar8 == -1) goto LAB_1402a439e;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402a2d80;
    }
    goto LAB_1402a37f5;
  }
  if (cVar6 == '$') {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_120);
    uVar35 = uVar35 | 0x80;
    local_1b4 = uVar35;
    if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
      if ((char)param_3[1] == '\0') {
        lVar10 = *param_3;
        if (lVar10 == 0) {
LAB_1402a3dd9:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3dd9;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar10 = *param_4;
        if (lVar10 == 0) {
LAB_1402a3e27:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3e27;
          *(short *)((longlong)param_4 + 10) = sVar8;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar10 = *param_3;
      if (lVar10 != 0) {
        if (*param_4 == 0) goto LAB_1402a3e44;
        goto LAB_1402a3eae;
      }
      if (*param_4 == 0) goto LAB_1402a3eae;
LAB_1402a3e44:
      pppppppsVar14 = (short *******)local_120;
      if (7 < local_108) {
        pppppppsVar14 = local_120[0];
      }
      if ((char)param_3[1] == '\0') {
        if (lVar10 == 0) {
LAB_1402a3e94:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3e94;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar14) goto LAB_1402a3eae;
    }
    else {
LAB_1402a3eae:
      if ((uVar19 != 3) || (1 < local_150)) goto LAB_1402a403e;
      if ((char)param_3[1] == '\0') {
        lVar10 = *param_3;
        if (lVar10 == 0) {
LAB_1402a3f08:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3f08;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar10 = *param_4;
        if (lVar10 == 0) {
LAB_1402a3f56:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3f56;
          *(short *)((longlong)param_4 + 10) = sVar8;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
        if (*param_4 != 0) {
LAB_1402a3f73:
          if ((char)param_3[1] == '\0') {
            if (lVar10 == 0) {
LAB_1402a3fb5:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar10 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1402a3fb5;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar14 = (short *******)local_120;
          if (7 < local_108) {
            pppppppsVar14 = local_120[0];
          }
          if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar14) goto LAB_1402a403e;
        }
      }
      else if (*param_4 == 0) goto LAB_1402a3f73;
    }
    if (((local_110 != 0) && (7 < local_108)) && (DAT_140472230 != '\0')) {
      psVar32 = (short *)((longlong)local_120[0] + (local_110 + 1) * 2);
      psVar22 = (short *)(local_108 * 2 + 9 + (longlong)local_120[0] & 0xfffffffffffffff8);
      psVar29 = psVar22;
      if (psVar32 <= psVar22) {
        psVar29 = psVar32;
      }
      psVar32 = (short *)((longlong)local_120[0] + 2);
      if (psVar22 < (short *)((longlong)local_120[0] + 2)) {
        psVar32 = psVar22;
      }
      _guard_check_icall(local_120[0],psVar22,psVar29,psVar32);
    }
    local_110 = 0;
    pppppppsVar14 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar14 = local_120[0];
    }
    *(short *)pppppppsVar14 = 0;
LAB_1402a403e:
    pppppppsVar14 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar14 = local_120[0];
    }
LAB_1402a4052:
    if ((char)param_3[1] == '\0') {
      lVar10 = *param_3;
      if (lVar10 == 0) {
LAB_1402a4093:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar8 == -1) goto LAB_1402a4093;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar10 = *param_4;
      if (lVar10 == 0) {
LAB_1402a40e1:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar8 == -1) goto LAB_1402a40e1;
        *(short *)((longlong)param_4 + 10) = sVar8;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar10 = *param_3;
    if (lVar10 == 0) {
      if (*param_4 == 0) goto LAB_1402a40fa;
    }
    else if (*param_4 != 0) goto LAB_1402a40fa;
    pppppppsVar16 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar16 = local_120[0];
    }
    if (pppppppsVar14 == (short *******)((longlong)pppppppsVar16 + local_110 * 2))
    goto LAB_1402a40fa;
    if ((char)param_3[1] == '\0') {
      if (lVar10 == 0) {
LAB_1402a419b:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar8 == -1) goto LAB_1402a419b;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar14) goto LAB_1402a40fa;
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402a420f:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      pppppppsVar14 = (short *******)((longlong)pppppppsVar14 + 2);
    }
    else {
      if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a41ea:
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar36 = **(int **)(lVar10 + 0x50);
        if (iVar36 < 1) goto LAB_1402a41ea;
        **(int **)(lVar10 + 0x50) = iVar36 + -1;
        psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
        **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
        sVar8 = *psVar32;
      }
      if (sVar8 == -1) goto LAB_1402a420f;
      *(undefined1 *)(param_3 + 1) = 0;
      pppppppsVar14 = (short *******)((longlong)pppppppsVar14 + 2);
    }
    goto LAB_1402a4052;
  }
  if (cVar6 != '+') {
    if (cVar6 == 'v') {
      local_198 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9);
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_100);
      local_1b4 = uVar35 | 0x200;
      local_194 = local_1b4;
      puVar37 = local_1a8[0];
      if ((local_f0 != 0) &&
         (sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9), puVar37 = local_1a8[0],
         sVar8 != 0)) {
        pppppppbVar17 = (byte *******)local_100;
        if (0xf < local_e8) {
          pppppppbVar17 = local_100[0];
        }
        if (*(byte *)pppppppbVar17 < 0x7f) {
          uStack_138 = 0;
          local_130 = 0;
          local_128 = 0xf;
          local_140 = (char *******)0x0;
          FUN_1400534d0(&local_140,0);
          puVar9 = local_1a8[0];
LAB_1402a2e60:
          if ((char)param_3[1] == '\0') {
            lVar13 = *param_3;
            if (lVar13 == 0) {
LAB_1402a2ea1:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar13 + 0x50) < 1)) {
                sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
              }
              if (sVar7 == -1) goto LAB_1402a2ea1;
              *(short *)((longlong)param_3 + 10) = sVar7;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          if ((char)param_4[1] == '\0') {
            lVar13 = *param_4;
            if (lVar13 == 0) {
LAB_1402a2eef:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar13 + 0x50) < 1)) {
                sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
              }
              if (sVar7 == -1) goto LAB_1402a2eef;
              *(short *)((longlong)param_4 + 10) = sVar7;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar13 = *param_3;
          if (lVar13 == 0) {
            if (*param_4 == 0) goto LAB_1402a2f10;
          }
          else if (*param_4 != 0) goto LAB_1402a2f10;
          if ((char)param_3[1] == '\0') {
            if (lVar13 == 0) {
LAB_1402a3000:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar13 + 0x50) < 1)) {
                sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
              }
              if (sVar7 == -1) goto LAB_1402a3000;
              *(short *)((longlong)param_3 + 10) = sVar7;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          lVar13 = thunk_FUN_14028d070(param_7,param_7 + 0x16,
                                       *(undefined2 *)((longlong)param_3 + 10));
          uVar19 = lVar13 - param_7 >> 1;
          if (uVar19 < 10) {
            FUN_1400534d0(puVar9,"0123456789-"[uVar19]);
            pppppppcVar12 = (char *******)&local_140;
            if (0xf < local_128) {
              pppppppcVar12 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar12 + lVar10) != '\x7f') {
              pppppppcVar12 = (char *******)&local_140;
              if (0xf < local_128) {
                pppppppcVar12 = local_140;
              }
              *(char *)((longlong)pppppppcVar12 + lVar10) =
                   *(char *)((longlong)pppppppcVar12 + lVar10) + '\x01';
            }
          }
          else {
            pppppppcVar12 = (char *******)&local_140;
            if (0xf < local_128) {
              pppppppcVar12 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar12 + lVar10) == '\0') goto LAB_1402a2f10;
            if ((char)param_3[1] == '\0') {
              lVar13 = *param_3;
              if (lVar13 == 0) {
LAB_1402a30c3:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar13 + 0x50) < 1)) {
                  sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
                }
                if (sVar7 == -1) goto LAB_1402a30c3;
                *(short *)((longlong)param_3 + 10) = sVar7;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if (*(short *)((longlong)param_3 + 10) != sVar8) goto LAB_1402a2f10;
            FUN_1400534d0(&local_140,0);
            lVar10 = lVar10 + 1;
          }
          lVar13 = *param_3;
          if (lVar13 == 0) {
LAB_1402a313c:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a3119:
              sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              iVar36 = **(int **)(lVar13 + 0x50);
              if (iVar36 < 1) goto LAB_1402a3119;
              **(int **)(lVar13 + 0x50) = iVar36 + -1;
              psVar32 = (short *)**(longlong **)(lVar13 + 0x38);
              **(longlong **)(lVar13 + 0x38) = (longlong)(psVar32 + 1);
              sVar7 = *psVar32;
            }
            if (sVar7 == -1) goto LAB_1402a313c;
            *(undefined1 *)(param_3 + 1) = 0;
          }
          goto LAB_1402a2e60;
        }
      }
LAB_1402a3352:
      if ((char)param_3[1] == '\0') {
        lVar10 = *param_3;
        if (lVar10 == 0) {
LAB_1402a3393:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3393;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar10 = *param_4;
        if (lVar10 == 0) {
LAB_1402a33dd:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a33dd;
          *(short *)((longlong)param_4 + 10) = sVar8;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar10 = *param_3;
      iVar36 = local_198;
      uVar35 = local_194;
      if (lVar10 == 0) {
        if (*param_4 == 0) goto LAB_1402a32f5;
      }
      else if (*param_4 != 0) goto LAB_1402a32f5;
      if ((char)param_3[1] == '\0') {
        if (lVar10 == 0) {
LAB_1402a3445:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar10 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
          }
          if (sVar8 == -1) goto LAB_1402a3445;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar10 = thunk_FUN_14028d070(param_7,param_7 + 0x16,*(undefined2 *)((longlong)param_3 + 10));
      uVar19 = lVar10 - param_7 >> 1;
      uVar35 = local_194;
      iVar36 = local_198;
      if (9 < uVar19) goto LAB_1402a32f5;
      FUN_1400534d0(puVar37,"0123456789-"[uVar19]);
      lVar10 = *param_3;
      if (lVar10 == 0) {
LAB_1402a34d2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a34af:
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar36 = **(int **)(lVar10 + 0x50);
          if (iVar36 < 1) goto LAB_1402a34af;
          **(int **)(lVar10 + 0x50) = iVar36 + -1;
          psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
          **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
          sVar8 = *psVar32;
        }
        if (sVar8 == -1) goto LAB_1402a34d2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402a3352;
    }
    if (cVar6 == 'x') goto LAB_1402a2d65;
    goto LAB_1402a37f5;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402a385e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar8 == -1) goto LAB_1402a385e;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402a38ac:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar8 == -1) goto LAB_1402a38ac;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) {
LAB_1402a38d0:
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_80);
      uVar34 = uVar35 | 0x102;
      local_1b4 = uVar34;
      if (local_70 == 0) {
LAB_1402a3986:
        bVar4 = false;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_c0);
        uVar34 = uVar35 | 0x906;
        local_1b4 = uVar34;
        if ((char)param_3[1] == '\0') {
          lVar10 = *param_3;
          if (lVar10 == 0) {
LAB_1402a3964:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar10 + 0x50) < 1)) {
              sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
            }
            if (sVar8 == -1) goto LAB_1402a3964;
            *(short *)((longlong)param_3 + 10) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppsVar14 = (short *******)local_c0;
        if (7 < local_a8) {
          pppppppsVar14 = local_c0[0];
        }
        if (*(short *)pppppppsVar14 != *(short *)((longlong)param_3 + 10)) goto LAB_1402a3986;
        bVar4 = true;
      }
      if ((uVar34 & 4) != 0) {
        uVar34 = uVar34 & 0xfffffffb;
        local_1b4 = uVar34;
        FUN_140016770(local_c0);
      }
      if ((uVar34 & 2) != 0) {
        uVar34 = uVar34 & 0xfffffffd;
        local_1b4 = uVar34;
        FUN_140016770(local_80);
      }
      if (bVar4) {
        lVar10 = *param_3;
        if (lVar10 == 0) {
LAB_1402a3a11:
          *param_3 = 0;
          uVar5 = 1;
        }
        else {
          if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a39f4:
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar36 = **(int **)(lVar10 + 0x50);
            if (iVar36 < 1) goto LAB_1402a39f4;
            **(int **)(lVar10 + 0x50) = iVar36 + -1;
            psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
            **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
            sVar8 = *psVar32;
          }
          if (sVar8 == -1) goto LAB_1402a3a11;
          uVar5 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar5;
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_e0);
        uVar35 = uVar34 | 0x400;
        local_1b4 = uVar35;
        if (7 < local_148) {
          if (DAT_140472230 != '\0') {
            psVar32 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
            psVar29 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
            psVar21 = (short *)((longlong)psVar32 + 7U & 0xfffffffffffffff8);
            psVar22 = psVar21;
            if (psVar29 <= psVar21) {
              psVar22 = psVar29;
            }
            if (psVar21 < psVar32) {
              psVar32 = psVar21;
            }
            _guard_check_icall(local_160,psVar21,psVar22,psVar32);
          }
          FUN_140016a90(&local_160,local_160,local_148);
        }
        local_150 = 0;
        local_148 = 7;
        local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
        FUN_140016750(&local_160,local_e0);
        FUN_140016770(local_e0);
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_e0);
        uVar35 = uVar34 | 0x1008;
        local_1b4 = uVar35;
        if (local_d0 == 0) {
LAB_1402a3b7e:
          bVar4 = false;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_a0);
          uVar35 = uVar34 | 0x3018;
          local_1b4 = uVar35;
          if ((char)param_3[1] == '\0') {
            lVar10 = *param_3;
            if (lVar10 == 0) {
LAB_1402a3b58:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar10 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1402a3b58;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar14 = (short *******)local_a0;
          if (7 < local_88) {
            pppppppsVar14 = local_a0[0];
          }
          if (*(short *)pppppppsVar14 != *(short *)((longlong)param_3 + 10)) goto LAB_1402a3b7e;
          bVar4 = true;
        }
        if ((uVar35 & 0x10) != 0) {
          uVar35 = uVar35 & 0xffffffef;
          local_1b4 = uVar35;
          FUN_140016770(local_a0);
        }
        if ((uVar35 & 8) != 0) {
          uVar35 = uVar35 & 0xfffffff7;
          local_1b4 = uVar35;
          FUN_140016770(local_e0);
        }
        if (bVar4) {
          lVar10 = *param_3;
          if (lVar10 == 0) {
LAB_1402a3c09:
            *param_3 = 0;
            uVar5 = 1;
          }
          else {
            if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a3bec:
              sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              iVar36 = **(int **)(lVar10 + 0x50);
              if (iVar36 < 1) goto LAB_1402a3bec;
              **(int **)(lVar10 + 0x50) = iVar36 + -1;
              psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
              **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
              sVar8 = *psVar32;
            }
            if (sVar8 == -1) goto LAB_1402a3c09;
            uVar5 = 0;
          }
          *(undefined1 *)(param_3 + 1) = uVar5;
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_e0);
          uVar35 = uVar35 | 0x8000;
          local_1b4 = uVar35;
          if (7 < local_148) {
            if (DAT_140472230 != '\0') {
              psVar32 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
              psVar29 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
              psVar21 = (short *)((longlong)psVar32 + 7U & 0xfffffffffffffff8);
              psVar22 = psVar21;
              if (psVar29 <= psVar21) {
                psVar22 = psVar29;
              }
              if (psVar21 < psVar32) {
                psVar32 = psVar21;
              }
              _guard_check_icall(local_160,psVar21,psVar22,psVar32);
            }
            FUN_140016a90(&local_160,local_160,local_148);
          }
          local_150 = 0;
          local_148 = 7;
          local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
          FUN_140016750(&local_160,local_e0);
          FUN_140016770(local_e0);
          local_1b0[0] = 1;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_60);
          local_1b4 = uVar35 | 0x4020;
          if (local_50 == 0) {
LAB_1402a3d1b:
            bVar4 = false;
          }
          else {
            (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9,local_e0);
            local_1b4 = uVar35 | 0x14060;
            if (local_d0 != 0) goto LAB_1402a3d1b;
            bVar4 = true;
          }
          uVar35 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar35 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar35;
            FUN_140016770(local_e0);
          }
          if ((uVar35 & 0x20) != 0) {
            uVar35 = uVar35 & 0xffffffdf;
            local_1b4 = uVar35;
            FUN_140016770(local_60);
          }
          if (bVar4) {
            local_1b0[0] = 1;
          }
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402a38d0;
  goto LAB_1402a37f5;
LAB_1402a40fa:
  pppppppsVar16 = (short *******)local_120;
  if (7 < local_108) {
    pppppppsVar16 = local_120[0];
  }
  local_1b8 = local_1b8 & 0xff;
  if (pppppppsVar14 != (short *******)((longlong)pppppppsVar16 + local_110 * 2)) {
    local_1b8 = 1;
  }
  FUN_140016770(local_120);
  param_7 = local_180;
LAB_1402a37f5:
  puVar37 = local_1a8[0];
  local_188 = uVar19 + 1;
  if ((char)local_1b8 != '\0') goto code_r0x0001402a3805;
  goto LAB_1402a2d35;
LAB_1402a2f10:
  uVar35 = local_194;
  iVar36 = local_198;
  if (lVar10 == 0) {
LAB_1402a2f3a:
    uVar19 = (ulonglong)local_1b8;
  }
  else {
    pppppppcVar12 = (char *******)&local_140;
    if (0xf < local_128) {
      pppppppcVar12 = local_140;
    }
    if ('\0' < *(char *)((longlong)pppppppcVar12 + lVar10)) {
      lVar10 = lVar10 + 1;
      goto LAB_1402a2f3a;
    }
    uVar19 = CONCAT71((int7)((ulonglong)pppppppcVar12 >> 8),1);
    local_1b8 = (uint)uVar19;
  }
  pppppppbVar17 = (byte *******)local_100;
  if (0xf < local_e8) {
    pppppppbVar17 = local_100[0];
  }
  if ((char)uVar19 != '\0') {
LAB_1402a315c:
    if (0xf < local_128) {
      if (DAT_140472230 != '\0') {
        pcVar30 = (char *)(local_128 + 1 + (longlong)local_140);
        pcVar33 = (char *)((longlong)local_140 + local_130 + 1);
        pcVar18 = (char *)((ulonglong)(pcVar30 + 7) & 0xfffffffffffffff8);
        pcVar28 = pcVar18;
        if (pcVar33 <= pcVar18) {
          pcVar28 = pcVar33;
        }
        if (pcVar18 < pcVar30) {
          pcVar30 = pcVar18;
        }
        _guard_check_icall(local_140,pcVar18,pcVar28,pcVar30);
      }
      uVar19 = local_128 + 1;
      pppppppcVar12 = local_140;
      if (0xfff < uVar19) {
        pppppppcVar12 = (char *******)local_140[-1];
        if ((char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar12)))
        goto LAB_1402a43ad;
        uVar19 = local_128 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar12,uVar19);
    }
    local_130 = 0;
    local_128 = 0xf;
    local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
    puVar9 = local_1a8[1];
    uVar19 = local_188;
    if (local_e8 < 0x10) goto LAB_1402a37f5;
    if (DAT_140472230 != '\0') {
      pbVar31 = (byte *)((longlong)local_100[0] + local_e8 + 1);
      pbVar15 = (byte *)((longlong)local_100[0] + local_f0 + 1);
      pbVar20 = (byte *)((ulonglong)(pbVar31 + 7) & 0xfffffffffffffff8);
      pbVar27 = pbVar20;
      if (pbVar15 <= pbVar20) {
        pbVar27 = pbVar15;
      }
      if (pbVar20 < pbVar31) {
        pbVar31 = pbVar20;
      }
      _guard_check_icall(local_100[0],pbVar20,pbVar27,pbVar31);
    }
    pppppppbVar17 = local_100[0];
    if ((local_e8 + 1 < 0x1000) ||
       (pppppppbVar17 = (byte *******)local_100[0][-1], puVar23 = auStack_1e8,
       (byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar17)) < &DAT_00000020)) {
      thunk_FUN_14028af80(pppppppbVar17);
      puVar9 = local_1a8[1];
      uVar19 = local_188;
      goto LAB_1402a37f5;
    }
    goto LAB_1402a43b4;
  }
  while ((lVar10 != 0 && (bVar1 = *(byte *)pppppppbVar17, bVar1 != 0x7f))) {
    lVar10 = lVar10 + -1;
    if (lVar10 != 0) {
      pppppppcVar12 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar12 = local_140;
      }
      if (bVar1 == *(byte *)((longlong)pppppppcVar12 + lVar10)) goto LAB_1402a2f92;
LAB_1402a3157:
      local_1b8 = CONCAT31(local_1b8._1_3_,1);
      goto LAB_1402a315c;
    }
LAB_1402a2f92:
    if (lVar10 == 0) {
      pppppppcVar12 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar12 = local_140;
      }
      if ((char)bVar1 < *(char *)pppppppcVar12) goto LAB_1402a3157;
    }
    if ('\0' < (char)*(byte *)((longlong)pppppppbVar17 + 1)) {
      pppppppbVar17 = (byte *******)((longlong)pppppppbVar17 + 1);
    }
  }
  if (0xf < local_128) {
    if (DAT_140472230 != '\0') {
      pcVar30 = (char *)(local_128 + 1 + (longlong)local_140);
      pcVar33 = (char *)((longlong)local_140 + local_130 + 1);
      pcVar18 = (char *)((ulonglong)(pcVar30 + 7) & 0xfffffffffffffff8);
      pcVar28 = pcVar18;
      if (pcVar33 <= pcVar18) {
        pcVar28 = pcVar33;
      }
      if (pcVar18 < pcVar30) {
        pcVar30 = pcVar18;
      }
      _guard_check_icall(local_140,pcVar18,pcVar28,pcVar30);
    }
    uVar19 = local_128 + 1;
    pppppppcVar12 = local_140;
    if (0xfff < uVar19) {
      pppppppcVar12 = (char *******)local_140[-1];
      if ((char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar12))) {
LAB_1402a43ad:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar23 = auStack_1e0;
        goto LAB_1402a43b4;
      }
      uVar19 = local_128 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar12,uVar19);
  }
LAB_1402a32f5:
  iVar25 = 0;
  iVar26 = 0;
  sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402a34fb:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402a34fb;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402a354d:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402a354d;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    iVar26 = iVar25;
    if (*param_4 != 0) {
LAB_1402a3576:
      iVar26 = iVar25;
      if (sVar8 != 0) {
        if ((char)param_3[1] == '\0') {
          if (lVar10 == 0) {
LAB_1402a35c1:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar10 + 0x50) < 1)) {
              sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar7 = *(short *)**(undefined8 **)(lVar10 + 0x38);
            }
            if (sVar7 == -1) goto LAB_1402a35c1;
            *(short *)((longlong)param_3 + 10) = sVar7;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) == sVar8) {
LAB_1402a35d6:
          lVar10 = *param_3;
          if (lVar10 == 0) {
LAB_1402a3630:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a3609:
              sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              iVar26 = **(int **)(lVar10 + 0x50);
              if (iVar26 < 1) goto LAB_1402a3609;
              **(int **)(lVar10 + 0x50) = iVar26 + -1;
              psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
              **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
              sVar8 = *psVar32;
            }
            if (sVar8 == -1) goto LAB_1402a3630;
            *(undefined1 *)(param_3 + 1) = 0;
            FUN_1402a7e60(param_3);
          }
          if ((char)param_4[1] == '\0') {
            lVar10 = *param_4;
            if (lVar10 == 0) {
LAB_1402a3680:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar10 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1402a3680;
              *(short *)((longlong)param_4 + 10) = sVar8;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar10 = *param_3;
          iVar26 = iVar25;
          if (lVar10 != 0) {
            if (*param_4 != 0) goto LAB_1402a3695;
LAB_1402a36bf:
            if (iVar36 <= iVar25) goto LAB_1402a369f;
            if ((char)param_3[1] == '\0') {
              if (lVar10 == 0) {
LAB_1402a3706:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar10 + 0x50) < 1)) {
                  sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  sVar8 = *(short *)**(undefined8 **)(lVar10 + 0x38);
                }
                if (sVar8 == -1) goto LAB_1402a3706;
                *(short *)((longlong)param_3 + 10) = sVar8;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar10 = thunk_FUN_14028d070(param_7,param_7 + 0x16,
                                         *(undefined2 *)((longlong)param_3 + 10));
            uVar19 = lVar10 - param_7 >> 1;
            if (9 < uVar19) goto LAB_1402a369a;
            FUN_1400534d0(local_1a8[0],"0123456789-"[uVar19]);
            iVar25 = iVar25 + 1;
            goto LAB_1402a35d6;
          }
          if (*param_4 != 0) goto LAB_1402a36bf;
LAB_1402a3695:
          if (iVar36 <= iVar25) goto LAB_1402a369f;
LAB_1402a369a:
          local_1b8 = CONCAT31(local_1b8._1_3_,1);
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402a3576;
LAB_1402a369f:
  puVar9 = local_1a8[0];
  if (local_1a8[0][2] == 0) {
    local_1b8 = CONCAT31(local_1b8._1_3_,1);
  }
  else {
    for (; iVar26 < iVar36; iVar26 = iVar26 + 1) {
      FUN_1400534d0(puVar9,0x30);
      param_7 = local_180;
    }
  }
  puVar9 = local_1a8[1];
  uVar19 = local_188;
  if (0xf < local_e8) {
    if (DAT_140472230 != '\0') {
      pbVar31 = (byte *)((longlong)local_100[0] + local_e8 + 1);
      pbVar20 = (byte *)((longlong)local_100[0] + local_f0 + 1);
      pbVar15 = (byte *)((ulonglong)(pbVar31 + 7) & 0xfffffffffffffff8);
      pbVar27 = pbVar15;
      if (pbVar20 <= pbVar15) {
        pbVar27 = pbVar20;
      }
      if (pbVar15 < pbVar31) {
        pbVar31 = pbVar15;
      }
      _guard_check_icall(local_100[0],pbVar15,pbVar27,pbVar31);
    }
    uVar19 = local_e8 + 1;
    pppppppbVar17 = local_100[0];
    if (0xfff < uVar19) {
      pppppppbVar17 = (byte *******)local_100[0][-1];
      puVar23 = auStack_1e8;
      if ((byte *)0x1f < (byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar17))) {
LAB_1402a43b4:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar23 = puVar23 + 8;
LAB_1402a43bb:
        puVar24 = puVar23;
        if (local_150 < 2) goto LAB_1402a44ed;
        pppppppsVar14 = (short *******)&local_160;
        if (7 < local_148) {
          pppppppsVar14 = local_160;
        }
        goto LAB_1402a43e0;
      }
      uVar19 = local_e8 + 0x28;
    }
    thunk_FUN_14028af80(pppppppbVar17,uVar19);
    puVar9 = local_1a8[1];
    uVar19 = local_188;
  }
  goto LAB_1402a37f5;
LAB_1402a42a6:
  puVar9 = local_1a8[1];
  param_7 = local_180;
  if ((local_190[uVar19] == ' ') && (local_1b8 = local_1b8 & 0xff, !bVar4)) {
    local_1b8 = 1;
  }
  goto LAB_1402a37f5;
code_r0x0001402a3805:
  FUN_140016ca0(local_1a8[0],0);
  goto LAB_1402a450d;
LAB_1402a43e0:
  pppppppsVar14 = (short *******)((longlong)pppppppsVar14 + 2);
  pppppppsVar16 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar16 = local_160;
  }
  if (pppppppsVar14 != (short *******)((longlong)pppppppsVar16 + local_150 * 2)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402a440d;
      FUN_1402a7e60(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402a441c;
      FUN_1402a7e60(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_1402a4428;
    }
    else if (*param_4 != 0) goto LAB_1402a4428;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402a446f;
      FUN_1402a7e60(param_3);
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar14) goto LAB_1402a4428;
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402a44d4:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402a44ab:
        *(undefined8 *)(puVar24 + -8) = 0x1402a44b8;
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar36 = **(int **)(lVar10 + 0x50);
        if (iVar36 < 1) goto LAB_1402a44ab;
        **(int **)(lVar10 + 0x50) = iVar36 + -1;
        psVar32 = (short *)**(longlong **)(lVar10 + 0x38);
        **(longlong **)(lVar10 + 0x38) = (longlong)(psVar32 + 1);
        sVar8 = *psVar32;
      }
      if (sVar8 == -1) goto LAB_1402a44d4;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1402a43e0;
  }
LAB_1402a4428:
  pppppppsVar16 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar16 = local_160;
  }
  if (pppppppsVar14 == (short *******)((longlong)pppppppsVar16 + local_150 * 2)) {
LAB_1402a44ed:
    puVar37 = *(undefined8 **)(puVar24 + 0x40);
    if (puVar24[0x38] != '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402a450c;
      FUN_140038b70(puVar37,0,1,0x2d);
    }
  }
  else {
    puVar37 = *(undefined8 **)(puVar24 + 0x40);
    *(undefined8 *)(puVar24 + -8) = 0x1402a4456;
    FUN_140016ca0(puVar37,0);
  }
LAB_1402a450d:
  *(undefined8 *)(puVar24 + -8) = 0x1402a4516;
  FUN_140016770(&local_160);
  *(undefined8 *)(puVar24 + -8) = 0x1402a4528;
  return puVar37;
}

