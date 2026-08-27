// Function: FUN_14003d500
// Addr: 14003d500
// Size: 1057 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d500(uint param_1,uint param_2,uint param_3,char param_4,char param_5)

{
  bool bVar1;
  LSTATUS LVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_88;
  DWORD local_84;
  HKEY local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  
  if (DAT_1404e5290 < 10) {
    hModule = LoadLibraryW(L"dwmapi.dll");
    if (hModule == (HMODULE)0x0) {
      return;
    }
    pFVar3 = GetProcAddress(hModule,"DwmIsCompositionEnabled");
    pFVar4 = GetProcAddress(hModule,(LPCSTR)0x7f);
    pFVar5 = GetProcAddress(hModule,(LPCSTR)0x83);
    if ((((pFVar3 != (FARPROC)0x0) && (pFVar4 != (FARPROC)0x0)) && (pFVar5 != (FARPROC)0x0)) &&
       ((*pFVar3)(&local_84), local_84 != 0)) {
      param_3 = ((param_1 | 0xffffff00) << 8 | param_2) << 8 | param_3;
      (*pFVar4)(&local_70);
      local_70 = param_3;
      local_6c = param_3;
      (*pFVar5)(&local_70,0);
    }
    goto LAB_14003d90a;
  }
  hModule = LoadLibraryW(L"uxtheme.dll");
  if (hModule == (HMODULE)0x0) {
    return;
  }
  pwVar6 = (wchar_t *)0x0;
  pFVar3 = GetProcAddress(hModule,(LPCSTR)0x7a);
  if (pFVar3 == (FARPROC)0x0) goto LAB_14003d90a;
  if (param_5 == '\0') {
    local_84 = 4;
    LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Accent",0,
                          0xf003f,&local_80);
    if (LVar2 == 0) {
      LVar2 = RegQueryValueExW(local_80,L"UseNewAutoColorAccentAlgorithm",(LPDWORD)0x0,(LPDWORD)0x0,
                               (LPBYTE)&local_88,&local_84);
      if ((LVar2 != 0) || (local_88 != 0)) {
        local_88 = 0;
        RegSetValueExW(local_80,L"UseNewAutoColorAccentAlgorithm",0,4,(BYTE *)&local_88,4);
      }
      RegCloseKey(local_80);
    }
    pwVar6 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize";
    LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                          0xf003f,&local_80);
    if (LVar2 != 0) {
LAB_14003d719:
      if (param_4 != '\0') {
        LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0
                              ,0xf003f,&local_80);
        if (LVar2 == 0) {
          local_88 = 1;
          LVar2 = RegQueryValueExW(local_80,L"ColorPrevalence",(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)&local_88,&local_84);
          if ((LVar2 != 0) || (local_88 != 1)) {
            local_88 = 1;
            RegSetValueExW(local_80,L"ColorPrevalence",0,4,(BYTE *)&local_88,4);
          }
          RegCloseKey(local_80);
        }
        pwVar6 = L"SOFTWARE\\Microsoft\\Windows\\DWM";
        LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"SOFTWARE\\Microsoft\\Windows\\DWM",0,
                              0xf003f,&local_80);
        if (LVar2 == 0) {
          pwVar6 = L"ColorPrevalence";
          local_88 = 1;
          LVar2 = RegQueryValueExW(local_80,L"ColorPrevalence",(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)&local_88,&local_84);
          if ((LVar2 != 0) || (local_88 != 1)) {
            pwVar6 = L"ColorPrevalence";
            local_88 = 1;
            RegSetValueExW(local_80,L"ColorPrevalence",0,4,(BYTE *)&local_88,4);
          }
          RegCloseKey(local_80);
        }
      }
      goto LAB_14003d862;
    }
    pwVar6 = L"SystemUsesLightTheme";
    LVar2 = RegQueryValueExW(local_80,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPBYTE)&local_88,&local_84);
    if ((LVar2 == 0) && (local_88 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    RegCloseKey(local_80);
    if (!bVar1) goto LAB_14003d719;
  }
  else {
LAB_14003d862:
    fVar8 = (float)(int)param_1;
    fVar9 = (float)(int)param_2;
    fVar10 = (float)(int)param_3;
    fVar7 = (fVar9 * _DAT_1404926d0 + fVar8 * _DAT_140492684 + fVar10 * _DAT_140492650) /
            DAT_14049290c - _DAT_1404926c4;
    if (0.0 < fVar7) {
      param_1 = (uint)(fVar8 - fVar8 * fVar7);
      param_3 = (uint)(fVar10 - fVar10 * fVar7);
      param_2 = (uint)(fVar9 - fVar9 * fVar7);
    }
  }
  local_78 = ((param_3 | 0xffffff00) << 8 | param_2) << 8 | param_1;
  local_74 = local_78;
  (*pFVar3)(&local_78,CONCAT71((int7)((ulonglong)pwVar6 >> 8),1));
LAB_14003d90a:
  FreeLibrary(hModule);
  return;
}

