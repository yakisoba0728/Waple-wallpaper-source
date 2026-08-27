// Function: FUN_14027a260
// Addr: 14027a260
// Size: 3406 bytes


/* WARNING: Removing unreachable block (ram,0x00014027a525) */
/* WARNING: Removing unreachable block (ram,0x00014027aa91) */
/* WARNING: Removing unreachable block (ram,0x00014027aa9b) */
/* WARNING: Removing unreachable block (ram,0x00014027aaab) */
/* WARNING: Removing unreachable block (ram,0x00014027aac0) */
/* WARNING: Removing unreachable block (ram,0x00014027aac7) */
/* WARNING: Removing unreachable block (ram,0x00014027aacc) */
/* WARNING: Removing unreachable block (ram,0x00014027a588) */
/* WARNING: Removing unreachable block (ram,0x00014027a59e) */
/* WARNING: Removing unreachable block (ram,0x00014027a5b3) */
/* WARNING: Removing unreachable block (ram,0x00014027a5be) */

ulonglong FUN_14027a260(longlong *param_1,char *param_2,char *param_3,undefined8 *param_4,
                       char *param_5)

{
  int *piVar1;
  longlong lVar2;
  char *_Str;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LPWSTR ***ppppWVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  size_t sVar16;
  LPCSTR lpMultiByteStr;
  LPWSTR ****pppppWVar17;
  uint *puVar18;
  LPWSTR ***ppppWVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  ulonglong uVar22;
  longlong *plVar23;
  byte bVar24;
  LPWSTR ****pppppWVar25;
  ulonglong *puVar26;
  LPCSTR lpMultiByteStr_00;
  uint uVar27;
  undefined4 local_res8;
  undefined4 uStackX_c;
  char *local_res10;
  LPWSTR ***local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  LPWSTR ***local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  LPWSTR ***local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong uStack_190;
  LPWSTR ***local_188;
  undefined8 uStack_180;
  longlong local_178;
  ulonglong uStack_170;
  LPWSTR **local_168;
  LPWSTR **pppWStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  LPWSTR **pppWStack_150;
  LPWSTR ***local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 ****local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 ****local_e8 [3];
  ulonglong local_d0;
  undefined8 ****local_c8 [3];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  uint local_98 [2];
  uint6 local_90;
  short sStack_8a;
  
  bVar24 = 0;
  local_res8 = 0;
  local_res10 = param_2;
  uVar12 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  if ((char)uVar12 != '\0') {
    return uVar12 & 0xffffffffffffff00;
  }
  local_118 = 0;
  local_110 = 7;
  uStack_120 = 0;
  local_128 = (undefined8 *****)0x0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar12 = 0;
    do {
      if (param_3 == (char *)0x0) {
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = (LPWSTR ***)0x0;
        uStack_1c0 = 0;
        FUN_140016170(&local_1c8,&DAT_140474538,0);
        local_148 = local_1c8;
        local_1c8 = (LPWSTR ***)((ulonglong)local_1c8 & 0xffffffffffff0000);
        uStack_130 = uStack_1b0;
        local_138 = local_1b8;
        uStack_140 = uStack_1c0;
        uStack_1b0 = 7;
        local_1b8 = 0;
      }
      else {
        local_1d8 = 0;
        local_1e8 = (LPWSTR ***)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        sVar16 = strlen(param_3);
        FUN_140017480(&local_1e8,param_3,sVar16);
        bVar24 = 0xc0;
        if (local_1d8 == 0) {
LAB_14027a4dc:
          local_178 = 0;
          uStack_180 = 0;
          local_188 = (LPWSTR ***)0x0;
          uStack_170 = 7;
        }
        else {
          pppppWVar17 = &local_1e8;
          if (0xf < uStack_1d0) {
            pppppWVar17 = (LPWSTR ****)local_1e8;
          }
          iVar11 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar17,(int)local_1d8,(LPWSTR)0x0,0);
          if (iVar11 < 1) goto LAB_14027a4dc;
          local_198 = 0;
          uStack_190 = 0;
          local_1a8 = (LPWSTR ***)0x0;
          uStack_1a0 = 0;
          FUN_1400167e0(&local_1a8,0,(longlong)iVar11);
          pppppWVar17 = &local_1a8;
          if (7 < uStack_190) {
            pppppWVar17 = (LPWSTR ****)local_1a8;
          }
          pppppWVar25 = &local_1e8;
          if (0xf < uStack_1d0) {
            pppppWVar25 = (LPWSTR ****)local_1e8;
          }
          MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar25,(int)local_1d8,(LPWSTR)pppppWVar17,iVar11
                             );
          local_188 = local_1a8;
          uStack_180 = uStack_1a0;
          local_178 = local_198;
          uStack_170 = uStack_190;
        }
        uStack_130 = uStack_170;
        local_138 = local_178;
        local_148 = local_188;
        local_178 = 0;
        uStack_170 = 7;
        local_188 = (LPWSTR ***)((ulonglong)local_188 & 0xffffffffffff0000);
        uStack_140 = uStack_180;
      }
      if (((char)bVar24 < '\0') && (bVar24 = bVar24 & 0x7f, 7 < uStack_170)) {
        uVar22 = uStack_170 * 2 + 2;
        pppppWVar17 = (LPWSTR ****)local_188;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_188[-1];
          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_170 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      if (((bVar24 & 0x40) != 0) && (bVar24 = bVar24 & 0xbf, 0xf < uStack_1d0)) {
        uVar22 = uStack_1d0 + 1;
        pppppWVar17 = (LPWSTR ****)local_1e8;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_1e8[-1];
          if (0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_1d0 + 0x28;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      _Str = (&PTR_DAT_140484b80)[uVar12];
      if (_Str == (char *)0x0) {
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = (LPWSTR ***)0x0;
        uStack_1a0 = 0;
        FUN_140016170(&local_1a8,&DAT_140474538,0);
        pppppWVar17 = &local_1a8;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        plVar23 = &local_198;
        puVar26 = &uStack_190;
      }
      else {
        local_1d8 = 0;
        local_1e8 = (LPWSTR ***)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        sVar16 = strlen(_Str);
        FUN_140017480(&local_1e8,_Str,sVar16);
        if (local_1d8 == 0) {
LAB_14027a745:
          local_178 = 0;
          uStack_180 = 0;
          local_188 = (LPWSTR ***)0x0;
          uStack_170 = 7;
        }
        else {
          pppppWVar17 = &local_1e8;
          if (0xf < uStack_1d0) {
            pppppWVar17 = (LPWSTR ****)local_1e8;
          }
          iVar11 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar17,(int)local_1d8,(LPWSTR)0x0,0);
          if (iVar11 < 1) goto LAB_14027a745;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = (LPWSTR ***)0x0;
          uStack_1c0 = 0;
          FUN_1400167e0(&local_1c8,0,(longlong)iVar11);
          pppppWVar17 = &local_1c8;
          if (7 < uStack_1b0) {
            pppppWVar17 = (LPWSTR ****)local_1c8;
          }
          pppppWVar25 = &local_1e8;
          if (0xf < uStack_1d0) {
            pppppWVar25 = (LPWSTR ****)local_1e8;
          }
          MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar25,(int)local_1d8,(LPWSTR)pppppWVar17,iVar11
                             );
          local_188 = local_1c8;
          uStack_180 = uStack_1c0;
          local_178 = local_1b8;
          uStack_170 = uStack_1b0;
        }
        pppppWVar17 = &local_188;
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        plVar23 = &local_178;
        puVar26 = &uStack_170;
      }
      ppppWVar19 = *pppppWVar17;
      ppppWVar9 = pppppWVar17[1];
      uVar7 = *(undefined4 *)(pppppWVar17 + 2);
      uVar8 = *(undefined4 *)((longlong)pppppWVar17 + 0x14);
      pppWStack_150 = (LPWSTR **)pppppWVar17[3];
      *plVar23 = 0;
      *puVar26 = 7;
      *(undefined2 *)pppppWVar17 = 0;
      local_168 = (LPWSTR **)ppppWVar19;
      pppWStack_160 = (LPWSTR **)ppppWVar9;
      local_158 = uVar7;
      uStack_154 = uVar8;
      if ((bVar4) && (7 < uStack_190)) {
        uVar22 = uStack_190 * 2 + 2;
        pppppWVar17 = (LPWSTR ****)local_1a8;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_1a8[-1];
          if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_190 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      if ((bVar5) && (7 < uStack_170)) {
        uVar22 = uStack_170 * 2 + 2;
        pppppWVar17 = (LPWSTR ****)local_188;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_188[-1];
          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_170 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      if ((bVar6) && (0xf < uStack_1d0)) {
        uVar22 = uStack_1d0 + 1;
        pppppWVar17 = (LPWSTR ****)local_1e8;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_1e8[-1];
          if (0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_1d0 + 0x28;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      FUN_140060d90(&local_148,&local_168);
      if ((LPWSTR ***)0x7 < pppWStack_150) {
        uVar22 = (longlong)pppWStack_150 * 2 + 2;
        ppppWVar19 = (LPWSTR ***)local_168;
        if (0xfff < uVar22) {
          ppppWVar19 = (LPWSTR ***)local_168[-1];
          if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)ppppWVar19)))
          goto LAB_14027afa6;
          uVar22 = (longlong)pppWStack_150 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppWVar19,uVar22);
      }
      pcVar3 = *(code **)(*param_1 + 0x40);
      puVar13 = (undefined8 *)FUN_140018ce0(&local_148,&local_188);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      lpMultiByteStr = (LPCSTR)(*pcVar3)(param_1,&local_1a8,puVar13);
      if (*(longlong *)(lpMultiByteStr + 0x10) == 0) {
LAB_14027a9e8:
        local_1d8 = 0;
        uStack_1e0 = 0;
        local_1e8 = (LPWSTR ***)0x0;
        uStack_1d0 = 7;
      }
      else {
        lpMultiByteStr_00 = lpMultiByteStr;
        if (0xf < *(ulonglong *)(lpMultiByteStr + 0x18)) {
          lpMultiByteStr_00 = *(LPCSTR *)lpMultiByteStr;
        }
        iVar11 = MultiByteToWideChar(0xfde9,0,lpMultiByteStr_00,
                                     (int)*(longlong *)(lpMultiByteStr + 0x10),(LPWSTR)0x0,0);
        if (iVar11 < 1) goto LAB_14027a9e8;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = (LPWSTR ***)0x0;
        uStack_1c0 = 0;
        FUN_1400167e0(&local_1c8,0,(longlong)iVar11);
        piVar1 = (int *)(lpMultiByteStr + 0x10);
        pppppWVar17 = &local_1c8;
        if (7 < uStack_1b0) {
          pppppWVar17 = (LPWSTR ****)local_1c8;
        }
        if (0xf < *(ulonglong *)(lpMultiByteStr + 0x18)) {
          lpMultiByteStr = *(LPCSTR *)lpMultiByteStr;
        }
        MultiByteToWideChar(0xfde9,0,lpMultiByteStr,*piVar1,(LPWSTR)pppppWVar17,iVar11);
        local_1d8 = local_1b8;
        uStack_1d0 = uStack_1b0;
        local_1e8 = local_1c8;
        uStack_1e0 = uStack_1c0;
      }
      local_f8 = 0;
      local_f0 = 0;
      pppppWVar17 = &local_1e8;
      if (7 < uStack_1d0) {
        pppppWVar17 = (LPWSTR ****)local_1e8;
      }
      local_108 = (undefined8 *****)0x0;
      uStack_100 = 0;
      FUN_140016170(&local_108,pppppWVar17,local_1d8);
      if (7 < uStack_1d0) {
        uVar22 = uStack_1d0 * 2 + 2;
        pppppWVar17 = (LPWSTR ****)local_1e8;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_1e8[-1];
          if (0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_1d0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      local_1e8 = (LPWSTR ***)((ulonglong)local_1e8 & 0xffffffffffff0000);
      uStack_1d0 = 7;
      local_1d8 = 0;
      if (0xf < uStack_190) {
        uVar22 = uStack_190 + 1;
        pppppWVar17 = (LPWSTR ****)local_1a8;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_1a8[-1];
          if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_190 + 0x28;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      local_198 = 0;
      uStack_190 = 0xf;
      local_1a8 = (LPWSTR ***)((ulonglong)local_1a8 & 0xffffffffffffff00);
      if (0xf < uStack_170) {
        uVar22 = uStack_170 + 1;
        pppppWVar17 = (LPWSTR ****)local_188;
        if (0xfff < uVar22) {
          pppppWVar17 = (LPWSTR ****)local_188[-1];
          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar17)))
          goto LAB_14027afa6;
          uVar22 = uStack_170 + 0x28;
        }
        thunk_FUN_14028af80(pppppWVar17,uVar22);
      }
      FUN_140016600(&local_168,&local_108);
      puVar18 = (uint *)FUN_14003b970(local_a8,&local_168,3);
      uVar27 = *puVar18;
      FUN_140016770(&local_168);
      if (1 < uVar27) {
        pppppuVar20 = &local_108;
        if (7 < local_f0) {
          pppppuVar20 = (undefined8 *****)local_108;
        }
        uVar14 = FUN_1402d6aa0(pppppuVar20);
        FUN_140016ae0(&local_128,pppppuVar20,uVar14);
        if (7 < local_f0) {
          uVar12 = local_f0 * 2 + 2;
          pppppuVar20 = (undefined8 *****)local_108;
          if (0xfff < uVar12) {
            pppppuVar20 = (undefined8 *****)local_108[-1];
            if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppuVar20)))
            goto LAB_14027afa6;
            uVar12 = local_f0 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppuVar20,uVar12);
        }
        param_2 = local_res10;
        if (7 < uStack_130) {
          uVar12 = uStack_130 * 2 + 2;
          pppppWVar17 = (LPWSTR ****)local_148;
          if (0xfff < uVar12) {
            pppppWVar17 = (LPWSTR ****)local_148[-1];
            if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppWVar17)))
            goto LAB_14027afa6;
            uVar12 = uStack_130 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppWVar17,uVar12);
          param_2 = local_res10;
        }
        break;
      }
      if (7 < local_f0) {
        uVar22 = local_f0 * 2 + 2;
        pppppuVar20 = (undefined8 *****)local_108;
        if (0xfff < uVar22) {
          pppppuVar20 = (undefined8 *****)local_108[-1];
          if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppuVar20)))
          goto LAB_14027afa6;
          uVar22 = local_f0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppuVar20,uVar22);
      }
      if (7 < uStack_130) {
        FUN_140016a90(&local_148,local_148);
      }
      uVar27 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar27;
      param_2 = local_res10;
    } while ((int)uVar27 < 9);
  }
  else {
    FUN_140060990(&local_168,param_3);
    FUN_140060990(&local_1c8,param_2);
    FUN_140060d90(&local_168,&local_1c8);
    FUN_140016770(&local_1c8);
    lVar2 = *param_1;
    puVar13 = (undefined8 *)FUN_140018ce0(&local_168,&local_188);
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    uVar14 = (**(code **)(lVar2 + 0x40))(param_1,&local_1a8,puVar13);
    puVar15 = (undefined8 *)FUN_140005880(&local_1c8,uVar14);
    puVar13 = puVar15;
    if (7 < (ulonglong)puVar15[3]) {
      puVar13 = (undefined8 *)*puVar15;
    }
    local_138 = 0;
    local_148 = (LPWSTR ***)0x0;
    uStack_140 = 0;
    uStack_130 = 0;
    FUN_140016170(&local_148,puVar13,puVar15[2]);
    FUN_140016770(&local_1c8);
    FUN_140017240(&local_1a8);
    FUN_140017240(&local_188);
    cVar10 = FUN_140060f20(&local_148);
    if (cVar10 != '\0') {
      pppppWVar17 = &local_148;
      if (7 < uStack_130) {
        pppppWVar17 = (LPWSTR ****)local_148;
      }
      uVar14 = FUN_1402d6aa0(pppppWVar17);
      FUN_140016ae0(&local_128,pppppWVar17,uVar14);
    }
    FUN_140016770(&local_148);
    FUN_140016770(&local_168);
  }
  if (local_118 != 0) {
    pppppuVar20 = &local_128;
    if (7 < local_110) {
      pppppuVar20 = (undefined8 *****)local_128;
    }
    cVar10 = FUN_1402785a0(pppppuVar20);
    if (cVar10 != '\0') {
      if ((*(longlong *)(param_5 + 0x18) != 0) &&
         (iVar11 = FUN_1402c10d0(param_2,".json"), iVar11 == 0)) {
        FUN_140060990(&local_168,param_3);
        FUN_140060990(&local_1a8,".json");
        FUN_140060d90(&local_168,&local_1a8);
        FUN_140016770(&local_1a8);
        puVar13 = (undefined8 *)FUN_140018ce0(&local_168,&local_1a8);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        FUN_1400d3f80(&local_1c8,param_1,puVar13,0);
        FUN_140017240(&local_1a8);
        if (local_1b8 != 0) {
          FUN_1401165f0(local_98);
          pppppWVar17 = &local_1c8;
          if (0xf < uStack_1b0) {
            pppppWVar17 = (LPWSTR ****)local_1c8;
          }
          cVar10 = FUN_14015c290(pppppWVar17,local_98);
          if (cVar10 != '\0') {
            FUN_140116800(local_98,&local_res8,"version");
            if (sStack_8a != 3) {
              FID_conflict__assert
                        (L"IsObject()",
                         L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd);
            }
            lVar2 = CONCAT44(uStackX_c,local_res8);
            if ((lVar2 != (ulonglong)local_98[0] * 0x20 + (ulonglong)local_90) &&
               ((*(ushort *)(lVar2 + 0x1e) & 0x400) != 0)) {
              plVar23 = (longlong *)(param_5 + 8);
              if (0xf < *(ulonglong *)(param_5 + 0x20)) {
                plVar23 = (longlong *)*plVar23;
              }
              uVar14 = FUN_140117000(lVar2 + 0x10);
              iVar11 = FUN_1402c10d0(uVar14,plVar23);
              if (iVar11 != 0) {
                FUN_1401164f0(local_98);
                FUN_140017240(&local_1c8);
                FUN_140016770(&local_168);
                goto LAB_14027ae7c;
              }
            }
          }
          FUN_1401164f0(local_98);
        }
        FUN_140017240(&local_1c8);
        FUN_140016770(&local_168);
      }
      if (*param_5 == '\0') {
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = 0;
        }
        uVar12 = 1;
      }
      else {
        FUN_140016600(local_c8,&local_128);
        FUN_140016600(local_e8,&local_128);
        FUN_140277ef0(local_e8,&DAT_140492324);
        if (param_4 == (undefined8 *)0x0) {
          pppppuVar20 = local_e8;
          if (7 < local_d0) {
            pppppuVar20 = (undefined8 *****)local_e8[0];
          }
          pppppuVar21 = local_c8;
          if (7 < local_b0) {
            pppppuVar21 = (undefined8 *****)local_c8[0];
          }
          FUN_140279470(pppppuVar21,pppppuVar20);
        }
        else {
          pppppuVar20 = local_e8;
          if (7 < local_d0) {
            pppppuVar20 = (undefined8 *****)local_e8[0];
          }
          pppppuVar21 = local_c8;
          if (7 < local_b0) {
            pppppuVar21 = (undefined8 *****)local_c8[0];
          }
          uVar14 = FUN_140279600(pppppuVar21,pppppuVar20);
          *param_4 = uVar14;
        }
        uVar12 = 1;
        FUN_140016770(local_e8);
        FUN_140016770(local_c8);
      }
      goto LAB_14027ae7e;
    }
  }
LAB_14027ae7c:
  uVar12 = 0;
LAB_14027ae7e:
  if (7 < local_110) {
    uVar22 = local_110 * 2 + 2;
    pppppuVar20 = (undefined8 *****)local_128;
    if (0xfff < uVar22) {
      pppppuVar20 = (undefined8 *****)local_128[-1];
      if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppuVar20))) {
LAB_14027afa6:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return uVar12;
      }
      uVar22 = local_110 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppuVar20,uVar22);
  }
  return uVar12;
}

