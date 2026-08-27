// Function: FUN_140274ed0
// Addr: 140274ed0
// Size: 1284 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_140274ed0(longlong param_1,char *param_2,undefined8 param_3,undefined4 param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  errno_t eVar3;
  size_t sVar4;
  LPWSTR ***ppppWVar5;
  undefined8 uVar6;
  longlong lVar7;
  LPCSTR ***ppppCVar8;
  LPWSTR ***ppppWVar9;
  uint uVar10;
  ulonglong uVar11;
  LPWSTR **local_11d8;
  LPWSTR *ppWStack_11d0;
  LPWSTR *local_11c8;
  LPWSTR *ppWStack_11c0;
  LPWSTR **local_11b8;
  LPWSTR *ppWStack_11b0;
  LPWSTR *local_11a8;
  LPWSTR *ppWStack_11a0;
  LPCSTR **local_1198;
  undefined8 uStack_1190;
  longlong local_1188;
  ulonglong local_1180;
  undefined1 local_1170 [36];
  int iStack_114c;
  longlong local_1148;
  undefined1 local_1140 [8];
  uint auStack_1138 [14];
  longlong alStack_1100 [8];
  longlong local_10c0;
  undefined **local_10a0 [13];
  wchar_t local_1038 [1024];
  wchar_t local_838 [1024];
  undefined8 uStack_38;
  
  uStack_38 = 0x140274eeb;
  local_1188 = 0;
  local_1198 = (LPCSTR **)0x0;
  uStack_1190 = 0;
  local_1180 = 0;
  sVar4 = strlen(param_2);
  FUN_140017480(&local_1198,param_2,sVar4);
  if (local_1188 == 0) {
LAB_140274fd3:
    local_11c8 = (LPWSTR *)0x0;
    ppWStack_11d0 = (LPWSTR *)0x0;
    local_11d8 = (LPWSTR **)0x0;
    ppWStack_11c0 = (LPWSTR *)0x7;
  }
  else {
    ppppCVar8 = &local_1198;
    if (0xf < local_1180) {
      ppppCVar8 = (LPCSTR ***)local_1198;
    }
    iVar2 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar8,(int)local_1188,(LPWSTR)0x0,0);
    if (iVar2 < 1) goto LAB_140274fd3;
    local_11a8 = (LPWSTR *)0x0;
    ppWStack_11a0 = (LPWSTR *)0x0;
    local_11b8 = (LPWSTR **)0x0;
    ppWStack_11b0 = (LPWSTR *)0x0;
    FUN_1400167e0(&local_11b8,0,(longlong)iVar2);
    ppppWVar5 = &local_11b8;
    if ((LPWSTR **)0x7 < ppWStack_11a0) {
      ppppWVar5 = (LPWSTR ***)local_11b8;
    }
    ppppCVar8 = &local_1198;
    if (0xf < local_1180) {
      ppppCVar8 = (LPCSTR ***)local_1198;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar8,(int)local_1188,(LPWSTR)ppppWVar5,iVar2);
    local_11c8 = local_11a8;
    ppWStack_11c0 = ppWStack_11a0;
    local_11d8 = local_11b8;
    ppWStack_11d0 = ppWStack_11b0;
  }
  if (0xf < local_1180) {
    uVar11 = local_1180 + 1;
    ppppCVar8 = (LPCSTR ***)local_1198;
    if (0xfff < uVar11) {
      ppppCVar8 = (LPCSTR ***)local_1198[-1];
      if (0x1f < (ulonglong)((longlong)local_1198 + (-8 - (longlong)ppppCVar8))) goto LAB_1402753cc;
      uVar11 = local_1180 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar8,uVar11);
  }
  if (param_5 != 0) {
    iVar2 = FUN_1402c10d0(param_5,"PROJECT");
    if ((iVar2 == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      ppppWVar5 = (LPWSTR ***)
                  FUN_1402776a0(&local_11b8,**(longlong **)(param_1 + 8) + 0x10,&local_11d8);
      if (&local_11d8 != ppppWVar5) {
        if ((LPWSTR **)0x7 < ppWStack_11c0) {
          uVar11 = (longlong)ppWStack_11c0 * 2 + 2;
          ppppWVar9 = (LPWSTR ***)local_11d8;
          if (0xfff < uVar11) {
            ppppWVar9 = (LPWSTR ***)local_11d8[-1];
            if (0x1f < (ulonglong)((longlong)local_11d8 + (-8 - (longlong)ppppWVar9)))
            goto LAB_1402753cc;
            uVar11 = (longlong)ppWStack_11c0 * 2 + 0x29;
          }
          thunk_FUN_14028af80(ppppWVar9,uVar11);
        }
        local_11d8 = *ppppWVar5;
        ppWStack_11d0 = (LPWSTR *)ppppWVar5[1];
        local_11c8 = (LPWSTR *)ppppWVar5[2];
        ppWStack_11c0 = (LPWSTR *)ppppWVar5[3];
        ppppWVar5[2] = (LPWSTR **)0x0;
        ppppWVar5[3] = (LPWSTR **)0x7;
        *(undefined2 *)ppppWVar5 = 0;
      }
      if ((LPWSTR **)0x7 < ppWStack_11a0) {
        uVar11 = (longlong)ppWStack_11a0 * 2 + 2;
        ppppWVar5 = (LPWSTR ***)local_11b8;
        if (0xfff < uVar11) {
          ppppWVar5 = (LPWSTR ***)local_11b8[-1];
          if (0x1f < (ulonglong)((longlong)local_11b8 + (-8 - (longlong)ppppWVar5)))
          goto LAB_1402753cc;
          uVar11 = (longlong)ppWStack_11a0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppWVar5,uVar11);
      }
    }
  }
  FUN_1404217a0(local_1038,0,0x800);
  ppppWVar5 = &local_11d8;
  if ((LPWSTR **)0x7 < ppWStack_11c0) {
    ppppWVar5 = (LPWSTR ***)local_11d8;
  }
  FUN_1404217a0(local_838,0,0x800);
  eVar3 = FID_conflict__wsplitpath_s
                    ((wchar_t *)ppppWVar5,local_1038,0x400,local_838,0x400,(wchar_t *)0x0,0,
                     (wchar_t *)0x0,0);
  if (eVar3 == 0) {
    FUN_1402bfe60(local_1038,0x400,local_838);
  }
  uVar6 = FUN_1402d6aa0(local_1038);
  local_11a8 = (LPWSTR *)0x0;
  ppWStack_11a0 = (LPWSTR *)0x0;
  local_11b8 = (LPWSTR **)0x0;
  ppWStack_11b0 = (LPWSTR *)0x0;
  FUN_140016170(&local_11b8,local_1038,uVar6);
  FUN_140016600(local_1170,&local_11b8);
  FUN_1400509f0(local_1170,&local_1198);
  FUN_140016770(local_1170);
  FUN_140016600(local_1170,&local_11b8);
  FUN_14003b970(&local_1198,local_1170,3);
  FUN_140016770(local_1170);
  if ((LPWSTR **)0x7 < ppWStack_11a0) {
    uVar11 = (longlong)ppWStack_11a0 * 2 + 2;
    ppppWVar5 = (LPWSTR ***)local_11b8;
    if (0xfff < uVar11) {
      ppppWVar5 = (LPWSTR ***)local_11b8[-1];
      if (0x1f < (ulonglong)((longlong)local_11b8 + (-8 - (longlong)ppppWVar5))) goto LAB_1402753cc;
      uVar11 = (longlong)ppWStack_11a0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar5,uVar11);
  }
  ppppWVar5 = &local_11d8;
  if ((LPWSTR **)0x7 < ppWStack_11c0) {
    ppppWVar5 = (LPWSTR ***)local_11d8;
  }
  FUN_140049890(&local_1148,ppppWVar5,0x20);
  if (local_10c0 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_14007ada0(&local_1148,param_3,param_4);
    lVar7 = FUN_14004c3c0(local_1140);
    if (lVar7 == 0) {
      lVar7 = (longlong)*(int *)(local_1148 + 4);
      uVar10 = 6;
      if (*(longlong *)((longlong)alStack_1100 + lVar7) != 0) {
        uVar10 = 2;
      }
      FUN_140013b50(local_1140 + lVar7 + -8,uVar10 | *(uint *)((longlong)auStack_1138 + lVar7),0);
    }
    uVar6 = 1;
  }
  *(undefined ***)(local_1140 + (longlong)*(int *)(local_1148 + 4) + -8) = &PTR_LAB_140475e08;
  *(int *)((longlong)&iStack_114c + (longlong)*(int *)(local_1148 + 4)) =
       *(int *)(local_1148 + 4) + -0xa8;
  FUN_14004a790(local_1140);
  *(undefined ***)(local_1140 + (longlong)*(int *)(local_1148 + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_114c + (longlong)*(int *)(local_1148 + 4)) =
       *(int *)(local_1148 + 4) + -0x10;
  local_10a0[0] = std::ios_base::vftable;
  FUN_14028c430(local_10a0);
  if ((LPWSTR **)0x7 < ppWStack_11c0) {
    uVar11 = (longlong)ppWStack_11c0 * 2 + 2;
    ppppWVar5 = (LPWSTR ***)local_11d8;
    if (0xfff < uVar11) {
      ppppWVar5 = (LPWSTR ***)local_11d8[-1];
      if (0x1f < (ulonglong)((longlong)local_11d8 + (-8 - (longlong)ppppWVar5))) {
LAB_1402753cc:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar11 = (longlong)ppWStack_11c0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar5,uVar11);
  }
  return uVar6;
}

