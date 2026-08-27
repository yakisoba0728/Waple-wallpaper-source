// Function: FUN_140298e60
// Addr: 140298e60
// Size: 7579 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140299d23) */

ushort FUN_140298e60(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
                    undefined8 param_5)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  char ******ppppppcVar16;
  undefined8 *puVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  char cVar21;
  ushort uVar22;
  longlong lVar23;
  ulonglong uVar24;
  char ******ppppppcVar25;
  char cVar26;
  undefined8 unaff_R12;
  uint7 uVar27;
  char *pcVar28;
  int iVar29;
  char *pcVar30;
  undefined1 auStack_128 [48];
  byte local_f8;
  char local_f7;
  char local_f6;
  char local_f5;
  short local_f4;
  char *local_f0;
  uint local_e8;
  short local_e4;
  short local_e2;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  char *****local_c0 [3];
  ulonglong local_a8;
  char *****local_a0 [2];
  longlong local_90;
  ulonglong local_88;
  short local_80 [22];
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  local_e0 = param_2;
  uVar10 = FUN_14000f450(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)
            (uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_14042bf1d,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_1400118f0(param_5);
  local_d0 = lVar11;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar11,local_a0);
  uVar27 = (uint7)((ulonglong)unaff_R12 >> 8);
  if (local_90 == 0) {
    sVar7 = 0;
    uVar24 = (ulonglong)uVar27 << 8;
LAB_140298fee:
    local_f8 = (byte)uVar24;
  }
  else {
    sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar11);
    uVar24 = (ulonglong)uVar27 << 8;
    local_f8 = 0;
    if (local_90 != 0) {
      lVar11 = *param_3;
LAB_140298f48:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_140298f86:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_140298f86;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_140298fd0:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_140298fd0;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_140298fee;
      }
      else if (*param_4 != 0) goto LAB_140298fee;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140299071:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_140299071;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140298fee;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1402990d8:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        uVar24 = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402990b5:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar29 = **(int **)(lVar11 + 0x50);
          if (iVar29 < 1) goto LAB_1402990b5;
          **(int **)(lVar11 + 0x50) = iVar29 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_1402990d8;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
      }
      goto LAB_140298f48;
    }
  }
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029910e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029910e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_14029915c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029915c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140299183:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402991c5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1402991c5;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == local_e4) {
        *param_1 = 0x2b;
        param_1 = param_1 + 1;
        lVar13 = *param_3;
        if (lVar13 != 0) {
          if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140299211:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar29 = **(int **)(lVar13 + 0x50);
            if (iVar29 < 1) goto LAB_140299211;
            **(int **)(lVar13 + 0x50) = iVar29 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_14029924f;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else if (*(short *)((longlong)param_3 + 10) == local_e2) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        FUN_14029ddc0(param_3);
      }
    }
  }
  else if (*param_4 == 0) goto LAB_140299183;
LAB_14029924f:
  *param_1 = 0x30;
  pcVar30 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar30;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402992ad:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1402992ad;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402992fe:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1402992fe;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140299572;
  }
  else if (*param_4 != 0) goto LAB_140299572;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_14029936b:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029936b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_140299572;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140299416:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402993bc:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar29 = **(int **)(lVar13 + 0x50);
      if (iVar29 < 1) goto LAB_1402993bc;
      **(int **)(lVar13 + 0x50) = iVar29 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140299416;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_140299416;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_140299416;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299467:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299467;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140299483:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_1402994e0:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1402994e0;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar21 = '\x01';
      }
      sVar9 = *(short *)((longlong)param_3 + 10);
      if (sVar9 != local_4e) {
        if (cVar21 == '\0') {
          lVar13 = *param_3;
          if (lVar13 == 0) {
LAB_14029953a:
            *param_3 = 0;
            sVar9 = *(short *)((longlong)param_3 + 10);
          }
          else {
            if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar13 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
            }
            if (sVar9 == -1) goto LAB_14029953a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_140299572;
        }
      }
      local_f6 = '\x01';
      FUN_14029ddc0(param_3);
      *pcVar30 = 'x';
      local_f0 = param_1 + 2;
LAB_140299572:
      uVar24 = uVar24 & 0xffffffffffffff00;
      local_e8 = (uint)uVar24;
      iVar29 = 0;
      local_d8 = 0;
      uVar12 = 10;
      if (local_f6 != '\0') {
        uVar12 = 0x16;
      }
      local_c8 = uVar12;
      if (local_90 != 0) {
LAB_140299788:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_1402997c9:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_1402997c9;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_140299812:
            *param_4 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_140299812;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_14029982a;
        }
        else if (*param_4 != 0) goto LAB_14029982a;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_1402998ce:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_1402998ce;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029982a;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_140299933:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = 1;
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140299911:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140299911;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_140299933;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = 1;
        }
        goto LAB_140299788;
      }
LAB_1402995a4:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402995e9:
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
          if (sVar7 == -1) goto LAB_1402995e9;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_14029963b:
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
          if (sVar7 == -1) goto LAB_14029963b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_140299dfc;
      }
      else if (*param_4 != 0) goto LAB_140299dfc;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402996a8:
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
          if (sVar7 == -1) goto LAB_1402996a8;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_140299dfc;
      if (iVar29 < local_e0) {
        if ((uVar14 != 0) || (iVar29 != 0)) {
          *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
          local_f0 = local_f0 + 1;
          iVar29 = iVar29 + 1;
        }
      }
      else {
        local_d8 = local_d8 + 1;
        if (uVar14 != 0) {
          uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
          local_e8 = (uint)uVar24;
        }
      }
      local_f7 = '\x01';
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_140299772:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140299752:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_140299752;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_140299772;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402995a4;
    }
  }
  else if (*param_4 == 0) goto LAB_140299483;
  *pcVar30 = '\0';
  uVar22 = (short)uVar24 << 8 | 10;
  goto LAB_14029abc8;
LAB_14029982a:
  FUN_140016940(local_c0,1,uVar10);
  uVar24 = local_c8;
  lVar13 = 0;
  uVar12 = (ulonglong)local_e8;
LAB_140299850:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140299961:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299961;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1402999b3:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1402999b3;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1402999cf;
  }
  else if (*param_4 != 0) goto LAB_1402999cf;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140299a48:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299a48;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar14 < uVar24) {
    local_f7 = '\x01';
    if (iVar29 < local_e0) {
      if ((uVar14 != 0) || (iVar29 != 0)) {
        *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
        local_f0 = local_f0 + 1;
        iVar29 = iVar29 + 1;
      }
    }
    else {
      local_d8 = local_d8 + 1;
      if (uVar14 != 0) {
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      }
    }
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) != '\x7f') {
      ppppppcVar15 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar15 = (char ******)local_c0[0];
      }
      *(char *)((longlong)ppppppcVar15 + lVar13) =
           *(char *)((longlong)ppppppcVar15 + lVar13) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_140299b2d:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_140299b2d;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1402999cf;
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) == '\0') {
      local_f8 = 1;
    }
    else {
      FUN_1400534d0(local_c0);
      lVar13 = lVar13 + 1;
    }
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140299bbe:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140299b9e:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_140299b9e;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140299bbe;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140299850;
LAB_1402999cf:
  lVar11 = local_d0;
  local_e8 = (uint)uVar12;
  if (lVar13 != 0) {
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) < '\x01') {
      local_f8 = 1;
    }
    else {
      lVar13 = lVar13 + 1;
    }
  }
LAB_140299be0:
  if ((char)param_3[1] == '\0') {
    lVar23 = *param_3;
    if (lVar23 == 0) {
LAB_140299c21:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar23 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar23 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar23 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299c21;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar23 = *param_4;
    if (lVar23 == 0) {
LAB_140299c6f:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar23 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar23 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar23 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299c6f;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar23 = *param_3;
  if (lVar23 == 0) {
    if (*param_4 == 0) goto LAB_140299c93;
  }
  else if (*param_4 != 0) goto LAB_140299c93;
  if ((char)param_3[1] == '\0') {
    if (lVar23 == 0) {
LAB_140299d6f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar23 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar23 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar23 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140299d6f;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140299c93;
  lVar23 = *param_3;
  if (lVar23 == 0) {
LAB_140299dd9:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = 1;
  }
  else {
    if (**(longlong **)(lVar23 + 0x38) == 0) {
LAB_140299db7:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar23 + 0x50);
      if (iVar1 < 1) goto LAB_140299db7;
      **(int **)(lVar23 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar23 + 0x38);
      **(longlong **)(lVar23 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140299dd9;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = 1;
  }
  goto LAB_140299be0;
LAB_140299c93:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar25 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  uVar24 = (ulonglong)local_e8;
  if (local_f8 == 0) {
LAB_140299cc5:
    do {
      do {
        if (lVar13 == 0) goto LAB_140299df3;
        if (ppppppcVar15 != ppppppcVar25) {
          cVar21 = *(char *)ppppppcVar15;
          ppppppcVar15 = (char ******)((longlong)ppppppcVar15 + 1);
        }
        lVar13 = lVar13 + -1;
      } while (0x7d < (byte)(cVar21 - 1U));
      if (lVar13 != 0) {
        ppppppcVar16 = local_c0;
        if (0xf < local_a8) {
          ppppppcVar16 = (char ******)local_c0[0];
        }
        if (*(char *)((longlong)ppppppcVar16 + lVar13) != cVar21) break;
        if (lVar13 != 0) goto LAB_140299cc5;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = 1;
  }
LAB_140299df3:
  thunk_FUN_140017240(local_c0);
LAB_140299dfc:
  if (((local_f6 != '\0') && (local_f7 != '\0')) && (iVar29 == 0)) {
    *local_f0 = '0';
    local_f0 = local_f0 + 1;
  }
  puVar17 = (undefined8 *)FUN_1402ca9c0();
  cVar21 = *(char *)*puVar17;
  local_f5 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140299e74:
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
      if (sVar7 == -1) goto LAB_140299e74;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299ec6:
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
      if (sVar7 == -1) goto LAB_140299ec6;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar30 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140299f43:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140299f85:
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
          if (sVar7 == -1) goto LAB_140299f85;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      sVar7 = *(short *)((longlong)param_3 + 10);
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar11);
      pcVar30 = local_f0;
      if (sVar7 == sVar9) {
        *local_f0 = cVar21;
        pcVar30 = local_f0 + 1;
        lVar11 = *param_3;
        local_f0 = pcVar30;
        if (lVar11 != 0) {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140299ff2:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140299ff2;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_140299ee9;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_140299f43;
LAB_140299ee9:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar29 == 0) {
LAB_140299f03:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_14029a039:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a039;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_14029a083:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a083;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_14029a09b;
    }
    else if (*param_4 != 0) goto LAB_14029a09b;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_14029a131:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a131;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029a09b;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029a1a1:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_14029a17e:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_14029a17e;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_14029a1a1;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_140299f03;
  }
LAB_14029a0b3:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a1ca:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_14029a1ca;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029a21c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_14029a21c;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14029a240;
  }
  else if (*param_4 != 0) goto LAB_14029a240;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14029a345:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_14029a345;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_14029a240;
  if (iVar29 < local_e0) {
    *pcVar30 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
    pcVar30 = pcVar30 + 1;
    iVar29 = iVar29 + 1;
  }
  else {
    uVar24 = uVar24 & 0xff;
    if (uVar14 != 0) {
      uVar24 = 1;
    }
  }
  lVar11 = *param_3;
  cVar21 = '\x01';
  if (lVar11 == 0) {
LAB_14029a3f9:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a3d9:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_14029a3d9;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_14029a3f9;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_14029a0b3;
LAB_14029a09b:
  uVar24 = (ulonglong)local_e8;
  pcVar30 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_14029a0b3;
LAB_14029a240:
  cVar26 = local_f6;
  if ((char)uVar24 != '\0') {
    pcVar28 = pcVar30 + -1;
    cVar18 = *pcVar28;
    if (cVar18 == local_f5) {
      pcVar28 = pcVar30 + -2;
      cVar18 = *pcVar28;
    }
    if (cVar18 != '0') {
      cVar6 = '5';
      if (local_f6 != '\0') {
        cVar6 = '8';
      }
      if (cVar18 != cVar6) goto LAB_14029a283;
    }
    *pcVar28 = cVar18 + '\x01';
  }
LAB_14029a283:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar30;
  if (cVar21 != '\0') {
    lVar23 = 0;
    local_d0 = 0;
    sVar7 = *(short *)((longlong)local_80 + lVar11);
    sVar9 = *(short *)((longlong)local_80 + lVar13);
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_14029a426:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_14029a426;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_14029a472:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_14029a472;
        *(short *)((longlong)param_4 + 10) = sVar8;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_14029a86e;
    }
    else if (*param_4 != 0) goto LAB_14029a86e;
    cVar21 = (char)param_3[1];
    if (cVar21 == '\0') {
      if (lVar11 == 0) {
LAB_14029a4dc:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_14029a4dc;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
      cVar21 = '\x01';
    }
    sVar8 = *(short *)((longlong)param_3 + 10);
    if (sVar8 != sVar7) {
      if (cVar21 == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_14029a530:
          *param_3 = 0;
          sVar8 = *(short *)((longlong)param_3 + 10);
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar8 == -1) goto LAB_14029a530;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (sVar8 != sVar9) {
LAB_14029a86e:
        lVar11 = 0x44c;
        if (cVar26 != '\0') {
          lVar11 = 0x1068;
        }
        uVar3 = 0x44c;
        if (cVar26 != '\0') {
          uVar3 = 0x41a;
        }
        uVar24 = (ulonglong)uVar3;
        lVar13 = local_d8;
LAB_14029a894:
        lVar19 = lVar11;
        if ((((-1 < lVar23) && (-1 < lVar13)) &&
            ((lVar11 <= lVar23 || ((longlong)uVar24 <= lVar13)))) ||
           (((lVar23 < 1 && (lVar13 < 1)) &&
            ((lVar19 = -lVar11, lVar23 <= lVar19 || (lVar13 <= (longlong)-uVar24))))))
        goto LAB_14029ab11;
        lVar19 = -lVar23;
        if (-lVar23 < 0) {
          lVar19 = lVar23;
        }
        if (lVar19 <= lVar11) {
          lVar20 = -lVar13;
          if (-lVar13 < 0) {
            lVar20 = lVar13;
          }
          if (lVar20 <= (longlong)uVar24) goto LAB_14029aaeb;
        }
        if (cVar26 != '\0') {
          lVar20 = lVar19 + -1;
          if (lVar20 < 0) {
            lVar20 = lVar19 + 2;
          }
          lVar19 = (lVar20 >> 2) + 1;
        }
        lVar20 = -local_d8;
        if (-local_d8 < 0) {
          lVar20 = local_d8;
        }
        if (lVar20 < lVar19) {
          lVar19 = lVar20;
        }
        if (lVar23 < 0) {
          lVar20 = lVar19 * 4;
          if (cVar26 == '\0') {
            lVar20 = lVar19;
          }
          lVar23 = lVar23 + lVar20;
          lVar13 = lVar13 - lVar19;
        }
        else {
          lVar20 = lVar19 * 4;
          if (cVar26 == '\0') {
            lVar20 = lVar19;
          }
          lVar23 = lVar23 - lVar20;
          lVar13 = lVar13 + lVar19;
        }
        goto LAB_14029a894;
      }
    }
    bVar4 = false;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a5d2:
      *param_3 = 0;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a57e:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_14029a57e;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 == -1) goto LAB_14029a5d2;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = *param_3;
      if (lVar11 == 0) goto LAB_14029a5d2;
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_14029a5d2;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    bVar5 = false;
    *(undefined1 *)(param_3 + 1) = 1;
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_14029a621:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar7 == -1) goto LAB_14029a621;
        *(short *)((longlong)param_4 + 10) = sVar7;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    sVar7 = local_f4;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_14029a760;
    }
    else if (*param_4 != 0) goto LAB_14029a760;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_14029a689:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar7 == -1) goto LAB_14029a689;
        *(short *)((longlong)param_3 + 10) = sVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != local_e4) {
      sVar7 = local_f4;
      if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_14029a760;
      bVar4 = true;
      lVar11 = *param_3;
      if (lVar11 != 0) {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a731:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar29 = **(int **)(lVar11 + 0x50);
          if (iVar29 < 1) goto LAB_14029a731;
          **(int **)(lVar11 + 0x50) = iVar29 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          sVar7 = local_f4;
          goto LAB_14029a760;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      sVar7 = local_f4;
      goto LAB_14029a760;
    }
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a6cd:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_14029a6cd;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_14029a760;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
LAB_14029a760:
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_14029a7a0:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a7a0;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_14029a7ed:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a7ed;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    cVar26 = local_f6;
    lVar23 = local_d0;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_14029a825;
    }
    else if (*param_4 != 0) goto LAB_14029a825;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_14029a98b:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_14029a98b;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar23 = local_d0;
    cVar26 = local_f6;
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029a825;
    bVar5 = true;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a9f9:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a9d7:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_14029a9d7;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_14029a9f9;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_14029a760;
  }
  goto LAB_14029abc3;
LAB_14029a825:
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_14029a858;
  }
  else if (*param_4 != 0) goto LAB_14029a858;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  lVar11 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar24 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar24) goto LAB_14029a858;
  if ((lVar23 < 0xccccccccccccccc) || ((lVar23 == 0xccccccccccccccc && ((longlong)uVar24 < 8)))) {
    lVar23 = uVar24 + lVar23 * 10;
  }
  else {
    lVar23 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_14029aac3:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029aaa3:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar29 = **(int **)(lVar11 + 0x50);
      if (iVar29 < 1) goto LAB_14029aaa3;
      **(int **)(lVar11 + 0x50) = iVar29 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_14029aac3;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_14029a825;
LAB_14029aaeb:
  if (cVar26 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar23;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_14029ab11:
  if (lVar19 != 0) {
    cVar21 = 'e';
    if (cVar26 != '\0') {
      cVar21 = 'p';
    }
    *pcVar30 = cVar21;
    pcVar28 = pcVar30 + 1;
    if (lVar19 < 0) {
      *pcVar28 = '-';
      pcVar28 = pcVar30 + 2;
    }
    lVar11 = -lVar19;
    pcVar30 = pcVar28;
    if (-lVar19 < 0) {
      lVar11 = lVar19;
    }
    while (lVar11 != 0) {
      *pcVar30 = (char)lVar11 + (char)(lVar11 / 10) * -10 + '0';
      lVar11 = lVar11 / 10;
      pcVar30 = pcVar30 + 1;
    }
    thunk_FUN_14028e3e0(pcVar28,pcVar30);
  }
  *pcVar30 = '\0';
  uVar22 = 10;
  if (cVar26 != '\0') {
    uVar22 = 0x10;
  }
  uVar22 = uVar22 | (ushort)local_f8 << 8;
  goto LAB_14029abc8;
LAB_14029a858:
  if (bVar4) {
    lVar23 = -lVar23;
  }
  pcVar30 = local_f0;
  if (bVar5) goto LAB_14029a86e;
LAB_14029abc3:
  uVar22 = 0;
LAB_14029abc8:
  thunk_FUN_140017240(local_a0);
  return uVar22;
}

