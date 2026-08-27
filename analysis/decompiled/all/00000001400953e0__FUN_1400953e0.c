// Function: FUN_1400953e0
// Addr: 1400953e0
// Size: 6893 bytes


ulonglong FUN_1400953e0(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
                       undefined8 param_5)

{
  int iVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  char ******ppppppcVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  char ******ppppppcVar21;
  ulonglong uVar22;
  undefined1 uVar23;
  longlong lVar25;
  longlong lVar26;
  char ******ppppppcVar27;
  char *pcVar28;
  int iVar29;
  char *local_res8;
  char local_res18;
  longlong local_c8;
  char local_c0 [14];
  char acStack_b2 [14];
  undefined1 local_a4 [4];
  char *****local_a0 [3];
  ulonglong local_88;
  ulonglong local_80;
  char *****local_78 [2];
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined1 uVar24;
  
  plVar12 = (longlong *)FUN_140013d40(param_5);
  (**(code **)(*plVar12 + 0x38))(plVar12,"0123456789ABCDEFabcdef-+XxPp",&DAT_1404855ad,local_c0);
  plVar12 = (longlong *)FUN_140035d70(param_5);
  local_58 = plVar12;
  (**(code **)(*plVar12 + 0x28))(plVar12,local_78);
  if (local_68 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
    local_res18 = '\0';
    if (local_68 != 0) {
LAB_1400954d0:
      if ((char)param_3[1] == '\0') {
        plVar12 = (longlong *)*param_3;
        if (plVar12 == (longlong *)0x0) {
LAB_140095506:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_140095506;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        plVar12 = (longlong *)*param_4;
        if (plVar12 == (longlong *)0x0) {
LAB_140095545:
          *param_4 = 0;
        }
        else {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_140095545;
          *(char *)((longlong)param_4 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
        if (*param_4 == 0) goto LAB_140095472;
      }
      else if (*param_4 != 0) goto LAB_140095472;
      if ((char)param_3[1] == '\0') {
        if (plVar12 == (longlong *)0x0) {
LAB_14009559c:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_14009559c;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_140095472;
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_1400955f8:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        local_res18 = '\x01';
      }
      else {
        if (*(longlong *)plVar12[7] == 0) {
LAB_1400955df:
          uVar11 = (**(code **)(*plVar12 + 0x38))();
        }
        else {
          iVar29 = *(int *)plVar12[10];
          if (iVar29 < 1) goto LAB_1400955df;
          *(int *)plVar12[10] = iVar29 + -1;
          pbVar2 = *(byte **)plVar12[7];
          *(byte **)plVar12[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 == 0xffffffff) goto LAB_1400955f8;
        local_res18 = '\x01';
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1400954d0;
    }
  }
  local_res18 = '\0';
LAB_140095472:
  cVar9 = (char)param_3[1];
  if (cVar9 == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140095618:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095618;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar9 = '\x01';
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_14009565b:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_14009565b;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
    cVar9 = (char)param_3[1];
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 != 0) {
LAB_140095688:
      if (cVar9 == '\0') {
        if (plVar12 == (longlong *)0x0) {
LAB_1400956be:
          plVar12 = (longlong *)0x0;
          *param_3 = 0;
        }
        else {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_1400956be;
          plVar12 = (longlong *)*param_3;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar9 = '\x01';
      }
      if (*(byte *)((longlong)param_3 + 9) == acStack_b2[9]) {
        *param_1 = 0x2b;
        param_1 = param_1 + 1;
        plVar12 = (longlong *)*param_3;
        if (plVar12 != (longlong *)0x0) {
          if (*(longlong *)plVar12[7] == 0) {
LAB_14009570f:
            uVar11 = (**(code **)(*plVar12 + 0x38))();
          }
          else {
            iVar29 = *(int *)plVar12[10];
            if (iVar29 < 1) goto LAB_14009570f;
            *(int *)plVar12[10] = iVar29 + -1;
            pbVar2 = *(byte **)plVar12[7];
            *(byte **)plVar12[7] = pbVar2 + 1;
            uVar11 = (uint)*pbVar2;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_14009577a;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (cVar9 == '\0') {
          if (plVar12 == (longlong *)0x0) {
LAB_14009575e:
            *param_3 = 0;
          }
          else {
            if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
              uVar11 = (**(code **)(*plVar12 + 0x30))();
            }
            else {
              uVar11 = (uint)**(byte **)plVar12[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_14009575e;
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((longlong)param_3 + 9) == acStack_b2[8]) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          FUN_140097490(param_3);
        }
      }
    }
  }
  else if (*param_4 == 0) {
    cVar9 = (char)param_3[1];
    goto LAB_140095688;
  }
LAB_14009577a:
  *param_1 = 0x30;
  uVar23 = 0;
  uVar24 = 0;
  bVar6 = false;
  local_res8 = param_1 + 1;
  bVar5 = false;
  if ((char)param_3[1] == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_1400957cc:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_1400957cc;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_140095810:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095810;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    uVar24 = uVar23;
    if (*param_4 == 0) goto LAB_140095a25;
  }
  else if (*param_4 != 0) goto LAB_140095a25;
  if ((char)param_3[1] == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_140095870:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095870;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar24 = uVar23;
  if (*(char *)((longlong)param_3 + 9) != local_c0[0]) goto LAB_140095a25;
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
LAB_1400958ff:
    *param_3 = 0;
  }
  else {
    if (*(longlong *)plVar12[7] == 0) {
LAB_1400958bb:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar29 = *(int *)plVar12[10];
      if (iVar29 < 1) goto LAB_1400958bb;
      *(int *)plVar12[10] = iVar29 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400958ff;
    *(undefined1 *)(param_3 + 1) = 0;
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) goto LAB_1400958ff;
    if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
      uVar11 = (**(code **)(*plVar12 + 0x30))();
    }
    else {
      uVar11 = (uint)**(byte **)plVar12[7];
    }
    if (uVar11 == 0xffffffff) goto LAB_1400958ff;
    *(char *)((longlong)param_3 + 9) = (char)uVar11;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_140095942:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095942;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 == 0) {
LAB_140095984:
      uVar24 = 10;
      *local_res8 = '\0';
      goto LAB_140096e70;
    }
  }
  else if (*param_4 != 0) goto LAB_140095984;
  cVar9 = (char)param_3[1];
  if (cVar9 == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_1400959a2:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_1400959a2;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar9 = '\x01';
  }
  if (*(byte *)((longlong)param_3 + 9) != acStack_b2[0xb]) {
    if (cVar9 == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 != (longlong *)0x0) {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 != 0xffffffff) {
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
          *(undefined1 *)(param_3 + 1) = 1;
          goto LAB_1400959fe;
        }
      }
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
    }
LAB_1400959fe:
    if ((char)uVar11 != acStack_b2[10]) {
      bVar5 = true;
      uVar24 = 1;
      goto LAB_140095a25;
    }
  }
  bVar6 = true;
  FUN_140097490(param_3);
  *local_res8 = 'x';
  local_res8 = param_1 + 2;
LAB_140095a25:
  iVar29 = 0;
  bVar4 = false;
  uVar22 = 10;
  if (bVar6) {
    uVar22 = 0x16;
  }
  local_c8 = 0;
  pcVar28 = local_res8;
  local_80 = uVar22;
  bVar7 = false;
  if (local_68 != 0) {
LAB_140095bf1:
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_140095c29:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140095c29;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_140095c69:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140095c69;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
      if (*param_4 == 0) goto LAB_140095c7e;
    }
    else if (*param_4 != 0) goto LAB_140095c7e;
    if ((char)param_3[1] == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_140095d15:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140095d15;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_140095c7e;
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140095d71:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      local_res18 = '\x01';
    }
    else {
      if (*(longlong *)plVar12[7] == 0) {
LAB_140095d58:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar1 = *(int *)plVar12[10];
        if (iVar1 < 1) goto LAB_140095d58;
        *(int *)plVar12[10] = iVar1 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 == 0xffffffff) goto LAB_140095d71;
      local_res18 = '\x01';
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_140095bf1;
  }
LAB_140095a57:
  bVar4 = bVar7;
  if ((char)param_3[1] == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140095a8f:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095a8f;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_140095ad4:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095ad4;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 == 0) goto LAB_140096101;
  }
  else if (*param_4 != 0) goto LAB_140096101;
  if ((char)param_3[1] == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_140095b32:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095b32;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar13 = thunk_FUN_14028cf70(local_c0,local_a4,*(undefined1 *)((longlong)param_3 + 9));
  uVar14 = lVar13 - (longlong)local_c0;
  if (uVar22 <= uVar14) goto LAB_140096101;
  if (iVar29 < param_2) {
    if ((uVar14 != 0) || (iVar29 != 0)) {
      *pcVar28 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
      pcVar28 = pcVar28 + 1;
      iVar29 = iVar29 + 1;
      local_res8 = pcVar28;
    }
  }
  else {
    local_c8 = local_c8 + 1;
    if (uVar14 != 0) {
      bVar4 = true;
    }
  }
  plVar12 = (longlong *)*param_3;
  bVar5 = true;
  bVar7 = bVar4;
  if (plVar12 == (longlong *)0x0) {
LAB_140095be1:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar12[7] == 0) {
LAB_140095bcd:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar1 = *(int *)plVar12[10];
      if (iVar1 < 1) goto LAB_140095bcd;
      *(int *)plVar12[10] = iVar1 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_140095be1;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140095a57;
LAB_140095c7e:
  FUN_140016940(local_a0,1,uVar24);
  lVar13 = 0;
  ppppppcVar21 = (char ******)local_a0[0];
  uVar22 = local_88;
LAB_140095ca0:
  if ((char)param_3[1] == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140095d91:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095d91;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_140095dd6:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095dd6;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 == 0) goto LAB_140095def;
  }
  else if (*param_4 != 0) goto LAB_140095def;
  if ((char)param_3[1] == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_140095e51:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140095e51;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar19 = thunk_FUN_14028cf70(local_c0,local_a4,*(undefined1 *)((longlong)param_3 + 9));
  uVar14 = lVar19 - (longlong)local_c0;
  if (uVar14 < local_80) {
    bVar5 = true;
    if (iVar29 < param_2) {
      if ((uVar14 != 0) || (iVar29 != 0)) {
        *local_res8 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
        local_res8 = local_res8 + 1;
        iVar29 = iVar29 + 1;
      }
    }
    else {
      local_c8 = local_c8 + 1;
      if (uVar14 != 0) {
        bVar4 = true;
      }
    }
    ppppppcVar15 = local_a0;
    if (0xf < uVar22) {
      ppppppcVar15 = ppppppcVar21;
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) != '\x7f') {
      ppppppcVar15 = local_a0;
      if (0xf < uVar22) {
        ppppppcVar15 = ppppppcVar21;
      }
      *(char *)((longlong)ppppppcVar15 + lVar13) =
           *(char *)((longlong)ppppppcVar15 + lVar13) + '\x01';
      ppppppcVar21 = (char ******)local_a0[0];
      uVar22 = local_88;
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_140095f18:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140095f18;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_140095def;
    ppppppcVar15 = local_a0;
    if (0xf < uVar22) {
      ppppppcVar15 = ppppppcVar21;
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) == '\0') {
      local_res18 = '\x01';
    }
    else {
      FUN_1400534d0(local_a0);
      lVar13 = lVar13 + 1;
      ppppppcVar21 = (char ******)local_a0[0];
      uVar22 = local_88;
    }
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
LAB_140095fa2:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar12[7] == 0) {
LAB_140095f8e:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar1 = *(int *)plVar12[10];
      if (iVar1 < 1) goto LAB_140095f8e;
      *(int *)plVar12[10] = iVar1 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_140095fa2;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140095ca0;
LAB_140095def:
  if (lVar13 != 0) {
    ppppppcVar15 = local_a0;
    if (0xf < uVar22) {
      ppppppcVar15 = ppppppcVar21;
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) < '\x01') goto LAB_140095fb2;
    lVar13 = lVar13 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_140095fee:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140095fee;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_140096033:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096033;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
      if (*param_4 == 0) break;
    }
    else if (*param_4 != 0) break;
    if ((char)param_3[1] == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_1400961ac:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1400961ac;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) break;
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140096209:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(longlong *)plVar12[7] == 0) {
LAB_1400961f4:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar1 = *(int *)plVar12[10];
        if (iVar1 < 1) goto LAB_1400961f4;
        *(int *)plVar12[10] = iVar1 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 == 0xffffffff) goto LAB_140096209;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_140095fb2:
    local_res18 = '\x01';
  } while( true );
  ppppppcVar15 = local_78;
  if (0xf < local_60) {
    ppppppcVar15 = (char ******)local_78[0];
  }
  cVar8 = '\0';
  ppppppcVar27 = (char ******)((longlong)ppppppcVar15 + local_68);
  if (local_res18 == '\0') {
LAB_140096070:
    do {
      lVar19 = lVar13;
      if (lVar13 == 0) goto LAB_1400960c6;
      do {
        if (ppppppcVar15 != ppppppcVar27) {
          cVar8 = *(char *)ppppppcVar15;
          ppppppcVar15 = (char ******)((longlong)ppppppcVar15 + 1);
        }
        lVar13 = lVar19 + -1;
        if (0x7d < (byte)(cVar8 - 1U)) goto LAB_140096070;
        if (lVar13 == 0) break;
        ppppppcVar16 = local_a0;
        if (0xf < uVar22) {
          ppppppcVar16 = ppppppcVar21;
        }
        if (*(char *)((longlong)ppppppcVar16 + lVar19 + -1) != cVar8) goto LAB_1400960c2;
        lVar19 = lVar13;
      } while (lVar13 != 0);
      ppppppcVar16 = local_a0;
      if (0xf < uVar22) {
        ppppppcVar16 = ppppppcVar21;
      }
    } while (*(char *)ppppppcVar16 <= cVar8);
LAB_1400960c2:
    local_res18 = '\x01';
  }
LAB_1400960c6:
  if (0xf < uVar22) {
    uVar14 = uVar22 + 1;
    ppppppcVar15 = ppppppcVar21;
    if (0xfff < uVar14) {
      ppppppcVar15 = (char ******)ppppppcVar21[-1];
      if ((char *)0x1f < (char *)((longlong)ppppppcVar21 + (-8 - (longlong)ppppppcVar15)))
      goto LAB_140096ec5;
      uVar14 = uVar22 + 0x28;
    }
    thunk_FUN_14028af80(ppppppcVar15,uVar14);
  }
LAB_140096101:
  if (((bVar6) && (bVar5)) && (iVar29 == 0)) {
    *local_res8 = '0';
    local_res8 = local_res8 + 1;
  }
  puVar17 = (undefined8 *)FUN_1402ca9c0();
  cVar8 = *(char *)*puVar17;
  if ((char)param_3[1] == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_14009622a:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_14009622a;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_14009626f:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_14009626f;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 == 0) goto LAB_14009628a;
  }
  else if (*param_4 != 0) goto LAB_14009628a;
  if ((char)param_3[1] == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_140096316:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140096316;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar9 = *(char *)((longlong)param_3 + 9);
  cVar10 = (**(code **)(*local_58 + 0x18))();
  if (cVar9 != cVar10) goto LAB_14009628a;
  *local_res8 = cVar8;
  local_res8 = local_res8 + 1;
  plVar12 = (longlong *)*param_3;
  if (plVar12 != (longlong *)0x0) {
    if (*(longlong *)plVar12[7] == 0) {
LAB_140096375:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar1 = *(int *)plVar12[10];
      if (iVar1 < 1) goto LAB_140096375;
      *(int *)plVar12[10] = iVar1 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_14009628a;
    }
  }
  *(undefined1 *)(param_3 + 1) = 1;
  *param_3 = 0;
LAB_14009628a:
  uVar22 = local_80;
  if (iVar29 == 0) {
LAB_1400962a0:
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_1400963a7:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1400963a7;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_1400963e8:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1400963e8;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    uVar22 = local_80;
    if (plVar12 == (longlong *)0x0) {
      if (*param_4 == 0) goto LAB_140096410;
    }
    else if (*param_4 != 0) goto LAB_140096410;
    if ((char)param_3[1] == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_14009648a:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_14009648a;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    uVar22 = local_80;
    if (*(char *)((longlong)param_3 + 9) != local_c0[0]) goto LAB_140096410;
    plVar12 = (longlong *)*param_3;
    local_c8 = local_c8 + -1;
    bVar5 = true;
    if (plVar12 == (longlong *)0x0) {
LAB_1400964e9:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(longlong *)plVar12[7] == 0) {
LAB_1400964d5:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar1 = *(int *)plVar12[10];
        if (iVar1 < 1) goto LAB_1400964d5;
        *(int *)plVar12[10] = iVar1 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 == 0xffffffff) goto LAB_1400964e9;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1400962a0;
  }
LAB_140096410:
  if ((char)param_3[1] == '\0') {
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
LAB_140096505:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140096505;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
LAB_14009654a:
      *param_4 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_14009654a;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  plVar12 = (longlong *)*param_3;
  if (plVar12 == (longlong *)0x0) {
    if (*param_4 == 0) goto LAB_14009656b;
  }
  else if (*param_4 != 0) goto LAB_14009656b;
  if ((char)param_3[1] == '\0') {
    if (plVar12 == (longlong *)0x0) {
LAB_140096669:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140096669;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar13 = thunk_FUN_14028cf70(local_c0,local_a4,*(undefined1 *)((longlong)param_3 + 9));
  uVar14 = lVar13 - (longlong)local_c0;
  if (uVar22 <= uVar14) goto LAB_14009656b;
  if (iVar29 < param_2) {
    *local_res8 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
    local_res8 = local_res8 + 1;
    iVar29 = iVar29 + 1;
  }
  else if (uVar14 != 0) {
    bVar4 = true;
  }
  plVar12 = (longlong *)*param_3;
  bVar5 = true;
  if (plVar12 == (longlong *)0x0) {
LAB_140096714:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar12[7] == 0) {
LAB_140096700:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar1 = *(int *)plVar12[10];
      if (iVar1 < 1) goto LAB_140096700;
      *(int *)plVar12[10] = iVar1 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_140096714;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140096410;
LAB_14009656b:
  if (bVar4) {
    pcVar28 = local_res8 + -1;
    if (local_res8[-1] == cVar8) {
      pcVar28 = local_res8 + -2;
    }
    cVar9 = *pcVar28;
    if (cVar9 != '0') {
      cVar10 = '5';
      if (bVar6) {
        cVar10 = '8';
      }
      if (cVar9 != cVar10) goto LAB_1400965b9;
    }
    local_res8[(ulonglong)(local_res8[-1] != cVar8) - 2] = cVar9 + '\x01';
  }
LAB_1400965b9:
  lVar13 = 0x14;
  if (bVar6) {
    lVar13 = 0x1b;
  }
  lVar19 = 0xe;
  if (bVar6) {
    lVar19 = 0x1a;
  }
  if (bVar5) {
    cVar8 = local_c0[lVar13];
    lVar13 = 0;
    cVar9 = local_c0[lVar19];
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_140096733:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096733;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_140096772:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096772;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
      if (*param_4 == 0) goto LAB_140096b26;
    }
    else if (*param_4 != 0) goto LAB_140096b26;
    cVar10 = (char)param_3[1];
    if (cVar10 == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_1400967cc:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1400967cc;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
      cVar10 = '\x01';
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) {
      if (cVar10 == '\0') {
        plVar12 = (longlong *)*param_3;
        if (plVar12 == (longlong *)0x0) {
LAB_140096810:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_140096810;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != cVar9) {
LAB_140096b26:
        uVar11 = 0x44c;
        if (bVar6) {
          uVar11 = 0x1068;
        }
        uVar22 = (ulonglong)uVar11;
        lVar19 = -0x44c;
        uVar11 = 0x44c;
        if (bVar6) {
          uVar11 = 0x41a;
        }
        lVar25 = -0x44c;
        lVar26 = local_c8;
        if (bVar6) {
          lVar25 = -0x41a;
          lVar19 = -0x1068;
        }
LAB_140096b75:
        if (((-1 < lVar13) && (-1 < lVar26)) &&
           (((longlong)uVar22 <= lVar13 || ((longlong)(ulonglong)uVar11 <= lVar26))))
        goto LAB_140096dc7;
        if (((lVar13 < 1) && (lVar26 < 1)) && ((lVar13 <= lVar19 || (lVar26 <= lVar25))))
        goto LAB_140096db9;
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar22) {
          lVar18 = -lVar26;
          if (-lVar26 < 0) {
            lVar18 = lVar26;
          }
          if (lVar18 <= (longlong)(ulonglong)uVar11) goto LAB_140096d8d;
        }
        if (bVar6) {
          lVar20 = ((longlong)((ulonglong)((uint)(lVar20 + -1 >> 0x3f) & 3) + lVar20 + -1) >> 2) + 1
          ;
        }
        lVar18 = -local_c8;
        if (-local_c8 < 0) {
          lVar18 = local_c8;
        }
        if (lVar18 < lVar20) {
          lVar20 = lVar18;
        }
        if (lVar13 < 0) {
          lVar18 = lVar20 * 4;
          if (!bVar6) {
            lVar18 = lVar20;
          }
          lVar13 = lVar13 + lVar18;
          lVar26 = lVar26 - lVar20;
        }
        else {
          lVar18 = lVar20 * 4;
          if (!bVar6) {
            lVar18 = lVar20;
          }
          lVar13 = lVar13 - lVar18;
          lVar26 = lVar26 + lVar20;
        }
        goto LAB_140096b75;
      }
    }
    plVar12 = (longlong *)*param_3;
    bVar5 = false;
    if (plVar12 == (longlong *)0x0) {
LAB_140096897:
      *param_3 = 0;
    }
    else {
      if (*(longlong *)plVar12[7] == 0) {
LAB_140096856:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar29 = *(int *)plVar12[10];
        if (iVar29 < 1) goto LAB_140096856;
        *(int *)plVar12[10] = iVar29 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 == 0xffffffff) goto LAB_140096897;
      *(undefined1 *)(param_3 + 1) = 0;
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) goto LAB_140096897;
      if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
        uVar11 = (**(code **)(*plVar12 + 0x30))();
      }
      else {
        uVar11 = (uint)**(byte **)plVar12[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_140096897;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_1400968d8:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1400968d8;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
      bVar4 = bVar5;
      if (*param_4 == 0) goto LAB_140096a35;
    }
    else {
      bVar4 = false;
      if (*param_4 != 0) goto LAB_140096a35;
    }
    cVar8 = (char)param_3[1];
    if (cVar8 == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_140096935:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096935;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
      cVar8 = '\x01';
    }
    if (*(byte *)((longlong)param_3 + 9) != acStack_b2[9]) {
      if (cVar8 == '\0') {
        plVar12 = (longlong *)*param_3;
        if (plVar12 != (longlong *)0x0) {
          if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
            uVar11 = (**(code **)(*plVar12 + 0x30))();
          }
          else {
            uVar11 = (uint)**(byte **)plVar12[7];
          }
          if (uVar11 != 0xffffffff) {
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
            *(undefined1 *)(param_3 + 1) = 1;
            goto LAB_1400969e4;
          }
        }
        uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
      }
LAB_1400969e4:
      bVar4 = false;
      if ((char)uVar11 != acStack_b2[8]) goto LAB_140096a35;
      plVar12 = (longlong *)*param_3;
      bVar4 = true;
      if (plVar12 != (longlong *)0x0) {
        if (*(longlong *)plVar12[7] == 0) {
LAB_140096a1e:
          uVar11 = (**(code **)(*plVar12 + 0x38))();
        }
        else {
          iVar29 = *(int *)plVar12[10];
          if (iVar29 < 1) goto LAB_140096a1e;
          *(int *)plVar12[10] = iVar29 + -1;
          pbVar2 = *(byte **)plVar12[7];
          *(byte **)plVar12[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_140096a35;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      goto LAB_140096a35;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 != (longlong *)0x0) {
      if (*(longlong *)plVar12[7] == 0) {
LAB_140096979:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar29 = *(int *)plVar12[10];
        if (iVar29 < 1) goto LAB_140096979;
        *(int *)plVar12[10] = iVar29 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 != 0xffffffff) {
        *(undefined1 *)(param_3 + 1) = 0;
        bVar4 = bVar5;
        goto LAB_140096a35;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    bVar4 = bVar5;
LAB_140096a35:
    bVar5 = false;
LAB_140096a40:
    if ((char)param_3[1] == '\0') {
      plVar12 = (longlong *)*param_3;
      if (plVar12 == (longlong *)0x0) {
LAB_140096a76:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096a76;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      plVar12 = (longlong *)*param_4;
      if (plVar12 == (longlong *)0x0) {
LAB_140096ab5:
        *param_4 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096ab5;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    plVar12 = (longlong *)*param_3;
    if (plVar12 == (longlong *)0x0) {
      if (*param_4 == 0) goto LAB_140096ae0;
    }
    else if (*param_4 != 0) goto LAB_140096ae0;
    if ((char)param_3[1] == '\0') {
      if (plVar12 == (longlong *)0x0) {
LAB_140096c59:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)plVar12[7] == (byte *)0x0) || (*(int *)plVar12[10] < 1)) {
          uVar11 = (**(code **)(*plVar12 + 0x30))();
        }
        else {
          uVar11 = (uint)**(byte **)plVar12[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_140096c59;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != local_c0[0]) goto LAB_140096ae0;
    plVar12 = (longlong *)*param_3;
    bVar5 = true;
    if (plVar12 == (longlong *)0x0) {
LAB_140096cb2:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(longlong *)plVar12[7] == 0) {
LAB_140096c9f:
        uVar11 = (**(code **)(*plVar12 + 0x38))();
      }
      else {
        iVar29 = *(int *)plVar12[10];
        if (iVar29 < 1) goto LAB_140096c9f;
        *(int *)plVar12[10] = iVar29 + -1;
        pbVar2 = *(byte **)plVar12[7];
        *(byte **)plVar12[7] = pbVar2 + 1;
        uVar11 = (uint)*pbVar2;
      }
      if (uVar11 == 0xffffffff) goto LAB_140096cb2;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_140096a40;
  }
  goto LAB_140096e6c;
LAB_140096ae0:
  if ((char)param_3[1] == '\0') {
    FUN_140097500();
  }
  if ((char)param_4[1] == '\0') {
    FUN_140097500();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_140096b11;
  }
  else if (*param_4 != 0) goto LAB_140096b11;
  if ((char)param_3[1] == '\0') {
    FUN_140097500(param_3);
  }
  lVar19 = thunk_FUN_14028cf70(local_c0,local_a4,*(undefined1 *)((longlong)param_3 + 9));
  uVar22 = lVar19 - (longlong)local_c0;
  if (9 < uVar22) goto LAB_140096b11;
  if ((lVar13 < 0xccccccccccccccc) || ((lVar13 == 0xccccccccccccccc && ((longlong)uVar22 < 8)))) {
    lVar13 = uVar22 + lVar13 * 10;
  }
  else {
    lVar13 = 0x7fffffffffffffff;
  }
  plVar12 = (longlong *)*param_3;
  bVar5 = true;
  if (plVar12 == (longlong *)0x0) {
LAB_140096d6a:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(longlong *)plVar12[7] == 0) {
LAB_140096d56:
      uVar11 = (**(code **)(*plVar12 + 0x38))();
    }
    else {
      iVar29 = *(int *)plVar12[10];
      if (iVar29 < 1) goto LAB_140096d56;
      *(int *)plVar12[10] = iVar29 + -1;
      pbVar2 = *(byte **)plVar12[7];
      *(byte **)plVar12[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_140096d6a;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140096ae0;
LAB_140096d8d:
  if (bVar6) {
    lVar26 = lVar26 * 4;
  }
  uVar14 = lVar26 + lVar13;
  if ((longlong)uVar14 <= (longlong)uVar22) {
    lVar13 = -0x44c;
    if (bVar6) {
      lVar13 = -0x1068;
    }
    uVar22 = uVar14;
    if ((longlong)uVar14 < lVar13) {
LAB_140096db9:
      uVar22 = 0xfffffffffffffbb4;
      if (bVar6) {
        uVar22 = 0xffffffffffffef98;
      }
    }
  }
LAB_140096dc7:
  if (uVar22 != 0) {
    cVar8 = 'e';
    if (bVar6) {
      cVar8 = 'p';
    }
    *local_res8 = cVar8;
    pcVar28 = local_res8 + 1;
    if ((longlong)uVar22 < 0) {
      *pcVar28 = '-';
      pcVar28 = local_res8 + 2;
    }
    uVar14 = -uVar22;
    local_res8 = pcVar28;
    if ((longlong)-uVar22 < 0) {
      uVar14 = uVar22;
    }
    while (uVar14 != 0) {
      *local_res8 = (char)uVar14 + (char)((longlong)uVar14 / 10) * -10 + '0';
      uVar14 = (longlong)uVar14 / 10;
      local_res8 = local_res8 + 1;
    }
    thunk_FUN_14028e3e0(pcVar28,local_res8);
  }
  *local_res8 = '\0';
  uVar24 = 10;
  if (bVar6) {
    uVar24 = 0x10;
  }
  goto LAB_140096e70;
LAB_140096b11:
  if (bVar4) {
    lVar13 = -lVar13;
  }
  if (bVar5) goto LAB_140096b26;
LAB_140096e6c:
  uVar24 = 0;
  local_res18 = '\0';
LAB_140096e70:
  local_res8 = (char *)(ulonglong)CONCAT11(local_res18,uVar24);
  if (0xf < local_60) {
    uVar22 = local_60 + 1;
    ppppppcVar21 = (char ******)local_78[0];
    if (0xfff < uVar22) {
      ppppppcVar21 = (char ******)local_78[0][-1];
      if ((char *)0x1f < (char *)((longlong)local_78[0] + (-8 - (longlong)ppppppcVar21))) {
LAB_140096ec5:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar22 = (*pcVar3)();
        return uVar22;
      }
      uVar22 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(ppppppcVar21,uVar22);
  }
  return (ulonglong)local_res8;
}

