// Function: FUN_140298f30
// Addr: 140298f30
// Size: 7420 bytes


/* WARNING: Removing unreachable block (ram,0x000140299df3) */

void FUN_140298f30(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  uVar10 = FUN_14000f520(param_5);
  (*(code *)PTR_FUN_140426bb8)(uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_14042bfed,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_1400119c0(param_5);
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
LAB_140299018:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_140299056:
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
          if (sVar9 == -1) goto LAB_140299056;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1402990a0:
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
          if (sVar9 == -1) goto LAB_1402990a0;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      cVar21 = cVar24;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_1402990c3;
      }
      else if (*param_4 != 0) goto LAB_1402990c3;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140299141:
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
          if (sVar9 == -1) goto LAB_140299141;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1402990c3;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1402991a8:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar24 = '\x01';
        uVar26 = 0;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140299185:
          sVar9 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar28 = **(int **)(lVar11 + 0x50);
          if (iVar28 < 1) goto LAB_140299185;
          **(int **)(lVar11 + 0x50) = iVar28 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_1402991a8;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar24 = '\x01';
      }
      goto LAB_140299018;
    }
  }
LAB_1402990c3:
  local_f8 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1402991de:
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
      if (sVar9 == -1) goto LAB_1402991de;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_14029922c:
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
      if (sVar9 == -1) goto LAB_14029922c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140299253:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140299295:
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
          if (sVar9 == -1) goto LAB_140299295;
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
LAB_1402992e1:
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar28 = **(int **)(lVar13 + 0x50);
            if (iVar28 < 1) goto LAB_1402992e1;
            **(int **)(lVar13 + 0x50) = iVar28 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_14029931f;
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
  else if (*param_4 == 0) goto LAB_140299253;
LAB_14029931f:
  *param_1 = 0x30;
  pcVar29 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar29;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029937d:
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
      if (sVar9 == -1) goto LAB_14029937d;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1402993ce:
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
      if (sVar9 == -1) goto LAB_1402993ce;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140299642;
  }
  else if (*param_4 != 0) goto LAB_140299642;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_14029943b:
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
      if (sVar9 == -1) goto LAB_14029943b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_140299642;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_1402994e6:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_14029948c:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_14029948c;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1402994e6;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_1402994e6;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_1402994e6;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299537:
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
      if (sVar9 == -1) goto LAB_140299537;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_140299553:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_1402995b0:
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
          if (sVar9 == -1) goto LAB_1402995b0;
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
LAB_14029960a:
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
            if (sVar9 == -1) goto LAB_14029960a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_140299642;
        }
      }
      local_f6 = '\x01';
      func_0x00014029de90(param_3);
      *pcVar29 = 'x';
      local_f0 = param_1 + 2;
LAB_140299642:
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
LAB_140299858:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_140299899:
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
            if (sVar9 == -1) goto LAB_140299899;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_1402998e2:
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
            if (sVar9 == -1) goto LAB_1402998e2;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_1402998fa;
        }
        else if (*param_4 != 0) goto LAB_1402998fa;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_14029999e:
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
            if (sVar9 == -1) goto LAB_14029999e;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1402998fa;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_140299a03:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1402999e1:
            sVar9 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_1402999e1;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_140299a03;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = '\x01';
        }
        goto LAB_140299858;
      }
LAB_140299674:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1402996b9:
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
          if (sVar7 == -1) goto LAB_1402996b9;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_14029970b:
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
          if (sVar7 == -1) goto LAB_14029970b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_140299ecc;
      }
      else if (*param_4 != 0) goto LAB_140299ecc;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_140299778:
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
          if (sVar7 == -1) goto LAB_140299778;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_140299ecc;
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
LAB_140299842:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140299822:
          sVar7 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_140299822;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_140299842;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_140299674;
    }
  }
  else if (*param_4 == 0) goto LAB_140299553;
  *pcVar29 = '\0';
LAB_14029ac98:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_a0);
LAB_1402998fa:
  FUN_140016a10(local_c0,1,uVar10);
  uVar12 = local_c8;
  lVar11 = 0;
  uVar25 = (ulonglong)local_e8;
LAB_140299920:
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140299a31:
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
      if (sVar9 == -1) goto LAB_140299a31;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299a83:
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
      if (sVar9 == -1) goto LAB_140299a83;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140299a9f;
  }
  else if (*param_4 != 0) goto LAB_140299a9f;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_140299b18:
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
      if (sVar9 == -1) goto LAB_140299b18;
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
LAB_140299bfd:
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
        if (sVar9 == -1) goto LAB_140299bfd;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140299a9f;
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
LAB_140299c8e:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140299c6e:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar13 + 0x50);
      if (iVar1 < 1) goto LAB_140299c6e;
      **(int **)(lVar13 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140299c8e;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140299920;
LAB_140299a9f:
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
LAB_140299cb0:
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_140299cf1:
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
      if (sVar9 == -1) goto LAB_140299cf1;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299d3f:
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
      if (sVar9 == -1) goto LAB_140299d3f;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_140299d63;
  }
  else if (*param_4 != 0) goto LAB_140299d63;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_140299e3f:
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
      if (sVar9 == -1) goto LAB_140299e3f;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_140299d63;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_140299ea9:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = '\x01';
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_140299e87:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_140299e87;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_140299ea9;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = '\x01';
  }
  goto LAB_140299cb0;
LAB_140299ecc:
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
LAB_140299f44:
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
      if (sVar7 == -1) goto LAB_140299f44;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_140299f96:
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
      if (sVar7 == -1) goto LAB_140299f96;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar29 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_14029a013:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_14029a055:
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
          if (sVar7 == -1) goto LAB_14029a055;
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
LAB_14029a0c2:
            sVar7 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_14029a0c2;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_140299fb9;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_14029a013;
LAB_140299fb9:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar28 == 0) {
LAB_140299fd3:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_14029a109:
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
        if (sVar9 == -1) goto LAB_14029a109;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_14029a153:
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
        if (sVar9 == -1) goto LAB_14029a153;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_14029a16b;
    }
    else if (*param_4 != 0) goto LAB_14029a16b;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_14029a201:
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
        if (sVar9 == -1) goto LAB_14029a201;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029a16b;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_14029a271:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_14029a24e:
        sVar9 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_14029a24e;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_14029a271;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_140299fd3;
  }
LAB_14029a183:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a29a:
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
      if (sVar7 == -1) goto LAB_14029a29a;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029a2ec:
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
      if (sVar7 == -1) goto LAB_14029a2ec;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14029a310;
  }
  else if (*param_4 != 0) goto LAB_14029a310;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14029a415:
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
      if (sVar7 == -1) goto LAB_14029a415;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_14029a310;
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
LAB_14029a4c9:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a4a9:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_14029a4a9;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_14029a4c9;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_14029a183;
LAB_14029a16b:
  uVar25 = (ulonglong)local_e8;
  pcVar29 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_14029a183;
LAB_14029a310:
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
      if (cVar18 != cVar6) goto LAB_14029a353;
    }
    *pcVar27 = cVar18 + '\x01';
  }
LAB_14029a353:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar29;
  if (cVar21 == '\0') goto LAB_14029ac98;
  lVar22 = 0;
  local_d0 = 0;
  sVar7 = *(short *)((longlong)local_80 + lVar11);
  sVar9 = *(short *)((longlong)local_80 + lVar13);
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a4f6:
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
      if (sVar8 == -1) goto LAB_14029a4f6;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029a542:
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
      if (sVar8 == -1) goto LAB_14029a542;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14029a93e;
  }
  else if (*param_4 != 0) goto LAB_14029a93e;
  cVar21 = (char)param_3[1];
  if (cVar21 == '\0') {
    if (lVar11 == 0) {
LAB_14029a5ac:
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
      if (sVar8 == -1) goto LAB_14029a5ac;
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
LAB_14029a600:
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
        if (sVar8 == -1) goto LAB_14029a600;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != sVar9) {
LAB_14029a93e:
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
LAB_14029a964:
      lVar19 = lVar11;
      if ((((-1 < lVar22) && (-1 < lVar13)) && ((lVar11 <= lVar22 || ((longlong)uVar12 <= lVar13))))
         || (((lVar22 < 1 && (lVar13 < 1)) &&
             ((lVar19 = -lVar11, lVar22 <= lVar19 || (lVar13 <= (longlong)-uVar12))))))
      goto LAB_14029abe1;
      lVar19 = -lVar22;
      if (-lVar22 < 0) {
        lVar19 = lVar22;
      }
      if (lVar19 <= lVar11) {
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar12) goto LAB_14029abbb;
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
      goto LAB_14029a964;
    }
  }
  bVar4 = false;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_14029a6a2:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a64e:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_14029a64e;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_14029a6a2;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar11 = *param_3;
    if (lVar11 == 0) goto LAB_14029a6a2;
    if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar11 + 0x50) < 1)) {
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
    }
    if (sVar7 == -1) goto LAB_14029a6a2;
    *(short *)((longlong)param_3 + 10) = sVar7;
  }
  bVar5 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029a6f1:
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
      if (sVar7 == -1) goto LAB_14029a6f1;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  sVar7 = local_f4;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14029a830;
  }
  else if (*param_4 != 0) goto LAB_14029a830;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14029a759:
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
      if (sVar7 == -1) goto LAB_14029a759;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_e4) {
    sVar7 = local_f4;
    if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_14029a830;
    bVar4 = true;
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a801:
        sVar7 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar28 = **(int **)(lVar11 + 0x50);
        if (iVar28 < 1) goto LAB_14029a801;
        **(int **)(lVar11 + 0x50) = iVar28 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_14029a830;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
    goto LAB_14029a830;
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029a79d:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_14029a79d;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      sVar7 = local_f4;
      goto LAB_14029a830;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  sVar7 = local_f4;
LAB_14029a830:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_14029a870:
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
      if (sVar9 == -1) goto LAB_14029a870;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_14029a8bd:
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
      if (sVar9 == -1) goto LAB_14029a8bd;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  cVar24 = local_f6;
  lVar22 = local_d0;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14029a8f5;
  }
  else if (*param_4 != 0) goto LAB_14029a8f5;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14029aa5b:
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
      if (sVar9 == -1) goto LAB_14029aa5b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar22 = local_d0;
  cVar24 = local_f6;
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_14029a8f5;
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_14029aac9:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029aaa7:
      sVar9 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_14029aaa7;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_14029aac9;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_14029a830;
LAB_14029a8f5:
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_14029a928;
  }
  else if (*param_4 != 0) goto LAB_14029a928;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  lVar11 = func_0x00014028f010(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar12 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar12) goto LAB_14029a928;
  if ((lVar22 < 0xccccccccccccccc) || ((lVar22 == 0xccccccccccccccc && ((longlong)uVar12 < 8)))) {
    lVar22 = uVar12 + lVar22 * 10;
  }
  else {
    lVar22 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_14029ab93:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_14029ab73:
      sVar7 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_14029ab73;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_14029ab93;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_14029a8f5;
LAB_14029a928:
  if (bVar4) {
    lVar22 = -lVar22;
  }
  pcVar29 = local_f0;
  if (!bVar5) goto LAB_14029ac98;
  goto LAB_14029a93e;
LAB_14029abbb:
  if (cVar24 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar22;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_14029abe1:
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
  goto LAB_14029ac98;
LAB_140299d63:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar23 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  if (local_f8 == '\0') {
LAB_140299d95:
    do {
      do {
        if (lVar11 == 0) goto LAB_140299ec3;
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
        if (lVar11 != 0) goto LAB_140299d95;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = '\x01';
  }
LAB_140299ec3:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_c0);
}

