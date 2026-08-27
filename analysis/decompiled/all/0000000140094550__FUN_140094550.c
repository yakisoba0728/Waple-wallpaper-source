// Function: FUN_140094550
// Addr: 140094550
// Size: 3711 bytes


undefined2
FUN_140094550(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5)

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
  char *****pppppcVar12;
  longlong lVar13;
  char ****ppppcVar14;
  char *pcVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  byte bVar19;
  ulonglong uVar20;
  char *****pppppcVar21;
  char *****pppppcVar22;
  char *****pppppcVar23;
  ulonglong uVar24;
  byte local_res8;
  char local_res10;
  undefined2 local_res20;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  char local_d8;
  ulonglong local_d0;
  char *local_c8;
  char ****local_c0;
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
  char ****local_68 [2];
  longlong local_58;
  ulonglong local_50;
  
  puVar18 = auStack_f8;
  plVar11 = (longlong *)FUN_140035d70(param_5);
  (**(code **)(*plVar11 + 0x28))(plVar11,local_68);
  if (local_58 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = (longlong *)FUN_140013d40(param_5);
  (**(code **)(*plVar11 + 0x38))(plVar11,"0123456789ABCDEFabcdef-+Xx",&DAT_1404855db,local_88);
  plVar11 = (longlong *)0x0;
  local_res10 = '\0';
  if (cVar7 != '\0') {
    plVar16 = (longlong *)*param_2;
LAB_1400945e6:
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_14009461b:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_14009461b;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_14009465b:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_14009465b;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_140094670;
    }
    else if (*param_3 != 0) goto LAB_140094670;
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
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094670;
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_14009474a:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_res10 = '\x01';
      plVar16 = plVar11;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_14009472e:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_14009472e;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_14009474a;
      *(undefined1 *)(param_2 + 1) = 0;
      local_res10 = '\x01';
      plVar16 = (longlong *)*param_2;
    }
    goto LAB_1400945e6;
  }
LAB_140094670:
  cVar8 = (char)param_2[1];
  local_c8 = param_1;
  if (cVar8 == '\0') {
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_14009476d:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_14009476d;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar8 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_1400947b2:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_1400947b2;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar8 = (char)param_2[1];
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 != 0) {
LAB_1400947dd:
      if (cVar8 == '\0') {
        if (plVar16 == (longlong *)0x0) {
LAB_140094816:
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
          if (uVar10 == 0xffffffff) goto LAB_140094816;
          *(char *)((longlong)param_2 + 9) = (char)uVar10;
          plVar16 = (longlong *)*param_2;
        }
        *(undefined1 *)(param_2 + 1) = 1;
        cVar8 = '\x01';
      }
      bVar19 = *(byte *)((longlong)param_2 + 9);
      if (bVar19 == local_71) {
        *param_1 = '+';
        local_c8 = param_1 + 1;
        plVar16 = (longlong *)*param_2;
        if (plVar16 != (longlong *)0x0) {
          if (*(longlong *)plVar16[7] == 0) {
LAB_14009486b:
            uVar10 = (**(code **)(*plVar16 + 0x38))();
          }
          else {
            iVar2 = *(int *)plVar16[10];
            if (iVar2 < 1) goto LAB_14009486b;
            *(int *)plVar16[10] = iVar2 + -1;
            pbVar3 = *(byte **)plVar16[7];
            *(byte **)plVar16[7] = pbVar3 + 1;
            uVar10 = (uint)*pbVar3;
          }
          if (uVar10 != 0xffffffff) {
            cVar8 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_14009493e;
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
              goto LAB_1400948dd;
            }
            bVar19 = *(byte *)((longlong)param_2 + 9);
          }
          uVar10 = (uint)bVar19;
          *param_2 = 0;
          *(undefined1 *)(param_2 + 1) = 1;
          cVar8 = '\x01';
        }
        else {
          uVar10 = (uint)bVar19;
        }
LAB_1400948dd:
        if ((char)uVar10 != local_72) goto LAB_14009493e;
        *param_1 = '-';
        local_c8 = param_1 + 1;
        plVar16 = (longlong *)*param_2;
        if (plVar16 != (longlong *)0x0) {
          if (*(longlong *)plVar16[7] == 0) {
LAB_140094922:
            uVar10 = (**(code **)(*plVar16 + 0x38))();
          }
          else {
            iVar2 = *(int *)plVar16[10];
            if (iVar2 < 1) goto LAB_140094922;
            *(int *)plVar16[10] = iVar2 + -1;
            pbVar3 = *(byte **)plVar16[7];
            *(byte **)plVar16[7] = pbVar3 + 1;
            uVar10 = (uint)*pbVar3;
          }
          if (uVar10 != 0xffffffff) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar8 = '\0';
            goto LAB_14009493e;
          }
        }
        *param_2 = 0;
        cVar8 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
  }
  else if (*param_3 == 0) goto LAB_1400947dd;
LAB_14009493e:
  if (cVar7 != '\0') {
    plVar16 = (longlong *)*param_2;
LAB_140094950:
    if (cVar8 == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094983:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094983;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_1400949c3:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_1400949c3;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_1400949d8;
    }
    else if (*param_3 != 0) goto LAB_1400949d8;
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094a2e:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094a2e;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_1400949d8;
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_140094a89:
      cVar8 = '\x01';
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_res10 = '\x01';
      plVar16 = plVar11;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094a6d:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094a6d;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094a89;
      cVar8 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_res10 = '\x01';
      plVar16 = (longlong *)*param_2;
    }
    goto LAB_140094950;
  }
LAB_1400949d8:
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
LAB_140094af5:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094af5;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_140094b35:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094b35;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 == 0) goto LAB_140094b4a;
LAB_140094b80:
    if ((char)param_2[1] == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094bb5:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094bb5;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != local_88[0]) goto LAB_140094b4a;
    plVar16 = (longlong *)*param_2;
    bVar19 = 1;
    bVar5 = true;
    if (plVar16 == (longlong *)0x0) {
LAB_140094c3f:
      *param_2 = 0;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094bfe:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094bfe;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094c3f;
      plVar16 = (longlong *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      if (plVar16 == (longlong *)0x0) goto LAB_140094c3f;
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094c3f;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      plVar16 = (longlong *)*param_3;
      if (plVar16 == (longlong *)0x0) {
LAB_140094c7f:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094c7f;
        *(char *)((longlong)param_3 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    plVar16 = (longlong *)*param_2;
    if (plVar16 != (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_140094cad;
LAB_140094c93:
      bVar19 = 1;
      if (local_res8 == 0) {
        local_res8 = 8;
        goto LAB_140094b64;
      }
      goto LAB_140094b5a;
    }
    if (*param_3 == 0) goto LAB_140094c93;
LAB_140094cad:
    cVar8 = (char)param_2[1];
    if (cVar8 == '\0') {
      if (plVar16 == (longlong *)0x0) {
LAB_140094ce4:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140094ce4;
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
LAB_140094d2e:
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
          if (uVar10 == 0xffffffff) goto LAB_140094d2e;
          *(char *)((longlong)param_2 + 9) = (char)uVar10;
        }
        cVar9 = (char)uVar10;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (cVar9 != local_70) goto LAB_140094c93;
    }
    if ((local_res8 & 0xef) != 0) goto LAB_140094b5a;
    plVar16 = (longlong *)*param_2;
    bVar19 = 0;
    bVar5 = false;
    local_res8 = 0x10;
    if (plVar16 == (longlong *)0x0) {
LAB_140094da0:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_140094d8c:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_140094d8c;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_140094da0;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_140094b64:
    uVar24 = 0x16;
    if (local_res8 == 8) {
      uVar24 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_140094b80;
LAB_140094b4a:
    bVar19 = 0;
    bVar5 = false;
    if (local_res8 != 0) {
LAB_140094b5a:
      if (local_res8 != 10) goto LAB_140094b64;
    }
    uVar24 = 10;
  }
  uStack_b8 = 0;
  uVar20 = 0xf;
  param_1 = param_1 + 0x1f;
  local_c0 = (char ****)(ulonglong)bVar19;
  local_90 = (longlong *)0x0;
  local_a0 = uVar24;
  local_b0 = 1;
  local_a8 = 0xf;
  local_98 = param_1;
  pppppcVar22 = (char *****)local_c0;
LAB_140094df0:
  if ((char)param_2[1] == '\0') {
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_140094e28:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094e28;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    plVar16 = (longlong *)*param_3;
    if (plVar16 == (longlong *)0x0) {
LAB_140094e6d:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094e6d;
      *(char *)((longlong)param_3 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
    if (*param_3 == 0) goto LAB_140094e93;
  }
  else if (*param_3 != 0) goto LAB_140094e93;
  if ((char)param_2[1] == '\0') {
    if (plVar16 == (longlong *)0x0) {
LAB_140094fba:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
        uVar10 = (**(code **)(*plVar16 + 0x30))();
      }
      else {
        uVar10 = (uint)**(byte **)plVar16[7];
      }
      if (uVar10 == 0xffffffff) goto LAB_140094fba;
      *(char *)((longlong)param_2 + 9) = (char)uVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar13 = thunk_FUN_14028cf70(local_88,local_6e,*(undefined1 *)((longlong)param_2 + 9));
  if ((ulonglong)(lVar13 - (longlong)local_88) < uVar24) {
    cVar8 = "0123456789ABCDEFabcdef-+Xx"[lVar13 - (longlong)local_88];
    *local_c8 = cVar8;
    if (((local_d8 != '\0') || (cVar8 != '0')) && (local_c8 < param_1)) {
      local_c8 = local_c8 + 1;
      local_d8 = '\x01';
    }
    bVar5 = true;
    pppppcVar21 = &local_c0;
    if (0xf < uVar20) {
      pppppcVar21 = pppppcVar22;
    }
    if (*(char *)((longlong)pppppcVar21 + (longlong)plVar11) != '\x7f') {
      pppppcVar21 = &local_c0;
      if (0xf < uVar20) {
        pppppcVar21 = pppppcVar22;
      }
      *(char *)((longlong)pppppcVar21 + (longlong)plVar11) =
           *(char *)((longlong)pppppcVar21 + (longlong)plVar11) + '\x01';
      uVar20 = local_a8;
      pppppcVar22 = (char *****)local_c0;
    }
  }
  else {
    if (cVar7 == '\0') goto LAB_140094e93;
    if ((char)param_2[1] == '\0') {
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
LAB_140095091:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)plVar16[7] == (byte *)0x0) || (*(int *)plVar16[10] < 1)) {
          uVar10 = (**(code **)(*plVar16 + 0x30))();
        }
        else {
          uVar10 = (uint)**(byte **)plVar16[7];
        }
        if (uVar10 == 0xffffffff) goto LAB_140095091;
        *(char *)((longlong)param_2 + 9) = (char)uVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar6 = local_b0;
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094e93;
    pppppcVar21 = &local_c0;
    if (0xf < uVar20) {
      pppppcVar21 = pppppcVar22;
    }
    if (*(char *)((longlong)pppppcVar21 + (longlong)plVar11) == '\0') {
      local_res10 = '\x01';
    }
    else {
      if (local_b0 < uVar20) {
        local_b0 = local_b0 + 1;
        pppppcVar21 = &local_c0;
        if (0xf < uVar20) {
          pppppcVar21 = pppppcVar22;
        }
        ((char *)((longlong)pppppcVar21 + uVar6))[0] = '\0';
        ((char *)((longlong)pppppcVar21 + uVar6))[1] = '\0';
        uVar20 = local_a8;
      }
      else {
        if (local_b0 == 0x7fffffffffffffff) goto LAB_1400953c5;
        uVar24 = local_b0 + 1;
        local_d0 = uVar24 | 0xf;
        if (local_d0 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (uVar20 >> 1) < uVar20) {
            local_d0 = 0x7fffffffffffffff;
            uVar17 = 0x8000000000000027;
            goto LAB_14009517c;
          }
          uVar17 = (uVar20 >> 1) + uVar20;
          if (local_d0 < uVar17) {
            local_d0 = uVar17;
          }
          uVar1 = local_d0 + 1;
          if (uVar1 == 0) {
            pppppcVar21 = (char *****)0x0;
          }
          else {
            if (0xfff < uVar1) {
              uVar17 = local_d0 + 0x28;
              if (uVar17 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14009517c;
            }
            pppppcVar21 = (char *****)FUN_14028af20(uVar1);
          }
        }
        else {
          local_d0 = 0x7fffffffffffffff;
          uVar17 = 0x8000000000000027;
LAB_14009517c:
          ppppcVar14 = (char ****)FUN_14028af20(uVar17);
          if (ppppcVar14 == (char ****)0x0) goto LAB_1400953be;
          pppppcVar21 = (char *****)((longlong)ppppcVar14 + 0x27U & 0xffffffffffffffe0);
          pppppcVar21[-1] = ppppcVar14;
        }
        local_b0 = uVar24;
        local_a8 = local_d0;
        if (uVar20 < 0x10) {
          FUN_1404210f0(pppppcVar21,&local_c0,uVar6);
          ((char *)((longlong)pppppcVar21 + uVar6))[0] = '\0';
          ((char *)((longlong)pppppcVar21 + uVar6))[1] = '\0';
        }
        else {
          FUN_1404210f0(pppppcVar21,pppppcVar22,uVar6);
          ((char *)((longlong)pppppcVar21 + uVar6))[0] = '\0';
          ((char *)((longlong)pppppcVar21 + uVar6))[1] = '\0';
          if (uVar20 + 1 < 0x1000) {
            thunk_FUN_14028af80(pppppcVar22);
          }
          else {
            if ((char *)0x1f < (char *)((longlong)pppppcVar22 + (-8 - (longlong)pppppcVar22[-1])))
            goto LAB_1400953be;
            thunk_FUN_14028af80();
          }
        }
        local_c0 = (char ****)pppppcVar21;
        uVar20 = local_d0;
        param_1 = local_98;
        uVar24 = local_a0;
      }
      plVar11 = (longlong *)((longlong)local_90 + 1);
      local_90 = plVar11;
      pppppcVar22 = (char *****)local_c0;
    }
  }
  plVar16 = (longlong *)*param_2;
  if (plVar16 == (longlong *)0x0) {
LAB_140095274:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar16[7] == 0) {
LAB_140095260:
      uVar10 = (**(code **)(*plVar16 + 0x38))();
    }
    else {
      iVar2 = *(int *)plVar16[10];
      if (iVar2 < 1) goto LAB_140095260;
      *(int *)plVar16[10] = iVar2 + -1;
      pbVar3 = *(byte **)plVar16[7];
      *(byte **)plVar16[7] = pbVar3 + 1;
      uVar10 = (uint)*pbVar3;
    }
    if (uVar10 == 0xffffffff) goto LAB_140095274;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_140094df0;
LAB_14009530e:
  pcVar15 = local_c8;
  if (local_d8 == '\0') {
    *local_c8 = '0';
    pcVar15 = local_c8 + 1;
  }
  *pcVar15 = '\0';
  local_res20._1_1_ = local_res10;
  goto LAB_140095335;
LAB_140094e93:
  if (plVar11 != (longlong *)0x0) {
    pppppcVar21 = &local_c0;
    if (0xf < uVar20) {
      pppppcVar21 = pppppcVar22;
    }
    if (*(char *)((longlong)pppppcVar21 + (longlong)plVar11) < '\x01') {
      local_res10 = '\x01';
    }
    else {
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    }
  }
  if (cVar7 != '\0') {
LAB_140094ec0:
    if ((char)param_2[1] == '\0') {
      FUN_140097500(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_140097500(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_140094ef1;
    }
    else if (*param_3 != 0) goto LAB_140094ef1;
    if ((char)param_2[1] == '\0') {
      FUN_140097500(param_2);
    }
    if (*(char *)((longlong)param_2 + 9) != cVar7) goto LAB_140094ef1;
    plVar16 = (longlong *)*param_2;
    if (plVar16 == (longlong *)0x0) {
LAB_1400952f9:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_res10 = '\x01';
    }
    else {
      if (*(longlong *)plVar16[7] == 0) {
LAB_1400952e1:
        uVar10 = (**(code **)(*plVar16 + 0x38))();
      }
      else {
        iVar2 = *(int *)plVar16[10];
        if (iVar2 < 1) goto LAB_1400952e1;
        *(int *)plVar16[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar16[7];
        *(byte **)plVar16[7] = pbVar3 + 1;
        uVar10 = (uint)*pbVar3;
      }
      if (uVar10 == 0xffffffff) goto LAB_1400952f9;
      local_res10 = '\x01';
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_140094ec0;
  }
LAB_140094ef1:
  pppppcVar21 = local_68;
  if (0xf < local_50) {
    pppppcVar21 = (char *****)local_68[0];
  }
  cVar7 = '\0';
  pppppcVar23 = (char *****)((longlong)pppppcVar21 + local_58);
  if (bVar5) {
LAB_140094f17:
    do {
      plVar16 = plVar11;
      if ((local_res10 != '\0') || (plVar16 == (longlong *)0x0)) goto LAB_14009530e;
      if (pppppcVar21 != pppppcVar23) {
        cVar7 = *(char *)pppppcVar21;
        pppppcVar21 = (char *****)((longlong)pppppcVar21 + 1);
      }
      plVar11 = (longlong *)((longlong)plVar16 + -1);
    } while (0x7d < (byte)(cVar7 - 1U));
    if (plVar11 == (longlong *)0x0) {
LAB_140094f66:
      pppppcVar12 = &local_c0;
      if (0xf < uVar20) {
        pppppcVar12 = pppppcVar22;
      }
      if (*(char *)pppppcVar12 <= cVar7) goto LAB_140094f17;
    }
    else {
      pppppcVar12 = &local_c0;
      if (0xf < uVar20) {
        pppppcVar12 = pppppcVar22;
      }
      if (*(char *)((longlong)pppppcVar12 + (longlong)plVar16 + -1) == cVar7) {
        if (plVar11 == (longlong *)0x0) goto LAB_140094f66;
        goto LAB_140094f17;
      }
    }
    local_res10 = '\x01';
    goto LAB_140094f17;
  }
  local_res8 = ~local_res8;
  local_res20._1_1_ = '\0';
LAB_140095335:
  local_res20 = CONCAT11(local_res20._1_1_,local_res8);
  if (0xf < uVar20) {
    uVar24 = uVar20 + 1;
    pppppcVar21 = pppppcVar22;
    if (0xfff < uVar24) {
      pppppcVar21 = (char *****)pppppcVar22[-1];
      if ((char *)0x1f < (char *)((longlong)pppppcVar22 + (-8 - (longlong)pppppcVar21)))
      goto LAB_1400953be;
      uVar24 = uVar20 + 0x28;
    }
    thunk_FUN_14028af80(pppppcVar21,uVar24);
  }
  if (0xf < local_50) {
    uVar24 = local_50 + 1;
    pppppcVar22 = (char *****)local_68[0];
    if (0xfff < uVar24) {
      pppppcVar22 = (char *****)local_68[0][-1];
      if ((char *)0x1f < (char *)((longlong)local_68[0] + (-8 - (longlong)pppppcVar22))) {
LAB_1400953be:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar18 = auStack_f0;
LAB_1400953c5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar18 + -8) = &UNK_1400953ca;
        FUN_1400172e0();
      }
      uVar24 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(pppppcVar22,uVar24);
  }
  return local_res20;
}

