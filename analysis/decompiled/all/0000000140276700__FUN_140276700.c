// Function: FUN_140276700
// Addr: 140276700
// Size: 1235 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140276700(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char *******pppppppcVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  longlong *plVar9;
  int *piVar10;
  LPWSTR ******pppppppWVar11;
  char *******pppppppcVar12;
  undefined8 *******pppppppuVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  int iVar19;
  ulonglong local_res8;
  int local_res18 [2];
  undefined4 local_res20 [2];
  LPWSTR ******in_stack_ffffffffffffff08;
  char *******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8 [2];
  char *******local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  LPWSTR ******local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  LPWSTR ******local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 *******local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  
  FUN_140078a40(param_1 + 0x38);
  uVar18 = 2;
  if ((*(longlong *)(param_1 + 0x108) != 0) && (lVar7 = FUN_14004c3c0(param_1 + 0x88), lVar7 == 0))
  {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 4);
    uVar14 = 6;
    if (*(longlong *)(lVar7 + 0xc0 + param_1) != 0) {
      uVar14 = 2;
    }
    FUN_140013b50(param_1 + 0x78 + lVar7,uVar14 | *(uint *)(lVar7 + 0x88 + param_1),0);
  }
  iVar19 = 0;
  local_e8 = (char *******)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  sVar8 = strlen(param_2);
  FUN_140017480(&local_e8,param_2,sVar8);
  if (local_d8 == 0) {
LAB_14027684a:
    local_70 = 0;
    uStack_78 = 0;
    local_80 = (LPWSTR ******)0x0;
    uStack_68 = 7;
  }
  else {
    pppppppcVar12 = (char *******)&local_e8;
    if (0xf < uStack_d0) {
      pppppppcVar12 = local_e8;
    }
    in_stack_ffffffffffffff08 = (LPWSTR ******)0x0;
    iVar6 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppcVar12,(int)local_d8,(LPWSTR)0x0,0);
    if (iVar6 < 1) goto LAB_14027684a;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (LPWSTR ******)0x0;
    uStack_98 = 0;
    FUN_1400167e0(&local_a0,0,(longlong)iVar6);
    in_stack_ffffffffffffff08 = (LPWSTR ******)&local_a0;
    if (7 < uStack_88) {
      in_stack_ffffffffffffff08 = local_a0;
    }
    pppppppcVar12 = (char *******)&local_e8;
    if (0xf < uStack_d0) {
      pppppppcVar12 = local_e8;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppcVar12,(int)local_d8,
                        (LPWSTR)in_stack_ffffffffffffff08,iVar6);
    local_80 = local_a0;
    uStack_78 = uStack_98;
    local_70 = local_90;
    uStack_68 = uStack_88;
  }
  FUN_140016560(param_1 + 0x18,&local_80);
  if (7 < uStack_68) {
    uVar15 = uStack_68 * 2 + 2;
    pppppppWVar11 = local_80;
    if (0xfff < uVar15) {
      pppppppWVar11 = (LPWSTR ******)local_80[-1];
      if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pppppppWVar11)))
      goto LAB_140276bcb;
      uVar15 = uStack_68 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppWVar11,uVar15);
  }
  if (0xf < uStack_d0) {
    uVar15 = uStack_d0 + 1;
    pppppppcVar12 = local_e8;
    if (0xfff < uVar15) {
      pppppppcVar12 = (char *******)local_e8[-1];
      if ((char *)0x1f < (char *)((longlong)local_e8 + (-8 - (longlong)pppppppcVar12)))
      goto LAB_140276bcb;
      uVar15 = uStack_d0 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar12,uVar15);
  }
  uVar15 = param_1 + 0x78;
  FUN_140277820(uVar15,param_1 + 0x18,0x20);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    FUN_140098760("VFS missing file: %s\n",param_2);
    return 1;
  }
  local_res8 = uVar15;
  FUN_140060720(&local_res8,local_60,8);
  if (local_50 < 5) {
LAB_140276980:
    FUN_14004aa50(uVar15,local_res18,4);
    uVar5 = local_res8;
    if (0 < local_res18[0]) {
      do {
        FUN_14004aa50(uVar15,&local_res8,4);
        uVar16 = local_res8 & 0xffffffff;
        if ((uint)local_res8 < 0x801) {
          local_d8 = 0;
          uStack_d0 = 0xf;
          uStack_e0 = 0;
          local_e8 = (char *******)0x0;
          if ((uint)local_res8 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
            local_e8._0_1_ = 0;
            local_d8 = uVar16;
          }
          else if (uVar16 < 0x10) {
            local_d8 = uVar16;
            FUN_1404217a0(&local_e8,0,uVar16);
            *(undefined1 *)((longlong)&local_e8 + uVar16) = 0;
          }
          else {
            in_stack_ffffffffffffff08 =
                 (LPWSTR ******)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            FUN_140016cc0(&local_e8,uVar16,uVar5 & 0xff,uVar16,in_stack_ffffffffffffff08);
          }
          pppppppcVar12 = (char *******)&local_e8;
          if (0xf < uStack_d0) {
            pppppppcVar12 = local_e8;
          }
          FUN_14004aa50(uVar15,pppppppcVar12,(longlong)(int)(uint)local_res8);
          local_c0 = local_e8;
          uStack_b8 = uStack_e0;
          local_b0 = local_d8;
          uStack_a8 = uStack_d0;
        }
        else {
          uStack_b8 = 0;
          local_c0 = (char *******)0x0;
          local_b0 = 0;
          uStack_a8 = 0xf;
        }
        FUN_14004aa50(uVar15,local_res20,4);
        FUN_14004aa50(uVar15,local_c8,4);
        pppppppcVar12 = (char *******)&local_c0;
        if (0xf < uStack_a8) {
          pppppppcVar12 = local_c0;
        }
        pppppppcVar17 = (char *******)((longlong)pppppppcVar12 + local_b0);
        pppppppcVar4 = (char *******)&local_c0;
        if (0xf < uStack_a8) {
          pppppppcVar4 = local_c0;
        }
        for (; pppppppcVar4 != pppppppcVar17;
            pppppppcVar4 = (char *******)((longlong)pppppppcVar4 + 1)) {
          iVar6 = tolower((int)*(char *)pppppppcVar4);
          *(char *)pppppppcVar12 = (char)iVar6;
          pppppppcVar12 = (char *******)((longlong)pppppppcVar12 + 1);
        }
        plVar9 = (longlong *)FUN_140277890(param_1 + 0x38,&local_a0,&local_c0);
        lVar7 = *plVar9;
        *(undefined4 *)(lVar7 + 0x30) = local_res20[0];
        *(undefined4 *)(lVar7 + 0x34) = local_c8[0];
        if (0xf < uStack_a8) {
          uVar16 = uStack_a8 + 1;
          pppppppcVar12 = local_c0;
          if (0xfff < uVar16) {
            pppppppcVar12 = (char *******)local_c0[-1];
            if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppppcVar12)))
            goto LAB_140276bcb;
            uVar16 = uStack_a8 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar12,uVar16);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < local_res18[0]);
    }
    uVar18 = 0;
    piVar10 = (int *)FUN_14004a840(uVar15,&local_a0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    iVar19 = piVar10[2];
    iVar6 = *piVar10;
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      *(int *)(puVar2 + 6) = *(int *)(puVar2 + 6) + iVar19 + iVar6;
    }
  }
  else {
    pppppppuVar13 = local_60;
    if (0xf < local_48) {
      pppppppuVar13 = local_60[0];
    }
    iVar6 = FUN_1402c82c0((longlong)pppppppuVar13 + 4);
    if (iVar6 < 0x19) goto LAB_140276980;
    FUN_140098760("Cannot open %s, version %i not supported.\n",param_2,iVar6);
  }
  if (0xf < local_48) {
    uVar15 = local_48 + 1;
    pppppppuVar13 = local_60[0];
    if (0xfff < uVar15) {
      pppppppuVar13 = (undefined8 *******)local_60[0][-1];
      if (0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)pppppppuVar13))) {
LAB_140276bcb:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return uVar18;
      }
      uVar15 = local_48 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar13,uVar15);
  }
  return uVar18;
}

