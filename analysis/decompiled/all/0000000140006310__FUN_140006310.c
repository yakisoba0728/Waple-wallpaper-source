// Function: FUN_140006310
// Addr: 140006310
// Size: 1682 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_140006310(undefined8 param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  INT_PTR IVar5;
  longlong lVar6;
  undefined4 extraout_var;
  WCHAR *pWVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  uint local_res10 [2];
  undefined2 local_1c28 [512];
  WCHAR local_1828 [512];
  WCHAR local_1428 [512];
  undefined8 local_1028 [511];
  undefined8 uStack_30;
  
  uStack_30 = 0x14000632c;
  local_res10[0] = param_2;
  pvVar3 = GetCurrentProcess();
  if ((pvVar3 != (HANDLE)0x0) && (hModule = LoadLibraryW(L"Psapi.dll"), hModule != (HMODULE)0x0)) {
    pFVar4 = GetProcAddress(hModule,"EnumProcessModules");
    if (pFVar4 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      hModule = LoadLibraryW(L"kernel32.dll");
      if (hModule == (HMODULE)0x0) {
        return 0;
      }
      pFVar4 = GetProcAddress(hModule,"EnumProcessModules");
    }
    iVar1 = 0;
    iVar10 = iVar1;
    if (pFVar4 != (FARPROC)0x0) {
      FUN_1404217a0(local_1028,0,0x1000);
      local_res10[0] = 0;
      IVar5 = (*pFVar4)(pvVar3,local_1028,0x200,local_res10);
      iVar10 = 0;
      if (((int)IVar5 == 1) && (iVar9 = 0, iVar10 = iVar1, local_res10[0] >> 3 != 0)) {
        do {
          FUN_1404217a0(local_1428,0,0x400);
          FUN_1404217a0(local_1828,0,0x400);
          FUN_1404217a0(local_1c28,0,0x400);
          GetModuleFileNameW((HMODULE)local_1028[iVar9],local_1428,0x400);
          GetLongPathNameW(local_1428,local_1828,0x200);
          pWVar7 = local_1828;
          puVar8 = local_1c28;
          do {
            iVar1 = tolower((uint)(ushort)*pWVar7);
            *puVar8 = (short)iVar1;
            puVar8 = puVar8 + 1;
            pWVar7 = pWVar7 + 1;
          } while (pWVar7 != local_1428);
          lVar6 = FUN_1402ba390(local_1c28,L"raptr");
          if (((((((((lVar6 != 0) || (lVar6 = FUN_1402ba390(local_1c28,L"fraps"), lVar6 != 0)) ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"precisionx"), lVar6 != 0)) ||
                  ((lVar6 = FUN_1402ba390(local_1c28,L"rtsshook"), lVar6 != 0 ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"ltc_"), lVar6 != 0)))) ||
                 ((lVar6 = FUN_1402ba390(local_1c28,L"owexplorer"), lVar6 != 0 ||
                  ((lVar6 = FUN_1402ba390(local_1c28,L"mirillis"), lVar6 != 0 ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"action_"), lVar6 != 0)))))) ||
                (lVar6 = FUN_1402ba390(local_1c28,L"keyhookdll"), lVar6 != 0)) ||
               ((((lVar6 = FUN_1402ba390(local_1c28,L"0kraken0"), lVar6 != 0 ||
                  (lVar6 = FUN_1402ba390(local_1c28,L"playclawhook"), lVar6 != 0)) ||
                 (lVar6 = FUN_1402ba390(local_1c28,L"ovldynext"), lVar6 != 0)) ||
                (((lVar6 = FUN_1402ba390(local_1c28,L"ss2osd"), lVar6 != 0 ||
                  (lVar6 = FUN_1402ba390(local_1c28,L"ss3osd"), lVar6 != 0)) ||
                 ((lVar6 = FUN_1402ba390(local_1c28,L"graphics-hook32"), lVar6 != 0 ||
                  ((lVar6 = FUN_1402ba390(local_1c28,L"mkiiosd"), lVar6 != 0 ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"ss2devprops"), lVar6 != 0)))))))))) ||
              (((lVar6 = FUN_1402ba390(local_1c28,L"ss3devprops"), lVar6 != 0 ||
                (((lVar6 = FUN_1402ba390(local_1c28,L"sonic suite"), lVar6 != 0 ||
                  (lVar6 = FUN_1402ba390(local_1c28,L"sonicsuite"), lVar6 != 0)) ||
                 (lVar6 = FUN_1402ba390(local_1c28,L"ssaudioosd"), lVar6 != 0)))) ||
               (((lVar6 = FUN_1402ba390(local_1c28,L"ddumd"), lVar6 != 0 ||
                 (lVar6 = FUN_1402ba390(local_1c28,L"gametooldll"), lVar6 != 0)) ||
                (((lVar6 = FUN_1402ba390(local_1c28,L"nahimic"), lVar6 != 0 ||
                  ((lVar6 = FUN_1402ba390(local_1c28,L"gpp32"), lVar6 != 0 ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"gpp64"), lVar6 != 0)))) ||
                 (lVar6 = FUN_1402ba390(local_1c28,L"xtremetuner"), lVar6 != 0)))))))) ||
             ((((((((lVar6 = FUN_1402ba390(local_1c28,L"dxosd"), lVar6 != 0 ||
                    (lVar6 = FUN_1402ba390(local_1c28,L"discord"), lVar6 != 0)) ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"k_fps32"), lVar6 != 0)) ||
                  ((lVar6 = FUN_1402ba390(local_1c28,L"k_fps64"), lVar6 != 0 ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"rzfps"), lVar6 != 0)))) ||
                 (lVar6 = FUN_1402ba390(local_1c28,L"specialk"), lVar6 != 0)) ||
                (((lVar6 = FUN_1402ba390(local_1c28,L"d3dgear"), lVar6 != 0 ||
                  (lVar6 = FUN_1402ba390(local_1c28,L"asusstrixosd"), lVar6 != 0)) ||
                 ((lVar6 = FUN_1402ba390(local_1c28,L"asusphoebusosd"), lVar6 != 0 ||
                  (((lVar6 = FUN_1402ba390(local_1c28,L"fpsmon"), lVar6 != 0 ||
                    (lVar6 = FUN_1402ba390(local_1c28,L"norton"), lVar6 != 0)) ||
                   (lVar6 = FUN_1402ba390(local_1c28,L"msi gaming"), lVar6 != 0)))))))) ||
               ((lVar6 = FUN_1402ba390(local_1c28,L"browserhook"), lVar6 != 0 ||
                (lVar6 = FUN_1402ba390(local_1c28,L"vhook.dll"), lVar6 != 0)))) ||
              ((lVar6 = FUN_1402ba390(local_1c28,L"nvinject"), lVar6 != 0 ||
               ((lVar6 = FUN_1402ba390(local_1c28,L"easyhook"), lVar6 != 0 ||
                (lVar6 = FUN_1402ba390(local_1c28), lVar6 != 0)))))))) {
            FUN_1402c8370(param_1,local_1828,0x400);
            FUN_1402c8370(param_1,&DAT_140472690,0x400);
            iVar10 = iVar10 + 1;
          }
          iVar9 = iVar9 + 1;
        } while ((ulonglong)(longlong)iVar9 < (ulonglong)(local_res10[0] >> 3));
      }
    }
    BVar2 = FreeLibrary(hModule);
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),0 < iVar10);
  }
  return 0;
}

