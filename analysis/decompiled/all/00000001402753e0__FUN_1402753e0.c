// Function: FUN_1402753e0
// Addr: 1402753e0
// Size: 2125 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1402753e0(longlong param_1,undefined8 *param_2,char *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  bool bVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  ulonglong uVar14;
  char *******pppppppcVar15;
  LPCSTR ******pppppppCVar16;
  LPWSTR ******pppppppWVar17;
  LPCWSTR ******pppppppWVar18;
  ulonglong uVar19;
  undefined8 *_Buf2;
  ulonglong uVar20;
  char *******pppppppcVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  undefined1 auStackY_188 [8];
  undefined1 auStackY_180 [24];
  LPCSTR ******local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong local_130;
  LPWSTR ******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  LPCWSTR ******local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong local_f0;
  LPWSTR ******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  char *******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  LPWSTR ******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  puVar24 = auStackY_188;
  bVar7 = false;
  local_b8 = 0;
  local_c8 = (char *******)0x0;
  uStack_c0 = 0;
  local_b0 = 0;
  sVar12 = strlen(param_3);
  FUN_140017480(&local_c8,param_3,sVar12);
  pppppppcVar15 = (char *******)&local_c8;
  if (0xf < local_b0) {
    pppppppcVar15 = local_c8;
  }
  pppppppcVar21 = (char *******)((longlong)pppppppcVar15 + local_b8);
  pppppppcVar8 = (char *******)&local_c8;
  pppppppcVar9 = local_c8;
  uVar20 = local_b8;
  uVar25 = local_b0;
  if (0xf < local_b0) {
    pppppppcVar8 = local_c8;
  }
  for (; local_c8 = pppppppcVar9, local_b8 = uVar20, local_b0 = uVar25,
      pppppppcVar8 != pppppppcVar21; pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    iVar11 = tolower((int)*(char *)pppppppcVar8);
    *(char *)pppppppcVar15 = (char)iVar11;
    pppppppcVar15 = (char *******)((longlong)pppppppcVar15 + 1);
    pppppppcVar9 = local_c8;
    uVar20 = local_b8;
    uVar25 = local_b0;
  }
  uVar14 = 0xcbf29ce484222325;
  pppppppcVar15 = (char *******)&local_c8;
  if (0xf < uVar25) {
    pppppppcVar15 = pppppppcVar9;
  }
  uVar19 = 0;
  if (uVar20 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar15 + uVar19);
      uVar19 = uVar19 + 1;
      uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
    } while (uVar19 < uVar20);
  }
  uVar14 = uVar14 & *(ulonglong *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar14 * 0x10);
  if (lVar22 != lVar2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar14 * 0x10);
    while( true ) {
      _Buf2 = (undefined8 *)(lVar22 + 0x10);
      if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      pppppppcVar15 = (char *******)&local_c8;
      if (0xf < uVar25) {
        pppppppcVar15 = pppppppcVar9;
      }
      if ((uVar20 == *(ulonglong *)(lVar22 + 0x20)) &&
         ((uVar20 == 0 || (iVar11 = memcmp(pppppppcVar15,_Buf2,uVar20), iVar11 == 0))))
      goto LAB_140275544;
      if (lVar22 == lVar3) break;
      lVar22 = *(longlong *)(lVar22 + 8);
    }
  }
  lVar22 = 0;
LAB_140275544:
  if (lVar22 == 0) {
    lVar22 = lVar2;
  }
  if (0xf < uVar25) {
    uVar20 = uVar25 + 1;
    pppppppcVar15 = pppppppcVar9;
    if (0xfff < uVar20) {
      pppppppcVar15 = (char *******)pppppppcVar9[-1];
      if ((char *)0x1f < (char *)((longlong)pppppppcVar9 + (-8 - (longlong)pppppppcVar15)))
      goto LAB_140275c21;
      uVar20 = uVar25 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar15,uVar20);
  }
  if (lVar22 != *(longlong *)(param_1 + 0x40)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return param_2;
  }
  local_138 = 0;
  local_148 = (LPCSTR ******)0x0;
  uStack_140 = 0;
  local_130 = 0;
  sVar12 = strlen(param_3);
  FUN_140017480(&local_148,param_3,sVar12);
  if (local_138 == 0) {
LAB_140275699:
    local_118 = 0;
    uStack_120 = 0;
    uStack_110 = 7;
    local_128 = (LPWSTR ******)0x0;
  }
  else {
    pppppppCVar16 = (LPCSTR ******)&local_148;
    if (0xf < local_130) {
      pppppppCVar16 = local_148;
    }
    iVar11 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar16,(int)local_138,(LPWSTR)0x0,0);
    if (iVar11 < 1) goto LAB_140275699;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (LPWSTR ******)0x0;
    uStack_e0 = 0;
    FUN_1400167e0(&local_e8,0,(longlong)iVar11);
    pppppppWVar17 = (LPWSTR ******)&local_e8;
    if (7 < uStack_d0) {
      pppppppWVar17 = local_e8;
    }
    pppppppCVar16 = (LPCSTR ******)&local_148;
    if (0xf < local_130) {
      pppppppCVar16 = local_148;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar16,(int)local_138,(LPWSTR)pppppppWVar17,iVar11);
    local_118 = local_d8;
    uStack_110 = uStack_d0;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
  }
  uVar25 = uStack_110;
  uVar20 = local_118;
  if (0xf < local_130) {
    uVar14 = local_130 + 1;
    pppppppCVar16 = local_148;
    if (0xfff < uVar14) {
      pppppppCVar16 = (LPCSTR ******)local_148[-1];
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppppCVar16)))
      goto LAB_140275c21;
      uVar14 = local_130 + 0x28;
    }
    thunk_FUN_14028af80(pppppppCVar16,uVar14);
  }
  plVar23 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar23 != *(longlong **)(param_1 + 8)) {
    do {
      if (0x7ffffffffffffffeU - plVar23[4] < uVar20) goto LAB_140275c28;
      FUN_140277b40(&local_148);
      pppppppCVar16 = (LPCSTR ******)&local_148;
      if (7 < local_130) {
        pppppppCVar16 = local_148;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (LPWSTR ******)0x0;
      uStack_a0 = 0;
      FUN_140016170(&local_a8,pppppppCVar16,local_138);
      FUN_140016600(local_88,&local_a8);
      piVar13 = (int *)FUN_14003b970(local_68,local_88,3);
      if ((*piVar13 == 2) && (piVar13[2] == 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      FUN_140016770(local_88);
      bVar10 = bVar7;
      if (bVar5) {
LAB_140275847:
        bVar7 = bVar10;
        bVar6 = true;
      }
      else {
        pppppppCVar16 = (LPCSTR ******)&local_148;
        if (7 < local_130) {
          pppppppCVar16 = local_148;
        }
        local_e8 = (LPWSTR ******)0x0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_140016170(&local_e8,pppppppCVar16,local_138);
        FUN_140016600(local_88,&local_e8);
        piVar13 = (int *)FUN_14003b970(local_58,local_88,3);
        if ((*piVar13 == 3) && (piVar13[2] == 0)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        bVar7 = true;
        FUN_140016770(local_88);
        bVar6 = false;
        bVar10 = true;
        if (bVar5) goto LAB_140275847;
      }
      if ((bVar7) && (bVar7 = false, 7 < uStack_d0)) {
        uVar20 = uStack_d0 * 2 + 2;
        pppppppWVar17 = local_e8;
        if (0xfff < uVar20) {
          pppppppWVar17 = (LPWSTR ******)local_e8[-1];
          if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppWVar17)))
          goto LAB_140275c21;
          uVar20 = uStack_d0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppWVar17,uVar20);
      }
      if (7 < uStack_90) {
        uVar20 = uStack_90 * 2 + 2;
        pppppppWVar17 = local_a8;
        if (0xfff < uVar20) {
          pppppppWVar17 = (LPWSTR ******)local_a8[-1];
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppWVar17)))
          goto LAB_140275c21;
          uVar20 = uStack_90 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppWVar17,uVar20);
      }
      if (bVar6) {
        FUN_140016600(&local_108,plVar23 + 2);
        if (7 < local_130) {
          uVar20 = local_130 * 2 + 2;
          pppppppCVar16 = local_148;
          if (0xfff < uVar20) {
            pppppppCVar16 = (LPCSTR ******)local_148[-1];
            if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppppCVar16)))
            goto LAB_140275c21;
            uVar20 = local_130 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppCVar16,uVar20);
        }
        local_138 = 0;
        local_130 = 7;
        local_148 = (LPCSTR ******)((ulonglong)local_148 & 0xffffffffffff0000);
        if (uStack_110 < 8) goto LAB_140275a63;
        uVar20 = uStack_110 * 2 + 2;
        pppppppWVar17 = local_128;
        if (uVar20 < 0x1000) goto LAB_140275a5e;
        pppppppWVar17 = (LPWSTR ******)local_128[-1];
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppWVar17)))
        goto LAB_140275c21;
        uVar20 = uStack_110 * 2 + 0x29;
        goto LAB_140275a5e;
      }
      if (7 < local_130) {
        uVar20 = local_130 * 2 + 2;
        pppppppCVar16 = local_148;
        if (0xfff < uVar20) {
          pppppppCVar16 = (LPCSTR ******)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppppCVar16)))
          goto LAB_140275c21;
          uVar20 = local_130 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppCVar16,uVar20);
      }
      plVar23 = (longlong *)*plVar23;
      uVar25 = uStack_110;
      uVar20 = local_118;
    } while (plVar23 != (longlong *)*(longlong *)(param_1 + 8));
  }
  local_f8 = 0;
  local_f0 = 0;
  local_108 = (LPCWSTR ******)0x0;
  uStack_100 = 0;
  FUN_140016170(&local_108,&DAT_140474538,0);
  if (7 < uVar25) {
    uVar20 = uVar25 * 2 + 2;
    pppppppWVar17 = local_128;
    if (0xfff < uVar20) {
      if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)local_128[-1])))
      goto LAB_140275c21;
      uVar20 = uVar25 * 2 + 0x29;
      pppppppWVar17 = (LPWSTR ******)local_128[-1];
    }
LAB_140275a5e:
    thunk_FUN_14028af80(pppppppWVar17,uVar20);
  }
LAB_140275a63:
  if (local_f8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    if (7 < local_f0) {
      uVar20 = local_f0 * 2 + 2;
      pppppppWVar18 = local_108;
      if (0xfff < uVar20) {
        pppppppWVar18 = (LPCWSTR ******)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppppWVar18))) {
LAB_140275c21:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar24 = auStackY_180;
LAB_140275c28:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar24 + -8) = &UNK_140275c2d;
          FUN_1400172e0();
        }
        uVar20 = local_f0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar18,uVar20);
    }
  }
  else {
    pppppppWVar18 = (LPCWSTR ******)&local_108;
    if (7 < local_f0) {
      pppppppWVar18 = local_108;
    }
    iVar11 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar18,(int)local_f8,(LPSTR)0x0,0,
                                 (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar11 < 1) {
      local_118 = 0;
      uStack_120 = 0;
      local_128 = (LPWSTR ******)0x0;
      uStack_110 = 0xf;
    }
    else {
      FUN_140016940(&local_a8,(longlong)iVar11,0);
      pppppppWVar17 = (LPWSTR ******)&local_a8;
      if (0xf < uStack_90) {
        pppppppWVar17 = local_a8;
      }
      pppppppWVar18 = (LPCWSTR ******)&local_108;
      if (7 < local_f0) {
        pppppppWVar18 = local_108;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar18,(int)local_f8,(LPSTR)pppppppWVar17,iVar11,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_128 = local_a8;
      uStack_120 = uStack_a0;
      local_118 = local_98;
      uStack_110 = uStack_90;
    }
    FUN_140076f60(param_2,&local_128,param_3);
    if (0xf < uStack_110) {
      uVar20 = uStack_110 + 1;
      pppppppWVar17 = local_128;
      if (0xfff < uVar20) {
        pppppppWVar17 = (LPWSTR ******)local_128[-1];
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppWVar17)))
        goto LAB_140275c21;
        uVar20 = uStack_110 + 0x28;
      }
      thunk_FUN_14028af80(pppppppWVar17,uVar20);
    }
    local_118 = 0;
    uStack_110 = 0xf;
    local_128 = (LPWSTR ******)((ulonglong)local_128 & 0xffffffffffffff00);
    if (7 < local_f0) {
      FUN_140016a90(&local_108,local_108);
    }
  }
  return param_2;
}

