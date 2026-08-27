// Function: FUN_1402970c0
// Addr: 1402970c0
// Size: 7579 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140297f83) */

ushort FUN_1402970c0(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  uVar10 = FUN_14029d190(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)
            (uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_14042bedd,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_14029d730(param_5);
  local_d0 = lVar11;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar11,local_a0);
  uVar27 = (uint7)((ulonglong)unaff_R12 >> 8);
  if (local_90 == 0) {
    sVar7 = 0;
    uVar24 = (ulonglong)uVar27 << 8;
LAB_14029724e:
    local_f8 = (byte)uVar24;
  }
  else {
    sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar11);
    uVar24 = (ulonglong)uVar27 << 8;
    local_f8 = 0;
    if (local_90 != 0) {
      lVar11 = *param_3;
LAB_1402971a8:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1402971e6:
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
          if (sVar9 == -1) goto LAB_1402971e6;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_140297230:
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
          if (sVar9 == -1) goto LAB_140297230;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_14029724e;
      }
      else if (*param_4 != 0) goto LAB_14029724e;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402972d1:
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
          if (sVar9 == -1) goto LAB_1402972d1;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029724e;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_140297338:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        uVar24 = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140297315:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar29 = **(int **)(lVar11 + 0x50);
          if (iVar29 < 1) goto LAB_140297315;
          **(int **)(lVar11 + 0x50) = iVar29 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_140297338;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
      }
      goto LAB_1402971a8;
    }
  }
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029736e:
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
      if (sVar9 == -1) goto LAB_14029736e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402973bc:
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
      if (sVar9 == -1) goto LAB_1402973bc;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1402973e3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140297425:
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
          if (sVar9 == -1) goto LAB_140297425;
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
LAB_140297471:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar29 = **(int **)(lVar13 + 0x50);
            if (iVar29 < 1) goto LAB_140297471;
            **(int **)(lVar13 + 0x50) = iVar29 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1402974af;
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
  else if (*param_4 == 0) goto LAB_1402973e3;
LAB_1402974af:
  *param_1 = 0x30;
  pcVar30 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar30;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029750d:
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
      if (sVar9 == -1) goto LAB_14029750d;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_14029755e:
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
      if (sVar9 == -1) goto LAB_14029755e;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_1402977d2;
  }
  else if (*param_4 != 0) goto LAB_1402977d2;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_1402975cb:
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
      if (sVar9 == -1) goto LAB_1402975cb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_1402977d2;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140297676:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_14029761c:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar29 = **(int **)(lVar13 + 0x50);
      if (iVar29 < 1) goto LAB_14029761c;
      **(int **)(lVar13 + 0x50) = iVar29 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140297676;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_140297676;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_140297676;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402976c7:
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
      if (sVar9 == -1) goto LAB_1402976c7;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1402976e3:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_140297740:
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
          if (sVar9 == -1) goto LAB_140297740;
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
LAB_14029779a:
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
            if (sVar9 == -1) goto LAB_14029779a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_1402977d2;
        }
      }
      local_f6 = '\x01';
      FUN_14029ddc0(param_3);
      *pcVar30 = 'x';
      local_f0 = param_1 + 2;
LAB_1402977d2:
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
LAB_1402979e8:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_140297a29:
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
            if (sVar9 == -1) goto LAB_140297a29;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_140297a72:
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
            if (sVar9 == -1) goto LAB_140297a72;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_140297a8a;
        }
        else if (*param_4 != 0) goto LAB_140297a8a;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_140297b2e:
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
            if (sVar9 == -1) goto LAB_140297b2e;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297a8a;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_140297b93:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = 1;
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140297b71:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140297b71;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_140297b93;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = 1;
        }
        goto LAB_1402979e8;
      }
LAB_140297804:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_140297849:
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
          if (sVar7 == -1) goto LAB_140297849;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_14029789b:
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
          if (sVar7 == -1) goto LAB_14029789b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_14029805c;
      }
      else if (*param_4 != 0) goto LAB_14029805c;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140297908:
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
          if (sVar7 == -1) goto LAB_140297908;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_14029805c;
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
LAB_1402979d2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402979b2:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_1402979b2;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_1402979d2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_140297804;
    }
  }
  else if (*param_4 == 0) goto LAB_1402976e3;
  *pcVar30 = '\0';
  uVar22 = (short)uVar24 << 8 | 10;
  goto LAB_140298e28;
LAB_140297a8a:
  FUN_140016940(local_c0,1,uVar10);
  uVar24 = local_c8;
  lVar13 = 0;
  uVar12 = (ulonglong)local_e8;
LAB_140297ab0:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140297bc1:
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
      if (sVar9 == -1) goto LAB_140297bc1;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_140297c13:
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
      if (sVar9 == -1) goto LAB_140297c13;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140297c2f;
  }
  else if (*param_4 != 0) goto LAB_140297c2f;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140297ca8:
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
      if (sVar9 == -1) goto LAB_140297ca8;
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
LAB_140297d8d:
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
        if (sVar9 == -1) goto LAB_140297d8d;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297c2f;
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
LAB_140297e1e:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140297dfe:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_140297dfe;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140297e1e;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140297ab0;
LAB_140297c2f:
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
LAB_140297e40:
  if ((char)param_3[1] == '\0') {
    lVar23 = *param_3;
    if (lVar23 == 0) {
LAB_140297e81:
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
      if (sVar9 == -1) goto LAB_140297e81;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar23 = *param_4;
    if (lVar23 == 0) {
LAB_140297ecf:
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
      if (sVar9 == -1) goto LAB_140297ecf;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar23 = *param_3;
  if (lVar23 == 0) {
    if (*param_4 == 0) goto LAB_140297ef3;
  }
  else if (*param_4 != 0) goto LAB_140297ef3;
  if ((char)param_3[1] == '\0') {
    if (lVar23 == 0) {
LAB_140297fcf:
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
      if (sVar9 == -1) goto LAB_140297fcf;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297ef3;
  lVar23 = *param_3;
  if (lVar23 == 0) {
LAB_140298039:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = 1;
  }
  else {
    if (**(longlong **)(lVar23 + 0x38) == 0) {
LAB_140298017:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar23 + 0x50);
      if (iVar1 < 1) goto LAB_140298017;
      **(int **)(lVar23 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar23 + 0x38);
      **(longlong **)(lVar23 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140298039;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = 1;
  }
  goto LAB_140297e40;
LAB_140297ef3:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar25 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  uVar24 = (ulonglong)local_e8;
  if (local_f8 == 0) {
LAB_140297f25:
    do {
      do {
        if (lVar13 == 0) goto LAB_140298053;
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
        if (lVar13 != 0) goto LAB_140297f25;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = 1;
  }
LAB_140298053:
  thunk_FUN_140017240(local_c0);
LAB_14029805c:
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
LAB_1402980d4:
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
      if (sVar7 == -1) goto LAB_1402980d4;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140298126:
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
      if (sVar7 == -1) goto LAB_140298126;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar30 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1402981a3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402981e5:
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
          if (sVar7 == -1) goto LAB_1402981e5;
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
LAB_140298252:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140298252;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_140298149;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402981a3;
LAB_140298149:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar29 == 0) {
LAB_140298163:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_140298299:
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
        if (sVar9 == -1) goto LAB_140298299;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1402982e3:
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
        if (sVar9 == -1) goto LAB_1402982e3;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1402982fb;
    }
    else if (*param_4 != 0) goto LAB_1402982fb;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_140298391:
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
        if (sVar9 == -1) goto LAB_140298391;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1402982fb;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140298401:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402983de:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_1402983de;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_140298401;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_140298163;
  }
LAB_140298313:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029842a:
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
      if (sVar7 == -1) goto LAB_14029842a;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029847c:
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
      if (sVar7 == -1) goto LAB_14029847c;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1402984a0;
  }
  else if (*param_4 != 0) goto LAB_1402984a0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1402985a5:
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
      if (sVar7 == -1) goto LAB_1402985a5;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_1402984a0;
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
LAB_140298659:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298639:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_140298639;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_140298659;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140298313;
LAB_1402982fb:
  uVar24 = (ulonglong)local_e8;
  pcVar30 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_140298313;
LAB_1402984a0:
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
      if (cVar18 != cVar6) goto LAB_1402984e3;
    }
    *pcVar28 = cVar18 + '\x01';
  }
LAB_1402984e3:
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
LAB_140298686:
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
        if (sVar8 == -1) goto LAB_140298686;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_1402986d2:
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
        if (sVar8 == -1) goto LAB_1402986d2;
        *(short *)((longlong)param_4 + 10) = sVar8;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_140298ace;
    }
    else if (*param_4 != 0) goto LAB_140298ace;
    cVar21 = (char)param_3[1];
    if (cVar21 == '\0') {
      if (lVar11 == 0) {
LAB_14029873c:
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
        if (sVar8 == -1) goto LAB_14029873c;
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
LAB_140298790:
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
          if (sVar8 == -1) goto LAB_140298790;
          *(short *)((longlong)param_3 + 10) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (sVar8 != sVar9) {
LAB_140298ace:
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
LAB_140298af4:
        lVar19 = lVar11;
        if ((((-1 < lVar23) && (-1 < lVar13)) &&
            ((lVar11 <= lVar23 || ((longlong)uVar24 <= lVar13)))) ||
           (((lVar23 < 1 && (lVar13 < 1)) &&
            ((lVar19 = -lVar11, lVar23 <= lVar19 || (lVar13 <= (longlong)-uVar24))))))
        goto LAB_140298d71;
        lVar19 = -lVar23;
        if (-lVar23 < 0) {
          lVar19 = lVar23;
        }
        if (lVar19 <= lVar11) {
          lVar20 = -lVar13;
          if (-lVar13 < 0) {
            lVar20 = lVar13;
          }
          if (lVar20 <= (longlong)uVar24) goto LAB_140298d4b;
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
        goto LAB_140298af4;
      }
    }
    bVar4 = false;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140298832:
      *param_3 = 0;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402987de:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_1402987de;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 == -1) goto LAB_140298832;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = *param_3;
      if (lVar11 == 0) goto LAB_140298832;
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_140298832;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    bVar5 = false;
    *(undefined1 *)(param_3 + 1) = 1;
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_140298881:
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
        if (sVar7 == -1) goto LAB_140298881;
        *(short *)((longlong)param_4 + 10) = sVar7;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    sVar7 = local_f4;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_1402989c0;
    }
    else if (*param_4 != 0) goto LAB_1402989c0;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_1402988e9:
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
        if (sVar7 == -1) goto LAB_1402988e9;
        *(short *)((longlong)param_3 + 10) = sVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != local_e4) {
      sVar7 = local_f4;
      if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_1402989c0;
      bVar4 = true;
      lVar11 = *param_3;
      if (lVar11 != 0) {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298991:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar29 = **(int **)(lVar11 + 0x50);
          if (iVar29 < 1) goto LAB_140298991;
          **(int **)(lVar11 + 0x50) = iVar29 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          sVar7 = local_f4;
          goto LAB_1402989c0;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      sVar7 = local_f4;
      goto LAB_1402989c0;
    }
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029892d:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_14029892d;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_1402989c0;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
LAB_1402989c0:
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_140298a00:
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
        if (sVar9 == -1) goto LAB_140298a00;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_140298a4d:
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
        if (sVar9 == -1) goto LAB_140298a4d;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    cVar26 = local_f6;
    lVar23 = local_d0;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_140298a85;
    }
    else if (*param_4 != 0) goto LAB_140298a85;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_140298beb:
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
        if (sVar9 == -1) goto LAB_140298beb;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar23 = local_d0;
    cVar26 = local_f6;
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140298a85;
    bVar5 = true;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140298c59:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298c37:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar29 = **(int **)(lVar11 + 0x50);
        if (iVar29 < 1) goto LAB_140298c37;
        **(int **)(lVar11 + 0x50) = iVar29 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_140298c59;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1402989c0;
  }
  goto LAB_140298e23;
LAB_140298a85:
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_140298ab8;
  }
  else if (*param_4 != 0) goto LAB_140298ab8;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  lVar11 = thunk_FUN_14028d070(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar24 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar24) goto LAB_140298ab8;
  if ((lVar23 < 0xccccccccccccccc) || ((lVar23 == 0xccccccccccccccc && ((longlong)uVar24 < 8)))) {
    lVar23 = uVar24 + lVar23 * 10;
  }
  else {
    lVar23 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140298d23:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298d03:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar29 = **(int **)(lVar11 + 0x50);
      if (iVar29 < 1) goto LAB_140298d03;
      **(int **)(lVar11 + 0x50) = iVar29 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_140298d23;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140298a85;
LAB_140298d4b:
  if (cVar26 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar23;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_140298d71:
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
  goto LAB_140298e28;
LAB_140298ab8:
  if (bVar4) {
    lVar23 = -lVar23;
  }
  pcVar30 = local_f0;
  if (bVar5) goto LAB_140298ace;
LAB_140298e23:
  uVar22 = 0;
LAB_140298e28:
  thunk_FUN_140017240(local_a0);
  return uVar22;
}

