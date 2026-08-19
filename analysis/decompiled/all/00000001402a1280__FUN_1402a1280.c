// Function: FUN_1402a1280
// Addr: 1402a1280
// Size: 6378 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1402a1280(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  short sVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *******pppppppcVar15;
  longlong lVar16;
  short *******pppppppsVar17;
  byte *pbVar18;
  short *******pppppppsVar19;
  byte *******pppppppbVar20;
  char *pcVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  ulonglong uVar24;
  short *psVar25;
  short *psVar26;
  undefined1 *puVar27;
  int iVar28;
  int iVar29;
  byte *pbVar30;
  char *pcVar31;
  short *psVar32;
  char *pcVar33;
  byte *pbVar34;
  short *psVar35;
  char *pcVar36;
  uint uVar37;
  uint uVar38;
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
  undefined1 *local_128;
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
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_1e8;
  local_180 = param_7;
  local_1b4 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_1a8[0] = param_2;
  local_170 = uVar2;
  local_168 = param_2;
  (*(code *)PTR_FUN_140426bb8)(uVar2);
  if (param_5 == '\0') {
    puVar12 = (undefined8 *)FUN_14029d4a0(&local_178);
  }
  else {
    puVar12 = (undefined8 *)FUN_14029d380(&local_178);
  }
  local_1a8[1] = puVar12;
  lVar13 = (*(code *)PTR_FUN_140426bb8)(uVar2);
  puVar22 = auStack_1e8;
  puVar27 = auStack_1e8;
  if (lVar13 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar13,1);
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_1b0[0] = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 7;
  local_160 = (short *******)0x0;
  (*(code *)PTR_FUN_140426bb8)(puVar12,local_190);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar38 = 1;
  local_1b4 = 1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar2;
  (*(code *)PTR_FUN_140426bb8)(uVar2);
  uVar14 = FUN_14029d260(&local_178);
  local_178 = uVar14;
  lVar13 = (*(code *)PTR_FUN_140426bb8)(uVar2);
  if (lVar13 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar13,1);
  }
  (*(code *)PTR_FUN_140426bb8)(uVar14,"0123456789-",&DAT_14042bffc,param_7);
  local_188 = 0;
LAB_1402a1435:
  uVar2 = local_178;
  uVar24 = local_188;
  lVar13 = 0;
  puVar7 = auStack_1e8;
  if (3 < local_188) goto LAB_1402a2abb;
  cVar9 = local_190[local_188];
  if (cVar9 == ' ') {
LAB_1402a1465:
    if (local_188 != 3) {
      bVar4 = false;
LAB_1402a1480:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a2940:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2940;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1402a298d:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a298d;
          *(short *)((longlong)param_4 + 10) = sVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_1402a29a6;
      }
      else if (*param_4 != 0) goto LAB_1402a29a6;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402a2a19:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2a19;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar9 = (*(code *)PTR_FUN_140426bb8)(uVar2,0x48,*(undefined2 *)((longlong)param_3 + 10));
      if (cVar9 == '\0') goto LAB_1402a29a6;
      bVar4 = true;
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_1402a2a9e:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a2a7c:
          sVar11 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar29 = **(int **)(lVar13 + 0x50);
          if (iVar29 < 1) goto LAB_1402a2a7c;
          **(int **)(lVar13 + 0x50) = iVar29 + -1;
          psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
          sVar11 = *psVar35;
        }
        if (sVar11 == -1) goto LAB_1402a2a9e;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402a1480;
    }
    goto LAB_1402a1ef5;
  }
  if (cVar9 == '$') {
    (*(code *)PTR_FUN_140426bb8)(puVar12,local_120);
    uVar38 = uVar38 | 0x80;
    local_1b4 = uVar38;
    if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a24d9:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a24d9;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1402a2527:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2527;
          *(short *)((longlong)param_4 + 10) = sVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 != 0) {
        if (*param_4 == 0) goto LAB_1402a2544;
        goto LAB_1402a25ae;
      }
      if (*param_4 == 0) goto LAB_1402a25ae;
LAB_1402a2544:
      pppppppsVar17 = (short *******)local_120;
      if (7 < local_108) {
        pppppppsVar17 = local_120[0];
      }
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402a2594:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2594;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar17) goto LAB_1402a25ae;
    }
    else {
LAB_1402a25ae:
      if ((uVar24 != 3) || (1 < local_150)) goto LAB_1402a273e;
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a2608:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2608;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1402a2656:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a2656;
          *(short *)((longlong)param_4 + 10) = sVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 != 0) {
LAB_1402a2673:
          if ((char)param_3[1] == '\0') {
            if (lVar13 == 0) {
LAB_1402a26b5:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar13 + 0x50) < 1)) {
                sVar11 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
              }
              if (sVar11 == -1) goto LAB_1402a26b5;
              *(short *)((longlong)param_3 + 10) = sVar11;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar17 = (short *******)local_120;
          if (7 < local_108) {
            pppppppsVar17 = local_120[0];
          }
          if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar17) goto LAB_1402a273e;
        }
      }
      else if (*param_4 == 0) goto LAB_1402a2673;
    }
    if (((local_110 != 0) && (7 < local_108)) && (DAT_140472300 != '\0')) {
      psVar35 = (short *)((longlong)local_120[0] + (local_110 + 1) * 2);
      psVar26 = (short *)(local_108 * 2 + 9 + (longlong)local_120[0] & 0xfffffffffffffff8);
      psVar32 = psVar26;
      if (psVar35 <= psVar26) {
        psVar32 = psVar35;
      }
      psVar35 = (short *)((longlong)local_120[0] + 2);
      if (psVar26 < (short *)((longlong)local_120[0] + 2)) {
        psVar35 = psVar26;
      }
      func_0x00014000ed00(local_120[0],psVar26,psVar32,psVar35);
    }
    local_110 = 0;
    pppppppsVar17 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar17 = local_120[0];
    }
    *(short *)pppppppsVar17 = 0;
LAB_1402a273e:
    pppppppsVar17 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar17 = local_120[0];
    }
LAB_1402a2752:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_1402a2793:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar11 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar11 == -1) goto LAB_1402a2793;
        *(short *)((longlong)param_3 + 10) = sVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1402a27e1:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar11 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar11 == -1) goto LAB_1402a27e1;
        *(short *)((longlong)param_4 + 10) = sVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1402a27fa;
    }
    else if (*param_4 != 0) goto LAB_1402a27fa;
    pppppppsVar19 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar19 = local_120[0];
    }
    if (pppppppsVar17 == (short *******)((longlong)pppppppsVar19 + local_110 * 2))
    goto LAB_1402a27fa;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_1402a289b:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar11 = (*(code *)PTR_FUN_140426bb8)(lVar13);
        }
        else {
          sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar11 == -1) goto LAB_1402a289b;
        *(short *)((longlong)param_3 + 10) = sVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar17) goto LAB_1402a27fa;
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402a290f:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a28ea:
        sVar11 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar29 = **(int **)(lVar13 + 0x50);
        if (iVar29 < 1) goto LAB_1402a28ea;
        **(int **)(lVar13 + 0x50) = iVar29 + -1;
        psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
        sVar11 = *psVar35;
      }
      if (sVar11 == -1) goto LAB_1402a290f;
      *(undefined1 *)(param_3 + 1) = 0;
      pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
    }
    goto LAB_1402a2752;
  }
  if (cVar9 != '+') {
    if (cVar9 == 'v') {
      local_198 = (*(code *)PTR_FUN_140426bb8)(puVar12);
      (*(code *)PTR_FUN_140426bb8)(puVar12,local_100);
      local_1b4 = uVar38 | 0x200;
      local_194 = local_1b4;
      puVar5 = local_1a8[0];
      if ((local_f0 != 0) &&
         (sVar11 = (*(code *)PTR_FUN_140426bb8)(puVar12), puVar5 = local_1a8[0], sVar11 != 0)) {
        pppppppbVar20 = (byte *******)local_100;
        if (0xf < local_e8) {
          pppppppbVar20 = local_100[0];
        }
        if (*(byte *)pppppppbVar20 < 0x7f) {
          uStack_138 = 0;
          local_130 = 0;
          local_128 = (undefined1 *)0xf;
          local_140 = (char *******)0x0;
          FUN_1400535a0(&local_140,0);
          puVar12 = local_1a8[0];
LAB_1402a1560:
          if ((char)param_3[1] == '\0') {
            lVar16 = *param_3;
            if (lVar16 == 0) {
LAB_1402a15a1:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar16 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar16 + 0x50) < 1)) {
                sVar10 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar10 = *(short *)**(undefined8 **)(lVar16 + 0x38);
              }
              if (sVar10 == -1) goto LAB_1402a15a1;
              *(short *)((longlong)param_3 + 10) = sVar10;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          if ((char)param_4[1] == '\0') {
            lVar16 = *param_4;
            if (lVar16 == 0) {
LAB_1402a15ef:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar16 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar16 + 0x50) < 1)) {
                sVar10 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar10 = *(short *)**(undefined8 **)(lVar16 + 0x38);
              }
              if (sVar10 == -1) goto LAB_1402a15ef;
              *(short *)((longlong)param_4 + 10) = sVar10;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar16 = *param_3;
          if (lVar16 == 0) {
            if (*param_4 == 0) goto LAB_1402a1610;
          }
          else if (*param_4 != 0) goto LAB_1402a1610;
          if ((char)param_3[1] == '\0') {
            if (lVar16 == 0) {
LAB_1402a1700:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar16 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar16 + 0x50) < 1)) {
                sVar10 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar10 = *(short *)**(undefined8 **)(lVar16 + 0x38);
              }
              if (sVar10 == -1) goto LAB_1402a1700;
              *(short *)((longlong)param_3 + 10) = sVar10;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          lVar16 = func_0x00014028f010(param_7,param_7 + 0x16,
                                       *(undefined2 *)((longlong)param_3 + 10));
          uVar24 = lVar16 - param_7 >> 1;
          if (uVar24 < 10) {
            FUN_1400535a0(puVar12,"0123456789-"[uVar24]);
            pppppppcVar15 = (char *******)&local_140;
            if ((undefined1 *)0xf < local_128) {
              pppppppcVar15 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar15 + lVar13) != '\x7f') {
              pppppppcVar15 = (char *******)&local_140;
              if ((undefined1 *)0xf < local_128) {
                pppppppcVar15 = local_140;
              }
              *(char *)((longlong)pppppppcVar15 + lVar13) =
                   *(char *)((longlong)pppppppcVar15 + lVar13) + '\x01';
            }
          }
          else {
            pppppppcVar15 = (char *******)&local_140;
            if ((undefined1 *)0xf < local_128) {
              pppppppcVar15 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar15 + lVar13) == '\0') goto LAB_1402a1610;
            if ((char)param_3[1] == '\0') {
              lVar16 = *param_3;
              if (lVar16 == 0) {
LAB_1402a17c3:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar16 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar16 + 0x50) < 1)) {
                  sVar10 = (*(code *)PTR_FUN_140426bb8)();
                }
                else {
                  sVar10 = *(short *)**(undefined8 **)(lVar16 + 0x38);
                }
                if (sVar10 == -1) goto LAB_1402a17c3;
                *(short *)((longlong)param_3 + 10) = sVar10;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if (*(short *)((longlong)param_3 + 10) != sVar11) goto LAB_1402a1610;
            FUN_1400535a0(&local_140,0);
            lVar13 = lVar13 + 1;
          }
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_1402a183c:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1402a1819:
              sVar10 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              iVar29 = **(int **)(lVar16 + 0x50);
              if (iVar29 < 1) goto LAB_1402a1819;
              **(int **)(lVar16 + 0x50) = iVar29 + -1;
              psVar35 = (short *)**(longlong **)(lVar16 + 0x38);
              **(longlong **)(lVar16 + 0x38) = (longlong)(psVar35 + 1);
              sVar10 = *psVar35;
            }
            if (sVar10 == -1) goto LAB_1402a183c;
            *(undefined1 *)(param_3 + 1) = 0;
          }
          goto LAB_1402a1560;
        }
      }
LAB_1402a1a52:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a1a93:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a1a93;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1402a1add:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a1add;
          *(short *)((longlong)param_4 + 10) = sVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_1402a19f5;
      }
      else if (*param_4 != 0) goto LAB_1402a19f5;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402a1b45:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar11 == -1) goto LAB_1402a1b45;
          *(short *)((longlong)param_3 + 10) = sVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = func_0x00014028f010(param_7,param_7 + 0x16,*(undefined2 *)((longlong)param_3 + 10));
      uVar24 = lVar13 - param_7 >> 1;
      if (9 < uVar24) goto LAB_1402a19f5;
      FUN_1400535a0(puVar5,"0123456789-"[uVar24]);
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_1402a1bd2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a1baf:
          sVar11 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar29 = **(int **)(lVar13 + 0x50);
          if (iVar29 < 1) goto LAB_1402a1baf;
          **(int **)(lVar13 + 0x50) = iVar29 + -1;
          psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
          sVar11 = *psVar35;
        }
        if (sVar11 == -1) goto LAB_1402a1bd2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402a1a52;
    }
    if (cVar9 == 'x') goto LAB_1402a1465;
    goto LAB_1402a1ef5;
  }
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402a1f5e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar11 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar11 == -1) goto LAB_1402a1f5e;
      *(short *)((longlong)param_3 + 10) = sVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402a1fac:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar11 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar11 == -1) goto LAB_1402a1fac;
      *(short *)((longlong)param_4 + 10) = sVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) {
LAB_1402a1fd0:
      (*(code *)PTR_FUN_140426bb8)(puVar12,local_80);
      uVar37 = uVar38 | 0x102;
      local_1b4 = uVar37;
      if (local_70 == 0) {
LAB_1402a2086:
        bVar4 = false;
      }
      else {
        (*(code *)PTR_FUN_140426bb8)(puVar12,local_c0);
        uVar37 = uVar38 | 0x906;
        local_1b4 = uVar37;
        if ((char)param_3[1] == '\0') {
          lVar13 = *param_3;
          if (lVar13 == 0) {
LAB_1402a2064:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar13 + 0x50) < 1)) {
              sVar11 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
            }
            if (sVar11 == -1) goto LAB_1402a2064;
            *(short *)((longlong)param_3 + 10) = sVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppsVar17 = (short *******)local_c0;
        if (7 < local_a8) {
          pppppppsVar17 = local_c0[0];
        }
        if (*(short *)pppppppsVar17 != *(short *)((longlong)param_3 + 10)) goto LAB_1402a2086;
        bVar4 = true;
      }
      if ((uVar37 & 4) != 0) {
        uVar37 = uVar37 & 0xfffffffb;
        local_1b4 = uVar37;
        func_0x0001402a9d00(local_c0);
      }
      if ((uVar37 & 2) != 0) {
        uVar37 = uVar37 & 0xfffffffd;
        local_1b4 = uVar37;
        func_0x0001402a9d00(local_80);
      }
      if (bVar4) {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a2111:
          *param_3 = 0;
          uVar8 = 1;
        }
        else {
          if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a20f4:
            sVar11 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar29 = **(int **)(lVar13 + 0x50);
            if (iVar29 < 1) goto LAB_1402a20f4;
            **(int **)(lVar13 + 0x50) = iVar29 + -1;
            psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
            sVar11 = *psVar35;
          }
          if (sVar11 == -1) goto LAB_1402a2111;
          uVar8 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar8;
        (*(code *)PTR_FUN_140426bb8)(puVar12,local_e0);
        uVar38 = uVar37 | 0x400;
        local_1b4 = uVar38;
        if (7 < local_148) {
          if (DAT_140472300 != '\0') {
            psVar35 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
            psVar32 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
            psVar25 = (short *)((longlong)psVar35 + 7U & 0xfffffffffffffff8);
            psVar26 = psVar25;
            if (psVar32 <= psVar25) {
              psVar26 = psVar32;
            }
            if (psVar25 < psVar35) {
              psVar35 = psVar25;
            }
            func_0x00014000ed00(local_160,psVar25,psVar26,psVar35);
          }
          FUN_14029e470(&local_160,local_160,local_148);
        }
        local_150 = 0;
        local_148 = 7;
        local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
        func_0x0001402a9ca0(&local_160,local_e0);
        func_0x0001402a9d00(local_e0);
      }
      else {
        (*(code *)PTR_FUN_140426bb8)(puVar12,local_e0);
        uVar38 = uVar37 | 0x1008;
        local_1b4 = uVar38;
        if (local_d0 == 0) {
LAB_1402a227e:
          bVar4 = false;
        }
        else {
          (*(code *)PTR_FUN_140426bb8)(puVar12,local_a0);
          uVar38 = uVar37 | 0x3018;
          local_1b4 = uVar38;
          if ((char)param_3[1] == '\0') {
            lVar13 = *param_3;
            if (lVar13 == 0) {
LAB_1402a2258:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar13 + 0x50) < 1)) {
                sVar11 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
              }
              if (sVar11 == -1) goto LAB_1402a2258;
              *(short *)((longlong)param_3 + 10) = sVar11;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar17 = (short *******)local_a0;
          if (7 < local_88) {
            pppppppsVar17 = local_a0[0];
          }
          if (*(short *)pppppppsVar17 != *(short *)((longlong)param_3 + 10)) goto LAB_1402a227e;
          bVar4 = true;
        }
        if ((uVar38 & 0x10) != 0) {
          uVar38 = uVar38 & 0xffffffef;
          local_1b4 = uVar38;
          func_0x0001402a9d00(local_a0);
        }
        if ((uVar38 & 8) != 0) {
          uVar38 = uVar38 & 0xfffffff7;
          local_1b4 = uVar38;
          func_0x0001402a9d00(local_e0);
        }
        if (bVar4) {
          lVar13 = *param_3;
          if (lVar13 == 0) {
LAB_1402a2309:
            *param_3 = 0;
            uVar8 = 1;
          }
          else {
            if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a22ec:
              sVar11 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              iVar29 = **(int **)(lVar13 + 0x50);
              if (iVar29 < 1) goto LAB_1402a22ec;
              **(int **)(lVar13 + 0x50) = iVar29 + -1;
              psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
              **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
              sVar11 = *psVar35;
            }
            if (sVar11 == -1) goto LAB_1402a2309;
            uVar8 = 0;
          }
          *(undefined1 *)(param_3 + 1) = uVar8;
          (*(code *)PTR_FUN_140426bb8)(puVar12,local_e0);
          uVar38 = uVar38 | 0x8000;
          local_1b4 = uVar38;
          if (7 < local_148) {
            if (DAT_140472300 != '\0') {
              psVar35 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
              psVar32 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
              psVar25 = (short *)((longlong)psVar35 + 7U & 0xfffffffffffffff8);
              psVar26 = psVar25;
              if (psVar32 <= psVar25) {
                psVar26 = psVar32;
              }
              if (psVar25 < psVar35) {
                psVar35 = psVar25;
              }
              func_0x00014000ed00(local_160,psVar25,psVar26,psVar35);
            }
            FUN_14029e470(&local_160,local_160,local_148);
          }
          local_150 = 0;
          local_148 = 7;
          local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
          func_0x0001402a9ca0(&local_160,local_e0);
          func_0x0001402a9d00(local_e0);
          local_1b0[0] = 1;
        }
        else {
          (*(code *)PTR_FUN_140426bb8)(puVar12,local_60);
          local_1b4 = uVar38 | 0x4020;
          if (local_50 == 0) {
LAB_1402a241b:
            bVar4 = false;
          }
          else {
            (*(code *)PTR_FUN_140426bb8)(puVar12,local_e0);
            local_1b4 = uVar38 | 0x14060;
            if (local_d0 != 0) goto LAB_1402a241b;
            bVar4 = true;
          }
          uVar38 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar38 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar38;
            func_0x0001402a9d00(local_e0);
          }
          if ((uVar38 & 0x20) != 0) {
            uVar38 = uVar38 & 0xffffffdf;
            local_1b4 = uVar38;
            func_0x0001402a9d00(local_60);
          }
          if (bVar4) {
            local_1b0[0] = 1;
          }
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402a1fd0;
  goto LAB_1402a1ef5;
LAB_1402a27fa:
  pppppppsVar19 = (short *******)local_120;
  if (7 < local_108) {
    pppppppsVar19 = local_120[0];
  }
  local_1b8 = local_1b8 & 0xff;
  if (pppppppsVar17 != (short *******)((longlong)pppppppsVar19 + local_110 * 2)) {
    local_1b8 = 1;
  }
  func_0x0001402a9d00(local_120);
  param_7 = local_180;
LAB_1402a1ef5:
  local_188 = uVar24 + 1;
  if ((char)local_1b8 != '\0') goto code_r0x0001402a1f05;
  goto LAB_1402a1435;
LAB_1402a1610:
  if (lVar13 == 0) {
LAB_1402a163a:
    uVar24 = (ulonglong)local_1b8;
  }
  else {
    pppppppcVar15 = (char *******)&local_140;
    if ((undefined1 *)0xf < local_128) {
      pppppppcVar15 = local_140;
    }
    if ('\0' < *(char *)((longlong)pppppppcVar15 + lVar13)) {
      lVar13 = lVar13 + 1;
      goto LAB_1402a163a;
    }
    uVar24 = CONCAT71((int7)((ulonglong)pppppppcVar15 >> 8),1);
    local_1b8 = (uint)uVar24;
  }
  pppppppbVar20 = (byte *******)local_100;
  if (0xf < local_e8) {
    pppppppbVar20 = local_100[0];
  }
  if ((char)uVar24 == '\0') {
    while ((lVar13 != 0 && (bVar1 = *(byte *)pppppppbVar20, bVar1 != 0x7f))) {
      lVar13 = lVar13 + -1;
      if (lVar13 != 0) {
        pppppppcVar15 = (char *******)&local_140;
        if ((undefined1 *)0xf < local_128) {
          pppppppcVar15 = local_140;
        }
        if (bVar1 == *(byte *)((longlong)pppppppcVar15 + lVar13)) goto LAB_1402a1692;
LAB_1402a1857:
        local_1b8 = CONCAT31(local_1b8._1_3_,1);
        goto LAB_1402a185c;
      }
LAB_1402a1692:
      if (lVar13 == 0) {
        pppppppcVar15 = (char *******)&local_140;
        if ((undefined1 *)0xf < local_128) {
          pppppppcVar15 = local_140;
        }
        if ((char)bVar1 < *(char *)pppppppcVar15) goto LAB_1402a1857;
      }
      if ('\0' < (char)*(byte *)((longlong)pppppppbVar20 + 1)) {
        pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1);
      }
    }
    if (local_128 < &DAT_00000010) {
LAB_1402a19f5:
      uVar38 = local_194;
      iVar6 = local_198;
      iVar28 = 0;
      iVar29 = 0;
      sVar11 = (*(code *)PTR_FUN_140426bb8)();
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402a1bfb:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar10 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar10 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar10 == -1) goto LAB_1402a1bfb;
          *(short *)((longlong)param_3 + 10) = sVar10;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1402a1c4d:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar10 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar10 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar10 == -1) goto LAB_1402a1c4d;
          *(short *)((longlong)param_4 + 10) = sVar10;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        iVar29 = iVar28;
        if (*param_4 != 0) {
LAB_1402a1c76:
          iVar29 = iVar28;
          if (sVar11 != 0) {
            if ((char)param_3[1] == '\0') {
              if (lVar13 == 0) {
LAB_1402a1cc1:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar13 + 0x50) < 1)) {
                  sVar10 = (*(code *)PTR_FUN_140426bb8)();
                }
                else {
                  sVar10 = *(short *)**(undefined8 **)(lVar13 + 0x38);
                }
                if (sVar10 == -1) goto LAB_1402a1cc1;
                *(short *)((longlong)param_3 + 10) = sVar10;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if (*(short *)((longlong)param_3 + 10) == sVar11) {
LAB_1402a1cd6:
              lVar13 = *param_3;
              if (lVar13 == 0) {
LAB_1402a1d30:
                *param_3 = 0;
                *(undefined1 *)(param_3 + 1) = 1;
              }
              else {
                if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402a1d09:
                  sVar11 = (*(code *)PTR_FUN_140426bb8)();
                }
                else {
                  iVar29 = **(int **)(lVar13 + 0x50);
                  if (iVar29 < 1) goto LAB_1402a1d09;
                  **(int **)(lVar13 + 0x50) = iVar29 + -1;
                  psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
                  **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
                  sVar11 = *psVar35;
                }
                if (sVar11 == -1) goto LAB_1402a1d30;
                *(undefined1 *)(param_3 + 1) = 0;
                func_0x0001402a7f30(param_3);
              }
              if ((char)param_4[1] == '\0') {
                lVar13 = *param_4;
                if (lVar13 == 0) {
LAB_1402a1d80:
                  *param_4 = 0;
                }
                else {
                  if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                     (**(int **)(lVar13 + 0x50) < 1)) {
                    sVar11 = (*(code *)PTR_FUN_140426bb8)();
                  }
                  else {
                    sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
                  }
                  if (sVar11 == -1) goto LAB_1402a1d80;
                  *(short *)((longlong)param_4 + 10) = sVar11;
                }
                *(undefined1 *)(param_4 + 1) = 1;
              }
              lVar13 = *param_3;
              iVar29 = iVar28;
              if (lVar13 != 0) {
                if (*param_4 != 0) goto LAB_1402a1d95;
LAB_1402a1dbf:
                if (iVar6 <= iVar28) goto LAB_1402a1d9f;
                if ((char)param_3[1] == '\0') {
                  if (lVar13 == 0) {
LAB_1402a1e06:
                    *param_3 = 0;
                  }
                  else {
                    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar13 + 0x50) < 1)) {
                      sVar11 = (*(code *)PTR_FUN_140426bb8)();
                    }
                    else {
                      sVar11 = *(short *)**(undefined8 **)(lVar13 + 0x38);
                    }
                    if (sVar11 == -1) goto LAB_1402a1e06;
                    *(short *)((longlong)param_3 + 10) = sVar11;
                  }
                  *(undefined1 *)(param_3 + 1) = 1;
                }
                lVar13 = func_0x00014028f010(param_7,param_7 + 0x16,
                                             *(undefined2 *)((longlong)param_3 + 10));
                uVar24 = lVar13 - param_7 >> 1;
                if (9 < uVar24) goto LAB_1402a1d9a;
                FUN_1400535a0(local_1a8[0],"0123456789-"[uVar24]);
                iVar28 = iVar28 + 1;
                goto LAB_1402a1cd6;
              }
              if (*param_4 != 0) goto LAB_1402a1dbf;
LAB_1402a1d95:
              if (iVar6 <= iVar28) goto LAB_1402a1d9f;
LAB_1402a1d9a:
              local_1b8 = CONCAT31(local_1b8._1_3_,1);
            }
          }
        }
      }
      else if (*param_4 == 0) goto LAB_1402a1c76;
LAB_1402a1d9f:
      puVar12 = local_1a8[0];
      if (local_1a8[0][2] == 0) {
        local_1b8 = CONCAT31(local_1b8._1_3_,1);
      }
      else {
        for (; iVar29 < iVar6; iVar29 = iVar29 + 1) {
          FUN_1400535a0(puVar12,0x30);
          param_7 = local_180;
        }
      }
      puVar12 = local_1a8[1];
      uVar24 = local_188;
      if (local_e8 < 0x10) goto LAB_1402a1ef5;
      if (DAT_140472300 != '\0') {
        pbVar34 = (byte *)((longlong)local_100[0] + local_e8 + 1);
        pbVar23 = (byte *)((longlong)local_100[0] + local_f0 + 1);
        pbVar18 = (byte *)((ulonglong)(pbVar34 + 7) & 0xfffffffffffffff8);
        pbVar30 = pbVar18;
        if (pbVar23 <= pbVar18) {
          pbVar30 = pbVar23;
        }
        if (pbVar18 < pbVar34) {
          pbVar34 = pbVar18;
        }
        func_0x00014000ed00(local_100[0],pbVar18,pbVar30,pbVar34);
      }
      uVar24 = local_e8 + 1;
      pppppppbVar20 = local_100[0];
      if (uVar24 < 0x1000) {
LAB_1402a1ee0:
        func_0x00014028b040(pppppppbVar20,uVar24);
        return;
      }
      pppppppbVar20 = (byte *******)local_100[0][-1];
      if ((byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar20)) < (byte *)0x20) {
        uVar24 = local_e8 + 0x28;
        goto LAB_1402a1ee0;
      }
      goto LAB_1402a2ab4;
    }
    if (DAT_140472300 != '\0') {
      pcVar33 = local_128 + 1 + (longlong)local_140;
      pcVar36 = (char *)((longlong)local_140 + local_130 + 1);
      pcVar21 = (char *)((ulonglong)(pcVar33 + 7) & 0xfffffffffffffff8);
      pcVar31 = pcVar21;
      if (pcVar36 <= pcVar21) {
        pcVar31 = pcVar36;
      }
      if (pcVar21 < pcVar33) {
        pcVar33 = pcVar21;
      }
      func_0x00014000ed00(local_140,pcVar21,pcVar31,pcVar33);
    }
    puVar22 = local_128 + 1;
    pppppppcVar15 = local_140;
    if (puVar22 < (undefined1 *)0x1000) {
LAB_1402a19ee:
      func_0x00014028b040(pppppppcVar15,puVar22);
      return;
    }
    pppppppcVar15 = (char *******)local_140[-1];
    if ((char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar15)) < (char *)0x20) {
      puVar22 = local_128 + 0x28;
      goto LAB_1402a19ee;
    }
  }
  else {
LAB_1402a185c:
    if (local_128 < &DAT_00000010) {
      local_130 = 0;
      local_128 = (undefined1 *)0xf;
      local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
      puVar12 = local_1a8[1];
      uVar24 = local_188;
      uVar38 = local_194;
      if (local_e8 < 0x10) goto LAB_1402a1ef5;
      if (DAT_140472300 != '\0') {
        pbVar34 = (byte *)((longlong)local_100[0] + local_e8 + 1);
        pbVar18 = (byte *)((longlong)local_100[0] + local_f0 + 1);
        pbVar23 = (byte *)((ulonglong)(pbVar34 + 7) & 0xfffffffffffffff8);
        pbVar30 = pbVar23;
        if (pbVar18 <= pbVar23) {
          pbVar30 = pbVar18;
        }
        if (pbVar23 < pbVar34) {
          pbVar34 = pbVar23;
        }
        func_0x00014000ed00(local_100[0],pbVar23,pbVar30,pbVar34);
      }
      uVar24 = local_e8 + 1;
      pppppppbVar20 = local_100[0];
      if (uVar24 < 0x1000) {
LAB_1402a1961:
        func_0x00014028b040(pppppppbVar20,uVar24);
        return;
      }
      pppppppbVar20 = (byte *******)local_100[0][-1];
      puVar22 = auStack_1e8;
      if ((byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar20)) < (byte *)0x20) {
        uVar24 = local_e8 + 0x28;
        goto LAB_1402a1961;
      }
      goto LAB_1402a2ab4;
    }
    if (DAT_140472300 != '\0') {
      pcVar33 = local_128 + 1 + (longlong)local_140;
      pcVar36 = (char *)((longlong)local_140 + local_130 + 1);
      pcVar21 = (char *)((ulonglong)(pcVar33 + 7) & 0xfffffffffffffff8);
      pcVar31 = pcVar21;
      if (pcVar36 <= pcVar21) {
        pcVar31 = pcVar36;
      }
      if (pcVar21 < pcVar33) {
        pcVar33 = pcVar21;
      }
      func_0x00014000ed00(local_140,pcVar21,pcVar31,pcVar33);
    }
    puVar22 = local_128 + 1;
    pppppppcVar15 = local_140;
    if (puVar22 < (undefined1 *)0x1000) {
LAB_1402a18d2:
      func_0x00014028b040(pppppppcVar15,puVar22);
      return;
    }
    pppppppcVar15 = (char *******)local_140[-1];
    if ((char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar15)) < (char *)0x20) {
      puVar22 = local_128 + 0x28;
      goto LAB_1402a18d2;
    }
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar22 = auStack_1e0;
LAB_1402a2ab4:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar7 = puVar22 + 8;
LAB_1402a2abb:
  puVar27 = puVar7;
  if (local_150 < 2) goto UNWIND_INFO_1402a2b74_UnwindCodes_58__UnwindOpCode;
  pppppppsVar17 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar17 = local_160;
  }
  goto code_r0x0001402a2ae0;
LAB_1402a29a6:
  puVar12 = local_1a8[1];
  param_7 = local_180;
  if ((local_190[uVar24] == ' ') && (local_1b8 = local_1b8 & 0xff, !bVar4)) {
    local_1b8 = 1;
  }
  goto LAB_1402a1ef5;
code_r0x0001402a1f05:
  FUN_140016d70(local_1a8[0],0);
  goto UNWIND_INFO_1402a2b74_UnwindCodes_74__UnwindOpCode;
code_r0x0001402a2ae0:
  pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
  pppppppsVar19 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar19 = local_160;
  }
  if (pppppppsVar17 != (short *******)((longlong)pppppppsVar19 + local_150 * 2)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar27 + -8) = 0x1402a2b0d;
      func_0x0001402a7f30(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar27 + -8) = 0x1402a2b1c;
      func_0x0001402a7f30(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_1402a2b28;
    }
    else if (*param_4 != 0) goto LAB_1402a2b28;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar27 + -8) = 0x1402a2b6f;
      func_0x0001402a7f30(param_3);
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar17) goto LAB_1402a2b28;
    lVar13 = *param_3;
    if (lVar13 == 0) {
code_r0x0001402a2bd4:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
code_r0x0001402a2bab:
        *(undefined8 *)(puVar27 + -8) = 0x1402a2bb8;
        sVar11 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar29 = **(int **)(lVar13 + 0x50);
        if (iVar29 < 1) goto code_r0x0001402a2bab;
        **(int **)(lVar13 + 0x50) = iVar29 + -1;
        psVar35 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar35 + 1);
        sVar11 = *psVar35;
      }
      if (sVar11 == -1) goto code_r0x0001402a2bd4;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto code_r0x0001402a2ae0;
  }
LAB_1402a2b28:
  pppppppsVar19 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar19 = local_160;
  }
  if (pppppppsVar17 == (short *******)((longlong)pppppppsVar19 + local_150 * 2)) {
UNWIND_INFO_1402a2b74_UnwindCodes_58__UnwindOpCode:
    if (puVar27[0x38] != '\0') {
      *(undefined8 *)(puVar27 + -8) = 0x1402a2c0c;
      func_0x000140038c40(*(undefined8 *)(puVar27 + 0x40),0,1,0x2d);
    }
  }
  else {
    *(undefined8 *)(puVar27 + -8) = 0x1402a2b56;
    FUN_140016d70(*(undefined8 *)(puVar27 + 0x40),0);
  }
UNWIND_INFO_1402a2b74_UnwindCodes_74__UnwindOpCode:
  *(undefined8 *)(puVar27 + -8) = 0x1402a2c16;
  func_0x0001402a9d00(&local_160);
  *(undefined8 *)(puVar27 + -8) = 0x1402a2c28;
  func_0x0001402ed2f0(local_40 ^ (ulonglong)puVar27);
  return;
}

