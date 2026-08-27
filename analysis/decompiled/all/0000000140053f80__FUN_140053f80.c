// Function: FUN_140053f80
// Addr: 140053f80
// Size: 1066 bytes


longlong * FUN_140053f80(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  undefined8 uVar4;
  longlong *plVar5;
  LPCWSTR *****ppppppWVar6;
  LPWSTR *****ppppppWVar7;
  short *psVar8;
  ulonglong uVar9;
  short *psVar10;
  LPWSTR *****ppppppWVar11;
  undefined8 *puVar12;
  LPWSTR *****ppppppWVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  LPWSTR ****local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  LPCWSTR ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  LPWSTR ****local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  LPWSTR ****local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar12 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
  }
  psVar10 = (short *)((longlong)puVar12 + param_1[2] * 2);
  psVar8 = psVar10;
  for (psVar3 = (short *)FUN_140015e90(puVar12); psVar3 != psVar8; psVar3 = psVar3 + 1) {
    if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) goto LAB_140053fe0;
  }
LAB_140053fff:
  psVar3 = (short *)thunk_FUN_14028d070(psVar10);
  if ((psVar10 == psVar3) || (psVar8 = psVar3 + -1, psVar10 == psVar8)) {
LAB_14005404f:
    psVar8 = psVar3;
  }
  else {
    if (*psVar8 != 0x2e) {
      for (psVar8 = psVar3 + -2; psVar10 != psVar8; psVar8 = psVar8 + -1) {
        if (*psVar8 == 0x2e) goto LAB_140054052;
      }
      goto LAB_14005404f;
    }
    if ((psVar10 == psVar3 + -2) && (psVar3[-2] == 0x2e)) goto LAB_14005404f;
  }
LAB_140054052:
  local_58 = (LPWSTR ****)0x0;
  lStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140016170(&local_58,psVar8,(longlong)psVar3 - (longlong)psVar8 >> 1);
  local_68 = 0;
  ppppppWVar7 = &local_58;
  if (7 < uStack_40) {
    ppppppWVar7 = (LPWSTR *****)local_58;
  }
  local_60 = 0;
  local_78 = (LPCWSTR ****)0x0;
  uStack_70 = 0;
  uVar4 = FUN_1402d6aa0(ppppppWVar7);
  FUN_140016170(&local_78,ppppppWVar7,uVar4);
  if (local_68 == 0) {
LAB_140054162:
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (LPWSTR ****)0x0;
    uStack_80 = 0xf;
  }
  else {
    ppppppWVar6 = &local_78;
    if (7 < local_60) {
      ppppppWVar6 = (LPCWSTR *****)local_78;
    }
    iVar2 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar6,(int)local_68,(LPSTR)0x0,0,(LPCSTR)0x0
                                ,(LPBOOL)0x0);
    if (iVar2 < 1) goto LAB_140054162;
    FUN_140016940(&local_38,(longlong)iVar2,0);
    ppppppWVar7 = &local_38;
    if (0xf < uStack_20) {
      ppppppWVar7 = (LPWSTR *****)local_38;
    }
    ppppppWVar6 = &local_78;
    if (7 < local_60) {
      ppppppWVar6 = (LPCWSTR *****)local_78;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar6,(int)local_68,(LPSTR)ppppppWVar7,iVar2,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    local_88 = local_28;
    uStack_80 = uStack_20;
    local_98 = local_38;
    uStack_90 = uStack_30;
  }
  if (7 < local_60) {
    uVar9 = local_60 * 2 + 2;
    ppppppWVar6 = (LPCWSTR *****)local_78;
    if (0xfff < uVar9) {
      ppppppWVar6 = (LPCWSTR *****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppppWVar6))) goto LAB_1400543a8;
      uVar9 = local_60 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppppWVar6,uVar9);
  }
  local_68 = 0;
  local_60 = 7;
  local_78 = (LPCWSTR ****)((ulonglong)local_78 & 0xffffffffffff0000);
  if (7 < uStack_40) {
    uVar9 = uStack_40 * 2 + 2;
    ppppppWVar7 = (LPWSTR *****)local_58;
    if (0xfff < uVar9) {
      ppppppWVar7 = (LPWSTR *****)local_58[-1];
      if ((char *)0x1f < (char *)((longlong)local_58 + (-8 - (longlong)ppppppWVar7)))
      goto LAB_1400543a8;
      uVar9 = uStack_40 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppppWVar7,uVar9);
  }
  ppppppWVar7 = &local_98;
  if (0xf < uStack_80) {
    ppppppWVar7 = (LPWSTR *****)local_98;
  }
  ppppppWVar11 = (LPWSTR *****)((longlong)ppppppWVar7 + local_88);
  ppppppWVar13 = &local_98;
  if (0xf < uStack_80) {
    ppppppWVar13 = (LPWSTR *****)local_98;
  }
  for (; ppppppWVar13 != ppppppWVar11; ppppppWVar13 = (LPWSTR *****)((longlong)ppppppWVar13 + 1)) {
    iVar2 = tolower((int)*(char *)ppppppWVar13);
    *(char *)ppppppWVar7 = (char)iVar2;
    ppppppWVar7 = (LPWSTR *****)((longlong)ppppppWVar7 + 1);
  }
  if (local_88 == 0) {
LAB_140054338:
    local_28 = 0;
    uStack_30 = 0;
    local_38 = (LPWSTR ****)0x0;
    lVar14 = 0;
    uStack_20 = 7;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    uStack_20._0_4_ = 7;
    uStack_20._4_4_ = 0;
    uVar15 = (undefined4)local_28;
    uVar16 = local_28._4_4_;
    uVar17 = (undefined4)uStack_20;
    uVar18 = uStack_20._4_4_;
    ppppppWVar7 = (LPWSTR *****)local_38;
  }
  else {
    ppppppWVar7 = &local_98;
    if (0xf < uStack_80) {
      ppppppWVar7 = (LPWSTR *****)local_98;
    }
    iVar2 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppppWVar7,(int)local_88,(LPWSTR)0x0,0);
    if (iVar2 < 1) goto LAB_140054338;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (LPWSTR ****)0x0;
    lStack_50 = 0;
    FUN_1400167e0(&local_58,0,(longlong)iVar2);
    ppppppWVar7 = &local_58;
    if (7 < uStack_40) {
      ppppppWVar7 = (LPWSTR *****)local_58;
    }
    ppppppWVar13 = &local_98;
    if (0xf < uStack_80) {
      ppppppWVar13 = (LPWSTR *****)local_98;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppppWVar13,(int)local_88,(LPWSTR)ppppppWVar7,iVar2);
    uVar15 = (undefined4)local_48;
    uVar16 = local_48._4_4_;
    uVar17 = (undefined4)uStack_40;
    uVar18 = uStack_40._4_4_;
    ppppppWVar7 = (LPWSTR *****)local_58;
    lVar14 = lStack_50;
  }
  *param_2 = (longlong)ppppppWVar7;
  param_2[1] = lVar14;
  *(undefined4 *)(param_2 + 2) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar16;
  *(undefined4 *)(param_2 + 3) = uVar17;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar18;
  if (0xf < uStack_80) {
    uVar9 = uStack_80 + 1;
    ppppppWVar7 = (LPWSTR *****)local_98;
    if (0xfff < uVar9) {
      ppppppWVar7 = (LPWSTR *****)local_98[-1];
      if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)ppppppWVar7))) {
LAB_1400543a8:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        plVar5 = (longlong *)(*pcVar1)();
        return plVar5;
      }
      uVar9 = uStack_80 + 0x28;
    }
    thunk_FUN_14028af80(ppppppWVar7,uVar9);
  }
  return param_2;
LAB_140053fe0:
  psVar8 = psVar10 + -1;
  if (psVar10[-1] == 0x5c) goto LAB_140053fff;
  if ((psVar10[-1] == 0x2f) || (psVar10 = psVar8, psVar3 == psVar8)) goto LAB_140053fff;
  goto LAB_140053fe0;
}

