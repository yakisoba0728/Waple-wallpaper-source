// Function: FUN_140279790
// Addr: 140279790
// Size: 2767 bytes


/* WARNING: Removing unreachable block (ram,0x000140279949) */
/* WARNING: Removing unreachable block (ram,0x000140279fe5) */
/* WARNING: Removing unreachable block (ram,0x000140279fef) */
/* WARNING: Removing unreachable block (ram,0x000140279fff) */
/* WARNING: Removing unreachable block (ram,0x00014027a014) */
/* WARNING: Removing unreachable block (ram,0x00014027a01b) */
/* WARNING: Removing unreachable block (ram,0x00014027a020) */
/* WARNING: Removing unreachable block (ram,0x0001402799a4) */
/* WARNING: Removing unreachable block (ram,0x0001402799b9) */
/* WARNING: Removing unreachable block (ram,0x0001402799ce) */
/* WARNING: Removing unreachable block (ram,0x0001402799d9) */

ulonglong FUN_140279790(longlong *param_1,char *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  char *_Str;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  size_t sVar8;
  undefined8 uVar9;
  LPCSTR lpMultiByteStr;
  LPWSTR ****pppppWVar10;
  uint *puVar11;
  LPWSTR ***ppppWVar12;
  LPCWSTR ****pppppWVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong *puVar19;
  LPCSTR lpMultiByteStr_00;
  LPCWSTR ***local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong local_190;
  LPWSTR ***local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulonglong uStack_170;
  LPWSTR ***local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  LPWSTR ***local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong uStack_130;
  undefined8 ****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  LPWSTR ***local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  LPWSTR **local_c8;
  LPWSTR **pppWStack_c0;
  LPWSTR **local_b8;
  LPWSTR **pppWStack_b0;
  undefined8 ****local_a8 [3];
  ulonglong local_90;
  undefined8 ****local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  uVar16 = 0;
  uVar7 = (**(code **)(*param_1 + 0x28))();
  if ((char)uVar7 != '\0') {
    return uVar7 & 0xffffffffffffff00;
  }
  uStack_e0 = 0;
  local_e8 = (undefined8 *****)0x0;
  local_d8 = 0;
  local_d0 = 7;
  uVar7 = uVar16;
  do {
    uVar18 = (uint)uVar16;
    if (param_2 == (char *)0x0) {
      local_158 = 0;
      uStack_150 = 0;
      local_168 = (LPWSTR ***)0x0;
      uStack_160 = 0;
      FUN_140016170(&local_168,&DAT_140474538,0);
      local_108 = local_168;
      local_168 = (LPWSTR ***)((ulonglong)local_168 & 0xffffffffffff0000);
      uStack_f0 = uStack_150;
      local_f8 = local_158;
      uStack_100 = uStack_160;
      uStack_150 = 7;
      local_158 = 0;
    }
    else {
      local_198 = 0;
      local_1a8 = (LPCWSTR ***)0x0;
      uStack_1a0 = 0;
      local_190 = 0;
      sVar8 = strlen(param_2);
      FUN_140017480(&local_1a8,param_2,sVar8);
      uVar18 = uVar18 | 0xc0;
      if (local_198 == 0) {
LAB_1402798f9:
        local_178 = 0;
        uStack_180 = 0;
        local_188 = (LPWSTR ***)0x0;
        uStack_170 = 7;
      }
      else {
        pppppWVar13 = &local_1a8;
        if (0xf < local_190) {
          pppppWVar13 = (LPCWSTR ****)local_1a8;
        }
        iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar13,(int)local_198,(LPWSTR)0x0,0);
        if (iVar5 < 1) goto LAB_1402798f9;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = (LPWSTR ***)0x0;
        uStack_140 = 0;
        FUN_1400167e0(&local_148,0,(longlong)iVar5);
        pppppWVar10 = &local_148;
        if (7 < uStack_130) {
          pppppWVar10 = (LPWSTR ****)local_148;
        }
        pppppWVar13 = &local_1a8;
        if (0xf < local_190) {
          pppppWVar13 = (LPCWSTR ****)local_1a8;
        }
        MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar13,(int)local_198,(LPWSTR)pppppWVar10,iVar5);
        local_188 = local_148;
        uStack_180 = uStack_140;
        local_178 = local_138;
        uStack_170 = uStack_130;
      }
      uStack_f0 = uStack_170;
      local_f8 = local_178;
      local_108 = local_188;
      local_178 = 0;
      uStack_170 = 7;
      local_188 = (LPWSTR ***)((ulonglong)local_188 & 0xffffffffffff0000);
      uStack_100 = uStack_180;
    }
    if (((char)uVar18 < '\0') && (uVar18 = uVar18 & 0xffffff7f, 7 < uStack_170)) {
      uVar16 = uStack_170 * 2 + 2;
      pppppWVar10 = (LPWSTR ****)local_188;
      if (0xfff < uVar16) {
        pppppWVar10 = (LPWSTR ****)local_188[-1];
        if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar10)))
        goto LAB_14027a257;
        uVar16 = uStack_170 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppWVar10,uVar16);
    }
    if (((uVar18 & 0x40) != 0) && (uVar18 = uVar18 & 0xffffffbf, 0xf < local_190)) {
      uVar16 = local_190 + 1;
      pppppWVar13 = (LPCWSTR ****)local_1a8;
      if (0xfff < uVar16) {
        pppppWVar13 = (LPCWSTR ****)local_1a8[-1];
        if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppWVar13)))
        goto LAB_14027a257;
        uVar16 = local_190 + 0x28;
      }
      thunk_FUN_14028af80(pppppWVar13,uVar16);
    }
    _Str = (&PTR_DAT_140484bd0)[uVar7];
    if (_Str == (char *)0x0) {
      local_138 = 0;
      uStack_130 = 0;
      local_148 = (LPWSTR ***)0x0;
      uStack_140 = 0;
      FUN_140016170(&local_148,&DAT_140474538,0);
      pppppWVar10 = &local_148;
      uVar6 = 0x20;
      puVar17 = &local_138;
      puVar19 = &uStack_130;
    }
    else {
      local_198 = 0;
      local_1a8 = (LPCWSTR ***)0x0;
      uStack_1a0 = 0;
      local_190 = 0;
      sVar8 = strlen(_Str);
      FUN_140017480(&local_1a8,_Str,sVar8);
      if (local_198 == 0) {
LAB_140279b5b:
        local_178 = 0;
        uStack_180 = 0;
        local_188 = (LPWSTR ***)0x0;
        uStack_170 = 7;
      }
      else {
        pppppWVar13 = &local_1a8;
        if (0xf < local_190) {
          pppppWVar13 = (LPCWSTR ****)local_1a8;
        }
        iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar13,(int)local_198,(LPWSTR)0x0,0);
        if (iVar5 < 1) goto LAB_140279b5b;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = (LPWSTR ***)0x0;
        uStack_160 = 0;
        FUN_1400167e0(&local_168,0,(longlong)iVar5);
        pppppWVar10 = &local_168;
        if (7 < uStack_150) {
          pppppWVar10 = (LPWSTR ****)local_168;
        }
        pppppWVar13 = &local_1a8;
        if (0xf < local_190) {
          pppppWVar13 = (LPCWSTR ****)local_1a8;
        }
        MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar13,(int)local_198,(LPWSTR)pppppWVar10,iVar5);
        local_188 = local_168;
        uStack_180 = uStack_160;
        local_178 = local_158;
        uStack_170 = uStack_150;
      }
      pppppWVar10 = &local_188;
      uVar6 = 0x18;
      puVar17 = &local_178;
      puVar19 = &uStack_170;
    }
    local_c8 = (LPWSTR **)*pppppWVar10;
    pppWStack_c0 = (LPWSTR **)pppppWVar10[1];
    uVar6 = uVar6 | uVar18;
    local_b8 = (LPWSTR **)pppppWVar10[2];
    pppWStack_b0 = (LPWSTR **)pppppWVar10[3];
    *puVar17 = 0;
    *puVar19 = 7;
    *(undefined2 *)pppppWVar10 = 0;
    if (((uVar6 & 0x20) != 0) && (uVar6 = uVar6 & 0xffffffdf, 7 < uStack_130)) {
      uVar16 = uStack_130 * 2 + 2;
      pppppWVar10 = (LPWSTR ****)local_148;
      if (0xfff < uVar16) {
        pppppWVar10 = (LPWSTR ****)local_148[-1];
        if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppWVar10)))
        goto LAB_14027a257;
        uVar16 = uStack_130 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppWVar10,uVar16);
    }
    if (((uVar6 & 0x10) != 0) && (uVar6 = uVar6 & 0xffffffef, 7 < uStack_170)) {
      uVar16 = uStack_170 * 2 + 2;
      pppppWVar10 = (LPWSTR ****)local_188;
      if (0xfff < uVar16) {
        pppppWVar10 = (LPWSTR ****)local_188[-1];
        if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar10)))
        goto LAB_14027a257;
        uVar16 = uStack_170 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppWVar10,uVar16);
    }
    if (((uVar6 & 8) != 0) && (uVar6 = uVar6 & 0xfffffff7, 0xf < local_190)) {
      uVar16 = local_190 + 1;
      pppppWVar13 = (LPCWSTR ****)local_1a8;
      if (0xfff < uVar16) {
        pppppWVar13 = (LPCWSTR ****)local_1a8[-1];
        if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppWVar13)))
        goto LAB_14027a257;
        uVar16 = local_190 + 0x28;
      }
      thunk_FUN_14028af80(pppppWVar13,uVar16);
    }
    FUN_140060d90(&local_108,&local_c8);
    if ((LPWSTR ***)0x7 < pppWStack_b0) {
      uVar16 = (longlong)pppWStack_b0 * 2 + 2;
      ppppWVar12 = (LPWSTR ***)local_c8;
      if (0xfff < uVar16) {
        ppppWVar12 = (LPWSTR ***)local_c8[-1];
        if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppWVar12)))
        goto LAB_14027a257;
        uVar16 = (longlong)pppWStack_b0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar12,uVar16);
    }
    lVar2 = *param_1;
    pppppWVar10 = &local_108;
    if (7 < uStack_f0) {
      pppppWVar10 = (LPWSTR ****)local_108;
    }
    local_198 = 0;
    local_190 = 0;
    local_1a8 = (LPCWSTR ***)0x0;
    uStack_1a0 = 0;
    uVar9 = FUN_1402d6aa0(pppppWVar10);
    FUN_140016170(&local_1a8,pppppWVar10,uVar9);
    if (local_198 == 0) {
LAB_140279e04:
      local_138 = 0;
      uStack_140 = 0;
      local_148 = (LPWSTR ***)0x0;
      uStack_130 = 0xf;
    }
    else {
      pppppWVar13 = &local_1a8;
      if (7 < local_190) {
        pppppWVar13 = (LPCWSTR ****)local_1a8;
      }
      iVar5 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar13,(int)local_198,(LPSTR)0x0,0,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar5 < 1) goto LAB_140279e04;
      FUN_140016940(&local_168,(longlong)iVar5,0);
      pppppWVar10 = &local_168;
      if (0xf < uStack_150) {
        pppppWVar10 = (LPWSTR ****)local_168;
      }
      pppppWVar13 = &local_1a8;
      if (7 < local_190) {
        pppppWVar13 = (LPCWSTR ****)local_1a8;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar13,(int)local_198,(LPSTR)pppppWVar10,iVar5,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_138 = local_158;
      uStack_130 = uStack_150;
      local_148 = local_168;
      uStack_140 = uStack_160;
    }
    if (7 < local_190) {
      uVar16 = local_190 * 2 + 2;
      pppppWVar13 = (LPCWSTR ****)local_1a8;
      if (0xfff < uVar16) {
        pppppWVar13 = (LPCWSTR ****)local_1a8[-1];
        if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppWVar13)))
        goto LAB_14027a257;
        uVar16 = local_190 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppWVar13,uVar16);
    }
    pppppWVar10 = &local_148;
    if (0xf < uStack_130) {
      pppppWVar10 = (LPWSTR ****)local_148;
    }
    lpMultiByteStr = (LPCSTR)(**(code **)(lVar2 + 0x40))(param_1,local_58,pppppWVar10);
    if (*(longlong *)(lpMultiByteStr + 0x10) == 0) {
LAB_140279f3a:
      local_178 = 0;
      uStack_180 = 0;
      local_188 = (LPWSTR ***)0x0;
      uStack_170 = 7;
    }
    else {
      lpMultiByteStr_00 = lpMultiByteStr;
      if (0xf < *(ulonglong *)(lpMultiByteStr + 0x18)) {
        lpMultiByteStr_00 = *(LPCSTR *)lpMultiByteStr;
      }
      iVar5 = MultiByteToWideChar(0xfde9,0,lpMultiByteStr_00,
                                  (int)*(longlong *)(lpMultiByteStr + 0x10),(LPWSTR)0x0,0);
      if (iVar5 < 1) goto LAB_140279f3a;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = (LPWSTR ***)0x0;
      uStack_160 = 0;
      FUN_1400167e0(&local_168,0,(longlong)iVar5);
      piVar1 = (int *)(lpMultiByteStr + 0x10);
      pppppWVar10 = &local_168;
      if (7 < uStack_150) {
        pppppWVar10 = (LPWSTR ****)local_168;
      }
      if (0xf < *(ulonglong *)(lpMultiByteStr + 0x18)) {
        lpMultiByteStr = *(LPCSTR *)lpMultiByteStr;
      }
      MultiByteToWideChar(0xfde9,0,lpMultiByteStr,*piVar1,(LPWSTR)pppppWVar10,iVar5);
      local_178 = local_158;
      uStack_170 = uStack_150;
      local_188 = local_168;
      uStack_180 = uStack_160;
    }
    local_118 = 0;
    local_110 = 0;
    pppppWVar10 = &local_188;
    if (7 < uStack_170) {
      pppppWVar10 = (LPWSTR ****)local_188;
    }
    local_128 = (undefined8 *****)0x0;
    uStack_120 = 0;
    FUN_140016170(&local_128,pppppWVar10,local_178);
    if (7 < uStack_170) {
      uVar16 = uStack_170 * 2 + 2;
      pppppWVar10 = (LPWSTR ****)local_188;
      if (0xfff < uVar16) {
        pppppWVar10 = (LPWSTR ****)local_188[-1];
        if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppWVar10)))
        goto LAB_14027a257;
        uVar16 = uStack_170 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppWVar10,uVar16);
    }
    local_188 = (LPWSTR ***)((ulonglong)local_188 & 0xffffffffffff0000);
    uStack_170 = 7;
    local_178 = 0;
    FUN_140017240(local_58);
    if (0xf < uStack_130) {
      uVar16 = uStack_130 + 1;
      pppppWVar10 = (LPWSTR ****)local_148;
      if (0xfff < uVar16) {
        pppppWVar10 = (LPWSTR ****)local_148[-1];
        if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppWVar10)))
        goto LAB_14027a257;
        uVar16 = uStack_130 + 0x28;
      }
      thunk_FUN_14028af80(pppppWVar10,uVar16);
    }
    FUN_140016600(&local_c8,&local_128);
    puVar11 = (uint *)FUN_14003b970(local_68,&local_c8,3);
    uVar18 = *puVar11;
    uVar16 = (ulonglong)uVar6;
    FUN_140016770(&local_c8);
    if (1 < uVar18) {
      pppppuVar15 = &local_128;
      if (7 < local_110) {
        pppppuVar15 = (undefined8 *****)local_128;
      }
      uVar9 = FUN_1402d6aa0(pppppuVar15);
      FUN_140016ae0(&local_e8,pppppuVar15,uVar9);
    }
    if (7 < local_110) {
      FUN_140016a90(&local_128,local_128);
    }
    if (7 < uStack_f0) {
      FUN_140016a90(&local_108,local_108);
    }
    uVar18 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar18;
  } while ((int)uVar18 < 0xd);
  if (local_d8 != 0) {
    pppppuVar15 = &local_e8;
    if (7 < local_d0) {
      pppppuVar15 = (undefined8 *****)local_e8;
    }
    cVar4 = FUN_1402787c0(pppppuVar15);
    if (cVar4 != '\0') {
      if (param_4 == '\0') {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = 0;
        }
        uVar7 = 1;
      }
      else {
        FUN_140016600(local_a8,&local_e8);
        FUN_140016600(local_88,&local_e8);
        FUN_140277ef0(local_88,&DAT_140486ff8);
        pppppuVar15 = local_a8;
        if (7 < local_90) {
          pppppuVar15 = (undefined8 *****)local_a8[0];
        }
        FUN_140098b00("Recompiling texture: %S\n",pppppuVar15);
        if (param_3 == (undefined8 *)0x0) {
          pppppuVar15 = local_88;
          if (7 < local_70) {
            pppppuVar15 = (undefined8 *****)local_88[0];
          }
          pppppuVar14 = local_a8;
          if (7 < local_90) {
            pppppuVar14 = (undefined8 *****)local_a8[0];
          }
          FUN_140279150(pppppuVar14,pppppuVar15);
        }
        else {
          pppppuVar15 = local_88;
          if (7 < local_70) {
            pppppuVar15 = (undefined8 *****)local_88[0];
          }
          pppppuVar14 = local_a8;
          if (7 < local_90) {
            pppppuVar14 = (undefined8 *****)local_a8[0];
          }
          uVar9 = FUN_1402792e0(pppppuVar14,pppppuVar15);
          *param_3 = uVar9;
        }
        uVar7 = 1;
        FUN_140016770(local_88);
        FUN_140016770(local_a8);
      }
      goto LAB_14027a1f3;
    }
  }
  uVar7 = 0;
LAB_14027a1f3:
  if (7 < local_d0) {
    uVar16 = local_d0 * 2 + 2;
    pppppuVar15 = (undefined8 *****)local_e8;
    if (0xfff < uVar16) {
      pppppuVar15 = (undefined8 *****)local_e8[-1];
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppuVar15))) {
LAB_14027a257:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar16 = local_d0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppuVar15,uVar16);
  }
  return uVar7;
}

