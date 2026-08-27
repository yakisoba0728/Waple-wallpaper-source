// Function: FUN_140273f50
// Addr: 140273f50
// Size: 1592 bytes


/* WARNING: Type propagation algorithm not settling */

longlong ******* FUN_140273f50(longlong param_1,char *param_2,byte param_3,char param_4)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  longlong *******ppppppplVar6;
  int iVar7;
  longlong *******ppppppplVar8;
  size_t sVar9;
  longlong ******pppppplVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  char *******pppppppcVar14;
  longlong lVar15;
  LPWSTR ******pppppppWVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  char *******pppppppcVar21;
  undefined1 *puVar22;
  longlong *******ppppppplVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  longlong *plVar26;
  undefined1 auStackY_108 [8];
  undefined1 auStackY_100 [24];
  longlong *******local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  char *******local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  LPWSTR ******local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  LPWSTR ******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  LPWSTR ******local_50;
  
  puVar22 = auStackY_108;
  ppppppplVar8 = (longlong *******)FUN_14028af20(0x118);
  FUN_1404217a0(ppppppplVar8,0,0x118);
  FUN_1400fb450(ppppppplVar8);
  local_a8 = 0;
  local_b8 = (char *******)0x0;
  uStack_b0 = 0;
  local_a0 = 0;
  sVar9 = strlen(param_2);
  FUN_140017480(&local_b8,param_2,sVar9);
  pppppppcVar14 = (char *******)&local_b8;
  if (0xf < local_a0) {
    pppppppcVar14 = local_b8;
  }
  pppppppcVar21 = (char *******)((longlong)pppppppcVar14 + local_a8);
  pppppppcVar4 = (char *******)&local_b8;
  pppppppcVar5 = local_b8;
  uVar20 = local_a8;
  uVar24 = local_a0;
  if (0xf < local_a0) {
    pppppppcVar4 = local_b8;
  }
  for (; local_b8 = pppppppcVar5, local_a8 = uVar20, local_a0 = uVar24,
      pppppppcVar4 != pppppppcVar21; pppppppcVar4 = (char *******)((longlong)pppppppcVar4 + 1)) {
    iVar7 = tolower((int)*(char *)pppppppcVar4);
    *(char *)pppppppcVar14 = (char)iVar7;
    pppppppcVar14 = (char *******)((longlong)pppppppcVar14 + 1);
    pppppppcVar5 = local_b8;
    uVar20 = local_a8;
    uVar24 = local_a0;
  }
  uVar13 = 0xcbf29ce484222325;
  pppppppcVar14 = (char *******)&local_b8;
  if (0xf < uVar24) {
    pppppppcVar14 = pppppppcVar5;
  }
  uVar18 = 0;
  if (uVar20 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar14 + uVar18);
      uVar18 = uVar18 + 1;
      uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
    } while (uVar18 < uVar20);
  }
  uVar13 = uVar13 & *(ulonglong *)(param_1 + 0x68);
  lVar11 = *(longlong *)(param_1 + 0x40);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar13 * 0x10);
  if (lVar15 != lVar11) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar13 * 0x10);
    while( true ) {
      puVar19 = (undefined8 *)(lVar15 + 0x10);
      if (0xf < *(ulonglong *)(lVar15 + 0x28)) {
        puVar19 = (undefined8 *)*puVar19;
      }
      pppppppcVar14 = (char *******)&local_b8;
      if (0xf < uVar24) {
        pppppppcVar14 = pppppppcVar5;
      }
      if ((uVar20 == *(ulonglong *)(lVar15 + 0x20)) &&
         ((uVar20 == 0 || (iVar7 = memcmp(pppppppcVar14,puVar19,uVar20), iVar7 == 0))))
      goto LAB_1402740ce;
      if (lVar15 == lVar2) break;
      lVar15 = *(longlong *)(lVar15 + 8);
    }
  }
  lVar15 = 0;
LAB_1402740ce:
  if (lVar15 == 0) {
    lVar15 = lVar11;
  }
  if (0xf < uVar24) {
    uVar20 = uVar24 + 1;
    pppppppcVar14 = pppppppcVar5;
    if (0xfff < uVar20) {
      pppppppcVar14 = (char *******)pppppppcVar5[-1];
      if ((char *)0x1f < (char *)((longlong)pppppppcVar5 + (-8 - (longlong)pppppppcVar14)))
      goto LAB_140274577;
      uVar20 = uVar24 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar14,uVar20);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = (char *******)((ulonglong)local_b8 & 0xffffffffffffff00);
  if ((lVar15 != *(longlong *)(param_1 + 0x40)) && (0 < *(int *)(lVar15 + 0x34))) {
    FUN_140277820(ppppppplVar8,param_1 + 0x18,0x20);
    FUN_14004a920(ppppppplVar8,(longlong)*(int *)(lVar15 + 0x30),0);
    *(undefined4 *)(ppppppplVar8 + 0x22) = *(undefined4 *)(lVar15 + 0x34);
    return ppppppplVar8;
  }
  local_c8 = 0;
  local_d8 = (longlong *******)0x0;
  uStack_d0 = 0;
  local_c0 = 0;
  sVar9 = strlen(param_2);
  FUN_140017480(&local_d8,param_2,sVar9);
  if (local_c8 == 0) {
LAB_14027423e:
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (LPWSTR ******)0x0;
    uStack_80 = 7;
  }
  else {
    ppppppplVar23 = (longlong *******)&local_d8;
    if (0xf < local_c0) {
      ppppppplVar23 = local_d8;
    }
    iVar7 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppppplVar23,(int)local_c8,(LPWSTR)0x0,0);
    if (iVar7 < 1) goto LAB_14027423e;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (LPWSTR ******)0x0;
    uStack_70 = 0;
    FUN_1400167e0(&local_78,0,(longlong)iVar7);
    pppppppWVar16 = (LPWSTR ******)&local_78;
    if (7 < uStack_60) {
      pppppppWVar16 = local_78;
    }
    ppppppplVar23 = (longlong *******)&local_d8;
    if (0xf < local_c0) {
      ppppppplVar23 = local_d8;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppppplVar23,(int)local_c8,(LPWSTR)pppppppWVar16,iVar7);
    local_88 = local_68;
    uStack_80 = uStack_60;
    local_98 = local_78;
    uStack_90 = uStack_70;
  }
  if (0xf < local_c0) {
    uVar20 = local_c0 + 1;
    ppppppplVar23 = local_d8;
    if (0xfff < uVar20) {
      ppppppplVar23 = (longlong *******)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppppplVar23)))
      goto LAB_140274577;
      uVar20 = local_c0 + 0x28;
    }
    thunk_FUN_14028af80(ppppppplVar23,uVar20);
  }
  pppppppWVar16 = (LPWSTR ******)&local_98;
  if (7 < uStack_80) {
    pppppppWVar16 = local_98;
  }
  uVar25 = 5;
  if (param_3 != 0) {
    uVar25 = 0x24;
  }
  FUN_1400fb3e0(ppppppplVar8,pppppppWVar16,uVar25);
  if (ppppppplVar8[0x12] == (longlong ******)0x0) {
    puVar19 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    do {
      ppppppplVar23 = (longlong *******)0x0;
      if (puVar19 == *(undefined8 **)(param_1 + 8)) {
        if (param_4 != '\0') {
          FUN_140098760("Failed opening: %s\n",param_2);
        }
        FUN_14003f730(ppppppplVar8);
        thunk_FUN_14028af80(ppppppplVar8,0x118);
        goto LAB_140274520;
      }
      lVar11 = puVar19[4];
      local_58 = local_88;
      if (0x7ffffffffffffffeU - lVar11 < local_88) goto LAB_14027457e;
      plVar26 = puVar19 + 2;
      if (7 < (ulonglong)puVar19[5]) {
        plVar26 = (longlong *)*plVar26;
      }
      uVar20 = local_88 + lVar11;
      local_c8 = 0;
      local_50 = (LPWSTR ******)&local_98;
      if (7 < uStack_80) {
        local_50 = local_98;
      }
      local_c0 = 0;
      local_d8 = (longlong *******)0x0;
      uStack_d0 = 0;
      if (uVar20 < 8) {
        uVar24 = 7;
        ppppppplVar23 = (longlong *******)&local_d8;
        ppppppplVar6 = local_d8;
      }
      else {
        uVar24 = uVar20 | 7;
        if (uVar24 < 0x7fffffffffffffff) {
          if (uVar24 < 10) {
            uVar24 = 10;
          }
          if (0x7fffffffffffffff < uVar24 + 1) goto LAB_140274584;
          uVar13 = (uVar24 + 1) * 2;
          ppppppplVar6 = ppppppplVar23;
          if (uVar13 == 0) goto LAB_1402743cc;
        }
        else {
          uVar24 = 0x7ffffffffffffffe;
          uVar13 = 0xfffffffffffffffe;
        }
        if (uVar13 < 0x1000) {
          ppppppplVar23 = (longlong *******)FUN_14028af20();
          ppppppplVar6 = ppppppplVar23;
        }
        else {
          if (uVar13 + 0x27 <= uVar13) {
LAB_140274584:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          pppppplVar10 = (longlong ******)FUN_14028af20(uVar13 + 0x27);
          if (pppppplVar10 == (longlong ******)0x0) goto LAB_140274577;
          ppppppplVar23 = (longlong *******)((longlong)pppppplVar10 + 0x27U & 0xffffffffffffffe0);
          ppppppplVar23[-1] = pppppplVar10;
          ppppppplVar6 = ppppppplVar23;
        }
      }
LAB_1402743cc:
      local_d8 = ppppppplVar6;
      local_c8 = uVar20;
      local_c0 = uVar24;
      FUN_1404210f0(ppppppplVar23,plVar26,lVar11 * 2);
      FUN_1404210f0(lVar11 * 2 + (longlong)ppppppplVar23,local_50,local_58 * 2);
      *(undefined2 *)((longlong)ppppppplVar23 + uVar20 * 2) = 0;
      ppppppplVar23 = (longlong *******)&local_d8;
      if (7 < local_c0) {
        ppppppplVar23 = local_d8;
      }
      lVar11 = FUN_14004c4c0(ppppppplVar8 + 2,ppppppplVar23,(uint)param_3 << 5 | 5);
      lVar15 = (longlong)*(int *)((longlong)*ppppppplVar8 + 4) + (longlong)ppppppplVar8;
      if (lVar11 == 0) {
        uVar17 = 6;
        if (*(longlong *)(lVar15 + 0x48) != 0) {
          uVar17 = 2;
        }
        uVar17 = uVar17 | *(uint *)(lVar15 + 0x10);
      }
      else {
        uVar17 = 4;
        if (*(longlong *)(lVar15 + 0x48) != 0) {
          uVar17 = 0;
        }
      }
      FUN_140013b50(lVar15,uVar17,0);
      if (7 < local_c0) {
        uVar20 = local_c0 * 2 + 2;
        ppppppplVar23 = local_d8;
        if (0xfff < uVar20) {
          ppppppplVar23 = (longlong *******)local_d8[-1];
          if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppppplVar23)))
          goto LAB_140274577;
          uVar20 = local_c0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppppplVar23,uVar20);
      }
      puVar19 = (undefined8 *)*puVar19;
    } while (ppppppplVar8[0x12] == (longlong ******)0x0);
  }
  piVar12 = (int *)FUN_14004a840(ppppppplVar8,&local_d8);
  *(int *)(ppppppplVar8 + 0x22) = piVar12[2] + *piVar12;
  FUN_14004a920(ppppppplVar8,0,0);
  ppppppplVar23 = ppppppplVar8;
LAB_140274520:
  if (7 < uStack_80) {
    uVar20 = uStack_80 * 2 + 2;
    pppppppWVar16 = local_98;
    if (0xfff < uVar20) {
      pppppppWVar16 = (LPWSTR ******)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppWVar16))) {
LAB_140274577:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar22 = auStackY_100;
LAB_14027457e:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar22 + -8) = &UNK_140274583;
        FUN_1400172e0();
      }
      uVar20 = uStack_80 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppWVar16,uVar20);
  }
  return ppppppplVar23;
}

