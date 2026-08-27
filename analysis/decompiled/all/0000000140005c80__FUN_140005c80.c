// Function: FUN_140005c80
// Addr: 140005c80
// Size: 160 bytes


undefined8 FUN_140005c80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int cchWideChar;
  undefined8 uVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  LPWSTR ******pppppppWVar6;
  LPCSTR ******pppppppCVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char *_Str;
  undefined1 *puVar10;
  undefined1 auStackY_118 [8];
  undefined1 auStackY_110 [16];
  undefined8 uStackY_100;
  char *pcStackY_f8;
  LPCSTR *****ppppppCStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  LPWSTR *****ppppppWStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  LPWSTR *****ppppppWStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_60;
  longlong local_28 [4];
  
  uVar2 = FUN_1402d6aa0();
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140016170(local_28,param_2,uVar2);
  FUN_140015460(param_1,local_28);
  if ((ulonglong)local_28[3] < 8) {
    return param_1;
  }
  _Str = (char *)(local_28[3] * 2 + 2);
  lVar5 = local_28[0];
  if (_Str < (char *)0x1000) {
LAB_140005d06:
    thunk_FUN_14028af80(lVar5,_Str);
    return param_1;
  }
  lVar5 = *(longlong *)(local_28[0] + -8);
  if ((local_28[0] - lVar5) - 8U < 0x20) {
    _Str = (char *)(local_28[3] * 2 + 0x29);
    goto LAB_140005d06;
  }
  uVar2 = 5;
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  ppppppCStack_c8 = (LPCSTR *****)0x0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStackY_100 = 0x140005d50;
  uStack_60 = param_1;
  sVar3 = strlen(_Str);
  uStackY_100 = 0x140005d5f;
  FUN_140017480(&ppppppCStack_c8,_Str,sVar3);
  if (lStack_b8 == 0) {
LAB_140005e06:
    uStack_98 = 0;
    uStack_a0 = 0;
    ppppppWStack_a8 = (LPWSTR *****)0x0;
    uStack_90 = 7;
  }
  else {
    pppppppCVar7 = &ppppppCStack_c8;
    if (0xf < uStack_b0) {
      pppppppCVar7 = (LPCSTR ******)ppppppCStack_c8;
    }
    uStackY_100 = 0x140005d90;
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar7,(int)lStack_b8,(LPWSTR)0x0,0);
    _Str = (char *)(longlong)cchWideChar;
    if (cchWideChar < 1) goto LAB_140005e06;
    uStack_78 = 0;
    uStack_70 = 0;
    ppppppWStack_88 = (LPWSTR *****)0x0;
    uStack_80 = 0;
    uStackY_100 = 0x140005db4;
    FUN_1400167e0(&ppppppWStack_88,0,_Str);
    pppppppWVar6 = &ppppppWStack_88;
    if (7 < uStack_70) {
      pppppppWVar6 = (LPWSTR ******)ppppppWStack_88;
    }
    pppppppCVar7 = &ppppppCStack_c8;
    if (0xf < uStack_b0) {
      pppppppCVar7 = (LPCSTR ******)ppppppCStack_c8;
    }
    uStackY_100 = 0x140005dea;
    MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar7,(int)lStack_b8,(LPWSTR)pppppppWVar6,
                        cchWideChar);
    uStack_98 = uStack_78;
    uStack_90 = uStack_70;
    ppppppWStack_a8 = ppppppWStack_88;
    uStack_a0 = uStack_80;
  }
  pppppppWVar6 = &ppppppWStack_a8;
  if (7 < uStack_90) {
    pppppppWVar6 = (LPWSTR ******)ppppppWStack_a8;
  }
  uStackY_100 = 0x140005e33;
  FUN_140005c80(uVar2,pppppppWVar6);
  if (7 < uStack_90) {
    uVar9 = uStack_90 * 2 + 2;
    pppppppWVar6 = (LPWSTR ******)ppppppWStack_a8;
    if (0xfff < uVar9) {
      pppppppWVar6 = (LPWSTR ******)ppppppWStack_a8[-1];
      if (0x1f < (ulonglong)((longlong)ppppppWStack_a8 + (-8 - (longlong)pppppppWVar6)))
      goto LAB_140005ec9;
      uVar9 = uStack_90 * 2 + 0x29;
    }
    uStackY_100 = 0x140005e73;
    thunk_FUN_14028af80(pppppppWVar6,uVar9);
  }
  uStack_98 = 0;
  uStack_90 = 7;
  ppppppWStack_a8 = (LPWSTR *****)((ulonglong)ppppppWStack_a8 & 0xffffffffffff0000);
  if (0xf < uStack_b0) {
    uVar9 = uStack_b0 + 1;
    pppppppCVar7 = (LPCSTR ******)ppppppCStack_c8;
    if (0xfff < uVar9) {
      pppppppCVar7 = (LPCSTR ******)ppppppCStack_c8[-1];
      if (0x1f < (ulonglong)((longlong)ppppppCStack_c8 + (-8 - (longlong)pppppppCVar7))) {
LAB_140005ec9:
        plVar8 = (longlong *)&DAT_00000005;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        if (7 < (ulonglong)plVar8[3]) {
          lVar5 = *plVar8;
          puVar10 = auStackY_118;
          lVar4 = lVar5;
          pcStackY_f8 = _Str;
          if ((0xfff < plVar8[3] * 2 + 2U) &&
             (lVar4 = *(longlong *)(lVar5 + -8), puVar10 = auStackY_118, 0x1f < (lVar5 - lVar4) - 8U
             )) {
            pcVar1 = (code *)swi(0x29);
            lVar4 = (*pcVar1)(5);
            puVar10 = auStackY_110;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1400167c4;
          thunk_FUN_14028af80(lVar4);
        }
        plVar8[2] = 0;
        *(undefined2 *)plVar8 = 0;
        plVar8[3] = 7;
        return 0;
      }
      uVar9 = uStack_b0 + 0x28;
    }
    uStackY_100 = 0x140005eba;
    thunk_FUN_14028af80(pppppppCVar7,uVar9);
  }
  return uVar2;
}

