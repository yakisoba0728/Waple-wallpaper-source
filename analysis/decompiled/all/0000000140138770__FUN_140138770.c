// Function: FUN_140138770
// Addr: 140138770
// Size: 558 bytes


undefined8 FUN_140138770(longlong param_1,undefined *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  LPSTR ***ppppCVar6;
  LPCWSTR ***ppppWVar7;
  LPSTR ***ppppCVar8;
  undefined8 *_Buf2;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  bool bVar12;
  LPCWSTR **local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  LPSTR **local_58;
  undefined8 uStack_50;
  size_t local_48;
  ulonglong uStack_40;
  LPSTR **local_38;
  undefined8 uStack_30;
  size_t local_28;
  ulonglong uStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  bVar12 = false;
  local_68 = 0;
  puVar11 = &DAT_140474538;
  if (param_2 != (undefined *)0x0) {
    puVar11 = param_2;
  }
  local_60 = 0;
  local_78 = (LPCWSTR **)0x0;
  uStack_70 = 0;
  uVar5 = FUN_1402d6aa0(puVar11);
  FUN_140016170(&local_78,puVar11,uVar5);
  ppppCVar8 = (LPSTR ***)local_58;
  uVar10 = uStack_40;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
LAB_1401388ef:
    bVar3 = false;
  }
  else {
    bVar12 = true;
    if (local_68 == 0) {
LAB_140138894:
      local_48 = 0;
      uStack_50 = 0;
      uStack_40 = 0xf;
      local_58 = (LPSTR **)0x0;
    }
    else {
      ppppWVar7 = &local_78;
      if (7 < local_60) {
        ppppWVar7 = (LPCWSTR ***)local_78;
      }
      iVar4 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar7,(int)local_68,(LPSTR)0x0,0,(LPCSTR)0x0
                                  ,(LPBOOL)0x0);
      if (iVar4 < 1) goto LAB_140138894;
      FUN_140016940(&local_38,(longlong)iVar4,0);
      ppppCVar8 = &local_38;
      if (0xf < uStack_20) {
        ppppCVar8 = (LPSTR ***)local_38;
      }
      ppppWVar7 = &local_78;
      if (7 < local_60) {
        ppppWVar7 = (LPCWSTR ***)local_78;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar7,(int)local_68,(LPSTR)ppppCVar8,iVar4,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_48 = local_28;
      uStack_40 = uStack_20;
      local_58 = local_38;
      uStack_50 = uStack_30;
    }
    uVar10 = uStack_40;
    ppppCVar8 = (LPSTR ***)local_58;
    _Buf2 = (undefined8 *)(lVar1 + 0x18);
    if (0xf < *(ulonglong *)(lVar1 + 0x30)) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    ppppCVar6 = &local_58;
    if (0xf < uStack_40) {
      ppppCVar6 = (LPSTR ***)local_58;
    }
    if ((local_48 != *(size_t *)(lVar1 + 0x28)) ||
       ((local_48 != 0 && (iVar4 = memcmp(ppppCVar6,_Buf2,local_48), iVar4 != 0))))
    goto LAB_1401388ef;
    bVar3 = true;
  }
  if ((bVar12) && (0xf < uVar10)) {
    uVar9 = uVar10 + 1;
    ppppCVar6 = ppppCVar8;
    if (0xfff < uVar9) {
      ppppCVar6 = (LPSTR ***)ppppCVar8[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)ppppCVar8 + (-8 - (longlong)ppppCVar6)))
      goto LAB_140138996;
      uVar9 = uVar10 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar6,uVar9);
  }
  if (bVar3) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
  }
  if (7 < local_60) {
    uVar10 = local_60 * 2 + 2;
    ppppWVar7 = (LPCWSTR ***)local_78;
    if (0xfff < uVar10) {
      ppppWVar7 = (LPCWSTR ***)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppWVar7))) {
LAB_140138996:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      uVar10 = local_60 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar7,uVar10);
  }
  return 0;
}

