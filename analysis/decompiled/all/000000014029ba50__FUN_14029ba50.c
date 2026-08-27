// Function: FUN_14029ba50
// Addr: 14029ba50
// Size: 3655 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort FUN_14029ba50(char *param_1,longlong *param_2,longlong *param_3,uint param_4,
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
  uVar6 = FUN_1400118f0(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar6,local_98);
  if (local_88 == 0) {
    uVar16 = 0;
  }
  else {
    uVar15 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar6);
    uVar16 = (uint)uVar15;
  }
  local_d4 = uVar16;
  uVar6 = FUN_14000f450(param_5);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)
            (uVar6,"0123456789ABCDEFabcdef-+Xx",&DAT_14042befb,local_78);
  local_d7 = '\0';
  sVar5 = (short)uVar16;
  if (sVar5 != 0) {
    lVar21 = *param_2;
LAB_14029bb15:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029bb52:
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
        if (sVar4 == -1) goto LAB_14029bb52;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029bb9e:
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
        if (sVar4 == -1) goto LAB_14029bb9e;
        *(short *)((longlong)param_3 + 10) = sVar4;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029bbb9;
    }
    else if (*param_3 != 0) goto LAB_14029bbb9;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029bc3c:
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
        if (sVar4 == -1) goto LAB_14029bc3c;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029bbb9;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029bca3:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029bc80:
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029bc80;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar4 = *psVar3;
      }
      if (sVar4 == -1) goto LAB_14029bca3;
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029bb15;
  }
LAB_14029bbb9:
  cVar14 = (char)param_2[1];
  local_d0 = param_1;
  if (cVar14 == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029bcce:
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
      if (sVar4 == -1) goto LAB_14029bcce;
      *(short *)((longlong)param_2 + 10) = sVar4;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar14 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029bd1f:
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
      if (sVar4 == -1) goto LAB_14029bd1f;
      *(short *)((longlong)param_3 + 10) = sVar4;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar14 = (char)param_2[1];
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 != 0) {
LAB_14029bd45:
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
            goto LAB_14029bda1;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar14 = '\x01';
      }
LAB_14029bda1:
      if (*(short *)((longlong)param_2 + 10) == local_4a) {
        *param_1 = '+';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029bdea:
            sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029bdea;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar4 = *psVar3;
          }
          if (sVar4 != -1) {
            cVar14 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_14029be75;
          }
        }
        *param_2 = 0;
        cVar14 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(short *)((longlong)param_2 + 10) != local_4c) goto LAB_14029be75;
        *param_1 = '-';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029be52:
            sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_14029be52;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar4 = *psVar3;
          }
          if (sVar4 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar14 = '\0';
            goto LAB_14029be75;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar14 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_14029bd45;
LAB_14029be75:
  if (sVar5 != 0) {
    lVar21 = *param_2;
LAB_14029be81:
    if (cVar14 == '\0') {
      if (lVar21 == 0) {
LAB_14029bebc:
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
        if (sVar4 == -1) goto LAB_14029bebc;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029bf08:
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
        if (sVar4 == -1) goto LAB_14029bf08;
        *(short *)((longlong)param_3 + 10) = sVar4;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_14029bf23;
    }
    else if (*param_3 != 0) goto LAB_14029bf23;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029bf80:
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
        if (sVar4 == -1) goto LAB_14029bf80;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029bf23;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029bfe3:
      *param_2 = 0;
      cVar14 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029bfc0:
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029bfc0;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar4 = *psVar3;
      }
      if (sVar4 == -1) goto LAB_14029bfe3;
      cVar14 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_14029be81;
  }
LAB_14029bf23:
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
LAB_14029c053:
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
      if (sVar5 == -1) goto LAB_14029c053;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_14029c09f:
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
      if (sVar5 == -1) goto LAB_14029c09f;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 == 0) goto LAB_14029c0ba;
LAB_14029c0ed:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_14029c12a:
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
        if (sVar5 == -1) goto LAB_14029c12a;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != local_78[0]) goto LAB_14029c0ba;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c1c2:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c172:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c172;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029c1c2;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar21 = *param_2;
      if (lVar21 == 0) goto LAB_14029c1c2;
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_14029c1c2;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_14029c20e:
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
        if (sVar5 == -1) goto LAB_14029c20e;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 != 0) {
      if (*param_3 == 0) goto LAB_14029c248;
LAB_14029c229:
      bVar22 = 1;
      local_d6 = '\x01';
      if (bVar13 == 0) {
        bVar13 = 8;
        local_d8 = 8;
        goto LAB_14029c0d2;
      }
      goto LAB_14029c0c9;
    }
    if (*param_3 == 0) goto LAB_14029c229;
LAB_14029c248:
    cVar14 = (char)param_2[1];
    if (cVar14 == '\0') {
      if (lVar21 == 0) {
LAB_14029c287:
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
        if (sVar5 == -1) goto LAB_14029c287;
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
LAB_14029c2d8:
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
          if (sVar5 == -1) goto LAB_14029c2d8;
          *(short *)((longlong)param_2 + 10) = sVar5;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar5 != local_48) goto LAB_14029c229;
    }
    if ((bVar13 & 0xef) != 0) goto LAB_14029c229;
    bVar13 = 0x10;
    local_d8 = 0x10;
    bVar22 = 0;
    local_d6 = '\0';
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c352:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c336:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c336;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029c352;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_14029c0d2:
    uVar20 = 0x16;
    if (bVar13 == 8) {
      uVar20 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_14029c0ed;
LAB_14029c0ba:
    bVar22 = 0;
    local_d6 = '\0';
    if (bVar13 != 0) {
LAB_14029c0c9:
      if (bVar13 != 10) goto LAB_14029c0d2;
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
LAB_14029c3a0:
  if ((char)param_2[1] == '\0') {
    lVar8 = *param_2;
    if (lVar8 == 0) {
LAB_14029c3e5:
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
      if (sVar5 == -1) goto LAB_14029c3e5;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar8 = *param_3;
    if (lVar8 == 0) {
LAB_14029c436:
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
      if (sVar5 == -1) goto LAB_14029c436;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar8 = *param_2;
  uVar16 = local_d4;
  if (lVar8 == 0) {
    if (*param_3 == 0) goto LAB_14029c45d;
  }
  else if (*param_3 != 0) goto LAB_14029c45d;
  if ((char)param_2[1] == '\0') {
    if (lVar8 == 0) {
LAB_14029c595:
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
      if (sVar5 == -1) goto LAB_14029c595;
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
    if (sVar5 == 0) goto LAB_14029c45d;
    if ((char)param_2[1] == '\0') {
      lVar8 = *param_2;
      if (lVar8 == 0) {
LAB_14029c674:
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
        if (sVar4 == -1) goto LAB_14029c674;
        *(short *)((longlong)param_2 + 10) = sVar4;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar9 = local_a8;
    if (*(short *)((longlong)param_2 + 10) != sVar5) goto LAB_14029c45d;
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
LAB_14029c78e:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_14029c76b:
      sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar2 = **(int **)(lVar8 + 0x50);
      if (iVar2 < 1) goto LAB_14029c76b;
      **(int **)(lVar8 + 0x50) = iVar2 + -1;
      psVar3 = (short *)**(longlong **)(lVar8 + 0x38);
      **(longlong **)(lVar8 + 0x38) = (longlong)(psVar3 + 1);
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_14029c78e;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_14029c3a0;
LAB_14029c82c:
  pcVar17 = local_d0;
  if (local_d5 == '\0') {
    *local_d0 = '0';
    pcVar17 = local_d0 + 1;
  }
  *pcVar17 = '\0';
  uVar15 = CONCAT11(cVar14,local_d8);
  goto LAB_14029c85a;
LAB_14029c45d:
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
LAB_14029c496:
    if ((char)param_2[1] == '\0') {
      FUN_1402a7e60(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_1402a7e60(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_14029c4cf;
    }
    else if (*param_3 != 0) goto LAB_14029c4cf;
    if ((char)param_2[1] == '\0') {
      FUN_1402a7e60(param_2);
    }
    if (*(short *)((longlong)param_2 + 10) != (short)uVar16) goto LAB_14029c4cf;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_14029c818:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar14 = '\x01';
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_14029c7f9:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_14029c7f9;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_14029c818;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar14 = '\x01';
    }
    goto LAB_14029c496;
  }
LAB_14029c4cf:
  ppppcVar10 = local_98;
  if (0xf < local_80) {
    ppppcVar10 = (char ****)local_98[0];
  }
  ppppcVar18 = (char ****)((longlong)ppppcVar10 + local_88);
  cVar11 = '\0';
  lVar21 = local_c8;
  if (local_d6 != '\0') {
LAB_14029c4f0:
    do {
      if ((cVar14 != '\0') || (lVar21 == 0)) goto LAB_14029c82c;
      if (ppppcVar10 != ppppcVar18) {
        cVar11 = *(char *)ppppcVar10;
        ppppcVar10 = (char ****)((longlong)ppppcVar10 + 1);
      }
      lVar21 = lVar21 + -1;
    } while (0x7d < (byte)(cVar11 - 1U));
    if (lVar21 == 0) {
LAB_14029c534:
      ppppcVar7 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar7 = (char ****)local_b8;
      }
      if (*(char *)ppppcVar7 <= cVar11) goto LAB_14029c4f0;
    }
    else {
      ppppcVar7 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar7 = (char ****)local_b8;
      }
      if (*(char *)((longlong)ppppcVar7 + lVar21) == cVar11) {
        if (lVar21 == 0) goto LAB_14029c534;
        goto LAB_14029c4f0;
      }
    }
    cVar14 = '\x01';
    goto LAB_14029c4f0;
  }
  uVar15 = (ushort)(byte)~local_d8;
LAB_14029c85a:
  thunk_FUN_140017240(&local_b8);
  thunk_FUN_140017240(local_98);
  return uVar15;
}

