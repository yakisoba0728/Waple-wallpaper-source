// Function: FUN_14029ac00
// Addr: 14029ac00
// Size: 3655 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort FUN_14029ac00(char *param_1,longlong *param_2,longlong *param_3,uint param_4,
                    undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  char ****ppppcVar7;
  longlong lVar8;
  ulonglong uVar9;
  char ****ppppcVar10;
  char cVar11;
  char *pcVar12;
  byte bVar13;
  char cVar14;
  ushort uVar15;
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
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  uVar6 = FUN_14029d730(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar6,local_98);
  if (local_88 == 0) {
    uVar16 = 0;
  }
  else {
    uVar15 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar6);
    uVar16 = (uint)uVar15;
  }
  local_d4 = uVar16;
  uVar6 = FUN_14029d190(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)
            (uVar6,"0123456789ABCDEFabcdef-+Xx",&DAT_14042bebb,local_78);
  local_d7 = '\0';
  sVar5 = (short)uVar16;
  if (sVar5 != 0) {
    lVar21 = *param_2;
LAB_14029acc5:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029ad02:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029ad02;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029ad4e:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029ad4e;
        *(short *)((longlong)param_3 + 10) = sVar4;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029ad69;
    }
    else if (*param_3 != 0) goto LAB_14029ad69;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029adec:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029adec;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029ad69;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029ae53:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029ae30:
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029ae30;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar4 = *psVar3;
      }
      if (sVar4 == -1) goto LAB_14029ae53;
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029acc5;
  }
LAB_14029ad69:
  cVar14 = (char)param_2[1];
  local_d0 = param_1;
  if (cVar14 == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029ae7e:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar4 == -1) goto LAB_14029ae7e;
      *(short *)((longlong)param_2 + 10) = sVar4;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar14 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029aecf:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar4 == -1) goto LAB_14029aecf;
      *(short *)((longlong)param_3 + 10) = sVar4;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar14 = (char)param_2[1];
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 != 0) {
LAB_14029aef5:
      if (cVar14 == '\0') {
        if (lVar21 != 0) {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar4 != -1) {
            *(short *)((longlong)param_2 + 10) = sVar4;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar14 = '\x01';
            goto LAB_14029af51;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar14 = '\x01';
      }
LAB_14029af51:
      if (*(short *)((longlong)param_2 + 10) == local_4a) {
        *param_1 = '+';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029af9a:
            sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029af9a;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar4 = *psVar3;
          }
          if (sVar4 != -1) {
            cVar14 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_14029b025;
          }
        }
        *param_2 = 0;
        cVar14 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(short *)((longlong)param_2 + 10) != local_4c) goto LAB_14029b025;
        *param_1 = '-';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029b002:
            sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029b002;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar4 = *psVar3;
          }
          if (sVar4 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar14 = '\0';
            goto LAB_14029b025;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar14 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_14029aef5;
LAB_14029b025:
  if (sVar5 != 0) {
    lVar21 = *param_2;
LAB_14029b031:
    if (cVar14 == '\0') {
      if (lVar21 == 0) {
LAB_14029b06c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029b06c;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029b0b8:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029b0b8;
        *(short *)((longlong)param_3 + 10) = sVar4;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029b0d3;
    }
    else if (*param_3 != 0) goto LAB_14029b0d3;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029b130:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029b130;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029b0d3;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029b193:
      *param_2 = 0;
      cVar14 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029b170:
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029b170;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar4 = *psVar3;
      }
      if (sVar4 == -1) goto LAB_14029b193;
      cVar14 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029b031;
  }
LAB_14029b0d3:
  if ((param_4 & 0xe00) == 0x400) {
    bVar13 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar13 = 0x10;
  }
  else {
    bVar13 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_d5 = '\0';
  local_d8 = bVar13;
  if ((char)param_2[1] == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029b203:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b203;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029b24f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b24f;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 == 0) goto LAB_14029b26a;
LAB_14029b29d:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029b2da:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029b2da;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != local_78[0]) goto LAB_14029b26a;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029b372:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029b322:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029b322;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029b372;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar21 = *param_2;
      if (lVar21 == 0) goto LAB_14029b372;
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b372;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029b3be:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029b3be;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 != 0) {
      if (*param_3 == 0) goto LAB_14029b3f8;
LAB_14029b3d9:
      bVar22 = 1;
      local_d6 = '\x01';
      if (bVar13 == 0) {
        bVar13 = 8;
        local_d8 = 8;
        goto LAB_14029b282;
      }
      goto LAB_14029b279;
    }
    if (*param_3 == 0) goto LAB_14029b3d9;
LAB_14029b3f8:
    cVar14 = (char)param_2[1];
    if (cVar14 == '\0') {
      if (lVar21 == 0) {
LAB_14029b437:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_14029b437;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar14 = '\x01';
    }
    sVar5 = *(short *)((longlong)param_2 + 10);
    if (sVar5 != local_46) {
      if (cVar14 == '\0') {
        lVar21 = *param_2;
        if (lVar21 == 0) {
LAB_14029b488:
          *param_2 = 0;
          sVar5 = *(short *)((longlong)param_2 + 10);
        }
        else {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar5 == -1) goto LAB_14029b488;
          *(short *)((longlong)param_2 + 10) = sVar5;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar5 != local_48) goto LAB_14029b3d9;
    }
    if ((bVar13 & 0xef) != 0) goto LAB_14029b3d9;
    bVar13 = 0x10;
    local_d8 = 0x10;
    bVar22 = 0;
    local_d6 = '\0';
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029b502:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029b4e6:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029b4e6;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029b502;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_14029b282:
    uVar20 = 0x16;
    if (bVar13 == 8) {
      uVar20 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_14029b29d;
LAB_14029b26a:
    bVar22 = 0;
    local_d6 = '\0';
    if (bVar13 != 0) {
LAB_14029b279:
      if (bVar13 != 10) goto LAB_14029b282;
    }
    uVar20 = 10;
  }
  cVar14 = local_d5;
  uStack_b0 = 0;
  local_a8 = 1;
  local_a0 = 0xf;
  local_b8 = (char ***)(ulonglong)bVar22;
  lVar21 = 0;
  pcVar17 = local_c0 + 0x1f;
  local_c0 = pcVar17;
LAB_14029b550:
  if ((char)param_2[1] == '\0') {
    lVar8 = *param_2;
    if (lVar8 == 0) {
LAB_14029b595:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar8 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar8 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b595;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar8 = *param_3;
    if (lVar8 == 0) {
LAB_14029b5e6:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar8 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar8 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b5e6;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar8 = *param_2;
  uVar16 = local_d4;
  if (lVar8 == 0) {
    if (*param_3 == 0) goto LAB_14029b60d;
  }
  else if (*param_3 != 0) goto LAB_14029b60d;
  if ((char)param_2[1] == '\0') {
    if (lVar8 == 0) {
LAB_14029b745:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar8 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar8 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029b745;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar8 = thunk_FUN_14028d070(local_78,local_44,*(undefined2 *)((longlong)param_2 + 10));
  uVar16 = local_d4;
  uVar9 = lVar8 - (longlong)local_78 >> 1;
  if (uVar9 < uVar20) {
    cVar11 = "0123456789ABCDEFabcdef-+Xx"[uVar9];
    *local_d0 = cVar11;
    if (((local_d5 != '\0') || (cVar11 != '0')) && (local_d0 < pcVar17)) {
      local_d0 = local_d0 + 1;
      local_d5 = '\x01';
    }
    local_d6 = '\x01';
    ppppcVar10 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar10 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar21) != '\x7f') {
      ppppcVar10 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar10 = (char ****)local_b8;
      }
      *(char *)((longlong)ppppcVar10 + lVar21) = *(char *)((longlong)ppppcVar10 + lVar21) + '\x01';
    }
  }
  else {
    sVar5 = (short)local_d4;
    if (sVar5 == 0) goto LAB_14029b60d;
    if ((char)param_2[1] == '\0') {
      lVar8 = *param_2;
      if (lVar8 == 0) {
LAB_14029b824:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar8 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar8 + 0x50) < 1)) {
          sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          sVar4 = *(short *)**(undefined8 **)(lVar8 + 0x38);
        }
        if (sVar4 == -1) goto LAB_14029b824;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar9 = local_a8;
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029b60d;
    ppppcVar10 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar10 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar21) == '\0') {
      local_d7 = '\x01';
    }
    else {
      if (local_a8 < local_a0) {
        uVar1 = local_a8 + 1;
        if (((local_a8 != uVar1) && (0xf < local_a0)) && (DAT_140472230 != '\0')) {
          pcVar19 = (char *)((longlong)local_b8 + local_a8 + 1);
          pcVar12 = (char *)((ulonglong)((longlong)local_b8 + local_a0 + 8) & 0xfffffffffffffff8);
          pcVar17 = pcVar12;
          if (pcVar19 <= pcVar12) {
            pcVar17 = pcVar19;
          }
          _guard_check_icall(local_b8,pcVar12,pcVar17);
        }
        local_a8 = uVar1;
        ppppcVar10 = &local_b8;
        if (0xf < local_a0) {
          ppppcVar10 = (char ****)local_b8;
        }
        ((char *)((longlong)ppppcVar10 + uVar9))[0] = '\0';
        ((char *)((longlong)ppppcVar10 + uVar9))[1] = '\0';
      }
      else {
        FUN_140053360(&local_b8,1,cVar14,0);
      }
      lVar21 = lVar21 + 1;
      pcVar17 = local_c0;
    }
  }
  lVar8 = *param_2;
  if (lVar8 == 0) {
LAB_14029b93e:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_14029b91b:
      sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar2 = **(int **)(lVar8 + 0x50);
      if (iVar2 < 1) goto LAB_14029b91b;
      **(int **)(lVar8 + 0x50) = iVar2 + -1;
      psVar3 = (short *)**(longlong **)(lVar8 + 0x38);
      **(longlong **)(lVar8 + 0x38) = (longlong)(psVar3 + 1);
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_14029b93e;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_14029b550;
LAB_14029b9dc:
  pcVar17 = local_d0;
  if (local_d5 == '\0') {
    *local_d0 = '0';
    pcVar17 = local_d0 + 1;
  }
  *pcVar17 = '\0';
  uVar15 = CONCAT11(cVar14,local_d8);
  goto LAB_14029ba0a;
LAB_14029b60d:
  cVar14 = local_d7;
  local_c8 = lVar21;
  if (lVar21 != 0) {
    ppppcVar10 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar10 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar21) < '\x01') {
      cVar14 = '\x01';
    }
    else {
      local_c8 = lVar21 + 1;
    }
  }
  if ((short)uVar16 != 0) {
LAB_14029b646:
    if ((char)param_2[1] == '\0') {
      FUN_1402a7e60(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_1402a7e60(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_14029b67f;
    }
    else if (*param_3 != 0) goto LAB_14029b67f;
    if ((char)param_2[1] == '\0') {
      FUN_1402a7e60(param_2);
    }
    if (*(short *)((longlong)param_2 + 10) != (short)uVar16) goto LAB_14029b67f;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029b9c8:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar14 = '\x01';
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029b9a9:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029b9a9;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029b9c8;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar14 = '\x01';
    }
    goto LAB_14029b646;
  }
LAB_14029b67f:
  ppppcVar10 = local_98;
  if (0xf < local_80) {
    ppppcVar10 = (char ****)local_98[0];
  }
  ppppcVar18 = (char ****)((longlong)ppppcVar10 + local_88);
  cVar11 = '\0';
  lVar21 = local_c8;
  if (local_d6 != '\0') {
LAB_14029b6a0:
    do {
      if ((cVar14 != '\0') || (lVar21 == 0)) goto LAB_14029b9dc;
      if (ppppcVar10 != ppppcVar18) {
        cVar11 = *(char *)ppppcVar10;
        ppppcVar10 = (char ****)((longlong)ppppcVar10 + 1);
      }
      lVar21 = lVar21 + -1;
    } while (0x7d < (byte)(cVar11 - 1U));
    if (lVar21 == 0) {
LAB_14029b6e4:
      ppppcVar7 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar7 = (char ****)local_b8;
      }
      if (*(char *)ppppcVar7 <= cVar11) goto LAB_14029b6a0;
    }
    else {
      ppppcVar7 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar7 = (char ****)local_b8;
      }
      if (*(char *)((longlong)ppppcVar7 + lVar21) == cVar11) {
        if (lVar21 == 0) goto LAB_14029b6e4;
        goto LAB_14029b6a0;
      }
    }
    cVar14 = '\x01';
    goto LAB_14029b6a0;
  }
  uVar15 = (ushort)(byte)~local_d8;
LAB_14029ba0a:
  thunk_FUN_140017240(&local_b8);
  thunk_FUN_140017240(local_98);
  return uVar15;
}

