// Function: FUN_1400979a0
// Addr: 1400979a0
// Size: 2163 bytes


undefined8 FUN_1400979a0(longlong param_1,int param_2,int param_3)

{
  char *_Str;
  code *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  LPWSTR ******pppppppWVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  CHAR *pCVar12;
  ulonglong uVar13;
  undefined1 local_res10;
  CHAR local_218;
  undefined6 uStack_217;
  char cStack_211;
  char acStack_210 [8];
  longlong local_208;
  ulonglong local_200;
  LPWSTR *****local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  LPWSTR *****local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190 [4];
  undefined8 ******local_170 [3];
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [240];
  
  uVar13 = (ulonglong)param_2;
  lVar8 = uVar13 + (longlong)param_3 * 0x24;
  if (*(char *)(param_1 + 0x10 + lVar8 * 0x28) == '\a') {
    return 1;
  }
  local_200 = 0xf;
  local_208 = 0;
  uStack_217 = 0;
  cStack_211 = '\0';
  acStack_210[0] = '\0';
  acStack_210[1] = '\0';
  acStack_210[2] = '\0';
  acStack_210[3] = 0;
  acStack_210[4] = '\0';
  acStack_210[5] = '\0';
  acStack_210[6] = '\0';
  acStack_210[7] = '\0';
  local_218 = '\0';
  if (param_3 == 0) {
    FUN_14000f880(&local_218,"locale/core_",0xc);
  }
  else if (param_3 == 1) {
    acStack_210._0_2_ = s_locale_ui__140485638._8_2_;
    local_208 = 10;
    local_218 = (CHAR)s_locale_ui__140485638._0_8_;
    uStack_217 = SUB86(s_locale_ui__140485638._0_8_,1);
    cStack_211 = SUB81(s_locale_ui__140485638._0_8_,7);
    acStack_210[2] = '\0';
  }
  else if (param_3 == 2) {
    local_218 = (CHAR)s_locale_var__140485628._0_7_;
    uStack_217 = SUB76(s_locale_var__140485628._0_7_,1);
    cStack_211 = (char)s_locale_var__140485628._7_4_;
    acStack_210._0_2_ = SUB42(s_locale_var__140485628._7_4_,1);
    acStack_210[2] = SUB41(s_locale_var__140485628._7_4_,3);
    local_208 = 0xb;
    acStack_210[3] = 0;
  }
  uVar11 = local_200;
  lVar7 = local_208;
  if ((param_2 < 0) || (0x23 < param_2)) {
    uVar13 = 0;
  }
  _Str = (&PTR_DAT_140478d70)[(uVar13 & 0xffffffff) * 4];
  sVar4 = strlen(_Str);
  if (uVar11 - lVar7 < sVar4) {
    FUN_140053110(&local_218,sVar4,local_res10,_Str,sVar4);
  }
  else {
    local_208 = lVar7 + sVar4;
    pCVar12 = &local_218;
    if (0xf < uVar11) {
      pCVar12 = (CHAR *)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
    }
    FUN_1404210f0(pCVar12 + lVar7,_Str,sVar4);
    (pCVar12 + lVar7)[sVar4] = '\0';
  }
  if (local_200 - local_208 < 5) {
    FUN_140053110(&local_218,5,local_res10,".json",5);
  }
  else {
    pCVar12 = &local_218;
    if (0xf < local_200) {
      pCVar12 = (CHAR *)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
    }
    pCVar12 = pCVar12 + local_208;
    local_208 = local_208 + 5;
    FUN_1404210f0(pCVar12,".json",5);
    pCVar12[5] = '\0';
  }
  uVar5 = FUN_140005ee0(&local_1b8);
  if (local_208 == 0) {
LAB_140097c52:
    local_1c8 = 0;
    uStack_1d0 = 0;
    local_1d8 = (LPWSTR *****)0x0;
    uStack_1c0 = 7;
  }
  else {
    pCVar12 = &local_218;
    if (0xf < local_200) {
      pCVar12 = (LPCSTR)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
    }
    iVar3 = MultiByteToWideChar(0xfde9,0,pCVar12,(int)local_208,(LPWSTR)0x0,0);
    if (iVar3 < 1) goto LAB_140097c52;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = (LPWSTR *****)0x0;
    uStack_1f0 = 0;
    FUN_1400167e0(&local_1f8,0,(longlong)iVar3);
    pppppppWVar9 = &local_1f8;
    if (7 < uStack_1e0) {
      pppppppWVar9 = (LPWSTR ******)local_1f8;
    }
    pCVar12 = &local_218;
    if (0xf < local_200) {
      pCVar12 = (LPCSTR)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
    }
    MultiByteToWideChar(0xfde9,0,pCVar12,(int)local_208,(LPWSTR)pppppppWVar9,iVar3);
    local_1c8 = local_1e8;
    uStack_1c0 = uStack_1e0;
    local_1d8 = local_1f8;
    uStack_1d0 = uStack_1f0;
  }
  pppppppWVar9 = &local_1d8;
  if (7 < uStack_1c0) {
    pppppppWVar9 = (LPWSTR ******)local_1d8;
  }
  FUN_140005c80(uVar5,pppppppWVar9);
  if (7 < uStack_1c0) {
    uVar13 = uStack_1c0 * 2 + 2;
    pppppppWVar9 = (LPWSTR ******)local_1d8;
    if (0xfff < uVar13) {
      pppppppWVar9 = (LPWSTR ******)local_1d8[-1];
      if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)pppppppWVar9)))
      goto LAB_1400981fa;
      uVar13 = uStack_1c0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppWVar9,uVar13);
  }
  FUN_140016600(local_170,uVar5);
  FUN_140016770(&local_1b8);
  cVar2 = FUN_140018f30(local_170);
  if (cVar2 == '\0') {
    uVar5 = FUN_14003ff90(local_170);
    uVar5 = FUN_14003ff90(uVar5);
    FUN_14003ff90(uVar5);
    if (local_208 == 0) {
LAB_140097dc0:
      local_1c8 = 0;
      uStack_1d0 = 0;
      local_1d8 = (LPWSTR *****)0x0;
      uStack_1c0 = 7;
    }
    else {
      pCVar12 = &local_218;
      if (0xf < local_200) {
        pCVar12 = (LPCSTR)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
      }
      iVar3 = MultiByteToWideChar(0xfde9,0,pCVar12,(int)local_208,(LPWSTR)0x0,0);
      if (iVar3 < 1) goto LAB_140097dc0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = (LPWSTR *****)0x0;
      uStack_1f0 = 0;
      FUN_1400167e0(&local_1f8,0,(longlong)iVar3);
      pppppppWVar9 = &local_1f8;
      if (7 < uStack_1e0) {
        pppppppWVar9 = (LPWSTR ******)local_1f8;
      }
      pCVar12 = &local_218;
      if (0xf < local_200) {
        pCVar12 = (LPCSTR)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
      }
      MultiByteToWideChar(0xfde9,0,pCVar12,(int)local_208,(LPWSTR)pppppppWVar9,iVar3);
      local_1c8 = local_1e8;
      uStack_1c0 = uStack_1e0;
      local_1d8 = local_1f8;
      uStack_1d0 = uStack_1f0;
    }
    pppppppWVar9 = &local_1d8;
    if (7 < uStack_1c0) {
      pppppppWVar9 = (LPWSTR ******)local_1d8;
    }
    uVar5 = FUN_1402d6aa0(pppppppWVar9);
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = (LPWSTR *****)0x0;
    uStack_1f0 = 0;
    FUN_140016170(&local_1f8,pppppppWVar9,uVar5);
    FUN_140015460(local_170,&local_1f8);
    if (7 < uStack_1e0) {
      uVar13 = uStack_1e0 * 2 + 2;
      pppppppWVar9 = (LPWSTR ******)local_1f8;
      if (0xfff < uVar13) {
        pppppppWVar9 = (LPWSTR ******)local_1f8[-1];
        if (0x1f < (ulonglong)((longlong)local_1f8 + (-8 - (longlong)pppppppWVar9)))
        goto LAB_1400981fa;
        uVar13 = uStack_1e0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar9,uVar13);
    }
    if (7 < uStack_1c0) {
      uVar13 = uStack_1c0 * 2 + 2;
      pppppppWVar9 = (LPWSTR ******)local_1d8;
      if (0xfff < uVar13) {
        pppppppWVar9 = (LPWSTR ******)local_1d8[-1];
        if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)pppppppWVar9)))
        goto LAB_1400981fa;
        uVar13 = uStack_1c0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar9,uVar13);
    }
    cVar2 = FUN_140018f30(local_170);
    if (cVar2 != '\0') goto LAB_140097f4b;
    if (param_3 != 2) {
      pCVar12 = &local_218;
      if (0xf < local_200) {
        pCVar12 = (CHAR *)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
      }
      FUN_140098760("Failed loading locale: %s\n",pCVar12);
    }
    local_1b0 = CONCAT31(local_1b0._1_3_,7);
    local_1b0 = local_1b0 & 0xfffffeff;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    plVar6 = (longlong *)FUN_14028af20(0x10);
    *plVar6 = 0;
    plVar6[1] = 0;
    lVar7 = FUN_14028af20(0x58);
    *(longlong *)lVar7 = lVar7;
    *(longlong *)(lVar7 + 8) = lVar7;
    *(longlong *)(lVar7 + 0x10) = lVar7;
    *(undefined2 *)(lVar7 + 0x18) = 0x101;
    *plVar6 = lVar7;
    local_1b8 = plVar6;
    FUN_140085610(param_1 + 8 + lVar8 * 0x28,&local_1b8);
    FUN_140085440(&local_1b8);
    uVar5 = 0;
  }
  else {
LAB_140097f4b:
    pppppppuVar10 = local_170;
    if (7 < local_158) {
      pppppppuVar10 = (undefined8 *******)local_170[0];
    }
    FUN_14003f7b0(&local_150,pppppppuVar10);
    local_190[2] = 0;
    local_190[1] = 0;
    param_1 = param_1 + lVar8 * 0x28;
    local_190[0] = 0;
    local_190[3] = 0xf;
    cVar2 = FUN_140017840(&local_150,param_1 + 8,local_190);
    if (cVar2 == '\0') {
      pCVar12 = &local_218;
      if (0xf < local_200) {
        pCVar12 = (CHAR *)CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
      }
      FUN_140098760("Failed parsing locale: %s\n",pCVar12);
      FUN_14000ef10(local_128);
      uVar5 = FUN_14000c990(local_118,"Failed parsing ");
      uVar5 = FUN_14000cbc0(uVar5,&local_218);
      uVar5 = FUN_14000c990(uVar5," with error: ");
      FUN_14000cbc0(uVar5,local_190);
      local_1b0 = CONCAT31(local_1b0._1_3_,7);
      local_1b0 = local_1b0 & 0xfffffeff;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      plVar6 = (longlong *)FUN_14028af20(0x10);
      *plVar6 = 0;
      plVar6[1] = 0;
      lVar8 = FUN_14028af20(0x58);
      *(longlong *)lVar8 = lVar8;
      *(longlong *)(lVar8 + 8) = lVar8;
      *(longlong *)(lVar8 + 0x10) = lVar8;
      *(undefined2 *)(lVar8 + 0x18) = 0x101;
      *plVar6 = lVar8;
      local_1b8 = plVar6;
      FUN_140085610(param_1 + 8,&local_1b8);
      plVar6 = local_1b8;
      switch((undefined1)local_1b0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((local_1b0 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_1b8);
        }
        break;
      case 6:
      case 7:
        if (local_1b8 != (longlong *)0x0) {
          FUN_140088e40(local_1b8);
          thunk_FUN_14028af80(plVar6,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar8 = local_1a8;
      if (local_1a8 != 0) {
        FUN_140017240(local_1a8 + 0x40);
        FUN_140017240(lVar8 + 0x20);
        FUN_140017240(lVar8);
        thunk_FUN_14028af80(lVar8,0x60);
      }
      FUN_1400056d0(local_128);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (0xf < local_190[3]) {
      uVar11 = local_190[3] + 1;
      uVar13 = local_190[0];
      if (0xfff < uVar11) {
        uVar13 = *(ulonglong *)(local_190[0] - 8);
        if (0x1f < (local_190[0] - uVar13) - 8) goto LAB_1400981fa;
        uVar11 = local_190[3] + 0x28;
      }
      thunk_FUN_14028af80(uVar13,uVar11);
    }
    local_190[2] = 0;
    local_190[3] = 0xf;
    local_190[0] = local_190[0] & 0xffffffffffffff00;
    if (0xf < local_138) {
      lVar7 = CONCAT71(uStack_14f,local_150);
      uVar13 = local_138 + 1;
      lVar8 = lVar7;
      if (0xfff < uVar13) {
        lVar8 = *(longlong *)(lVar7 + -8);
        if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_1400981fa;
        uVar13 = local_138 + 0x28;
      }
      thunk_FUN_14028af80(lVar8,uVar13);
    }
    local_140 = 0;
    local_138 = 0xf;
    local_150 = 0;
  }
  FUN_140016770(local_170);
  if (local_200 < 0x10) {
    return uVar5;
  }
  lVar7 = CONCAT17(cStack_211,CONCAT61(uStack_217,local_218));
  uVar13 = local_200 + 1;
  lVar8 = lVar7;
  if (0xfff < uVar13) {
    lVar8 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar8) - 8U) {
LAB_1400981fa:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      return 1;
    }
    uVar13 = local_200 + 0x28;
  }
  thunk_FUN_14028af80(lVar8,uVar13);
  return uVar5;
}

