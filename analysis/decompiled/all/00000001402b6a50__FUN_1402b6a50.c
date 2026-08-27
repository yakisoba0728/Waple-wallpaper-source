// Function: FUN_1402b6a50
// Addr: 1402b6a50
// Size: 3760 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1402b6a50(undefined8 param_1,undefined8 param_2,undefined1 *param_3,char param_4,
             longlong param_5,byte param_6,char param_7,byte *param_8,byte param_9)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *****pppppcVar10;
  ulonglong uVar11;
  byte ****ppppbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *****pppppbVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined1 uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  byte local_110;
  byte local_108 [4];
  undefined4 local_104;
  uint local_100 [2];
  byte *local_f8;
  ulonglong local_f0;
  uint local_e8 [2];
  longlong local_e0 [3];
  byte *local_c8;
  byte ***local_c0 [2];
  ulonglong local_b0;
  byte *local_a8;
  byte ****local_a0;
  undefined8 local_98;
  ulonglong local_90;
  byte *local_88;
  byte ****local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  byte *local_68;
  char ****local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  puVar18 = auStack_138;
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_138;
  local_e0[1] = param_5;
  local_108[0] = param_6;
  local_f8 = param_8;
  local_c8 = param_8;
  pbVar17 = (byte *)(ulonglong)param_9;
  local_108[1] = param_9;
  uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  local_e0[2] = param_2;
  local_98 = uVar2;
  if (param_4 == '\0') {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
    uVar8 = FUN_1402b30e0(&local_a0);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    uVar8 = FUN_1402b2fc0(&local_a0);
  }
  local_f0 = uVar8;
  lVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
  if (lVar9 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,local_60);
  uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8);
  local_100[0] = -uVar7;
  if ((int)-uVar7 < 0) {
    local_100[0] = uVar7;
  }
  uVar22 = (ulonglong)local_100[0];
  if (uVar22 < *(ulonglong *)(param_8 + 0x10)) {
    pppppcVar10 = local_60;
    if (0xf < local_48) {
      pppppcVar10 = (char *****)local_60[0];
    }
    if (*(char *)pppppcVar10 != '\x7f') {
      pppppcVar10 = local_60;
      if (0xf < local_48) {
        pppppcVar10 = (char *****)local_60[0];
      }
      if ('\0' < *(char *)pppppcVar10) {
        bVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8);
        pppppcVar10 = local_60;
        if (0xf < local_48) {
          pppppcVar10 = (char *****)local_60[0];
        }
        uVar22 = *(longlong *)(local_f8 + 0x10) - uVar22;
        cVar1 = *(char *)pppppcVar10;
        param_6 = local_108[0];
        param_8 = local_f8;
        while (((local_108[0] = param_6, local_f8 = param_8, cVar1 != '\x7f' &&
                (uVar8 = local_f0, '\0' < cVar1)) &&
               ((ulonglong)(longlong)*(char *)pppppcVar10 < uVar22))) {
          uVar22 = uVar22 - (longlong)*(char *)pppppcVar10;
          uVar8 = *(ulonglong *)(param_8 + 0x10);
          if (uVar8 < uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_140012940();
          }
          uVar14 = *(ulonglong *)(param_8 + 0x18);
          if (uVar14 == uVar8) {
            local_118 = 1;
            local_110 = bVar6;
            FUN_140038ce0(param_8,1);
          }
          else {
            if (((uVar8 != uVar8 + 1) && (0xf < uVar14)) && (DAT_140472230 != '\0')) {
              lVar9 = *(longlong *)param_8;
              uVar11 = lVar9 + 1 + uVar8;
              uVar13 = uVar14 + 8 + lVar9 & 0xfffffffffffffff8;
              uVar14 = uVar13;
              if (uVar11 <= uVar13) {
                uVar14 = uVar11;
              }
              _guard_check_icall(lVar9,uVar13,uVar14);
            }
            *(ulonglong *)(local_f8 + 0x10) = uVar8 + 1;
            pbVar17 = local_f8;
            if (0xf < *(ulonglong *)(local_f8 + 0x18)) {
              pbVar17 = *(byte **)local_f8;
            }
            pbVar17 = pbVar17 + uVar22;
            FUN_1404210f0(pbVar17 + 1,pbVar17);
            *pbVar17 = bVar6;
          }
          if ('\0' < *(char *)((longlong)pppppcVar10 + 1)) {
            pppppcVar10 = (char *****)((longlong)pppppcVar10 + 1);
          }
          cVar1 = *(char *)pppppcVar10;
          uVar8 = local_f0;
          param_6 = local_108[0];
          param_8 = local_f8;
        }
        uVar22 = (ulonglong)local_100[0];
      }
    }
  }
  else {
    FUN_140038b70(param_8,0);
  }
  local_c0[1] = (byte ***)0x0;
  local_b0 = 0;
  local_a8 = (byte *)0xf;
  local_c0[0] = (byte ***)0x0;
  if (param_7 == '\0') {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,local_108 + 4);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  }
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,&local_a0);
  if (local_a8 < 0x10) {
LAB_1402b6dd6:
    local_c0[0] = (byte ***)((ulonglong)local_c0[0] & 0xffffffffffffff00);
    uVar8 = local_90;
    pbVar17 = local_88;
    if (local_88 < &DAT_00000010) goto LAB_1402b6e11;
    local_c0[0] = (byte ***)local_a0;
    puVar18 = auStack_138;
  }
  else {
    if (DAT_140472230 != '\0') {
      _guard_check_icall(local_c0[0]);
    }
    uVar14 = (longlong)local_a8 + 1;
    ppppbVar12 = (byte ****)local_c0[0];
    if (uVar14 < 0x1000) {
LAB_1402b6dd1:
      thunk_FUN_14028af80(ppppbVar12,uVar14);
      goto LAB_1402b6dd6;
    }
    ppppbVar12 = (byte ****)local_c0[0][-1];
    if ((ulonglong)((longlong)local_c0[0] + (-8 - (longlong)ppppbVar12)) < 0x20) {
      uVar14 = (longlong)local_a8 + 0x28;
      goto LAB_1402b6dd1;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar18 = auStack_130;
LAB_1402b6e11:
    *(undefined8 *)(puVar18 + -8) = 0x1402b6e23;
    FUN_1404210f0(puVar18 + 0x78,&local_a0);
  }
  local_90 = 0;
  local_88 = (byte *)0xf;
  local_a0 = (byte ****)((ulonglong)local_a0 & 0xffffffffffffff00);
  *(undefined8 *)(puVar18 + -8) = 0x1402b6e48;
  local_b0 = uVar8;
  local_a8 = pbVar17;
  FUN_140017240();
  uStack_78 = 0;
  local_70 = 0;
  local_68 = (byte *)0xf;
  local_80 = (byte ****)0x0;
  lVar9 = *(longlong *)(puVar18 + 0x60);
  if ((*(byte *)(lVar9 + 0x18) & 8) != 0) {
    *(undefined8 *)(puVar18 + -8) = 0x1402b6e89;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(*(undefined8 *)(puVar18 + 0x48),&local_a0);
    if (local_68 < &DAT_00000010) {
LAB_1402b6f03:
      local_80 = (byte ****)((ulonglong)local_80 & 0xffffffffffffff00);
      uVar8 = local_90;
      pbVar17 = local_88;
      if (local_88 < &DAT_00000010) goto LAB_1402b6f26;
      local_80 = local_a0;
    }
    else {
      if (DAT_140472230 != '\0') {
        *(undefined8 *)(puVar18 + -8) = 0x1402b6ed2;
        _guard_check_icall(local_80);
      }
      pbVar15 = local_68 + 1;
      pppppbVar16 = (byte *****)local_80;
      if (pbVar15 < (byte *)0x1000) {
LAB_1402b6efe:
        *(undefined8 *)(puVar18 + -8) = 0x1402b6f03;
        thunk_FUN_14028af80(pppppbVar16,pbVar15);
        goto LAB_1402b6f03;
      }
      pppppbVar16 = (byte *****)local_80[-1];
      if ((byte *)((longlong)local_80 + (-8 - (longlong)pppppbVar16)) < (byte *)0x20) {
        pbVar15 = local_68 + 0x28;
        goto LAB_1402b6efe;
      }
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar18 = puVar18 + 8;
LAB_1402b6f26:
      *(undefined8 *)(puVar18 + -8) = 0x1402b6f37;
      FUN_1404210f0(&local_80,&local_a0);
    }
    local_90 = 0;
    local_88 = (byte *)0xf;
    local_a0 = (byte ****)((ulonglong)local_a0 & 0xffffffffffffff00);
    *(undefined8 *)(puVar18 + -8) = 0x1402b6f5c;
    local_70 = uVar8;
    local_68 = pbVar17;
    FUN_140017240();
    lVar9 = *(longlong *)(puVar18 + 0x60);
  }
  iVar21 = (int)uVar22;
  if ((char)local_104 == ' ') {
    uVar8 = 1;
LAB_1402b6fb8:
    bVar5 = true;
  }
  else {
    bVar5 = false;
    uVar8 = local_70;
    if (((char)local_104 != '$') && (uVar8 = local_b0, (char)local_104 != '+')) {
      if ((char)local_104 == 'v') {
        uVar8 = *(ulonglong *)(param_8 + 0x10);
        lVar23 = 0;
        if (uVar8 <= uVar22) {
          lVar23 = (uVar22 - uVar8) + 1;
        }
        uVar8 = uVar8 + lVar23 + (ulonglong)(iVar21 != 0);
      }
      else {
        uVar8 = 0;
        if ((char)local_104 == 'x') goto LAB_1402b6fb8;
      }
    }
  }
  cVar1 = puVar18[0x35];
  if (cVar1 == ' ') {
    uVar8 = uVar8 + 1;
LAB_1402b700c:
    bVar5 = true;
  }
  else if (cVar1 == '$') {
    uVar8 = uVar8 + local_70;
  }
  else if (cVar1 == '+') {
    uVar8 = uVar8 + local_b0;
  }
  else if (cVar1 == 'v') {
    uVar14 = *(ulonglong *)(param_8 + 0x10);
    lVar23 = 0;
    if (uVar14 <= uVar22) {
      lVar23 = (uVar22 - uVar14) + 1;
    }
    uVar8 = uVar8 + uVar14 + lVar23 + (ulonglong)(iVar21 != 0);
  }
  else if (cVar1 == 'x') goto LAB_1402b700c;
  cVar1 = puVar18[0x36];
  if (cVar1 == ' ') {
    uVar8 = uVar8 + 1;
  }
  else {
    if (cVar1 == '$') {
      uVar8 = uVar8 + local_70;
      goto LAB_1402b7060;
    }
    if (cVar1 == '+') {
      uVar8 = uVar8 + local_b0;
      goto LAB_1402b7060;
    }
    if (cVar1 == 'v') {
      uVar14 = *(ulonglong *)(param_8 + 0x10);
      lVar23 = 0;
      if (uVar14 <= uVar22) {
        lVar23 = (uVar22 - uVar14) + 1;
      }
      uVar8 = uVar8 + uVar14 + lVar23 + (ulonglong)(iVar21 != 0);
      goto LAB_1402b7060;
    }
    if (cVar1 != 'x') goto LAB_1402b7060;
  }
  bVar5 = true;
LAB_1402b7060:
  cVar1 = puVar18[0x37];
  if (cVar1 == ' ') {
    uVar8 = uVar8 + 1;
  }
  else if (cVar1 == '$') {
    uVar8 = uVar8 + local_70;
  }
  else if (cVar1 == '+') {
    uVar8 = uVar8 + local_b0;
  }
  else if (cVar1 == 'v') {
    uVar14 = *(ulonglong *)(param_8 + 0x10);
    lVar23 = 0;
    if (uVar14 <= uVar22) {
      lVar23 = (uVar22 - uVar14) + 1;
    }
    uVar8 = uVar8 + uVar14 + lVar23 + (ulonglong)(iVar21 != 0);
  }
  uVar22 = *(ulonglong *)(lVar9 + 0x28);
  if (((longlong)uVar22 < 1) || (uVar22 <= uVar8)) {
    lVar23 = 0;
  }
  else {
    lVar23 = uVar22 - uVar8;
  }
  *(longlong *)(puVar18 + 0x58) = lVar23;
  uVar7 = *(uint *)(lVar9 + 0x18) & 0x1c0;
  *(uint *)(puVar18 + 0x50) = uVar7;
  if ((uVar7 != 0x40) && ((uVar7 != 0x100 || (!bVar5)))) {
    uVar20 = *param_3;
    lVar9 = *(longlong *)(param_3 + 8);
    for (; lVar23 != 0; lVar23 = lVar23 + -1) {
      if (lVar9 == 0) {
LAB_1402b713d:
        uVar20 = 1;
      }
      else {
        if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b7124:
          *(undefined8 *)(puVar18 + -8) = 0x1402b7138;
          uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,param_6);
        }
        else {
          iVar21 = **(int **)(lVar9 + 0x58);
          if (iVar21 < 1) goto LAB_1402b7124;
          **(int **)(lVar9 + 0x58) = iVar21 + -1;
          pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
          **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
          *pbVar17 = param_6;
          uVar7 = (uint)param_6;
        }
        if (uVar7 == 0xffffffff) goto LAB_1402b713d;
      }
    }
    *param_3 = uVar20;
    lVar23 = 0;
    *(undefined8 *)(puVar18 + 0x58) = 0;
  }
  local_a0 = (byte ****)0x0;
  do {
    cVar1 = puVar18[(longlong)local_a0 + 0x34];
    if (cVar1 == ' ') {
      uVar20 = *param_3;
      lVar9 = *(longlong *)(param_3 + 8);
      lVar19 = 1;
      do {
        if (lVar9 == 0) {
LAB_1402b76e3:
          uVar20 = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b76ca:
            *(undefined8 *)(puVar18 + -8) = 0x1402b76de;
            uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,param_6);
          }
          else {
            iVar21 = **(int **)(lVar9 + 0x58);
            if (iVar21 < 1) goto LAB_1402b76ca;
            **(int **)(lVar9 + 0x58) = iVar21 + -1;
            pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
            **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
            *pbVar17 = param_6;
            uVar7 = (uint)param_6;
          }
          if (uVar7 == 0xffffffff) goto LAB_1402b76e3;
        }
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      *param_3 = uVar20;
LAB_1402b76f0:
      if (*(int *)(puVar18 + 0x50) == 0x100) {
        uVar20 = *param_3;
        lVar9 = *(longlong *)(param_3 + 8);
        for (; lVar23 != 0; lVar23 = lVar23 + -1) {
          if (lVar9 == 0) {
LAB_1402b7755:
            uVar20 = 1;
          }
          else {
            if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b773c:
              *(undefined8 *)(puVar18 + -8) = 0x1402b7750;
              uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,param_6);
            }
            else {
              iVar21 = **(int **)(lVar9 + 0x58);
              if (iVar21 < 1) goto LAB_1402b773c;
              **(int **)(lVar9 + 0x58) = iVar21 + -1;
              pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
              **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
              *pbVar17 = param_6;
              uVar7 = (uint)param_6;
            }
            if (uVar7 == 0xffffffff) goto LAB_1402b7755;
          }
        }
        *param_3 = uVar20;
        lVar23 = 0;
        *(undefined8 *)(puVar18 + 0x58) = 0;
      }
    }
    else if (cVar1 == '$') {
      pppppbVar16 = &local_80;
      if ((byte *)0xf < local_68) {
        pppppbVar16 = (byte *****)local_80;
      }
      uVar20 = *param_3;
      lVar9 = *(longlong *)(param_3 + 8);
      for (uVar8 = local_70; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (lVar9 == 0) {
LAB_1402b7673:
          uVar20 = 1;
        }
        else {
          bVar6 = *(byte *)pppppbVar16;
          if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b765b:
            *(undefined8 *)(puVar18 + -8) = 0x1402b766e;
            uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
          }
          else {
            iVar21 = **(int **)(lVar9 + 0x58);
            if (iVar21 < 1) goto LAB_1402b765b;
            **(int **)(lVar9 + 0x58) = iVar21 + -1;
            pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
            **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
            *pbVar17 = bVar6;
            uVar7 = (uint)bVar6;
          }
          if (uVar7 == 0xffffffff) goto LAB_1402b7673;
        }
        pppppbVar16 = (byte *****)((longlong)pppppbVar16 + 1);
      }
      *param_3 = uVar20;
    }
    else if (cVar1 == '+') {
      if (local_b0 != 0) {
        pbVar17 = puVar18 + 0x78;
        if ((byte *)0xf < local_a8) {
          pbVar17 = *(byte **)(puVar18 + 0x78);
        }
        uVar20 = *param_3;
        lVar9 = *(longlong *)(param_3 + 8);
        lVar19 = 1;
        do {
          if (lVar9 == 0) {
LAB_1402b75ef:
            uVar20 = 1;
          }
          else {
            bVar6 = *pbVar17;
            if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b75d7:
              *(undefined8 *)(puVar18 + -8) = 0x1402b75ea;
              uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
            }
            else {
              iVar21 = **(int **)(lVar9 + 0x58);
              if (iVar21 < 1) goto LAB_1402b75d7;
              **(int **)(lVar9 + 0x58) = iVar21 + -1;
              pbVar15 = (byte *)**(longlong **)(lVar9 + 0x40);
              **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar15 + 1);
              *pbVar15 = bVar6;
              uVar7 = (uint)bVar6;
            }
            if (uVar7 == 0xffffffff) goto LAB_1402b75ef;
          }
          pbVar17 = pbVar17 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        *param_3 = uVar20;
      }
    }
    else if (cVar1 == 'v') {
      uVar22 = (ulonglong)*(uint *)(puVar18 + 0x38);
      uVar8 = *(ulonglong *)(param_8 + 0x10);
      if (*(uint *)(puVar18 + 0x38) == 0) {
        pbVar17 = param_8;
        if (0xf < *(ulonglong *)(param_8 + 0x18)) {
          pbVar17 = *(byte **)param_8;
        }
        uVar20 = *param_3;
        lVar9 = *(longlong *)(param_3 + 8);
        if (uVar8 != 0) {
          do {
            if (lVar9 == 0) {
LAB_1402b7213:
              uVar20 = 1;
            }
            else {
              bVar6 = *pbVar17;
              if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b71fb:
                *(undefined8 *)(puVar18 + -8) = 0x1402b720e;
                uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
              }
              else {
                iVar21 = **(int **)(lVar9 + 0x58);
                if (iVar21 < 1) goto LAB_1402b71fb;
                **(int **)(lVar9 + 0x58) = iVar21 + -1;
                pbVar15 = (byte *)**(longlong **)(lVar9 + 0x40);
                **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar15 + 1);
                *pbVar15 = bVar6;
                uVar7 = (uint)bVar6;
              }
              if (uVar7 == 0xffffffff) goto LAB_1402b7213;
            }
            pbVar17 = pbVar17 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          *param_3 = uVar20;
          lVar23 = *(longlong *)(puVar18 + 0x58);
          goto LAB_1402b776a;
        }
      }
      else if (uVar22 < uVar8) {
        lVar9 = uVar8 - uVar22;
        pbVar17 = param_8;
        if (0xf < *(ulonglong *)(param_8 + 0x18)) {
          pbVar17 = *(byte **)param_8;
        }
        uVar20 = *param_3;
        lVar23 = *(longlong *)(param_3 + 8);
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          if (lVar23 == 0) {
LAB_1402b746f:
            uVar20 = 1;
          }
          else {
            bVar6 = *pbVar17;
            if (**(longlong **)(lVar23 + 0x40) == 0) {
LAB_1402b7457:
              *(undefined8 *)(puVar18 + -8) = 0x1402b746a;
              uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar23,bVar6);
            }
            else {
              iVar21 = **(int **)(lVar23 + 0x58);
              if (iVar21 < 1) goto LAB_1402b7457;
              **(int **)(lVar23 + 0x58) = iVar21 + -1;
              pbVar15 = (byte *)**(longlong **)(lVar23 + 0x40);
              **(longlong **)(lVar23 + 0x40) = (longlong)(pbVar15 + 1);
              *pbVar15 = bVar6;
              uVar7 = (uint)bVar6;
            }
            if (uVar7 == 0xffffffff) goto LAB_1402b746f;
          }
          pbVar17 = pbVar17 + 1;
        }
        *param_3 = uVar20;
        *(undefined8 *)(puVar18 + -8) = 0x1402b7491;
        bVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        if (lVar23 == 0) {
LAB_1402b74e0:
          *param_3 = 1;
          uVar20 = 1;
        }
        else {
          if (**(longlong **)(lVar23 + 0x40) == 0) {
LAB_1402b74c8:
            *(undefined8 *)(puVar18 + -8) = 0x1402b74db;
            uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar23,bVar6);
          }
          else {
            iVar21 = **(int **)(lVar23 + 0x58);
            if (iVar21 < 1) goto LAB_1402b74c8;
            **(int **)(lVar23 + 0x58) = iVar21 + -1;
            pbVar17 = (byte *)**(longlong **)(lVar23 + 0x40);
            **(longlong **)(lVar23 + 0x40) = (longlong)(pbVar17 + 1);
            *pbVar17 = bVar6;
            uVar7 = (uint)bVar6;
          }
          if (uVar7 == 0xffffffff) goto LAB_1402b74e0;
        }
        pbVar17 = param_8;
        if (0xf < *(ulonglong *)(param_8 + 0x18)) {
          pbVar17 = *(byte **)param_8;
        }
        pbVar17 = pbVar17 + (*(longlong *)(param_8 + 0x10) - uVar22);
        do {
          if (lVar23 == 0) {
LAB_1402b7556:
            uVar20 = 1;
          }
          else {
            bVar6 = *pbVar17;
            if (**(longlong **)(lVar23 + 0x40) == 0) {
LAB_1402b753e:
              *(undefined8 *)(puVar18 + -8) = 0x1402b7551;
              uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar23,bVar6);
            }
            else {
              iVar21 = **(int **)(lVar23 + 0x58);
              if (iVar21 < 1) goto LAB_1402b753e;
              **(int **)(lVar23 + 0x58) = iVar21 + -1;
              pbVar15 = (byte *)**(longlong **)(lVar23 + 0x40);
              **(longlong **)(lVar23 + 0x40) = (longlong)(pbVar15 + 1);
              *pbVar15 = bVar6;
              uVar7 = (uint)bVar6;
            }
            if (uVar7 == 0xffffffff) goto LAB_1402b7556;
          }
          pbVar17 = pbVar17 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      else {
        lVar9 = *(longlong *)(param_3 + 8);
        if (lVar9 == 0) {
LAB_1402b7294:
          *param_3 = 1;
          uVar20 = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b7273:
            *(undefined8 *)(puVar18 + -8) = 0x1402b7288;
            uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,puVar18[0x31]);
          }
          else {
            iVar21 = **(int **)(lVar9 + 0x58);
            if (iVar21 < 1) goto LAB_1402b7273;
            **(int **)(lVar9 + 0x58) = iVar21 + -1;
            pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
            **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
            uVar7 = (uint)(byte)puVar18[0x31];
            *pbVar17 = puVar18[0x31];
          }
          if (uVar7 == 0xffffffff) goto LAB_1402b7294;
          uVar20 = *param_3;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1402b72ae;
        bVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        if (lVar9 == 0) {
LAB_1402b7302:
          uVar20 = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b72e5:
            *(undefined8 *)(puVar18 + -8) = 0x1402b72f8;
            uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
            uVar20 = *param_3;
          }
          else {
            iVar21 = **(int **)(lVar9 + 0x58);
            if (iVar21 < 1) goto LAB_1402b72e5;
            **(int **)(lVar9 + 0x58) = iVar21 + -1;
            pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
            **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
            *pbVar17 = bVar6;
            uVar7 = (uint)bVar6;
          }
          if (uVar7 == 0xffffffff) goto LAB_1402b7302;
        }
        lVar23 = uVar22 - *(longlong *)(param_8 + 0x10);
        if (lVar23 != 0) {
          bVar6 = puVar18[0x31];
          do {
            if (lVar9 == 0) {
LAB_1402b735d:
              uVar20 = 1;
            }
            else {
              if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b7345:
                *(undefined8 *)(puVar18 + -8) = 0x1402b7358;
                uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
              }
              else {
                iVar21 = **(int **)(lVar9 + 0x58);
                if (iVar21 < 1) goto LAB_1402b7345;
                **(int **)(lVar9 + 0x58) = iVar21 + -1;
                pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
                **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
                *pbVar17 = bVar6;
                uVar7 = (uint)bVar6;
              }
              if (uVar7 == 0xffffffff) goto LAB_1402b735d;
            }
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          param_8 = *(byte **)(puVar18 + 0x40);
        }
        *param_3 = uVar20;
        lVar23 = *(longlong *)(param_8 + 0x10);
        pbVar17 = param_8;
        if (0xf < *(ulonglong *)(param_8 + 0x18)) {
          pbVar17 = *(byte **)param_8;
        }
        if (lVar23 != 0) {
          do {
            if (lVar9 == 0) {
LAB_1402b73df:
              uVar20 = 1;
            }
            else {
              bVar6 = *pbVar17;
              if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b73c7:
                *(undefined8 *)(puVar18 + -8) = 0x1402b73da;
                uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
              }
              else {
                iVar21 = **(int **)(lVar9 + 0x58);
                if (iVar21 < 1) goto LAB_1402b73c7;
                **(int **)(lVar9 + 0x58) = iVar21 + -1;
                pbVar15 = (byte *)**(longlong **)(lVar9 + 0x40);
                **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar15 + 1);
                *pbVar15 = bVar6;
                uVar7 = (uint)bVar6;
              }
              if (uVar7 == 0xffffffff) goto LAB_1402b73df;
            }
            pbVar17 = pbVar17 + 1;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          *param_3 = uVar20;
          lVar23 = *(longlong *)(puVar18 + 0x58);
          goto LAB_1402b776a;
        }
      }
      *param_3 = uVar20;
      lVar23 = *(longlong *)(puVar18 + 0x58);
    }
    else if (cVar1 == 'x') goto LAB_1402b76f0;
LAB_1402b776a:
    local_a0 = (byte ****)((longlong)local_a0 + 1);
    param_6 = puVar18[0x30];
  } while (local_a0 < (byte ****)0x4);
  if (1 < local_b0) {
    pbVar17 = puVar18 + 0x78;
    if ((byte *)0xf < local_a8) {
      pbVar17 = *(byte **)(puVar18 + 0x78);
    }
    uVar20 = *param_3;
    lVar9 = *(longlong *)(param_3 + 8);
    uVar8 = local_b0;
    while (uVar8 = uVar8 - 1, uVar8 != 0) {
      pbVar17 = pbVar17 + 1;
      if (lVar9 == 0) goto LAB_1402b7804;
      bVar6 = *pbVar17;
      if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b77ec:
        *(undefined8 *)(puVar18 + -8) = 0x1402b77ff;
        uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
      }
      else {
        iVar21 = **(int **)(lVar9 + 0x58);
        if (iVar21 < 1) goto LAB_1402b77ec;
        **(int **)(lVar9 + 0x58) = iVar21 + -1;
        pbVar15 = (byte *)**(longlong **)(lVar9 + 0x40);
        **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar15 + 1);
        *pbVar15 = bVar6;
        uVar7 = (uint)bVar6;
      }
      if (uVar7 == 0xffffffff) {
LAB_1402b7804:
        uVar20 = 1;
      }
    }
    *param_3 = uVar20;
  }
  *(undefined8 *)(*(longlong *)(puVar18 + 0x60) + 0x28) = 0;
  uVar20 = *param_3;
  lVar9 = *(longlong *)(param_3 + 8);
  if (lVar23 != 0) {
    bVar6 = puVar18[0x30];
    do {
      if (lVar9 == 0) {
LAB_1402b787d:
        uVar20 = 1;
      }
      else {
        if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_1402b7866:
          *(undefined8 *)(puVar18 + -8) = 0x1402b7878;
          uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,bVar6);
        }
        else {
          iVar21 = **(int **)(lVar9 + 0x58);
          if (iVar21 < 1) goto LAB_1402b7866;
          **(int **)(lVar9 + 0x58) = iVar21 + -1;
          pbVar17 = (byte *)**(longlong **)(lVar9 + 0x40);
          **(longlong **)(lVar9 + 0x40) = (longlong)(pbVar17 + 1);
          *pbVar17 = bVar6;
          uVar7 = (uint)bVar6;
        }
        if (uVar7 == 0xffffffff) goto LAB_1402b787d;
      }
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar3 = *(undefined1 **)(puVar18 + 0x68);
  *puVar3 = uVar20;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)(puVar3 + 5) = *(undefined2 *)(param_3 + 5);
  puVar3[7] = param_3[7];
  *(longlong *)(puVar3 + 8) = lVar9;
  *(undefined8 *)(puVar18 + -8) = 0x1402b78b3;
  FUN_140017240(&local_80);
  *(undefined8 *)(puVar18 + -8) = 0x1402b78be;
  FUN_140017240(puVar18 + 0x78);
  *(undefined8 *)(puVar18 + -8) = 0x1402b78c8;
  FUN_140017240(local_60);
  *(undefined8 *)(puVar18 + -8) = 0x1402b78d1;
  FUN_140017240(param_8);
  *(undefined8 *)(puVar18 + -8) = 0x1402b78e0;
  return puVar3;
}

