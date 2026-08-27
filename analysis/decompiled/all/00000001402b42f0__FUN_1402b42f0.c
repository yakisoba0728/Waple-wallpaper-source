// Function: FUN_1402b42f0
// Addr: 1402b42f0
// Size: 6071 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1402b42f0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             char param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
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
  char *******pppppppcVar22;
  undefined1 *puVar23;
  undefined1 uVar24;
  char *pcVar25;
  char *pcVar26;
  int iVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
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
  undefined1 local_100;
  undefined7 uStack_ff;
  ulonglong local_f0;
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
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_1e8;
  local_1a8 = param_7;
  local_1b4 = 0;
  uVar4 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_198 = param_2;
  local_170 = uVar4;
  local_168 = param_2;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4);
  if (param_5 == '\0') {
    uVar14 = FUN_1402b30e0(&local_178);
  }
  else {
    uVar14 = FUN_1402b2fc0(&local_178);
  }
  local_188 = uVar14;
  lVar15 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4);
  puVar23 = auStack_1e8;
  if (lVar15 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar15,1);
  }
  local_1b0 = local_1b0 & 0xffffff00;
  local_1b8 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = (char *******)0x0;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,acStack_18c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar12 = 1;
  local_1b4 = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar4;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4);
  lVar15 = FUN_140013d40(&local_178);
  local_178 = lVar15;
  lVar16 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4);
  if (lVar16 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar16,1);
  }
  lVar16 = local_1a8;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar15,"0123456789-",&DAT_14042c29c,local_1a8);
  local_180 = 0;
  uVar24 = local_1b8;
LAB_1402b44b0:
  lVar15 = local_178;
  uVar28 = local_180;
  if (local_180 < 4) {
    cVar10 = acStack_18c[local_180];
    if (cVar10 == ' ') {
LAB_1402b44e0:
      if (local_180 != 3) {
        bVar7 = false;
LAB_1402b44f1:
        if ((char)param_3[1] == '\0') {
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_1402b57af:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b57af;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar16 = *param_4;
          if (lVar16 == 0) {
LAB_1402b57fe:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b57fe;
            *(char *)((longlong)param_4 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar16 = *param_3;
        if (lVar16 == 0) {
          if (*param_4 == 0) goto LAB_1402b581a;
        }
        else if (*param_4 != 0) goto LAB_1402b581a;
        if ((char)param_3[1] == '\0') {
          if (lVar16 == 0) {
LAB_1402b58a9:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b58a9;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((*(byte *)(*(longlong *)(lVar15 + 0x18) +
                      (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) & 0x48) == 0)
        goto LAB_1402b581a;
        bVar7 = true;
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_1402b5916:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1402b58fb:
            uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar27 = **(int **)(lVar16 + 0x50);
            if (iVar27 < 1) goto LAB_1402b58fb;
            **(int **)(lVar16 + 0x50) = iVar27 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
            **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
            uVar13 = (uint)*pbVar5;
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b5916;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_1402b44f1;
      }
      goto LAB_1402b583f;
    }
    if (cVar10 == '$') {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,local_120);
      uVar12 = uVar12 | 0x80;
      local_1b4 = uVar12;
      if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
        if ((char)param_3[1] == '\0') {
          lVar15 = *param_3;
          if (lVar15 == 0) {
LAB_1402b5365:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b5365;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar15 = *param_4;
          if (lVar15 == 0) {
LAB_1402b53b4:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b53b4;
            *(char *)((longlong)param_4 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar15 = *param_3;
        if (lVar15 != 0) {
          if (*param_4 == 0) goto LAB_1402b53d9;
          goto LAB_1402b543a;
        }
        if (*param_4 == 0) goto LAB_1402b543a;
LAB_1402b53d9:
        pppppppcVar22 = (char *******)local_120;
        if (0xf < local_108) {
          pppppppcVar22 = local_120[0];
        }
        if ((char)param_3[1] == '\0') {
          if (lVar15 == 0) {
LAB_1402b5423:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b5423;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar22) goto LAB_1402b543a;
      }
      else {
LAB_1402b543a:
        if ((uVar28 != 3) || (1 < local_130)) goto LAB_1402b55c3;
        if ((char)param_3[1] == '\0') {
          lVar15 = *param_3;
          if (lVar15 == 0) {
LAB_1402b548e:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b548e;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar15 = *param_4;
          if (lVar15 == 0) {
LAB_1402b54dd:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_1402b54dd;
            *(char *)((longlong)param_4 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar15 = *param_3;
        if (lVar15 == 0) {
          if (*param_4 != 0) {
LAB_1402b5502:
            if ((char)param_3[1] == '\0') {
              if (lVar15 == 0) {
LAB_1402b553e:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar15 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_1402b553e;
                *(char *)((longlong)param_3 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            pppppppcVar22 = (char *******)local_120;
            if (0xf < local_108) {
              pppppppcVar22 = local_120[0];
            }
            if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar22) goto LAB_1402b55c3;
          }
        }
        else if (*param_4 == 0) goto LAB_1402b5502;
      }
      if (((local_110 != 0) && (0xf < local_108)) && (DAT_140472230 != '\0')) {
        pcVar18 = (char *)((longlong)local_120[0] + local_110 + 1);
        pcVar20 = (char *)((ulonglong)((longlong)local_120[0] + local_108 + 8) & 0xfffffffffffffff8)
        ;
        pcVar25 = pcVar20;
        if (pcVar18 <= pcVar20) {
          pcVar25 = pcVar18;
        }
        pcVar18 = (char *)((longlong)local_120[0] + 1);
        if (pcVar20 < (char *)((longlong)local_120[0] + 1)) {
          pcVar18 = pcVar20;
        }
        _guard_check_icall(local_120[0],pcVar20,pcVar25,pcVar18);
      }
      local_110 = 0;
      pppppppcVar22 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar22 = local_120[0];
      }
      *(char *)pppppppcVar22 = '\0';
LAB_1402b55c3:
      pppppppcVar22 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar22 = local_120[0];
      }
LAB_1402b55d1:
      if ((char)param_3[1] == '\0') {
        lVar15 = *param_3;
        if (lVar15 == 0) {
LAB_1402b5610:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar15 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b5610;
          *(char *)((longlong)param_3 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar15 = *param_4;
        if (lVar15 == 0) {
LAB_1402b565f:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar15 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b565f;
          *(char *)((longlong)param_4 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar15 = *param_3;
      if (lVar15 == 0) {
        if (*param_4 == 0) goto LAB_1402b567b;
      }
      else if (*param_4 != 0) goto LAB_1402b567b;
      pppppppcVar19 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar19 = local_120[0];
      }
      if (pppppppcVar22 == (char *******)((longlong)pppppppcVar19 + local_110)) goto LAB_1402b567b;
      if ((char)param_3[1] == '\0') {
        if (lVar15 == 0) {
LAB_1402b570e:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar15 + 0x50) < 1)) {
            uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar15);
          }
          else {
            uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b570e;
          *(char *)((longlong)param_3 + 9) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar22) goto LAB_1402b567b;
      pppppppcVar22 = (char *******)((longlong)pppppppcVar22 + 1);
      lVar15 = *param_3;
      if (lVar15 == 0) {
LAB_1402b577f:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b575b:
          uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar27 = **(int **)(lVar15 + 0x50);
          if (iVar27 < 1) goto LAB_1402b575b;
          **(int **)(lVar15 + 0x50) = iVar27 + -1;
          pbVar5 = (byte *)**(longlong **)(lVar15 + 0x38);
          **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar5 + 1);
          uVar13 = (uint)*pbVar5;
        }
        if (uVar13 == 0xffffffff) goto LAB_1402b577f;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402b55d1;
    }
    if (cVar10 != '+') {
      if (cVar10 == 'v') {
        local_190 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14);
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14);
        local_1b4 = uVar12 | 0x200;
        local_1a0 = local_1b4;
        puVar29 = local_198;
        if ((local_d0 != 0) &&
           (cVar10 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14), puVar29 = local_198,
           uVar14 = local_188, cVar10 != '\0')) {
          pppppppbVar21 = (byte *******)local_e0;
          if (0xf < local_c8) {
            pppppppbVar21 = local_e0[0];
          }
          if (*(byte *)pppppppbVar21 < 0x7f) {
            uStack_158 = 0;
            local_150 = 0;
            local_148 = 0xf;
            local_160 = (char *******)0x0;
            FUN_1400534d0(&local_160,0);
            lVar15 = 0;
LAB_1402b45d0:
            if ((char)param_3[1] == '\0') {
              lVar17 = *param_3;
              if (lVar17 == 0) {
LAB_1402b460f:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar17 + 0x50) < 1)) {
                  uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
                }
                if (uVar12 == 0xffffffff) goto LAB_1402b460f;
                *(char *)((longlong)param_3 + 9) = (char)uVar12;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if ((char)param_4[1] == '\0') {
              lVar17 = *param_4;
              if (lVar17 == 0) {
LAB_1402b465a:
                *param_4 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar17 + 0x50) < 1)) {
                  uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
                }
                if (uVar12 == 0xffffffff) goto LAB_1402b465a;
                *(char *)((longlong)param_4 + 9) = (char)uVar12;
              }
              *(undefined1 *)(param_4 + 1) = 1;
            }
            lVar17 = *param_3;
            if (lVar17 == 0) {
              if (*param_4 == 0) goto LAB_1402b4672;
            }
            else if (*param_4 != 0) goto LAB_1402b4672;
            if ((char)param_3[1] == '\0') {
              if (lVar17 == 0) {
LAB_1402b46df:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar17 + 0x50) < 1)) {
                  uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
                }
                if (uVar12 == 0xffffffff) goto LAB_1402b46df;
                *(char *)((longlong)param_3 + 9) = (char)uVar12;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar17 = thunk_FUN_14028cf70(lVar16,lVar16 + 0xb,*(undefined1 *)((longlong)param_3 + 9))
            ;
            if ((ulonglong)(lVar17 - lVar16) < 10) {
              FUN_1400534d0(local_198,"0123456789-"[lVar17 - lVar16]);
              pppppppcVar22 = (char *******)&local_160;
              if (0xf < local_148) {
                pppppppcVar22 = local_160;
              }
              if (*(char *)((longlong)pppppppcVar22 + lVar15) != '\x7f') {
                pppppppcVar22 = (char *******)&local_160;
                if (0xf < local_148) {
                  pppppppcVar22 = local_160;
                }
                *(char *)((longlong)pppppppcVar22 + lVar15) =
                     *(char *)((longlong)pppppppcVar22 + lVar15) + '\x01';
              }
            }
            else {
              pppppppcVar22 = (char *******)&local_160;
              if (0xf < local_148) {
                pppppppcVar22 = local_160;
              }
              if (*(char *)((longlong)pppppppcVar22 + lVar15) == '\0') goto LAB_1402b4672;
              if ((char)param_3[1] == '\0') {
                lVar17 = *param_3;
                if (lVar17 == 0) {
LAB_1402b47a1:
                  *param_3 = 0;
                }
                else {
                  if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                     (**(int **)(lVar17 + 0x50) < 1)) {
                    uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                  }
                  else {
                    uVar12 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
                  }
                  if (uVar12 == 0xffffffff) goto LAB_1402b47a1;
                  *(char *)((longlong)param_3 + 9) = (char)uVar12;
                }
                *(undefined1 *)(param_3 + 1) = 1;
              }
              uVar28 = local_150;
              if (*(char *)((longlong)param_3 + 9) != cVar10) goto LAB_1402b4672;
              if (local_150 < local_148) {
                uVar1 = local_150 + 1;
                if (((local_150 != uVar1) && (0xf < local_148)) && (DAT_140472230 != '\0')) {
                  pcVar18 = (char *)((longlong)local_160 + local_150 + 1);
                  pcVar20 = (char *)((ulonglong)((longlong)local_160 + local_148 + 8) &
                                    0xfffffffffffffff8);
                  pcVar25 = pcVar20;
                  if (pcVar18 <= pcVar20) {
                    pcVar25 = pcVar18;
                  }
                  _guard_check_icall(local_160,pcVar20,pcVar25);
                }
                local_150 = uVar1;
                pppppppcVar22 = (char *******)&local_160;
                if (0xf < local_148) {
                  pppppppcVar22 = local_160;
                }
                ((char *)((longlong)pppppppcVar22 + uVar28))[0] = '\0';
                ((char *)((longlong)pppppppcVar22 + uVar28))[1] = '\0';
              }
              else {
                FUN_140053360(&local_160,1,uVar24,0);
              }
              lVar15 = lVar15 + 1;
              lVar16 = local_1a8;
            }
            lVar17 = *param_3;
            if (lVar17 == 0) {
LAB_1402b4892:
              *param_3 = 0;
              *(undefined1 *)(param_3 + 1) = 1;
            }
            else {
              if (**(longlong **)(lVar17 + 0x38) == 0) {
LAB_1402b4877:
                uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                iVar27 = **(int **)(lVar17 + 0x50);
                if (iVar27 < 1) goto LAB_1402b4877;
                **(int **)(lVar17 + 0x50) = iVar27 + -1;
                pbVar5 = (byte *)**(longlong **)(lVar17 + 0x38);
                **(longlong **)(lVar17 + 0x38) = (longlong)(pbVar5 + 1);
                uVar12 = (uint)*pbVar5;
              }
              if (uVar12 == 0xffffffff) goto LAB_1402b4892;
              *(undefined1 *)(param_3 + 1) = 0;
            }
            goto LAB_1402b45d0;
          }
        }
LAB_1402b4954:
        if ((char)param_3[1] == '\0') {
          lVar15 = *param_3;
          if (lVar15 == 0) {
LAB_1402b4993:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b4993;
            *(char *)((longlong)param_3 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar15 = *param_4;
          if (lVar15 == 0) {
LAB_1402b49dd:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b49dd;
            *(char *)((longlong)param_4 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar15 = *param_3;
        uVar24 = local_1b8;
        if (lVar15 == 0) {
          if (*param_4 == 0) goto LAB_1402b49fa;
        }
        else if (*param_4 != 0) goto LAB_1402b49fa;
        if ((char)param_3[1] == '\0') {
          if (lVar15 == 0) {
LAB_1402b4a90:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b4a90;
            *(char *)((longlong)param_3 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        lVar15 = thunk_FUN_14028cf70(lVar16,lVar16 + 0xb,*(undefined1 *)((longlong)param_3 + 9));
        uVar24 = local_1b8;
        if (9 < (ulonglong)(lVar15 - lVar16)) goto LAB_1402b49fa;
        FUN_1400534d0(puVar29);
        lVar15 = *param_3;
        if (lVar15 == 0) {
LAB_1402b4b0f:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b4af4:
            uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar27 = **(int **)(lVar15 + 0x50);
            if (iVar27 < 1) goto LAB_1402b4af4;
            **(int **)(lVar15 + 0x50) = iVar27 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar15 + 0x38);
            **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar5 + 1);
            uVar12 = (uint)*pbVar5;
          }
          if (uVar12 == 0xffffffff) goto LAB_1402b4b0f;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_1402b4954;
      }
      if (cVar10 == 'x') goto LAB_1402b44e0;
      goto LAB_1402b583f;
    }
    if ((char)param_3[1] == '\0') {
      lVar15 = *param_3;
      if (lVar15 == 0) {
LAB_1402b4dfe:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar13 == 0xffffffff) goto LAB_1402b4dfe;
        *(char *)((longlong)param_3 + 9) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar15 = *param_4;
      if (lVar15 == 0) {
LAB_1402b4e4d:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar15 + 0x50) < 1)) {
          uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
        }
        if (uVar13 == 0xffffffff) goto LAB_1402b4e4d;
        *(char *)((longlong)param_4 + 9) = (char)uVar13;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    if (*param_3 == 0) {
      if (*param_4 != 0) goto LAB_1402b4e79;
    }
    else if (*param_4 == 0) {
LAB_1402b4e79:
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,local_80);
      uVar13 = uVar12 | 0x102;
      local_1b4 = uVar13;
      if (local_70 == 0) {
LAB_1402b4f2e:
        bVar7 = false;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,local_c0);
        uVar13 = uVar12 | 0x906;
        local_1b4 = uVar13;
        if ((char)param_3[1] == '\0') {
          lVar15 = *param_3;
          if (lVar15 == 0) {
LAB_1402b4f09:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b4f09;
            *(char *)((longlong)param_3 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppcVar22 = (char *******)local_c0;
        if (0xf < local_a8) {
          pppppppcVar22 = local_c0[0];
        }
        if (*(char *)pppppppcVar22 != *(char *)((longlong)param_3 + 9)) goto LAB_1402b4f2e;
        bVar7 = true;
      }
      if ((uVar13 & 4) != 0) {
        uVar13 = uVar13 & 0xfffffffb;
        local_1b4 = uVar13;
        FUN_140017240(local_c0);
      }
      if ((uVar13 & 2) != 0) {
        uVar13 = uVar13 & 0xfffffffd;
        local_1b4 = uVar13;
        FUN_140017240(local_80);
      }
      if (bVar7) {
        lVar15 = *param_3;
        if (lVar15 == 0) {
LAB_1402b4fb2:
          *param_3 = 0;
          uVar11 = 1;
        }
        else {
          if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b4f9c:
            uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar27 = **(int **)(lVar15 + 0x50);
            if (iVar27 < 1) goto LAB_1402b4f9c;
            **(int **)(lVar15 + 0x50) = iVar27 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar15 + 0x38);
            **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar5 + 1);
            uVar12 = (uint)*pbVar5;
          }
          if (uVar12 == 0xffffffff) goto LAB_1402b4fb2;
          uVar11 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar11;
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,&local_100);
        local_1b4 = uVar13 | 0x400;
        local_1a0 = local_1b4;
        if (0xf < local_128) {
          if (DAT_140472230 != '\0') {
            pcVar18 = (char *)((longlong)local_140 + local_128 + 1);
            pcVar26 = (char *)((longlong)local_140 + local_130 + 1);
            pcVar20 = (char *)((ulonglong)(pcVar18 + 7) & 0xfffffffffffffff8);
            pcVar25 = pcVar20;
            if (pcVar26 <= pcVar20) {
              pcVar25 = pcVar26;
            }
            if (pcVar20 < pcVar18) {
              pcVar18 = pcVar20;
            }
            _guard_check_icall(local_140,pcVar20,pcVar25,pcVar18);
          }
          pppppppcVar22 = local_140;
          if ((0xfff < local_128 + 1) &&
             (pppppppcVar22 = (char *******)local_140[-1],
             (char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar22)))) {
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar23 = auStack_1e0;
            goto LAB_1402b592c;
          }
          thunk_FUN_14028af80(pppppppcVar22);
        }
        uVar9 = local_e8;
        uVar1 = local_f0;
        local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
        if (local_e8 < 0x10) {
          FUN_1404210f0(&local_140,&local_100,local_f0 + 1);
        }
        else {
          local_140 = (char *******)CONCAT71(uStack_ff,local_100);
        }
        local_128 = uVar9;
        local_130 = uVar1;
        local_f0 = 0;
        local_e8 = 0xf;
        local_100 = 0;
        FUN_140017240(&local_100);
        lVar16 = local_1a8;
        uVar12 = local_1a0;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,&local_100);
        uVar12 = uVar13 | 0x1008;
        local_1b4 = uVar12;
        if (local_f0 == 0) {
LAB_1402b5176:
          bVar7 = false;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,local_a0);
          uVar12 = uVar13 | 0x3018;
          local_1b4 = uVar12;
          if ((char)param_3[1] == '\0') {
            lVar15 = *param_3;
            if (lVar15 == 0) {
LAB_1402b5151:
              *param_3 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar15 + 0x50) < 1)) {
                uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                uVar13 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
              }
              if (uVar13 == 0xffffffff) goto LAB_1402b5151;
              *(char *)((longlong)param_3 + 9) = (char)uVar13;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppcVar22 = (char *******)local_a0;
          if (0xf < local_88) {
            pppppppcVar22 = local_a0[0];
          }
          if (*(char *)pppppppcVar22 != *(char *)((longlong)param_3 + 9)) goto LAB_1402b5176;
          bVar7 = true;
        }
        if ((uVar12 & 0x10) != 0) {
          uVar12 = uVar12 & 0xffffffef;
          local_1b4 = uVar12;
          FUN_140017240(local_a0);
        }
        if ((uVar12 & 8) != 0) {
          uVar12 = uVar12 & 0xfffffff7;
          local_1b4 = uVar12;
          FUN_140017240(&local_100);
        }
        if (!bVar7) {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,local_60);
          local_1b4 = uVar12 | 0x4020;
          if (local_50 == 0) {
LAB_1402b52a9:
            bVar7 = false;
          }
          else {
            (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,&local_100);
            local_1b4 = uVar12 | 0x14060;
            if (local_f0 != 0) goto LAB_1402b52a9;
            bVar7 = true;
          }
          uVar12 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar12 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar12;
            FUN_140017240(&local_100);
          }
          if ((uVar12 & 0x20) != 0) {
            uVar12 = uVar12 & 0xffffffdf;
            local_1b4 = uVar12;
            FUN_140017240(local_60);
          }
          lVar16 = local_1a8;
          if (bVar7) {
            local_1b8 = 1;
          }
          goto LAB_1402b583f;
        }
        lVar15 = *param_3;
        if (lVar15 == 0) {
LAB_1402b51fa:
          *param_3 = 0;
          uVar11 = 1;
        }
        else {
          if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b51e4:
            uVar13 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar27 = **(int **)(lVar15 + 0x50);
            if (iVar27 < 1) goto LAB_1402b51e4;
            **(int **)(lVar15 + 0x50) = iVar27 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar15 + 0x38);
            **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar5 + 1);
            uVar13 = (uint)*pbVar5;
          }
          if (uVar13 == 0xffffffff) goto LAB_1402b51fa;
          uVar11 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar11;
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14,&local_100);
        uVar12 = uVar12 | 0x8000;
        local_1b4 = uVar12;
        FUN_14000de40(&local_140,&local_100);
        FUN_140017240(&local_100);
        local_1b8 = 1;
        lVar16 = local_1a8;
      }
    }
    goto LAB_1402b583f;
  }
LAB_1402b592c:
  if (local_130 < 2) goto LAB_1402b5a51;
  pppppppcVar22 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar22 = local_140;
  }
  goto LAB_1402b5950;
LAB_1402b567b:
  pppppppcVar19 = (char *******)local_120;
  if (0xf < local_108) {
    pppppppcVar19 = local_120[0];
  }
  local_1b0 = local_1b0 & 0xff;
  if (pppppppcVar22 != (char *******)((longlong)pppppppcVar19 + local_110)) {
    local_1b0 = 1;
  }
  FUN_140017240(local_120);
  lVar16 = local_1a8;
  goto LAB_1402b583f;
LAB_1402b4672:
  if (lVar15 != 0) {
    pppppppcVar22 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar22 = local_160;
    }
    if (*(char *)((longlong)pppppppcVar22 + lVar15) < '\x01') {
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
  if ((char)local_1b0 != '\0') {
LAB_1402b4906:
    FUN_140017240(&local_160);
    FUN_140017240(local_e0);
    uVar14 = local_188;
    uVar28 = local_180;
    uVar12 = local_1a0;
    goto LAB_1402b583f;
  }
  while ((lVar15 != 0 && (bVar2 = *(byte *)pppppppbVar21, bVar2 != 0x7f))) {
    lVar15 = lVar15 + -1;
    if (lVar15 != 0) {
      pppppppcVar22 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar22 = local_160;
      }
      if (bVar2 == *(byte *)((longlong)pppppppcVar22 + lVar15)) goto LAB_1402b48df;
LAB_1402b4901:
      local_1b0 = CONCAT31(local_1b0._1_3_,1);
      goto LAB_1402b4906;
    }
LAB_1402b48df:
    if (lVar15 == 0) {
      pppppppcVar22 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar22 = local_160;
      }
      if ((char)bVar2 < *(char *)pppppppcVar22) goto LAB_1402b4901;
    }
    if ('\0' < (char)*(byte *)((longlong)pppppppbVar21 + 1)) {
      pppppppbVar21 = (byte *******)((longlong)pppppppbVar21 + 1);
    }
  }
  FUN_140017240(&local_160);
  uVar14 = local_188;
LAB_1402b49fa:
  iVar8 = local_190;
  iVar27 = 0;
  cVar10 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar14);
  if ((char)param_3[1] == '\0') {
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_1402b4b32:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4b32;
      *(char *)((longlong)param_3 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar15 = *param_4;
    if (lVar15 == 0) {
LAB_1402b4b81:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar15 + 0x50) < 1)) {
        uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b4b81;
      *(char *)((longlong)param_4 + 9) = (char)uVar12;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    if (*param_4 != 0) {
LAB_1402b4bae:
      if (cVar10 != '\0') {
        if ((char)param_3[1] == '\0') {
          if (lVar15 == 0) {
LAB_1402b4bf2:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar15 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar15 + 0x50) < 1)) {
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              uVar12 = (uint)*(byte *)**(undefined8 **)(lVar15 + 0x38);
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b4bf2;
            *(char *)((longlong)param_3 + 9) = (char)uVar12;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        lVar15 = local_1a8;
        if (*(char *)((longlong)param_3 + 9) == cVar10) {
LAB_1402b4c10:
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_1402b4c63:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1402b4c43:
              uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              iVar3 = **(int **)(lVar16 + 0x50);
              if (iVar3 < 1) goto LAB_1402b4c43;
              **(int **)(lVar16 + 0x50) = iVar3 + -1;
              pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
              **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
              uVar12 = (uint)*pbVar5;
            }
            if (uVar12 == 0xffffffff) goto LAB_1402b4c63;
            *(undefined1 *)(param_3 + 1) = 0;
            FUN_140097500(param_3);
          }
          if ((char)param_4[1] == '\0') {
            lVar16 = *param_4;
            if (lVar16 == 0) {
LAB_1402b4cb2:
              *param_4 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar16 + 0x50) < 1)) {
                uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                uVar12 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
              }
              if (uVar12 == 0xffffffff) goto LAB_1402b4cb2;
              *(char *)((longlong)param_4 + 9) = (char)uVar12;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar16 = *param_3;
          if (lVar16 == 0) {
            if (*param_4 == 0) goto LAB_1402b4cce;
LAB_1402b4cf9:
            if (iVar8 <= iVar27) goto LAB_1402b4cd8;
            if ((char)param_3[1] == '\0') {
              if (lVar16 == 0) {
LAB_1402b4d3a:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar16 + 0x50) < 1)) {
                  uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                }
                else {
                  uVar12 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
                }
                if (uVar12 == 0xffffffff) goto LAB_1402b4d3a;
                *(char *)((longlong)param_3 + 9) = (char)uVar12;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar16 = thunk_FUN_14028cf70(lVar15,lVar15 + 0xb,*(undefined1 *)((longlong)param_3 + 9))
            ;
            if (9 < (ulonglong)(lVar16 - lVar15)) goto LAB_1402b4cd3;
            FUN_1400534d0(local_198);
            iVar27 = iVar27 + 1;
            goto LAB_1402b4c10;
          }
          if (*param_4 == 0) goto LAB_1402b4cf9;
LAB_1402b4cce:
          if (iVar8 <= iVar27) goto LAB_1402b4cd8;
LAB_1402b4cd3:
          local_1b0 = CONCAT31(local_1b0._1_3_,1);
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402b4bae;
LAB_1402b4cd8:
  puVar29 = local_198;
  if (local_198[2] == 0) {
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
  }
  else {
    for (; iVar27 < iVar8; iVar27 = iVar27 + 1) {
      FUN_1400534d0(puVar29);
      uVar24 = local_1b8;
    }
  }
  FUN_140017240(local_e0);
  lVar16 = local_1a8;
  uVar28 = local_180;
  uVar12 = local_1a0;
LAB_1402b583f:
  puVar29 = local_198;
  local_180 = uVar28 + 1;
  if ((char)local_1b0 != '\0') goto code_r0x0001402b5852;
  goto LAB_1402b44b0;
LAB_1402b581a:
  lVar16 = local_1a8;
  uVar24 = local_1b8;
  if (acStack_18c[uVar28] == ' ') {
    uVar11 = (char)local_1b0;
    if (!bVar7) {
      uVar11 = 1;
    }
    local_1b0 = CONCAT31(local_1b0._1_3_,uVar11);
  }
  goto LAB_1402b583f;
code_r0x0001402b5852:
  FUN_140016ca0(local_198,0);
  puVar23 = auStack_1e8;
  goto LAB_1402b5a71;
LAB_1402b5950:
  pppppppcVar22 = (char *******)((longlong)pppppppcVar22 + 1);
  pppppppcVar19 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar19 = local_140;
  }
  if (pppppppcVar22 != (char *******)((longlong)pppppppcVar19 + local_130)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar23 + -8) = 0x1402b5978;
      FUN_140097500(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar23 + -8) = 0x1402b5988;
      FUN_140097500(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_1402b5995;
    }
    else if (*param_4 != 0) goto LAB_1402b5995;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar23 + -8) = 0x1402b59d9;
      FUN_140097500(param_3);
    }
    if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar22) goto LAB_1402b5995;
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_1402b5a38:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar15 + 0x38) == 0) {
LAB_1402b5a14:
        *(undefined8 *)(puVar23 + -8) = 0x1402b5a21;
        uVar12 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar27 = **(int **)(lVar15 + 0x50);
        if (iVar27 < 1) goto LAB_1402b5a14;
        **(int **)(lVar15 + 0x50) = iVar27 + -1;
        pbVar5 = (byte *)**(longlong **)(lVar15 + 0x38);
        **(longlong **)(lVar15 + 0x38) = (longlong)(pbVar5 + 1);
        uVar12 = (uint)*pbVar5;
      }
      if (uVar12 == 0xffffffff) goto LAB_1402b5a38;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1402b5950;
  }
LAB_1402b5995:
  pppppppcVar19 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar19 = local_140;
  }
  if (pppppppcVar22 == (char *******)((longlong)pppppppcVar19 + local_130)) {
LAB_1402b5a51:
    puVar29 = *(undefined8 **)(puVar23 + 0x50);
    if (puVar23[0x30] != '\0') {
      *(undefined8 *)(puVar23 + -8) = 0x1402b5a70;
      FUN_140038b70(puVar29,0,1,0x2d);
    }
  }
  else {
    puVar29 = *(undefined8 **)(puVar23 + 0x50);
    *(undefined8 *)(puVar23 + -8) = 0x1402b59bf;
    FUN_140016ca0(puVar29,0);
  }
LAB_1402b5a71:
  *(undefined8 *)(puVar23 + -8) = 0x1402b5a7a;
  FUN_140017240(&local_140);
  *(undefined8 *)(puVar23 + -8) = 0x1402b5a8c;
  return puVar29;
}

