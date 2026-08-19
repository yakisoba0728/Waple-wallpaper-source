// Function: FUN_14029bb20
// Addr: 14029bb20
// Size: 3446 bytes


void FUN_14029bb20(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  short *psVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  char ****ppppcVar8;
  longlong lVar9;
  ulonglong uVar10;
  char ****ppppcVar11;
  char cVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  char *pcVar17;
  char ****ppppcVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auStack_108 [48];
  byte local_d8;
  char local_d7;
  char local_d6;
  char local_d5;
  uint local_d4;
  char *local_d0;
  longlong local_c8;
  char *local_c0;
  char ***local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  short local_78 [22];
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  uVar7 = FUN_1400119c0(param_5);
  (*(code *)PTR_FUN_140426bb8)(uVar7,local_98);
  if (local_88 == 0) {
    uVar16 = 0;
  }
  else {
    uVar4 = (*(code *)PTR_FUN_140426bb8)(uVar7);
    uVar16 = (uint)uVar4;
  }
  local_d4 = uVar16;
  uVar7 = FUN_14000f520(param_5);
  (*(code *)PTR_FUN_140426bb8)(uVar7,"0123456789ABCDEFabcdef-+Xx",&DAT_14042bfcb,local_78);
  local_d7 = '\0';
  sVar6 = (short)uVar16;
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_14029bbe5:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029bc22:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029bc22;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029bc6e:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029bc6e;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029bc89;
    }
    else if (*param_3 != 0) goto LAB_14029bc89;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029bd0c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029bd0c;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_14029bc89;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029bd73:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029bd50:
        sVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029bd50;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029bd73;
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029bbe5;
  }
LAB_14029bc89:
  cVar15 = (char)param_2[1];
  local_d0 = param_1;
  if (cVar15 == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029bd9e:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029bd9e;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar15 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029bdef:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029bdef;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar15 = (char)param_2[1];
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 != 0) {
LAB_14029be15:
      if (cVar15 == '\0') {
        if (lVar21 != 0) {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar5 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar5 != -1) {
            *(short *)((longlong)param_2 + 10) = sVar5;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar15 = '\x01';
            goto LAB_14029be71;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
LAB_14029be71:
      if (*(short *)((longlong)param_2 + 10) == local_4a) {
        *param_1 = '+';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029beba:
            sVar5 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029beba;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            cVar15 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_14029bf45;
          }
        }
        *param_2 = 0;
        cVar15 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(short *)((longlong)param_2 + 10) != local_4c) goto LAB_14029bf45;
        *param_1 = '-';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029bf22:
            sVar5 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029bf22;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar15 = '\0';
            goto LAB_14029bf45;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_14029be15;
LAB_14029bf45:
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_14029bf51:
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_14029bf8c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029bf8c;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029bfd8:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029bfd8;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029bff3;
    }
    else if (*param_3 != 0) goto LAB_14029bff3;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029c050:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029c050;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_14029bff3;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c0b3:
      *param_2 = 0;
      cVar15 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c090:
        sVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c090;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029c0b3;
      cVar15 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029bf51;
  }
LAB_14029bff3:
  if ((param_4 & 0xe00) == 0x400) {
    bVar14 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_d5 = '\0';
  local_d8 = bVar14;
  if ((char)param_2[1] == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c123:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c123;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029c16f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c16f;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 == 0) goto LAB_14029c18a;
LAB_14029c1bd:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029c1fa:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_14029c1fa;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != local_78[0]) goto LAB_14029c18a;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c292:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c242:
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c242;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_14029c292;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar21 = *param_2;
      if (lVar21 == 0) goto LAB_14029c292;
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c292;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029c2de:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_14029c2de;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 != 0) {
      if (*param_3 == 0) goto LAB_14029c318;
LAB_14029c2f9:
      bVar22 = 1;
      local_d6 = '\x01';
      if (bVar14 == 0) {
        bVar14 = 8;
        local_d8 = 8;
        goto LAB_14029c1a2;
      }
      goto LAB_14029c199;
    }
    if (*param_3 == 0) goto LAB_14029c2f9;
LAB_14029c318:
    cVar15 = (char)param_2[1];
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_14029c357:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_14029c357;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    sVar6 = *(short *)((longlong)param_2 + 10);
    if (sVar6 != local_46) {
      if (cVar15 == '\0') {
        lVar21 = *param_2;
        if (lVar21 == 0) {
LAB_14029c3a8:
          *param_2 = 0;
          sVar6 = *(short *)((longlong)param_2 + 10);
        }
        else {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar6 = (*(code *)PTR_FUN_140426bb8)();
          }
          else {
            sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar6 == -1) goto LAB_14029c3a8;
          *(short *)((longlong)param_2 + 10) = sVar6;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar6 != local_48) goto LAB_14029c2f9;
    }
    if ((bVar14 & 0xef) != 0) goto LAB_14029c2f9;
    bVar14 = 0x10;
    local_d8 = 0x10;
    bVar22 = 0;
    local_d6 = '\0';
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c422:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c406:
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c406;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_14029c422;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_14029c1a2:
    uVar20 = 0x16;
    if (bVar14 == 8) {
      uVar20 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_14029c1bd;
LAB_14029c18a:
    bVar22 = 0;
    local_d6 = '\0';
    if (bVar14 != 0) {
LAB_14029c199:
      if (bVar14 != 10) goto LAB_14029c1a2;
    }
    uVar20 = 10;
  }
  cVar15 = local_d5;
  uStack_b0 = 0;
  local_a8 = 1;
  local_a0 = 0xf;
  local_b8 = (char ***)(ulonglong)bVar22;
  lVar21 = 0;
  pcVar17 = local_c0 + 0x1f;
  local_c0 = pcVar17;
LAB_14029c470:
  if ((char)param_2[1] == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_14029c4b5:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c4b5;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_14029c506:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c506;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar9 = *param_2;
  uVar16 = local_d4;
  if (lVar9 == 0) {
    if (*param_3 == 0) goto LAB_14029c52d;
  }
  else if (*param_3 != 0) goto LAB_14029c52d;
  if ((char)param_2[1] == '\0') {
    if (lVar9 == 0) {
LAB_14029c665:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_14029c665;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar9 = func_0x00014028f010(local_78,local_44,*(undefined2 *)((longlong)param_2 + 10));
  uVar16 = local_d4;
  uVar10 = lVar9 - (longlong)local_78 >> 1;
  if (uVar10 < uVar20) {
    cVar12 = "0123456789ABCDEFabcdef-+Xx"[uVar10];
    *local_d0 = cVar12;
    if (((local_d5 != '\0') || (cVar12 != '0')) && (local_d0 < pcVar17)) {
      local_d0 = local_d0 + 1;
      local_d5 = '\x01';
    }
    local_d6 = '\x01';
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) != '\x7f') {
      ppppcVar11 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar11 = (char ****)local_b8;
      }
      *(char *)((longlong)ppppcVar11 + lVar21) = *(char *)((longlong)ppppcVar11 + lVar21) + '\x01';
    }
  }
  else {
    sVar6 = (short)local_d4;
    if (sVar6 == 0) goto LAB_14029c52d;
    if ((char)param_2[1] == '\0') {
      lVar9 = *param_2;
      if (lVar9 == 0) {
LAB_14029c744:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar9 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar9 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029c744;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar10 = local_a8;
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_14029c52d;
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) == '\0') {
      local_d7 = '\x01';
    }
    else {
      if (local_a8 < local_a0) {
        uVar1 = local_a8 + 1;
        if (((local_a8 != uVar1) && (0xf < local_a0)) && (DAT_140472300 != '\0')) {
          pcVar19 = (char *)((longlong)local_b8 + local_a8 + 1);
          pcVar13 = (char *)((ulonglong)((longlong)local_b8 + local_a0 + 8) & 0xfffffffffffffff8);
          pcVar17 = pcVar13;
          if (pcVar19 <= pcVar13) {
            pcVar17 = pcVar19;
          }
          func_0x00014000ed00(local_b8,pcVar13,pcVar17);
        }
        local_a8 = uVar1;
        ppppcVar11 = &local_b8;
        if (0xf < local_a0) {
          ppppcVar11 = (char ****)local_b8;
        }
        ((char *)((longlong)ppppcVar11 + uVar10))[0] = '\0';
        ((char *)((longlong)ppppcVar11 + uVar10))[1] = '\0';
      }
      else {
        FUN_140053430(&local_b8,1,cVar15,0);
      }
      lVar21 = lVar21 + 1;
      pcVar17 = local_c0;
    }
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_14029c85e:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_14029c83b:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar2 = **(int **)(lVar9 + 0x50);
      if (iVar2 < 1) goto LAB_14029c83b;
      **(int **)(lVar9 + 0x50) = iVar2 + -1;
      psVar3 = (short *)**(longlong **)(lVar9 + 0x38);
      **(longlong **)(lVar9 + 0x38) = (longlong)(psVar3 + 1);
      sVar6 = *psVar3;
    }
    if (sVar6 == -1) goto LAB_14029c85e;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_14029c470;
UNWIND_INFO_14029c897_UnwindCodes_48__UnwindOpCode:
  pcVar17 = local_d0;
  if (local_d5 == '\0') {
    *local_d0 = '0';
    pcVar17 = local_d0 + 1;
  }
  *pcVar17 = '\0';
  goto code_r0x00014029c92a;
LAB_14029c52d:
  cVar15 = local_d7;
  local_c8 = lVar21;
  if (lVar21 != 0) {
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) < '\x01') {
      cVar15 = '\x01';
    }
    else {
      local_c8 = lVar21 + 1;
    }
  }
  if ((short)uVar16 != 0) {
code_r0x00014029c566:
    if ((char)param_2[1] == '\0') {
      func_0x0001402a7f30(param_2);
    }
    if ((char)param_3[1] == '\0') {
      func_0x0001402a7f30(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_14029c59f;
    }
    else if (*param_3 != 0) goto LAB_14029c59f;
    if ((char)param_2[1] == '\0') {
      func_0x0001402a7f30(param_2);
    }
    if (*(short *)((longlong)param_2 + 10) != (short)uVar16) goto LAB_14029c59f;
    lVar21 = *param_2;
    if (lVar21 == 0) {
code_r0x00014029c8e8:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
code_r0x00014029c8c9:
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto code_r0x00014029c8c9;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto code_r0x00014029c8e8;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar15 = '\x01';
    }
    goto code_r0x00014029c566;
  }
LAB_14029c59f:
  ppppcVar11 = local_98;
  if (0xf < local_80) {
    ppppcVar11 = (char ****)local_98[0];
  }
  ppppcVar18 = (char ****)((longlong)ppppcVar11 + local_88);
  cVar12 = '\0';
  lVar21 = local_c8;
  if (local_d6 != '\0') {
LAB_14029c5c0:
    do {
      if ((cVar15 != '\0') || (lVar21 == 0))
      goto UNWIND_INFO_14029c897_UnwindCodes_48__UnwindOpCode;
      if (ppppcVar11 != ppppcVar18) {
        cVar12 = *(char *)ppppcVar11;
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
      }
      lVar21 = lVar21 + -1;
    } while (0x7d < (byte)(cVar12 - 1U));
    if (lVar21 == 0) {
LAB_14029c604:
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)ppppcVar8 <= cVar12) goto LAB_14029c5c0;
    }
    else {
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)((longlong)ppppcVar8 + lVar21) == cVar12) {
        if (lVar21 == 0) goto LAB_14029c604;
        goto LAB_14029c5c0;
      }
    }
    cVar15 = '\x01';
    goto LAB_14029c5c0;
  }
code_r0x00014029c92a:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(&local_b8);
}

