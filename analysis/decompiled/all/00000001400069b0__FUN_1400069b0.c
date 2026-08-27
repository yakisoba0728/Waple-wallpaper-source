// Function: FUN_1400069b0
// Addr: 1400069b0
// Size: 1408 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400069b0(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  LSTATUS LVar5;
  SIZE_T SVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  WCHAR *pWVar9;
  WCHAR *pWVar10;
  BYTE local_res8 [8];
  HKEY local_res20;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  _MEMORY_BASIC_INFORMATION local_1668;
  WCHAR local_1638 [1024];
  WCHAR local_e38 [512];
  WCHAR local_a38 [264];
  WCHAR local_828 [1024];
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(LPCVOID *)(piVar1 + 4) == (LPCVOID)0x0)) {
    pwVar8 = L"Go here for help:\n\nhelp.wallpaperengine.io/crash";
    goto LAB_140006f14;
  }
  SVar6 = VirtualQuery(*(LPCVOID *)(piVar1 + 4),&local_1668,0x30);
  FUN_1404217a0(local_e38,0,0x400);
  FUN_1404217a0(local_828,0,0x800);
  local_16a8 = 0;
  uStack_16a0 = 0;
  local_1698 = 0;
  uStack_1690 = 0;
  local_1688 = 0;
  uStack_1680 = 0;
  local_1678 = 0;
  uStack_1670 = 0;
  FUN_140015230(&local_16a8,0x40,"0x%016llX",*(undefined8 *)(piVar1 + 4));
  if (((int)SVar6 != 0x30) ||
     (DVar3 = GetModuleFileNameW(local_1668.AllocationBase,local_a38,0x104), DVar3 == 0))
  goto LAB_140006d32;
  FUN_1404217a0(local_1638,0,0x400);
  GetLongPathNameW(local_a38,local_e38,0x200);
  pWVar9 = local_e38;
  pWVar10 = local_1638;
  do {
    iVar4 = tolower((uint)(ushort)*pWVar9);
    *pWVar10 = (WCHAR)iVar4;
    pWVar10 = pWVar10 + 1;
    pWVar9 = pWVar9 + 1;
  } while (pWVar9 != local_a38);
  lVar7 = FUN_1402ba390(local_1638,L"rzchromasdk");
  if (lVar7 == 0) {
    lVar7 = FUN_1402ba390(local_1638,L"precisionx");
    if (lVar7 != 0) {
      pwVar8 = 
      L"PRECISION X hacked and crashed Wallpaper Engine. Update PRECISION X or disable its overlay hack."
      ;
LAB_140006da3:
      FUN_1402c8370(param_2,pwVar8,0x800);
      goto LAB_140006db1;
    }
    lVar7 = FUN_1402ba390(local_1638,L"nvumdshim");
    if ((lVar7 != 0) || (lVar7 = FUN_1402ba390(local_1638,L"igc32"), lVar7 != 0)) {
      pwVar8 = L"LIKELY SOLUTION: Update Intel Graphics drivers.";
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"nvwgf2um");
    if ((lVar7 != 0) || (lVar7 = FUN_1402ba390(local_1638,L"nvd3dum"), lVar7 != 0)) {
      pwVar8 = 
      L"Your Nvidia graphics drivers have crashed Wallpaper Engine. Try reinstalling the NEWEST Nvidia drivers or install OLDER, STABLE drivers. This type of crash can also be the result of a broken graphics hook or overlay program."
      ;
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"rtsshooks");
    if (lVar7 != 0) {
      pwVar8 = 
      L"Rivatuner Statistics Server hacked and crashed Wallpaper Engine. Exclude Wallpaper Engine in RivaTuner to stop it from crashing it."
      ;
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"msigamingosd");
    if (lVar7 != 0) {
      pwVar8 = 
      L"The MSI Gaming App hacked and crashed Wallpaper Engine. Update it or disable its overlay hack."
      ;
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"radeonpro");
    if (lVar7 != 0) {
      pwVar8 = 
      L"RadeonPro hacked and crashed Wallpaper Engine. Update it or disable its overlay hack.";
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"kernelbase");
    if (lVar7 != 0) {
      cVar2 = FUN_140006100();
      pwVar8 = 
      L"BitDefender hacked and possibly crashed Wallpaper Engine through its \'Advanced Threat Defense\'. Try excluding Wallpaper Engine there or disabling it."
      ;
      if (cVar2 == '\0') {
        pwVar8 = L"Wallpaper Engine crashed in the Windows System.";
      }
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"audioses");
    if (lVar7 != 0) {
      pwVar8 = 
      L"Your audio driver crashed Wallpaper Engine. Try setting \'Other application playing audio\' to \'keep running\' in the Wallpaper Engine settings."
      ;
      goto LAB_140006da3;
    }
    lVar7 = FUN_1402ba390(local_1638,L"overlay.x86.dll");
    if ((lVar7 != 0) || (lVar7 = FUN_1402ba390(local_1638,L"overlay.x64.dll"), lVar7 != 0)) {
      pwVar8 = L"LIKELY SOLUTION: Disable Discord overlay for Wallpaper Engine.";
      goto LAB_140006da3;
    }
    if ((DAT_1404e5270 == 0) || (lVar7 = FUN_1402ba390(local_1638), lVar7 == 0)) {
      if (*piVar1 == -0x3f92ff82) {
        pwVar8 = 
        L"Module not found! If you have Windows N and you are trying to play a video, install the latest Media Feature Pack."
        ;
        goto LAB_140006da3;
      }
    }
    else {
      *param_3 = 0;
    }
LAB_140006d32:
    cVar2 = FUN_140006310(local_828);
    if (cVar2 == '\0') {
      if (local_e38[0] != L'\0') {
        FUN_1404217a0(local_1638,0,0x800);
        GetModuleFileNameW((HMODULE)0x0,local_1638,0x400);
        iVar4 = wcsncmp(local_1638,local_e38,0x400);
        if (iVar4 != 0) {
          FUN_1402c8370(param_2,L"Wallpaper Engine was likely crashed by another application (",
                        0x800);
          FUN_1402c8370(param_2,local_e38,0x800);
          pwVar8 = L").\n\n";
          goto LAB_140006e3e;
        }
      }
      pwVar8 = L"Wallpaper Engine has crashed.\n\n";
    }
    else {
      FUN_1402c8370(param_2,
                    L"Wallpaper Engine was likely crashed by the following application. Try closing or updating this application:\n"
                    ,0x800);
      FUN_1402c8370(param_2,local_828,0x800);
      pwVar8 = L"\n";
    }
  }
  else {
    FUN_1402c8370(param_2,
                  L"Razer Synapse has crashed Wallpaper Engine.\n\nThe Razer Chroma plugin will be disabled to fix this crash. You can re-enable it in the Wallpaper Engine plugin settings."
                  ,0x800);
    LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\WallpaperEngine\\",0,0xf003f,
                          &local_res20);
    if (LVar5 == 0) {
      local_res8[0] = '\x01';
      local_res8[1] = '\0';
      local_res8[2] = '\0';
      local_res8[3] = '\0';
      RegSetValueExW(local_res20,L"disablePlugins",0,4,local_res8,4);
      RegCloseKey(local_res20);
      pwVar8 = L"\n\n";
      goto LAB_140006e3e;
    }
LAB_140006db1:
    pwVar8 = L"\n\n";
  }
LAB_140006e3e:
  FUN_1402c8370(param_2,pwVar8,0x800);
  FUN_1402c8370(param_2,L"Go here for help:\n\nhelp.wallpaperengine.io/crash",0x800);
  if (local_e38[0] == L'\0') {
    return;
  }
  wsprintfW(local_828,L"\n\nCrash caused by: \'%s\'. Error code: 0x%08X.");
  FUN_1402c8370(param_2,local_828,0x800);
  if (*piVar1 != -0x3ffffffb) {
    return;
  }
  if ((uint)piVar1[6] < 2) {
    return;
  }
  FUN_140015230(&local_16a8,0x40,"0x%016llX",*(undefined8 *)(piVar1 + 10));
  wsprintfW(local_828,L" Access violation: trying to %S address %S.");
  pwVar8 = local_828;
LAB_140006f14:
  FUN_1402c8370(param_2,pwVar8,0x800);
  return;
}

