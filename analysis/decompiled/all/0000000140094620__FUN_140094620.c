// Function: FUN_140094620
// Addr: 140094620
// Size: 3393 bytes


ulonglong FUN_140094620(char *param_1,longlong *param_2,longlong *param_3,uint param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  char ****ppppcVar12;
  longlong lVar13;
  char ****ppppcVar14;
  char *pcVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  byte bVar18;
  ulonglong uVar19;
  char ****ppppcVar20;
  char ****ppppcVar21;
  ulonglong uVar22;
  byte local_res8;
  char local_res10;
  undefined2 local_res20;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  char local_d8;
  ulonglong local_d0;
  char *local_c8;
  char ***local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char *local_98;
  longlong *local_90;
  char local_88 [22];
  char local_72;
  byte local_71;
  char local_70;
  char local_6f;
  undefined1 local_6e [6];
  char ***local_68 [2];
  longlong local_58;
  ulonglong local_50;
  
  puVar17 = auStack_f8;
  plVar11 = (longlong *)FUN_140035e40(param_5);
  (**(code **)(*plVar11 + 0x28))(plVar11,local_68);
  if (local_58 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = (longlong *)FUN_140013e10(param_5);
  (**(code **)(*plVar11 + 0x38))(plVar11,"0123456789ABCDEFabcdef-+Xx",&DAT_1404856ab,local_88);
  plVar11 = (longlong *)0x0;
  local_res10 = '\0';
  if (cVar7 != '\0') {
    plVar16 = (longlong *)*param_2;
LAB_1400946b6:
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_1400946eb:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_1400946eb;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_14009472b:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_14009472b;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_140094740;
    }
    else if (*param_3 != 0) goto LAB_140094740;
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_1400947bb:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_1400947bb;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094740;
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_14009481a:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_res10 = '\x01';
      plVar16 = plVar11;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_1400947fe:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_1400947fe;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_14009481a;
      *(undefined1 *)(param_2 + 1) = 0;
      local_res10 = '\x01';
      plVar16 = (longlong *)*param_2;
    }
    goto LAB_1400946b6;
  }
LAB_140094740:
  cVar8 = (char)param_2[1];
  local_c8 = param_1;
  if (cVar8 == '\0') {
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_14009483d:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_14009483d;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar8 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_140094882:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094882;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar8 = (char)param_2[1];
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 != 0) {
LAB_1400948ad:
      if (cVar8 == '\0') {
        if (plVar16 == (longlong *)0x0) {
LAB_1400948e6:
          *param_2 = 0;
          plVar16 = plVar11;
        }
        else {
          if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
            uVar10 = (**(code **)(*plVar16 + 0x30))();
          }
          else {
            uVar10 = (uint)**(byte **)plVar16[7];
          }
          if (uVar10 == 0xffffffff) goto LAB_1400948e6;
          *(char *)((longlong)param_2 + 9) = (char)uVar10;
          plVar16 = (longlong *)*param_2;
        }
        *(undefined1 *)(param_2 + 1) = 1;
        cVar8 = '\x01';
      }
      bVar18 = *(byte *)((longlong)param_2 + 9);
      if (bVar18 == local_71) {
        *param_1 = '+';
        local_c8 = param_1 + 1;
        plVar16 = (longlong *)*param_2;
        if (plVar16 != (longlong *)0x0) {
          if (*(longlong *)plVar16[7] == 0) {
LAB_14009493b:
            uVar10 = (**(code **)(*plVar16 + 0x38))();
          }
          else {
            iVar2 = *(int *)plVar16[10];
            if (iVar2 < 1) goto LAB_14009493b;
            *(int *)plVar16[10] = iVar2 + -1;
            pbVar3 = *(byte **)plVar16[7];
            *(byte **)plVar16[7] = pbVar3 + 1;
            uVar10 = (uint)*pbVar3;
          }
          if (uVar10 != 0xffffffff) {
            cVar8 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_140094a0e;
          }
        }
        cVar8 = '\x01';
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (cVar8 == '\0') {
          if (plVar16 != (longlong *)0x0) {
            if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
              uVar10 = (**(code **)(*plVar16 + 0x30))();
            }
            else {
              uVar10 = (uint)**(byte **)plVar16[7];
            }
            if (uVar10 != 0xffffffff) {
              *(char *)((longlong)param_2 + 9) = (char)uVar10;
              cVar8 = '\x01';
              *(undefined1 *)(param_2 + 1) = 1;
              goto LAB_1400949ad;
            }
            bVar18 = *(byte *)((longlong)param_2 + 9);
          }
          uVar10 = (uint)bVar18;
          *param_2 = 0;
          *(undefined1 *)(param_2 + 1) = 1;
          cVar8 = '\x01';
        }
        else {
          uVar10 = (uint)bVar18;
        }
LAB_1400949ad:
        if ((char)uVar10 != local_72) goto LAB_140094a0e;
        *param_1 = '-';
        local_c8 = param_1 + 1;
        plVar16 = (longlong *)*param_2;
        if (plVar16 != (longlong *)0x0) {
          if (*(longlong *)plVar16[7] == 0) {
LAB_1400949f2:
            uVar10 = (**(code **)(*plVar16 + 0x38))();
          }
          else {
            iVar2 = *(int *)plVar16[10];
            if (iVar2 < 1) goto LAB_1400949f2;
            *(int *)plVar16[10] = iVar2 + -1;
            pbVar3 = *(byte **)plVar16[7];
            *(byte **)plVar16[7] = pbVar3 + 1;
            uVar10 = (uint)*pbVar3;
          }
          if (uVar10 != 0xffffffff) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar8 = '\0';
            goto LAB_140094a0e;
          }
        }
        *param_2 = 0;
        cVar8 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
  }
  else if (*param_3 == 0) goto LAB_1400948ad;
LAB_140094a0e:
  if (cVar7 != '\0') {
    plVar16 = (longlong *)*param_2;
LAB_140094a20:
    if (cVar8 == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094a53:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094a53;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_140094a93:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094a93;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_140094aa8;
    }
    else if (*param_3 != 0) goto LAB_140094aa8;
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094afe:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094afe;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094aa8;
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_140094b59:
      cVar8 = '\x01';
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_res10 = '\x01';
      plVar16 = plVar11;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094b3d:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094b3d;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094b59;
      cVar8 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_res10 = '\x01';
      plVar16 = (longlong *)*param_2;
    }
    goto LAB_140094a20;
  }
LAB_140094aa8:
  if ((param_4 & 0xe00) == 0x400) {
    local_res8 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    local_res8 = 0x10;
  }
  else {
    local_res8 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_d8 = '\0';
  if ((char)param_2[1] == '\0') {
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_140094bc5:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094bc5;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_140094c05:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094c05;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 == 0) goto LAB_140094c1a;
LAB_140094c50:
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094c85:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094c85;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != local_88[0]) goto LAB_140094c1a;
    plVar16 = (longlong *)*param_2;
    bVar18 = 1;
    bVar5 = true;
    if (plVar16 == (longlong *)0x0) {
LAB_140094d0f:
      *param_2 = 0;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094cce:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094cce;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094d0f;
      plVar16 = (longlong *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      if (plVar16 == (longlong *)0x0) goto LAB_140094d0f;
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094d0f;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_140094d4f:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094d4f;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 != (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_140094d7d;
LAB_140094d63:
      bVar18 = 1;
      if (local_res8 == 0) {
        local_res8 = 8;
        goto LAB_140094c34;
      }
      goto LAB_140094c2a;
    }
    if (*param_3 == 0) goto LAB_140094d63;
LAB_140094d7d:
    cVar8 = (char)param_2[1];
    if (cVar8 == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094db4:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094db4;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar8 = '\x01';
    }
    cVar9 = *(char *)((longlong)param_2 + 9);
    if (cVar9 != local_6f) {
      if (cVar8 == '\0') {
        plVar16 = (longlong *)*param_2;
        if (plVar16 == (longlong *)0x0) {
LAB_140094dfe:
          uVar10 = (uint)*(byte *)((longlong)param_2 + 9);
          *param_2 = 0;
        }
        else {
          if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
            uVar10 = (**(code **)(*plVar16 + 0x30))();
          }
          else {
            uVar10 = (uint)**(byte **)plVar16[7];
          }
          if (uVar10 == 0xffffffff) goto LAB_140094dfe;
          *(char *)((longlong)param_2 + 9) = (char)uVar10;
        }
        cVar9 = (char)uVar10;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (cVar9 != local_70) goto LAB_140094d63;
    }
    if ((local_res8 & 0xef) != 0) goto LAB_140094c2a;
    plVar16 = (longlong *)*param_2;
    bVar18 = 0;
    bVar5 = false;
    local_res8 = 0x10;
    if (plVar16 == (longlong *)0x0) {
LAB_140094e70:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094e5c:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094e5c;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094e70;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_140094c34:
    uVar22 = 0x16;
    if (local_res8 == 8) {
      uVar22 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_140094c50;
LAB_140094c1a:
    bVar18 = 0;
    bVar5 = false;
    if (local_res8 != 0) {
LAB_140094c2a:
      if (local_res8 != 10) goto LAB_140094c34;
    }
    uVar22 = 10;
  }
  uStack_b8 = 0;
  uVar19 = 0xf;
  local_c0 = (char ***)(ulonglong)bVar18;
  local_90 = (longlong *)0x0;
  local_a0 = uVar22;
  local_b0 = 1;
  local_a8 = 0xf;
  local_98 = param_1 + 0x1f;
  ppppcVar20 = (char ****)local_c0;
LAB_140094ec0:
  if ((char)param_2[1] == '\0') {
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_140094ef8:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094ef8;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_140094f3d:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094f3d;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 != 0) goto LAB_140095055;
LAB_140094f63:
    if (plVar11 != (longlong *)0x0) {
      ppppcVar14 = &local_c0;
      if (0xf < uVar19) {
        ppppcVar14 = ppppcVar20;
      }
      if (*(char *)((longlong)ppppcVar14 + (longlong)plVar11) < '\x01') {
        local_res10 = '\x01';
      }
      else {
        plVar11 = (longlong *)((longlong)plVar11 + 1);
      }
    }
    if (cVar7 != '\0') goto LAB_140094f90;
    goto LAB_140094fc1;
  }
  if (*param_3 != 0) goto LAB_140094f63;
LAB_140095055:
  if ((char)param_2[1] == '\0') {
    if (plVar16 == (longlong *)0x0) {
LAB_14009508a:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_14009508a;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar13 = thunk_FUN_14028d040(local_88,local_6e,*(undefined1 *)((longlong)param_2 + 9));
  if ((ulonglong)(lVar13 - (longlong)local_88) < uVar22) {
    cVar8 = "0123456789ABCDEFabcdef-+Xx"[lVar13 - (longlong)local_88];
    *local_c8 = cVar8;
    if (((local_d8 != '\0') || (cVar8 != '0')) && (local_c8 < param_1 + 0x1f)) {
      local_c8 = local_c8 + 1;
      local_d8 = '\x01';
    }
    bVar5 = true;
    ppppcVar14 = &local_c0;
    if (0xf < uVar19) {
      ppppcVar14 = ppppcVar20;
    }
    if (*(char *)((longlong)ppppcVar14 + (longlong)plVar11) != '\x7f') {
      ppppcVar14 = &local_c0;
      if (0xf < uVar19) {
        ppppcVar14 = ppppcVar20;
      }
      *(char *)((longlong)ppppcVar14 + (longlong)plVar11) =
           *(char *)((longlong)ppppcVar14 + (longlong)plVar11) + '\x01';
      uVar19 = local_a8;
      ppppcVar20 = (char ****)local_c0;
    }
  }
  else {
    if (cVar7 == '\0') goto LAB_140094f63;
    if ((char)param_2[1] == '\0') {
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
LAB_140095161:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140095161;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar6 = local_b0;
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094f63;
    ppppcVar14 = &local_c0;
    if (0xf < uVar19) {
      ppppcVar14 = ppppcVar20;
    }
    if (*(char *)((longlong)ppppcVar14 + (longlong)plVar11) == '\0') {
      local_res10 = '\x01';
    }
    else {
      if (uVar19 <= local_b0) goto LAB_1400951c1;
      local_b0 = local_b0 + 1;
      ppppcVar14 = &local_c0;
      if (0xf < uVar19) {
        ppppcVar14 = ppppcVar20;
      }
      ((char *)((longlong)ppppcVar14 + uVar6))[0] = '\0';
      ((char *)((longlong)ppppcVar14 + uVar6))[1] = '\0';
      plVar11 = (longlong *)((longlong)local_90 + 1);
      local_90 = plVar11;
      uVar19 = local_a8;
      ppppcVar20 = (char ****)local_c0;
    }
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
LAB_140095344:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar16[7] == 0) {
LAB_140095330:
      uVar10 = (**(code **)(*plVar16 + 0x38))();
    }
    else {
      iVar2 = *(int *)plVar16[10];
      if (iVar2 < 1) goto LAB_140095330;
      *(int *)plVar16[10] = iVar2 + -1;
      pbVar3 = *(byte **)plVar16[7];
      *(byte **)plVar16[7] = pbVar3 + 1;
      uVar10 = (uint)*pbVar3;
    }
    if (uVar10 == 0xffffffff) goto LAB_140095344;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_140094ec0;
LAB_140094f90:
  if ((char)param_2[1] == '\0') {
    FUN_1400975d0(param_2);
  }
  if ((char)param_3[1] == '\0') {
    FUN_1400975d0(param_3);
  }
  if (*param_2 == 0) {
    if (*param_3 == 0) goto LAB_140094fc1;
  }
  else if (*param_3 != 0) goto LAB_140094fc1;
  if ((char)param_2[1] == '\0') {
    FUN_1400975d0(param_2);
  }
  if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094fc1;
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
LAB_1400953c9:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
    local_res10 = '\x01';
  }
  else {
    if (*(longlong *)plVar16[7] == 0) {
LAB_1400953b1:
      uVar10 = (**(code **)(*plVar16 + 0x38))();
    }
    else {
      iVar2 = *(int *)plVar16[10];
      if (iVar2 < 1) goto LAB_1400953b1;
      *(int *)plVar16[10] = iVar2 + -1;
      pbVar3 = *(byte **)plVar16[7];
      *(byte **)plVar16[7] = pbVar3 + 1;
      uVar10 = (uint)*pbVar3;
    }
    if (uVar10 == 0xffffffff) goto LAB_1400953c9;
    local_res10 = '\x01';
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_140094f90;
UNWIND_INFO_1400953d1_UnwindCodes_4__UnwindOpCode:
  pcVar15 = local_c8;
  if (local_d8 == '\0') {
    *local_c8 = '0';
    pcVar15 = local_c8 + 1;
  }
  *pcVar15 = '\0';
  local_res20._1_1_ = local_res10;
  goto code_r0x000140095405;
LAB_1400951c1:
  if (local_b0 != 0x7fffffffffffffff) {
    uVar22 = local_b0 + 1;
    local_d0 = uVar22 | 0xf;
    if (local_d0 < 0x8000000000000000) {
      if (0x7fffffffffffffff - (uVar19 >> 1) < uVar19) {
        local_d0 = 0x7fffffffffffffff;
        uVar22 = 0x8000000000000027;
      }
      else {
        uVar1 = (uVar19 >> 1) + uVar19;
        if (local_d0 < uVar1) {
          local_d0 = uVar1;
        }
        uVar1 = local_d0 + 1;
        if (uVar1 == 0) {
          local_b0 = uVar22;
          local_a8 = local_d0;
          if (0xf < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(0,ppppcVar20,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,&local_c0,uVar6);
        }
        if (uVar1 < 0x1000) {
          uVar22 = func_0x00014028aff0(uVar1);
          return uVar22;
        }
        uVar22 = local_d0 + 0x28;
        if (uVar22 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
      }
    }
    else {
      local_d0 = 0x7fffffffffffffff;
      uVar22 = 0x8000000000000027;
    }
    uVar22 = func_0x00014028aff0(uVar22);
    return uVar22;
  }
  goto LAB_140095495;
LAB_140094fc1:
  ppppcVar14 = local_68;
  if (0xf < local_50) {
    ppppcVar14 = (char ****)local_68[0];
  }
  cVar7 = '\0';
  ppppcVar21 = (char ****)((longlong)ppppcVar14 + local_58);
  if (bVar5) {
LAB_140094fe7:
    do {
      plVar16 = plVar11;
      if ((local_res10 != '\0') || (plVar16 == (longlong *)0x0))
      goto UNWIND_INFO_1400953d1_UnwindCodes_4__UnwindOpCode;
      if (ppppcVar14 != ppppcVar21) {
        cVar7 = *(char *)ppppcVar14;
        ppppcVar14 = (char ****)((longlong)ppppcVar14 + 1);
      }
      plVar11 = (longlong *)((longlong)plVar16 + -1);
    } while (0x7d < (byte)(cVar7 - 1U));
    if (plVar11 == (longlong *)0x0) {
LAB_140095036:
      ppppcVar12 = &local_c0;
      if (0xf < uVar19) {
        ppppcVar12 = ppppcVar20;
      }
      if (*(char *)ppppcVar12 <= cVar7) goto LAB_140094fe7;
    }
    else {
      ppppcVar12 = &local_c0;
      if (0xf < uVar19) {
        ppppcVar12 = ppppcVar20;
      }
      if (*(char *)((longlong)ppppcVar12 + (longlong)plVar16 + -1) == cVar7) {
        if (plVar11 == (longlong *)0x0) goto LAB_140095036;
        goto LAB_140094fe7;
      }
    }
    local_res10 = '\x01';
    goto LAB_140094fe7;
  }
  local_res8 = ~local_res8;
  local_res20._1_1_ = '\0';
code_r0x000140095405:
  local_res20 = CONCAT11(local_res20._1_1_,local_res8);
  if (0xf < uVar19) {
    uVar22 = uVar19 + 1;
    ppppcVar14 = ppppcVar20;
    if (uVar22 < 0x1000) {
code_r0x000140095433:
      func_0x00014028b040(ppppcVar14,uVar22);
      goto code_r0x000140095443;
    }
    ppppcVar14 = (char ****)ppppcVar20[-1];
    if ((char *)((longlong)ppppcVar20 + (-8 - (longlong)ppppcVar14)) < (char *)0x20) {
      uVar22 = uVar19 + 0x28;
      goto code_r0x000140095433;
    }
code_r0x00014009548e:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar17 = auStack_f0;
LAB_140095495:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar17 + -8) = &UNK_14009549a;
    FUN_1400173b0();
  }
code_r0x000140095443:
  if (local_50 < 0x10) goto code_r0x000140095476;
  uVar22 = local_50 + 1;
  ppppcVar20 = (char ****)local_68[0];
  if (0xfff < uVar22) {
    ppppcVar20 = (char ****)local_68[0][-1];
    if ((char *)0x1f < (char *)((longlong)local_68[0] + (-8 - (longlong)ppppcVar20)))
    goto code_r0x00014009548e;
    uVar22 = local_50 + 0x28;
  }
  func_0x00014028b040(ppppcVar20,uVar22);
code_r0x000140095476:
  return (ulonglong)local_res20;
}

