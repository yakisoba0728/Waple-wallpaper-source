// Function: FUN_1402789e0
// Addr: 1402789e0
// Size: 1901 bytes


DWORD FUN_1402789e0(undefined8 param_1,undefined8 *param_2)

{
  LPCWSTR pWVar1;
  LPCWSTR pWVar2;
  code *pcVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 uVar7;
  LPCWSTR pWVar8;
  undefined8 uVar9;
  LPCWSTR ***ppppWVar10;
  LPWSTR ***ppppWVar11;
  longlong lVar12;
  LPWSTR ***ppppWVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  LPCWSTR pWVar17;
  DWORD local_res18;
  undefined4 uStackX_1c;
  undefined1 auStackY_298 [8];
  undefined1 auStackY_290 [24];
  LPWSTR **local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  ulonglong uStack_230;
  LPCWSTR **local_228;
  undefined8 uStack_220;
  longlong local_218;
  ulonglong local_210;
  LPWSTR **local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  LPWSTR **local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  _PROCESS_INFORMATION local_1c8;
  LPCWSTR **local_1b0 [2];
  longlong local_1a0;
  ulonglong local_198;
  _STARTUPINFOW local_188;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_c8;
  longlong *local_c0;
  uint local_90;
  
  puVar16 = auStackY_298;
  FUN_140005ee0(local_1b0);
  if (DAT_1404dfba0 == 0) {
LAB_140278ab1:
    FUN_140005d20(local_1b0,"resourcecompiler64.exe");
    FUN_14000df80(local_118);
    ppppWVar10 = local_1b0;
    if (7 < local_198) {
      ppppWVar10 = (LPCWSTR ***)local_1b0[0];
    }
    pWVar2 = (LPCWSTR)((longlong)ppppWVar10 + local_1a0 * 2);
    pWVar17 = pWVar2;
    for (pWVar8 = (LPCWSTR)FUN_140015e90(ppppWVar10,pWVar2); pWVar8 != pWVar2; pWVar8 = pWVar8 + 1)
    {
      if ((*pWVar8 != L'\\') && (*pWVar8 != L'/')) goto LAB_140278b10;
    }
LAB_140278b2d:
    local_238 = 0;
    uStack_230 = 0;
    local_248 = (LPWSTR **)0x0;
    uStack_240 = 0;
    FUN_140016170(&local_248,pWVar17,(longlong)pWVar2 - (longlong)pWVar17 >> 1);
    local_1f8 = local_238;
    uStack_1f0 = uStack_230;
    local_208 = local_248;
    uStack_200 = uStack_240;
    ppppWVar11 = &local_208;
    if (7 < uStack_230) {
      ppppWVar11 = (LPWSTR ***)local_248;
    }
    uVar7 = FUN_1400300a0(local_108,ppppWVar11);
    uVar7 = FUN_14000d140(uVar7,&DAT_1404738a8);
    FUN_1400300a0(uVar7,param_1);
    if (7 < uStack_1f0) {
      uVar14 = uStack_1f0 * 2 + 2;
      ppppWVar11 = (LPWSTR ***)local_208;
      if (0xfff < uVar14) {
        ppppWVar11 = (LPWSTR ***)local_208[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_208 + (-8 - (longlong)ppppWVar11)))
        goto LAB_1402790b9;
        uVar14 = uStack_1f0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar11,uVar14);
    }
    local_1c8.dwProcessId = 0;
    local_1c8.dwThreadId = 0;
    local_188.hStdError._4_4_ = 0;
    local_218 = 0;
    local_188.cb = 0x68;
    local_238 = 0;
    uStack_230 = 7;
    uStack_240 = 0;
    local_248 = (LPWSTR **)0x0;
    local_1c8.hProcess = (HANDLE)0x0;
    local_1c8.hThread = (HANDLE)0x0;
    local_188._4_8_ = 0;
    local_188._12_8_ = 0;
    local_188._20_8_ = 0;
    local_188._28_8_ = 0;
    local_188.dwY = 0;
    local_188.dwXSize = 0;
    local_188.dwYSize = 0;
    local_188.dwXCountChars = 0;
    local_188.dwYCountChars = 0;
    local_188.dwFillAttribute = 0;
    local_188.dwFlags = 0;
    local_188.wShowWindow = 0;
    local_188.cbReserved2 = 0;
    local_188._68_8_ = 0;
    local_188._76_8_ = 0;
    local_188._84_8_ = 0;
    local_188._92_8_ = 0;
    local_228 = (LPCWSTR **)0x0;
    uStack_220 = 0;
    if ((((byte)local_90 & 0x22) == 2) || (*local_c0 == 0)) {
      if (((local_90 & 4) == 0) && (*local_c8 != 0)) {
        lVar12 = *local_e8;
        goto LAB_140278ca5;
      }
    }
    else {
      lVar12 = *local_e0;
LAB_140278ca5:
      if (lVar12 != 0) {
        FUN_140016ae0(&local_248);
      }
    }
    ppppWVar11 = &local_248;
    if (7 < uStack_230) {
      ppppWVar11 = (LPWSTR ***)local_248;
    }
    ppppWVar10 = local_1b0;
    if (7 < local_198) {
      ppppWVar10 = (LPCWSTR ***)local_1b0[0];
    }
    BVar4 = CreateProcessW((LPCWSTR)ppppWVar10,(LPWSTR)ppppWVar11,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0x8000020,(LPVOID)0x0,(LPCWSTR)0x0,
                           &local_188,&local_1c8);
    if (7 < uStack_230) {
      uVar14 = uStack_230 * 2 + 2;
      ppppWVar11 = (LPWSTR ***)local_248;
      if (0xfff < uVar14) {
        ppppWVar11 = (LPWSTR ***)local_248[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_248 + (-8 - (longlong)ppppWVar11)))
        goto LAB_1402790b9;
        uVar14 = uStack_230 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar11,uVar14);
    }
    if (BVar4 != 0) goto LAB_1402790c0;
    DVar5 = GetLastError();
    FormatMessageW(0x1300,(LPCVOID)0x0,DVar5,0x400,(LPWSTR)&local_res18,0,(va_list *)0x0);
    uVar7 = CONCAT44(uStackX_1c,local_res18);
    local_218 = 0;
    local_228 = (LPCWSTR **)0x0;
    uStack_220 = 0;
    local_210 = 0;
    uVar9 = FUN_1402d6aa0(uVar7);
    FUN_140016170(&local_228,uVar7,uVar9);
    if (local_218 == 0) {
LAB_140278e6f:
      local_238 = 0;
      uStack_240 = 0;
      local_248 = (LPWSTR **)0x0;
      uStack_230 = 0xf;
    }
    else {
      ppppWVar10 = &local_228;
      if (7 < local_210) {
        ppppWVar10 = (LPCWSTR ***)local_228;
      }
      iVar6 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar10,(int)local_218,(LPSTR)0x0,0,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar6 < 1) goto LAB_140278e6f;
      FUN_140016940(&local_208,(longlong)iVar6,0);
      ppppWVar11 = &local_208;
      if (0xf < uStack_1f0) {
        ppppWVar11 = (LPWSTR ***)local_208;
      }
      ppppWVar10 = &local_228;
      if (7 < local_210) {
        ppppWVar10 = (LPCWSTR ***)local_228;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar10,(int)local_218,(LPSTR)ppppWVar11,iVar6,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_248 = local_208;
      uStack_240 = uStack_200;
      local_238 = local_1f8;
      uStack_230 = uStack_1f0;
    }
    if (7 < local_210) {
      uVar14 = local_210 * 2 + 2;
      ppppWVar10 = (LPCWSTR ***)local_228;
      if (0xfff < uVar14) {
        ppppWVar10 = (LPCWSTR ***)local_228[-1];
        if (0x1f < (ulonglong)((longlong)local_228 + (-8 - (longlong)ppppWVar10)))
        goto LAB_1402790b9;
        uVar14 = local_210 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar10,uVar14);
    }
    local_218 = 0;
    local_210 = 0;
    local_228 = (LPCWSTR **)0x0;
    uStack_220 = 0;
    uVar7 = FUN_1402d6aa0(param_1);
    FUN_140016170(&local_228,param_1,uVar7);
    if (local_218 == 0) {
LAB_140278f9f:
      local_1d8 = 0;
      uStack_1e0 = 0;
      local_1e8 = (LPWSTR **)0x0;
      uStack_1d0 = 0xf;
    }
    else {
      ppppWVar10 = &local_228;
      if (7 < local_210) {
        ppppWVar10 = (LPCWSTR ***)local_228;
      }
      iVar6 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar10,(int)local_218,(LPSTR)0x0,0,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar6 < 1) goto LAB_140278f9f;
      FUN_140016940(&local_208,(longlong)iVar6,0);
      ppppWVar11 = &local_208;
      if (0xf < uStack_1f0) {
        ppppWVar11 = (LPWSTR ***)local_208;
      }
      ppppWVar10 = &local_228;
      if (7 < local_210) {
        ppppWVar10 = (LPCWSTR ***)local_228;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar10,(int)local_218,(LPSTR)ppppWVar11,iVar6,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_1e8 = local_208;
      uStack_1e0 = uStack_200;
      local_1d8 = local_1f8;
      uStack_1d0 = uStack_1f0;
    }
    if (7 < local_210) {
      uVar14 = local_210 * 2 + 2;
      ppppWVar10 = (LPCWSTR ***)local_228;
      if (0xfff < uVar14) {
        ppppWVar10 = (LPCWSTR ***)local_228[-1];
        if (0x1f < (ulonglong)((longlong)local_228 + (-8 - (longlong)ppppWVar10)))
        goto LAB_1402790b9;
        uVar14 = local_210 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar10,uVar14);
    }
    LocalFree((HLOCAL)CONCAT44(uStackX_1c,local_res18));
    ppppWVar11 = &local_1e8;
    if (0xf < uStack_1d0) {
      ppppWVar11 = (LPWSTR ***)local_1e8;
    }
    ppppWVar13 = &local_248;
    if (0xf < uStack_230) {
      ppppWVar13 = (LPWSTR ***)local_248;
    }
    FUN_140098760("CreateProcess for compiler failed: %s (%s)\n",ppppWVar13,ppppWVar11);
    if (0xf < uStack_1d0) {
      uVar14 = uStack_1d0 + 1;
      ppppWVar11 = (LPWSTR ***)local_1e8;
      if (0xfff < uVar14) {
        ppppWVar11 = (LPWSTR ***)local_1e8[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_1e8 + (-8 - (longlong)ppppWVar11)))
        goto LAB_1402790b9;
        uVar14 = uStack_1d0 + 0x28;
      }
      thunk_FUN_14028af80(ppppWVar11,uVar14);
    }
    local_1d8 = 0;
    uStack_1d0 = 0xf;
    local_1e8 = (LPWSTR **)((ulonglong)local_1e8 & 0xffffffffffffff00);
    puVar16 = auStackY_298;
    if (0xf < uStack_230) {
      uVar14 = uStack_230 + 1;
      ppppWVar11 = (LPWSTR ***)local_248;
      if (0xfff < uVar14) {
        ppppWVar11 = (LPWSTR ***)local_248[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_248 + (-8 - (longlong)ppppWVar11)))
        goto LAB_1402790b9;
        uVar14 = uStack_230 + 0x28;
      }
      thunk_FUN_14028af80(ppppWVar11,uVar14);
      puVar16 = auStackY_298;
    }
  }
  else {
    puVar15 = &DAT_1404dfb90;
    if (7 < DAT_1404dfba8) {
      puVar15 = DAT_1404dfb90;
    }
    uVar7 = FUN_1402d6aa0(puVar15);
    local_238 = 0;
    uStack_230 = 0;
    local_248 = (LPWSTR **)0x0;
    uStack_240 = 0;
    FUN_140016170(&local_248,puVar15,uVar7);
    FUN_140015460(local_1b0,&local_248);
    if (uStack_230 < 8) goto LAB_140278ab1;
    uVar14 = uStack_230 * 2 + 2;
    ppppWVar11 = (LPWSTR ***)local_248;
    if (uVar14 < 0x1000) {
LAB_140278aac:
      thunk_FUN_14028af80(ppppWVar11,uVar14);
      goto LAB_140278ab1;
    }
    ppppWVar11 = (LPWSTR ***)local_248[-1];
    if ((LPSTR)((longlong)local_248 + (-8 - (longlong)ppppWVar11)) < (LPSTR)0x20) {
      uVar14 = uStack_230 * 2 + 0x29;
      goto LAB_140278aac;
    }
LAB_1402790b9:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar16 = auStackY_290;
LAB_1402790c0:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_1c8.hProcess;
      *(undefined8 *)(puVar16 + -8) = 0x1402790d6;
      CloseHandle(local_1c8.hThread);
      DVar5 = 0;
      goto LAB_140279121;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1402790ea;
    WaitForSingleObject(local_1c8.hProcess,0xffffffff);
    *(undefined8 *)(puVar16 + -8) = 0x1402790fb;
    BVar4 = GetExitCodeProcess(local_1c8.hProcess,&local_res18);
    *(undefined8 *)(puVar16 + -8) = 0x140279107;
    CloseHandle(local_1c8.hProcess);
    *(undefined8 *)(puVar16 + -8) = 0x140279111;
    CloseHandle(local_1c8.hThread);
    DVar5 = local_res18;
    if (BVar4 == 1) goto LAB_140279121;
  }
  DVar5 = 0xffffffff;
LAB_140279121:
  *(undefined8 *)(puVar16 + -8) = 0x14027912d;
  FUN_140005b50(local_118);
  *(undefined8 *)(puVar16 + -8) = 0x140279136;
  FUN_140016770(local_1b0);
  return DVar5;
LAB_140278b10:
  pWVar1 = pWVar17 + -1;
  if (pWVar17[-1] == L'\\') goto LAB_140278b2d;
  if ((pWVar17[-1] == L'/') || (pWVar17 = pWVar1, pWVar8 == pWVar1)) goto LAB_140278b2d;
  goto LAB_140278b10;
}

