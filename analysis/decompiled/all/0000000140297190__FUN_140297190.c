// Function: FUN_140297190
// Addr: 140297190
// Size: 7420 bytes


/* WARNING: Removing unreachable block (ram,0x000140298053) */

void FUN_140297190(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  longlong lVar22;
  char ******ppppppcVar23;
  char cVar24;
  undefined8 unaff_R12;
  uint7 uVar26;
  ulonglong uVar25;
  char *pcVar27;
  int iVar28;
  char *pcVar29;
  undefined1 auStack_128 [48];
  char local_f8;
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
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  local_e0 = param_2;
  uVar10 = FUN_14029d260(param_5);
  (*(code *)PTR_FUN_140426bb8)(uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_14042bfad,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_14029d800(param_5);
  local_d0 = lVar11;
  (*(code *)PTR_FUN_140426bb8)(lVar11,local_a0);
  uVar26 = (uint7)((ulonglong)unaff_R12 >> 8);
  if (local_90 == 0) {
    sVar7 = 0;
    cVar21 = '\0';
  }
  else {
    sVar7 = (*(code *)PTR_FUN_140426bb8)(lVar11);
    cVar24 = '\0';
    local_f8 = '\0';
    cVar21 = local_f8;
    if (local_90 != 0) {
      lVar11 = *param_3;
LAB_140297278:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1402972b6:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1402972b6;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_140297300:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_140297300;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      cVar21 = cVar24;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_140297323;
      }
      else if (*param_4 != 0) goto LAB_140297323;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402973a1:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1402973a1;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297323;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_140297408:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar24 = '\x01';
        uVar26 = 0;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402973e5:
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar28 = **(int **)(lVar11 + 0x50);
          if (iVar28 < 1) goto LAB_1402973e5;
          **(int **)(lVar11 + 0x50) = iVar28 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_140297408;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar24 = '\x01';
      }
      goto LAB_140297278;
    }
  }
LAB_140297323:
  local_f8 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029743e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029743e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_14029748c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029748c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1402974b3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402974f5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1402974f5;
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
LAB_140297541:
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar28 = **(int **)(lVar13 + 0x50);
            if (iVar28 < 1) goto LAB_140297541;
            **(int **)(lVar13 + 0x50) = iVar28 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_14029757f;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else if (*(short *)((longlong)param_3 + 10) == local_e2) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        func_0x00014029de90(param_3);
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1402974b3;
LAB_14029757f:
  *param_1 = 0x30;
  pcVar29 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar29;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402975dd:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1402975dd;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_14029762e:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029762e;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_1402978a2;
  }
  else if (*param_4 != 0) goto LAB_1402978a2;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_14029769b:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029769b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_1402978a2;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140297746:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402976ec:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_1402976ec;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140297746;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_140297746;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_140297746;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140297797:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297797;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1402977b3:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_140297810:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_140297810;
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
LAB_14029786a:
            *param_3 = 0;
            sVar9 = *(short *)((longlong)param_3 + 10);
          }
          else {
            if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar13 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
            }
            if (sVar9 == -1) goto LAB_14029786a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_1402978a2;
        }
      }
      local_f6 = '\x01';
      func_0x00014029de90(param_3);
      *pcVar29 = 'x';
      local_f0 = param_1 + 2;
LAB_1402978a2:
      uVar25 = (ulonglong)uVar26 << 8;
      local_e8 = (uint)uVar25;
      iVar28 = 0;
      local_d8 = 0;
      uVar12 = 10;
      if (local_f6 != '\0') {
        uVar12 = 0x16;
      }
      local_c8 = uVar12;
      if (local_90 != 0) {
LAB_140297ab8:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_140297af9:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_140297af9;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_140297b42:
            *param_4 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_140297b42;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_140297b5a;
        }
        else if (*param_4 != 0) goto LAB_140297b5a;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_140297bfe:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR_FUN_140426bb8)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_140297bfe;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297b5a;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_140297c63:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140297c41:
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140297c41;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_140297c63;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = '\x01';
        }
        goto LAB_140297ab8;
      }
LAB_1402978d4:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_140297919:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_140297919;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_14029796b:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_14029796b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_14029812c;
      }
      else if (*param_4 != 0) goto LAB_14029812c;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402979d8:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1402979d8;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_14029812c;
      if (iVar28 < local_e0) {
        if ((uVar14 != 0) || (iVar28 != 0)) {
          *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
          local_f0 = local_f0 + 1;
          iVar28 = iVar28 + 1;
        }
      }
      else {
        local_d8 = local_d8 + 1;
        if (uVar14 != 0) {
          uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
          local_e8 = (uint)uVar25;
        }
      }
      local_f7 = '\x01';
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_140297aa2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140297a82:
          sVar7 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_140297a82;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_140297aa2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1402978d4;
    }
  }
  else if (*param_4 == 0) goto LAB_1402977b3;
  *pcVar29 = '\0';
LAB_140298ef8:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_a0);
LAB_140297b5a:
  FUN_140016a10(local_c0,1,uVar10);
  uVar12 = local_c8;
  lVar11 = 0;
  uVar25 = (ulonglong)local_e8;
LAB_140297b80:
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140297c91:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297c91;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140297ce3:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297ce3;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140297cff;
  }
  else if (*param_4 != 0) goto LAB_140297cff;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_140297d78:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297d78;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar13 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar13 - (longlong)local_80 >> 1;
  if (uVar14 < uVar12) {
    local_f7 = '\x01';
    if (iVar28 < local_e0) {
      if ((uVar14 != 0) || (iVar28 != 0)) {
        *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
        local_f0 = local_f0 + 1;
        iVar28 = iVar28 + 1;
      }
    }
    else {
      local_d8 = local_d8 + 1;
      if (uVar14 != 0) {
        uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
      }
    }
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar11) != '\x7f') {
      ppppppcVar15 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar15 = (char ******)local_c0[0];
      }
      *(char *)((longlong)ppppppcVar15 + lVar11) =
           *(char *)((longlong)ppppppcVar15 + lVar11) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_140297e5d:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_140297e5d;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297cff;
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar11) == '\0') {
      local_f8 = '\x01';
    }
    else {
      FUN_1400535a0(local_c0);
      lVar11 = lVar11 + 1;
    }
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140297eee:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140297ece:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar13 + 0x50);
      if (iVar1 < 1) goto LAB_140297ece;
      **(int **)(lVar13 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140297eee;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140297b80;
LAB_140297cff:
  local_e8 = (uint)uVar25;
  if (lVar11 != 0) {
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar11) < '\x01') {
      local_f8 = '\x01';
    }
    else {
      lVar11 = lVar11 + 1;
    }
  }
LAB_140297f10:
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140297f51:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297f51;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140297f9f:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140297f9f;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140297fc3;
  }
  else if (*param_4 != 0) goto LAB_140297fc3;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_14029809f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_14029809f;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140297fc3;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140298109:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = '\x01';
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402980e7:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_1402980e7;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140298109;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = '\x01';
  }
  goto LAB_140297f10;
LAB_14029812c:
  if (((local_f6 != '\0') && (local_f7 != '\0')) && (iVar28 == 0)) {
    *local_f0 = '0';
    local_f0 = local_f0 + 1;
  }
  puVar17 = (undefined8 *)FUN_1402caa90();
  cVar21 = *(char *)*puVar17;
  local_f5 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402981a4:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402981a4;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402981f6:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402981f6;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar29 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140298273:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1402982b5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1402982b5;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      sVar7 = *(short *)((longlong)param_3 + 10);
      sVar9 = (*(code *)PTR_FUN_140426bb8)(lVar11);
      pcVar29 = local_f0;
      if (sVar7 == sVar9) {
        *local_f0 = cVar21;
        pcVar29 = local_f0 + 1;
        lVar11 = *param_3;
        local_f0 = pcVar29;
        if (lVar11 != 0) {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298322:
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_140298322;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_140298219;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_140298273;
LAB_140298219:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar28 == 0) {
LAB_140298233:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_140298369:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_140298369;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1402983b3:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1402983b3;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1402983cb;
    }
    else if (*param_4 != 0) goto LAB_1402983cb;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_140298461:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_140298461;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1402983cb;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402984d1:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1402984ae:
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_1402984ae;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_1402984d1;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_140298233;
  }
LAB_1402983e3:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1402984fa:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402984fa;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029854c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_14029854c;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140298570;
  }
  else if (*param_4 != 0) goto LAB_140298570;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140298675:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_140298675;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_140298570;
  if (iVar28 < local_e0) {
    *pcVar29 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
    pcVar29 = pcVar29 + 1;
    iVar28 = iVar28 + 1;
  }
  else {
    uVar25 = uVar25 & 0xff;
    if (uVar14 != 0) {
      uVar25 = 1;
    }
  }
  lVar11 = *param_3;
  cVar21 = '\x01';
  if (lVar11 == 0) {
LAB_140298729:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298709:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_140298709;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_140298729;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402983e3;
LAB_1402983cb:
  uVar25 = (ulonglong)local_e8;
  pcVar29 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_1402983e3;
LAB_140298570:
  cVar24 = local_f6;
  if ((char)uVar25 != '\0') {
    pcVar27 = pcVar29 + -1;
    cVar18 = *pcVar27;
    if (cVar18 == local_f5) {
      pcVar27 = pcVar29 + -2;
      cVar18 = *pcVar27;
    }
    if (cVar18 != '0') {
      cVar6 = '5';
      if (local_f6 != '\0') {
        cVar6 = '8';
      }
      if (cVar18 != cVar6) goto LAB_1402985b3;
    }
    *pcVar27 = cVar18 + '\x01';
  }
LAB_1402985b3:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar29;
  if (cVar21 == '\0') goto LAB_140298ef8;
  lVar22 = 0;
  local_d0 = 0;
  sVar7 = *(short *)((longlong)local_80 + lVar11);
  sVar9 = *(short *)((longlong)local_80 + lVar13);
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140298756:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_140298756;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1402987a2:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_1402987a2;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140298b9e;
  }
  else if (*param_4 != 0) goto LAB_140298b9e;
  cVar21 = (char)param_3[1];
  if (cVar21 == '\0') {
    if (lVar11 == 0) {
LAB_14029880c:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_14029880c;
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
LAB_140298860:
        *param_3 = 0;
        sVar8 = *(short *)((longlong)param_3 + 10);
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_140298860;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != sVar9) {
LAB_140298b9e:
      lVar11 = 0x44c;
      if (cVar24 != '\0') {
        lVar11 = 0x1068;
      }
      uVar3 = 0x44c;
      if (cVar24 != '\0') {
        uVar3 = 0x41a;
      }
      uVar12 = (ulonglong)uVar3;
      lVar13 = local_d8;
LAB_140298bc4:
      lVar19 = lVar11;
      if ((((-1 < lVar22) && (-1 < lVar13)) && ((lVar11 <= lVar22 || ((longlong)uVar12 <= lVar13))))
         || (((lVar22 < 1 && (lVar13 < 1)) &&
             ((lVar19 = -lVar11, lVar22 <= lVar19 || (lVar13 <= (longlong)-uVar12))))))
      goto LAB_140298e41;
      lVar19 = -lVar22;
      if (-lVar22 < 0) {
        lVar19 = lVar22;
      }
      if (lVar19 <= lVar11) {
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar12) goto LAB_140298e1b;
      }
      if (cVar24 != '\0') {
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
      if (lVar22 < 0) {
        lVar20 = lVar19 * 4;
        if (cVar24 == '\0') {
          lVar20 = lVar19;
        }
        lVar22 = lVar22 + lVar20;
        lVar13 = lVar13 - lVar19;
      }
      else {
        lVar20 = lVar19 * 4;
        if (cVar24 == '\0') {
          lVar20 = lVar19;
        }
        lVar22 = lVar22 - lVar20;
        lVar13 = lVar13 + lVar19;
      }
      goto LAB_140298bc4;
    }
  }
  bVar4 = false;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140298902:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402988ae:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1402988ae;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_140298902;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar11 = *param_3;
    if (lVar11 == 0) goto LAB_140298902;
    if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar11 + 0x50) < 1)) {
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
    }
    if (sVar7 == -1) goto LAB_140298902;
    *(short *)((longlong)param_3 + 10) = sVar7;
  }
  bVar5 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_140298951:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_140298951;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  sVar7 = local_f4;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140298a90;
  }
  else if (*param_4 != 0) goto LAB_140298a90;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1402989b9:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402989b9;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_e4) {
    sVar7 = local_f4;
    if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_140298a90;
    bVar4 = true;
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298a61:
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar28 = **(int **)(lVar11 + 0x50);
        if (iVar28 < 1) goto LAB_140298a61;
        **(int **)(lVar11 + 0x50) = iVar28 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_140298a90;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
    goto LAB_140298a90;
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402989fd:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1402989fd;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      sVar7 = local_f4;
      goto LAB_140298a90;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  sVar7 = local_f4;
LAB_140298a90:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_140298ad0:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140298ad0;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_140298b1d:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140298b1d;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  cVar24 = local_f6;
  lVar22 = local_d0;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140298b55;
  }
  else if (*param_4 != 0) goto LAB_140298b55;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140298cbb:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_140298cbb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar22 = local_d0;
  cVar24 = local_f6;
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140298b55;
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140298d29:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298d07:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_140298d07;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140298d29;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140298a90;
LAB_140298b55:
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_140298b88;
  }
  else if (*param_4 != 0) goto LAB_140298b88;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  lVar11 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar12 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar12) goto LAB_140298b88;
  if ((lVar22 < 0xccccccccccccccc) || ((lVar22 == 0xccccccccccccccc && ((longlong)uVar12 < 8)))) {
    lVar22 = uVar12 + lVar22 * 10;
  }
  else {
    lVar22 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140298df3:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140298dd3:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_140298dd3;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_140298df3;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140298b55;
LAB_140298b88:
  if (bVar4) {
    lVar22 = -lVar22;
  }
  pcVar29 = local_f0;
  if (!bVar5) goto LAB_140298ef8;
  goto LAB_140298b9e;
LAB_140298e1b:
  if (cVar24 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar22;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_140298e41:
  if (lVar19 != 0) {
    cVar21 = 'e';
    if (cVar24 != '\0') {
      cVar21 = 'p';
    }
    *pcVar29 = cVar21;
    pcVar27 = pcVar29 + 1;
    if (lVar19 < 0) {
      *pcVar27 = '-';
      pcVar27 = pcVar29 + 2;
    }
    lVar11 = -lVar19;
    pcVar29 = pcVar27;
    if (-lVar19 < 0) {
      lVar11 = lVar19;
    }
    while (lVar11 != 0) {
      *pcVar29 = (char)lVar11 + (char)(lVar11 / 10) * -10 + '0';
      lVar11 = lVar11 / 10;
      pcVar29 = pcVar29 + 1;
    }
    func_0x00014028f320(pcVar27,pcVar29);
  }
  *pcVar29 = '\0';
  goto LAB_140298ef8;
LAB_140297fc3:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar23 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  if (local_f8 == '\0') {
LAB_140297ff5:
    do {
      do {
        if (lVar11 == 0) goto LAB_140298123;
        if (ppppppcVar15 != ppppppcVar23) {
          cVar21 = *(char *)ppppppcVar15;
          ppppppcVar15 = (char ******)((longlong)ppppppcVar15 + 1);
        }
        lVar11 = lVar11 + -1;
      } while (0x7d < (byte)(cVar21 - 1U));
      if (lVar11 != 0) {
        ppppppcVar16 = local_c0;
        if (0xf < local_a8) {
          ppppppcVar16 = (char ******)local_c0[0];
        }
        if (*(char *)((longlong)ppppppcVar16 + lVar11) != cVar21) break;
        if (lVar11 != 0) goto LAB_140297ff5;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = '\x01';
  }
LAB_140298123:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_c0);
}

