// Function: FUN_1402ed904
// Addr: 1402ed904
// Size: 911 bytes


/* WARNING: Removing unreachable block (ram,0x0001402edbec) */

FARPROC FUN_1402ed904(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  HMODULE pHVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  FARPROC pFVar6;
  HMODULE hLibModule;
  longlong lVar7;
  char *pcVar8;
  undefined4 *local_res8 [4];
  undefined4 local_98 [2];
  uint *local_90;
  longlong *local_88;
  char *local_80;
  ulonglong local_78;
  char *pcStack_70;
  HMODULE local_68;
  FARPROC local_60;
  DWORD local_58;
  
  FUN_1402ed4ec();
  local_80 = IMAGE_DOS_HEADER_140000000.e_magic + param_1[1];
  uVar3 = param_1[5];
  pcVar8 = IMAGE_DOS_HEADER_140000000.e_magic + param_1[2];
  local_res8[0] = (undefined4 *)CONCAT44(local_res8[0]._4_4_,param_1[7]);
  local_98[0] = 0x48;
  local_68 = (HMODULE)0x0;
  local_60 = (FARPROC)0x0;
  local_58 = 0;
  local_78 = 0;
  pcStack_70 = (char *)0x0;
  local_90 = param_1;
  local_88 = param_2;
  if ((*param_1 & 1) == 0) {
    local_res8[0] = local_98;
    FUN_1402ed858();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)local_res8);
    pFVar6 = (FARPROC)0x0;
  }
  else {
    hLibModule = *(HMODULE *)pcVar8;
    lVar1 = ((longlong)((longlong)param_2 + (-0x140000000 - (ulonglong)param_1[3])) >> 3 &
            0xffffffffU) * 8;
    lVar7 = (ulonglong)param_1[4] + lVar1;
    uVar5 = -(int)((longlong)*(undefined8 *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar7) >> 0x3f);
    local_78 = (ulonglong)uVar5 ^ 1;
    if (uVar5 == 1) {
      pcStack_70 = (char *)(ulonglong)*(ushort *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar7);
    }
    else {
      pcStack_70 = IMAGE_DOS_HEADER_140000000.e_magic +
                   (ulonglong)*(uint *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar7) + 2;
    }
    pFVar6 = (FARPROC)0x0;
    if ((DAT_140436488 == 0) ||
       (pFVar6 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_140426ae8)(0,local_98),
       pFVar6 == (FARPROC)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((DAT_140436488 == 0) ||
             (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_140426ae8)(1,local_98),
             hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryExA(local_80,(HANDLE)0x0,0), hLibModule == (HMODULE)0x0)) &&
           ((local_58 = GetLastError(), DAT_140436490 == 0 ||
            (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_140426ae8)(3,local_98),
            hLibModule == (HMODULE)0x0)))) {
          local_res8[0] = local_98;
          FUN_1402ed858();
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)local_res8);
          return local_60;
        }
        LOCK();
        pHVar2 = *(HMODULE *)pcVar8;
        *(HMODULE *)pcVar8 = hLibModule;
        UNLOCK();
        if (pHVar2 == hLibModule) {
          FreeLibrary(hLibModule);
        }
      }
      local_68 = hLibModule;
      if (DAT_140436488 != 0) {
        pFVar6 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_140426ae8)(2,local_98);
      }
      if (((pFVar6 == (FARPROC)0x0) &&
          ((((param_1[5] == 0 || (param_1[7] == 0)) ||
            ((lVar7 = (longlong)hLibModule[0xf].unused,
             *(int *)((longlong)&hLibModule->unused + lVar7) != 0x4550 ||
             (((*(int *)((longlong)&hLibModule[2].unused + lVar7) != (int)local_res8[0] ||
               (hLibModule != *(HMODULE *)((longlong)&hLibModule[0xc].unused + lVar7))) ||
              (pFVar6 = *(FARPROC *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar1 + (ulonglong)uVar3),
              pFVar6 == (FARPROC)0x0)))))) &&
           (pFVar6 = GetProcAddress(hLibModule,pcStack_70), pFVar6 == (FARPROC)0x0)))) &&
         ((local_58 = GetLastError(), DAT_140436490 == 0 ||
          (pFVar6 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_140426ae8)(4,local_98),
          pFVar6 == (FARPROC)0x0)))) {
        local_res8[0] = local_98;
        FUN_1402ed858();
        RaiseException(0xc06d007f,0,1,(ULONG_PTR *)local_res8);
        FUN_1402ed4ec();
        pFVar6 = local_60;
      }
      if (((IMAGE_LOAD_CONFIG_DIRECTORY64_1404364b0.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT)
           == 0) || (DAT_140436498 != 0)) {
        *param_2 = (longlong)pFVar6;
      }
      else {
        cVar4 = FUN_1402ed5a8();
        if (cVar4 == '\0') {
          do {
          } while (DAT_1404e4f08 != 0);
          LOCK();
          DAT_1404e4f08 = 1;
          UNLOCK();
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(&DAT_1404e4f08);
        }
        FUN_1402ed774(param_2,8,4,local_res8);
        *param_2 = (longlong)pFVar6;
        FUN_1402ed774(param_2,8,(ulonglong)local_res8[0] & 0xffffffff,local_res8);
        cVar4 = FUN_1402ed5a8();
        if (cVar4 == '\0') {
          DAT_1404e4f08 = 0;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(&DAT_1404e4f08);
        }
      }
    }
    if (DAT_140436488 != 0) {
      local_58 = 0;
      local_68 = hLibModule;
      local_60 = pFVar6;
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(5,local_98);
    }
    FUN_1402ed858();
  }
  return pFVar6;
}

