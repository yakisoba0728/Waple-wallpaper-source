// Function: FUN_1402b43c0
// Addr: 1402b43c0
// Size: 5818 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1402b43c0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  char *pcVar18;
  char *******pppppppcVar19;
  char *pcVar20;
  byte *******pppppppbVar21;
  ulonglong uVar22;
  char *******pppppppcVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  char *pcVar26;
  char *pcVar27;
  int iVar28;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  undefined1 local_1b8;
  uint local_1b4;
  uint local_1b0;
  longlong local_1a8;
  uint local_1a0;
  undefined8 *local_198;
  int local_190;
  char acStack_18c [4];
  undefined8 local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 *local_168;
  char *******local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  char *******local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  ulonglong local_128;
  char *******local_120 [2];
  longlong local_110;
  ulonglong local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  ulonglong local_e8;
  byte *******local_e0 [2];
  longlong local_d0;
  ulonglong local_c8;
  char *******local_c0 [3];
  ulonglong local_a8;
  char *******local_a0 [3];
  ulonglong local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_1e8;
  local_1a8 = param_7;
  local_1b4 = 0;
  uVar5 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_198 = param_2;
  local_170 = uVar5;
  local_168 = param_2;
  (*(code *)PTR_FUN_140426bb8)(uVar5);
  if (param_5 == '\0') {
    uVar14 = FUN_1402b31b0(&local_178);
  }
  else {
    uVar14 = FUN_1402b3090(&local_178);
  }
  local_188 = uVar14;
  lVar15 = (*(code *)PTR_FUN_140426bb8)(uVar5);
  puVar24 = auStack_1e8;
  if (lVar15 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar15,1);
  }
  local_1b0 = local_1b0 & 0xffffff00;
  local_1b8 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = (char *******)0x0;
  (*(code *)PTR_FUN_140426bb8)(uVar14,acStack_18c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar12 = 1;
  local_1b4 = 1;
  uVar5 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar5;
  (*(code *)PTR_FUN_140426bb8)(uVar5);
  lVar15 = FUN_140013e10(&local_178);
  local_178 = lVar15;
  lVar16 = (*(code *)PTR_FUN_140426bb8)(uVar5);
  if (lVar16 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar16,1);
  }
  lVar16 = local_1a8;
  (*(code *)PTR_FUN_140426bb8)(lVar15,"0123456789-",&DAT_14042c36c,local_1a8);
  local_180 = 0;
  uVar25 = local_1b8;
LAB_1402b4580:
  lVar15 = local_178;
  uVar22 = local_180;
  if (3 < local_180) {
LAB_1402b59fc:
    if (local_130 < 2) goto LAB_1402b5b21;
    pppppppcVar23 = (char *******)&local_140;
    if (0xf < local_128) {
      pppppppcVar23 = local_140;
    }
    goto code_r0x0001402b5a20;
  }
  cVar10 = acStack_18c[local_180];
  if (cVar10 == ' ') {
LAB_1402b45b0:
    if (local_180 != 3) {
      bVar8 = false;
LAB_1402b45c1:
      if ((char)param_3[1] == '\0') {
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_1402b587f:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b587f;
          *(char *)((longlong)param_3 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar16 = *param_4;
        if (lVar16 == 0) {
LAB_1402b58ce:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b58ce;
          *(char *)((longlong)param_4 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar16 = *param_3;
      if (lVar16 == 0) {
        if (*param_4 == 0) goto LAB_1402b58ea;
      }
      else if (*param_4 != 0) goto LAB_1402b58ea;
      if ((char)param_3[1] == '\0') {
        if (lVar16 == 0) {
LAB_1402b5979:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b5979;
          *(char *)((longlong)param_3 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((*(byte *)(*(longlong *)(lVar15 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2)
          & 0x48) == 0) goto LAB_1402b58ea;
      bVar8 = true;
      lVar16 = *param_3;
      if (lVar16 == 0) {
LAB_1402b59e6:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1402b59cb:
          uVar13 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar28 = **(int **)(lVar16 + 0x50);
          if (iVar28 < 1) goto LAB_1402b59cb;
          **(int **)(lVar16 + 0x50) = iVar28 + -1;
          pbVar6 = (byte *)**(longlong **)(lVar16 + 0x38);
          **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar6 + 1);
          uVar13 = (uint)*pbVar6;
        }
        if (uVar13 == 0xffffffff) goto LAB_1402b59e6;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402b45c1;
    }
    goto LAB_1402b590f;
  }
  if (cVar10 != '$') {
    if (cVar10 == '+') {
      if ((char)param_3[1] == '\0') {
        lVar15 = *param_3;
        if (lVar15 == 0) {
LAB_1402b4ece:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar15 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b4ece;
          *(char *)((longlong)param_3 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar15 = *param_4;
        if (lVar15 == 0) {
LAB_1402b4f1d:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar15 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b4f1d;
          *(char *)((longlong)param_4 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      if (*param_3 == 0) {
        if (*param_4 != 0) {
LAB_1402b4f49:
          (*(code *)PTR_FUN_140426bb8)(uVar14,local_80);
          uVar13 = uVar12 | 0x102;
          local_1b4 = uVar13;
          if (local_70 == 0) {
LAB_1402b4ffe:
            bVar8 = false;
          }
          else {
            (*(code *)PTR_FUN_140426bb8)(uVar14,local_c0);
            uVar13 = uVar12 | 0x906;
            local_1b4 = uVar13;
            if ((char)param_3[1] == '\0') {
              lVar15 = *param_3;
              if (lVar15 == 0) {
LAB_1402b4fd9:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar15 + 0x50) < 1)) {
                  uVar12 = (*(code *)PTR_FUN_140426bb8)();
                }
                else {
                  uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
                }
                if (uVar12 == 0xffffffff) goto LAB_1402b4fd9;
                *(char *)((longlong)param_3 + 9) = (char)uVar12;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            pppppppcVar23 = (char *******)local_c0;
            if (0xf < local_a8) {
              pppppppcVar23 = local_c0[0];
            }
            if (*(char *)pppppppcVar23 != *(char *)((longlong)param_3 + 9)) goto LAB_1402b4ffe;
            bVar8 = true;
          }
          if ((uVar13 & 4) != 0) {
            local_1b4 = uVar13 & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_c0);
          }
          if ((uVar13 & 2) != 0) {
            local_1b4 = uVar13 & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_80);
          }
          if (bVar8) {
            lVar15 = *param_3;
            if (lVar15 == 0) {
LAB_1402b5082:
              *param_3 = 0;
              uVar25 = 1;
            }
            else {
              if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b506c:
                uVar12 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                iVar28 = **(int **)(lVar15 + 0x50);
                if (iVar28 < 1) goto LAB_1402b506c;
                **(int **)(lVar15 + 0x50) = iVar28 + -1;
                pbVar6 = (byte *)**(longlong **)(lVar15 + 0x38);
                **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar6 + 1);
                uVar12 = (uint)*pbVar6;
              }
              if (uVar12 == 0xffffffff) goto LAB_1402b5082;
              uVar25 = 0;
            }
            *(undefined1 *)(param_3 + 1) = uVar25;
            (*(code *)PTR_FUN_140426bb8)(uVar14,local_100);
            local_1b4 = uVar13 | 0x400;
            local_1a0 = local_1b4;
            if (local_128 < 0x10) {
              local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
              if (local_e8 < 0x10) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(&local_140,local_100,local_f0 + 1);
              }
              local_128 = local_e8;
              local_130 = local_f0;
              local_f0 = 0;
              local_e8 = 0xf;
              local_100[0] = 0;
                    /* WARNING: Subroutine does not return */
              FUN_140017310(local_100);
            }
            if (DAT_140472300 != '\0') {
              pcVar18 = (char *)((longlong)local_140 + local_128 + 1);
              pcVar27 = (char *)((longlong)local_140 + local_130 + 1);
              pcVar20 = (char *)((ulonglong)(pcVar18 + 7) & 0xfffffffffffffff8);
              pcVar26 = pcVar20;
              if (pcVar27 <= pcVar20) {
                pcVar26 = pcVar27;
              }
              if (pcVar20 < pcVar18) {
                pcVar18 = pcVar20;
              }
              func_0x00014000ed00(local_140,pcVar20,pcVar26,pcVar18);
            }
            uVar22 = local_128 + 1;
            pppppppcVar23 = local_140;
            if (uVar22 < 0x1000) {
LAB_1402b5130:
              func_0x00014028b040(pppppppcVar23,uVar22);
              return;
            }
            pppppppcVar23 = (char *******)local_140[-1];
            if ((char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar23)) < (char *)0x20) {
              uVar22 = local_128 + 0x28;
              goto LAB_1402b5130;
            }
            pcVar7 = (code *)swi(0x29);
            (*pcVar7)(5);
            puVar24 = auStack_1e0;
            goto LAB_1402b59fc;
          }
          (*(code *)PTR_FUN_140426bb8)(uVar14,local_100);
          uVar12 = uVar13 | 0x1008;
          local_1b4 = uVar12;
          if (local_f0 == 0) {
LAB_1402b5246:
            bVar8 = false;
          }
          else {
            (*(code *)PTR_FUN_140426bb8)(uVar14,local_a0);
            uVar12 = uVar13 | 0x3018;
            local_1b4 = uVar12;
            if ((char)param_3[1] == '\0') {
              lVar15 = *param_3;
              if (lVar15 == 0) {
LAB_1402b5221:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar15 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR_FUN_140426bb8)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_1402b5221;
                *(char *)((longlong)param_3 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            pppppppcVar23 = (char *******)local_a0;
            if (0xf < local_88) {
              pppppppcVar23 = local_a0[0];
            }
            if (*(char *)pppppppcVar23 != *(char *)((longlong)param_3 + 9)) goto LAB_1402b5246;
            bVar8 = true;
          }
          if ((uVar12 & 0x10) != 0) {
            local_1b4 = uVar12 & 0xffffffef;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_a0);
          }
          if ((uVar12 & 8) != 0) {
            local_1b4 = uVar12 & 0xfffffff7;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_100);
          }
          if (bVar8) {
            lVar15 = *param_3;
            if (lVar15 != 0) {
              if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b52b4:
                uVar13 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                iVar28 = **(int **)(lVar15 + 0x50);
                if (iVar28 < 1) goto LAB_1402b52b4;
                **(int **)(lVar15 + 0x50) = iVar28 + -1;
                pbVar6 = (byte *)**(longlong **)(lVar15 + 0x38);
                **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar6 + 1);
                uVar13 = (uint)*pbVar6;
              }
              if (uVar13 != 0xffffffff) {
                uVar25 = 0;
                goto LAB_1402b52d3;
              }
            }
            *param_3 = 0;
            uVar25 = 1;
LAB_1402b52d3:
            *(undefined1 *)(param_3 + 1) = uVar25;
            (*(code *)PTR_FUN_140426bb8)(uVar14,local_100);
            local_1b4 = uVar12 | 0x8000;
            FUN_14000df10(&local_140,local_100);
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_100);
          }
          (*(code *)PTR_FUN_140426bb8)(uVar14,local_60);
          local_1b4 = uVar12 | 0x4020;
          if (local_50 == 0) {
LAB_1402b5379:
            bVar8 = false;
          }
          else {
            (*(code *)PTR_FUN_140426bb8)(uVar14,local_100);
            local_1b4 = uVar12 | 0x14060;
            if (local_f0 != 0) goto LAB_1402b5379;
            bVar8 = true;
          }
          if ((local_1b4 & 0x40) != 0) {
            local_1b4 = local_1b4 & 0xffffffbf;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_100);
          }
          if ((local_1b4 & 0x20) != 0) {
            local_1b4 = local_1b4 & 0xffffffdf;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_60);
          }
          lVar16 = local_1a8;
          uVar12 = local_1b4;
          if (bVar8) {
            local_1b8 = 1;
          }
        }
      }
      else if (*param_4 == 0) goto LAB_1402b4f49;
      goto LAB_1402b590f;
    }
    if (cVar10 != 'v') {
      if (cVar10 == 'x') goto LAB_1402b45b0;
      goto LAB_1402b590f;
    }
    local_190 = (*(code *)PTR_FUN_140426bb8)(uVar14);
    (*(code *)PTR_FUN_140426bb8)(uVar14,local_e0);
    local_1b4 = uVar12 | 0x200;
    local_1a0 = local_1b4;
    if ((local_d0 != 0) &&
       (cVar10 = (*(code *)PTR_FUN_140426bb8)(uVar14), uVar14 = local_188, cVar10 != '\0')) {
      pppppppbVar21 = (byte *******)local_e0;
      if (0xf < local_c8) {
        pppppppbVar21 = local_e0[0];
      }
      if (*(byte *)pppppppbVar21 < 0x7f) {
        uStack_158 = 0;
        local_150 = 0;
        local_148 = 0xf;
        local_160 = (char *******)0x0;
        FUN_1400535a0(&local_160,0);
        lVar15 = 0;
        goto LAB_1402b46a0;
      }
    }
    puVar9 = local_198;
    iVar28 = 0;
    goto LAB_1402b4a24;
  }
  (*(code *)PTR_FUN_140426bb8)(uVar14,local_120);
  local_1b4 = uVar12 | 0x80;
  if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
    if ((char)param_3[1] == '\0') {
      lVar15 = *param_3;
      if (lVar15 == 0) {
LAB_1402b5435:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b5435;
        *(char *)((longlong)param_3 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar15 = *param_4;
      if (lVar15 == 0) {
LAB_1402b5484:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b5484;
        *(char *)((longlong)param_4 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar15 = *param_3;
    if (lVar15 != 0) {
      if (*param_4 == 0) goto LAB_1402b54a9;
      goto LAB_1402b550a;
    }
    if (*param_4 == 0) goto LAB_1402b550a;
LAB_1402b54a9:
    pppppppcVar23 = (char *******)local_120;
    if (0xf < local_108) {
      pppppppcVar23 = local_120[0];
    }
    if ((char)param_3[1] == '\0') {
      if (lVar15 == 0) {
LAB_1402b54f3:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b54f3;
        *(char *)((longlong)param_3 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar23) goto LAB_1402b550a;
    goto LAB_1402b562f;
  }
LAB_1402b550a:
  if ((uVar22 == 3) && (local_130 < 2)) {
    if ((char)param_3[1] == '\0') {
      lVar15 = *param_3;
      if (lVar15 == 0) {
LAB_1402b555e:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b555e;
        *(char *)((longlong)param_3 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar15 = *param_4;
      if (lVar15 == 0) {
LAB_1402b55ad:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b55ad;
        *(char *)((longlong)param_4 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
      if (*param_4 != 0) {
LAB_1402b55d2:
        if ((char)param_3[1] == '\0') {
          if (lVar15 == 0) {
LAB_1402b560e:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b560e;
            *(char *)((longlong)param_3 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppcVar23 = (char *******)local_120;
        if (0xf < local_108) {
          pppppppcVar23 = local_120[0];
        }
        if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar23) goto LAB_1402b5693;
      }
    }
    else if (*param_4 == 0) goto LAB_1402b55d2;
LAB_1402b562f:
    if (((local_110 != 0) && (0xf < local_108)) && (DAT_140472300 != '\0')) {
      pcVar18 = (char *)((longlong)local_120[0] + local_110 + 1);
      pcVar20 = (char *)((ulonglong)((longlong)local_120[0] + local_108 + 8) & 0xfffffffffffffff8);
      pcVar26 = pcVar20;
      if (pcVar18 <= pcVar20) {
        pcVar26 = pcVar18;
      }
      pcVar18 = (char *)((longlong)local_120[0] + 1);
      if (pcVar20 < (char *)((longlong)local_120[0] + 1)) {
        pcVar18 = pcVar20;
      }
      func_0x00014000ed00(local_120[0],pcVar20,pcVar26,pcVar18);
    }
    local_110 = 0;
    pppppppcVar23 = (char *******)local_120;
    if (0xf < local_108) {
      pppppppcVar23 = local_120[0];
    }
    *(char *)pppppppcVar23 = '\0';
  }
LAB_1402b5693:
  pppppppcVar23 = (char *******)local_120;
  if (0xf < local_108) {
    pppppppcVar23 = local_120[0];
  }
  goto LAB_1402b56a1;
LAB_1402b58ea:
  lVar16 = local_1a8;
  uVar25 = local_1b8;
  if (acStack_18c[uVar22] == ' ') {
    uVar11 = (char)local_1b0;
    if (!bVar8) {
      uVar11 = 1;
    }
    local_1b0 = CONCAT31(local_1b0._1_3_,uVar11);
  }
LAB_1402b590f:
  local_180 = uVar22 + 1;
  if ((char)local_1b0 != '\0') goto code_r0x0001402b5922;
  goto LAB_1402b4580;
code_r0x0001402b5922:
  FUN_140016d70(local_198,0);
  puVar24 = auStack_1e8;
  goto LAB_1402b5b41;
LAB_1402b46a0:
  if ((char)param_3[1] == '\0') {
    lVar17 = *param_3;
    if (lVar17 == 0) {
LAB_1402b46df:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar17 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b46df;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar17 = *param_4;
    if (lVar17 == 0) {
LAB_1402b472a:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar17 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b472a;
      *(char *)((longlong)param_4 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar17 = *param_3;
  if (lVar17 == 0) {
    if (*param_4 == 0) goto LAB_1402b4742;
  }
  else if (*param_4 != 0) goto LAB_1402b4742;
  if ((char)param_3[1] == '\0') {
    if (lVar17 == 0) {
LAB_1402b47af:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar17 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b47af;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar17 = thunk_FUN_14028d040(lVar16,lVar16 + 0xb,*(undefined1 *)((longlong)param_3 + 9));
  if ((ulonglong)(lVar17 - lVar16) < 10) {
    FUN_1400535a0(local_198,"0123456789-"[lVar17 - lVar16]);
    pppppppcVar23 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar23 = local_160;
    }
    if (*(char *)((longlong)pppppppcVar23 + lVar15) != '\x7f') {
      pppppppcVar23 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar23 = local_160;
      }
      *(char *)((longlong)pppppppcVar23 + lVar15) =
           *(char *)((longlong)pppppppcVar23 + lVar15) + '\x01';
    }
  }
  else {
    pppppppcVar23 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar23 = local_160;
    }
    if (*(char *)((longlong)pppppppcVar23 + lVar15) == '\0') goto LAB_1402b4742;
    if ((char)param_3[1] == '\0') {
      lVar16 = *param_3;
      if (lVar16 == 0) {
LAB_1402b4871:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar16 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b4871;
        *(char *)((longlong)param_3 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    uVar22 = local_150;
    if (*(char *)((longlong)param_3 + 9) != cVar10) goto LAB_1402b4742;
    if (local_150 < local_148) {
      uVar1 = local_150 + 1;
      if (((local_150 != uVar1) && (0xf < local_148)) && (DAT_140472300 != '\0')) {
        pcVar18 = (char *)((longlong)local_160 + local_150 + 1);
        pcVar20 = (char *)((ulonglong)((longlong)local_160 + local_148 + 8) & 0xfffffffffffffff8);
        pcVar26 = pcVar20;
        if (pcVar18 <= pcVar20) {
          pcVar26 = pcVar18;
        }
        func_0x00014000ed00(local_160,pcVar20,pcVar26);
      }
      local_150 = uVar1;
      pppppppcVar23 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar23 = local_160;
      }
      ((char *)((longlong)pppppppcVar23 + uVar22))[0] = '\0';
      ((char *)((longlong)pppppppcVar23 + uVar22))[1] = '\0';
    }
    else {
      FUN_140053430(&local_160,1,uVar25,0);
    }
    lVar15 = lVar15 + 1;
    lVar16 = local_1a8;
  }
  lVar17 = *param_3;
  if (lVar17 == 0) {
LAB_1402b4962:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar17 + 0x38) == 0) {
LAB_1402b4947:
      uVar12 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar17 + 0x50);
      if (iVar28 < 1) goto LAB_1402b4947;
      **(int **)(lVar17 + 0x50) = iVar28 + -1;
      pbVar6 = (byte *)**(longlong **)(lVar17 + 0x38);
      **(longlong **)(lVar17 + 0x38) = (longlong)(pbVar6 + 1);
      uVar12 = (uint)*pbVar6;
    }
    if (uVar12 == 0xffffffff) goto LAB_1402b4962;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402b46a0;
LAB_1402b4a24:
  if ((char)param_3[1] == '\0') {
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_1402b4a63:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4a63;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar15 = *param_4;
    if (lVar15 == 0) {
LAB_1402b4aad:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4aad;
      *(char *)((longlong)param_4 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    if (*param_4 == 0) goto LAB_1402b4ac5;
  }
  else if (*param_4 != 0) goto LAB_1402b4ac5;
  if ((char)param_3[1] == '\0') {
    if (lVar15 == 0) {
LAB_1402b4b60:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4b60;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar15 = thunk_FUN_14028d040(lVar16,lVar16 + 0xb,*(undefined1 *)((longlong)param_3 + 9));
  if (9 < (ulonglong)(lVar15 - lVar16)) goto LAB_1402b4ac5;
  FUN_1400535a0(puVar9,"0123456789-"[lVar15 - lVar16]);
  lVar15 = *param_3;
  if (lVar15 == 0) {
LAB_1402b4bdf:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b4bc4:
      uVar12 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar3 = **(int **)(lVar15 + 0x50);
      if (iVar3 < 1) goto LAB_1402b4bc4;
      **(int **)(lVar15 + 0x50) = iVar3 + -1;
      pbVar6 = (byte *)**(longlong **)(lVar15 + 0x38);
      **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar6 + 1);
      uVar12 = (uint)*pbVar6;
    }
    if (uVar12 == 0xffffffff) goto LAB_1402b4bdf;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402b4a24;
LAB_1402b56a1:
  if ((char)param_3[1] == '\0') {
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_1402b56e0:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b56e0;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar15 = *param_4;
    if (lVar15 == 0) {
LAB_1402b572f:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b572f;
      *(char *)((longlong)param_4 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    if (*param_4 == 0) goto LAB_1402b574b;
  }
  else if (*param_4 != 0) {
LAB_1402b574b:
    pppppppcVar19 = (char *******)local_120;
    if (0xf < local_108) {
      pppppppcVar19 = local_120[0];
    }
    local_1b0 = local_1b0 & 0xff;
    if (pppppppcVar23 != (char *******)((longlong)pppppppcVar19 + local_110)) {
      local_1b0 = 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_120);
  }
  pppppppcVar19 = (char *******)local_120;
  if (0xf < local_108) {
    pppppppcVar19 = local_120[0];
  }
  if (pppppppcVar23 == (char *******)((longlong)pppppppcVar19 + local_110)) goto LAB_1402b574b;
  if ((char)param_3[1] == '\0') {
    if (lVar15 == 0) {
LAB_1402b57de:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)(lVar15);
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b57de;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar23) goto LAB_1402b574b;
  pppppppcVar23 = (char *******)((longlong)pppppppcVar23 + 1);
  lVar15 = *param_3;
  if (lVar15 == 0) {
LAB_1402b584f:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b582b:
      uVar12 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar15 + 0x50);
      if (iVar28 < 1) goto LAB_1402b582b;
      **(int **)(lVar15 + 0x50) = iVar28 + -1;
      pbVar6 = (byte *)**(longlong **)(lVar15 + 0x38);
      **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar6 + 1);
      uVar12 = (uint)*pbVar6;
    }
    if (uVar12 == 0xffffffff) goto LAB_1402b584f;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402b56a1;
LAB_1402b4742:
  if (lVar15 != 0) {
    pppppppcVar23 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar23 = local_160;
    }
    if (*(char *)((longlong)pppppppcVar23 + lVar15) < '\x01') {
      local_1b0 = CONCAT31(local_1b0._1_3_,1);
    }
    else {
      lVar15 = lVar15 + 1;
    }
  }
  pppppppbVar21 = (byte *******)local_e0;
  if (0xf < local_c8) {
    pppppppbVar21 = local_e0[0];
  }
  if ((char)local_1b0 == '\0') {
    while( true ) {
      if ((lVar15 == 0) || (bVar2 = *(byte *)pppppppbVar21, bVar2 == 0x7f)) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(&local_160);
      }
      lVar15 = lVar15 + -1;
      if (lVar15 != 0) break;
LAB_1402b49af:
      if (lVar15 == 0) {
        pppppppcVar23 = (char *******)&local_160;
        if (0xf < local_148) {
          pppppppcVar23 = local_160;
        }
        if ((char)bVar2 < *(char *)pppppppcVar23) goto LAB_1402b49d1;
      }
      if ('\0' < (char)*(byte *)((longlong)pppppppbVar21 + 1)) {
        pppppppbVar21 = (byte *******)((longlong)pppppppbVar21 + 1);
      }
    }
    pppppppcVar23 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar23 = local_160;
    }
    if (bVar2 == *(byte *)((longlong)pppppppcVar23 + lVar15)) goto LAB_1402b49af;
LAB_1402b49d1:
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(&local_160);
LAB_1402b4ac5:
  iVar3 = local_190;
  cVar10 = (*(code *)PTR_FUN_140426bb8)(uVar14);
  if ((char)param_3[1] == '\0') {
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_1402b4c02:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4c02;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar15 = *param_4;
    if (lVar15 == 0) {
LAB_1402b4c51:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4c51;
      *(char *)((longlong)param_4 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    if (*param_4 == 0) goto LAB_1402b4da8;
  }
  else if (*param_4 != 0) goto LAB_1402b4da8;
  if (cVar10 == '\0') goto LAB_1402b4da8;
  if ((char)param_3[1] == '\0') {
    if (lVar15 == 0) {
LAB_1402b4cc2:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4cc2;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar15 = local_1a8;
  if (*(char *)((longlong)param_3 + 9) == cVar10) {
LAB_1402b4ce0:
    lVar16 = *param_3;
    if (lVar16 == 0) {
LAB_1402b4d33:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1402b4d13:
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar4 = **(int **)(lVar16 + 0x50);
        if (iVar4 < 1) goto LAB_1402b4d13;
        **(int **)(lVar16 + 0x50) = iVar4 + -1;
        pbVar6 = (byte *)**(longlong **)(lVar16 + 0x38);
        **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar6 + 1);
        uVar12 = (uint)*pbVar6;
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4d33;
      *(undefined1 *)(param_3 + 1) = 0;
      FUN_1400975d0(param_3);
    }
    if ((char)param_4[1] == '\0') {
      lVar16 = *param_4;
      if (lVar16 == 0) {
LAB_1402b4d82:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar16 + 0x50) < 1)) {
          uVar12 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          uVar12 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
        }
        if (uVar12 == 0xffffffff) goto LAB_1402b4d82;
        *(char *)((longlong)param_4 + 9) = (char)uVar12;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar16 = *param_3;
    if (lVar16 != 0) {
      if (*param_4 != 0) goto LAB_1402b4d9e;
LAB_1402b4dc9:
      if (iVar3 <= iVar28) goto LAB_1402b4da8;
      if ((char)param_3[1] == '\0') {
        if (lVar16 == 0) {
LAB_1402b4e0a:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar12 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            uVar12 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar12 == 0xffffffff) goto LAB_1402b4e0a;
          *(char *)((longlong)param_3 + 9) = (char)uVar12;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar16 = thunk_FUN_14028d040(lVar15,lVar15 + 0xb,*(undefined1 *)((longlong)param_3 + 9));
      if (9 < (ulonglong)(lVar16 - lVar15)) goto LAB_1402b4da3;
      FUN_1400535a0(local_198,"0123456789-"[lVar16 - lVar15]);
      iVar28 = iVar28 + 1;
      goto LAB_1402b4ce0;
    }
    if (*param_4 != 0) goto LAB_1402b4dc9;
LAB_1402b4d9e:
    if (iVar3 <= iVar28) goto LAB_1402b4da8;
LAB_1402b4da3:
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
  }
LAB_1402b4da8:
  puVar9 = local_198;
  if (local_198[2] == 0) {
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
  }
  else {
    for (; iVar28 < iVar3; iVar28 = iVar28 + 1) {
      FUN_1400535a0(puVar9,0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(local_e0);
code_r0x0001402b5a20:
  pppppppcVar23 = (char *******)((longlong)pppppppcVar23 + 1);
  pppppppcVar19 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar19 = local_140;
  }
  if (pppppppcVar23 != (char *******)((longlong)pppppppcVar19 + local_130)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402b5a48;
      FUN_1400975d0(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402b5a58;
      FUN_1400975d0(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_1402b5a65;
    }
    else if (*param_4 != 0) goto LAB_1402b5a65;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402b5aa9;
      FUN_1400975d0(param_3);
    }
    if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar23) goto LAB_1402b5a65;
    lVar15 = *param_3;
    if (lVar15 == 0) {
code_r0x0001402b5b08:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar15 + 0x38) == 0) {
code_r0x0001402b5ae4:
        *(undefined **)(puVar24 + -8) = &UNK_1402b5af1;
        uVar12 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar28 = **(int **)(lVar15 + 0x50);
        if (iVar28 < 1) goto code_r0x0001402b5ae4;
        **(int **)(lVar15 + 0x50) = iVar28 + -1;
        pbVar6 = (byte *)**(longlong **)(lVar15 + 0x38);
        **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar6 + 1);
        uVar12 = (uint)*pbVar6;
      }
      if (uVar12 == 0xffffffff) goto code_r0x0001402b5b08;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto code_r0x0001402b5a20;
  }
LAB_1402b5a65:
  pppppppcVar19 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar19 = local_140;
  }
  if (pppppppcVar23 == (char *******)((longlong)pppppppcVar19 + local_130)) {
LAB_1402b5b21:
    if (puVar24[0x30] != '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x1402b5b40;
      func_0x000140038c40(*(undefined8 *)(puVar24 + 0x50),0,1,0x2d);
    }
  }
  else {
    *(undefined8 *)(puVar24 + -8) = 0x1402b5a8f;
    FUN_140016d70(*(undefined8 *)(puVar24 + 0x50),0);
  }
LAB_1402b5b41:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -8) = &UNK_1402b5b4a;
  FUN_140017310(&local_140);
}

