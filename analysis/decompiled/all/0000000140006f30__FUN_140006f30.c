// Function: FUN_140006f30
// Addr: 140006f30
// Size: 1754 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_140006f30(undefined1 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  LSTATUS LVar4;
  tm *ptVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  HANDLE hObject;
  size_t sVar7;
  HANDLE pvVar8;
  INT_PTR IVar9;
  char ****ppppcVar10;
  char *_Source;
  undefined1 uVar11;
  DWORD DVar12;
  DWORD local_res8 [2];
  DWORD local_res10 [2];
  DWORD local_res20 [2];
  undefined8 in_stack_ffffffffffffc738;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffc740;
  undefined4 uVar14;
  HKEY local_3888;
  __time64_t local_3880;
  undefined4 local_3878;
  undefined4 *local_3874;
  DWORD local_3868;
  undefined8 local_3864;
  undefined4 local_385c;
  undefined4 local_3858;
  int local_3854;
  char *local_3850;
  undefined4 local_3848;
  int local_3844;
  char *local_3840;
  undefined8 local_3838;
  undefined5 uStack_3830;
  undefined3 uStack_382b;
  undefined5 uStack_3828;
  char ***local_3818 [3];
  ulonglong local_3800;
  char ***local_37f8 [3];
  ulonglong local_37e0;
  undefined8 local_37d8;
  undefined8 uStack_37d0;
  undefined8 local_37c8;
  undefined8 uStack_37c0;
  undefined8 local_37b8;
  undefined8 uStack_37b0;
  undefined8 local_37a8;
  undefined8 uStack_37a0;
  char local_3798 [256];
  char local_3698 [511];
  undefined1 local_3499;
  undefined1 local_3498 [528];
  WCHAR local_3288 [1040];
  CHAR local_2a68 [4096];
  WCHAR local_1a68 [3352];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffc738 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffc740 >> 0x20);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,param_1);
  uVar11 = 0;
  FUN_1402c83d4(&local_3880);
  local_3838 = 0;
  uStack_3830 = 0;
  uStack_382b = 0;
  uStack_3828 = 0;
  ptVar5 = _gmtime64(&local_3880);
  FUN_1402c8b44(&local_3838,0x15,"%Y-%m-%dT%H_%M_%SZ",ptVar5);
  FUN_1404217a0(local_3288,0,0x820);
  FUN_1404217a0(local_3498,0,0x208);
  FUN_1402c9314(local_3288,0x410);
  FUN_1402c9d90(local_3288,0x410,&DAT_140473684);
  FUN_1402c9654(local_3498,"wallpaper64",0x103);
  FUN_1402c9d90(local_3288,0x410,local_3498);
  FUN_1402c9d90(local_3288,0x410,&DAT_140473694);
  local_37d8 = 0;
  uStack_37d0 = 0;
  local_37c8 = 0;
  uStack_37c0 = 0;
  local_37b8 = 0;
  uStack_37b0 = 0;
  local_37a8 = 0;
  uStack_37a0 = 0;
  FUN_14000d080(&local_37d8,0x40,"%i_%i_%iV_",2,CONCAT44(uVar13,8),CONCAT44(uVar14,0x2a));
  FUN_1402c9654(local_3498,&local_37d8,0x103);
  FUN_1402c9d90(local_3288,0x410,local_3498);
  FUN_1404217a0(local_3498,0,0x208);
  FUN_1402c9654(local_3498,&local_3838,0x103);
  FUN_1402c9d90(local_3288,0x410,local_3498);
  FUN_1402c9d90(local_3288,0x410,L".mdmp");
  hModule = LoadLibraryW(L"DBGHELP.DLL");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar6 = GetProcAddress(hModule,"MiniDumpWriteDump"), pFVar6 != (FARPROC)0x0)) {
    DVar12 = 0;
    hObject = CreateFileW(local_3288,0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffffffffffff) {
      local_3868 = GetCurrentThreadId();
      puVar2 = DAT_1404e8ae8;
      local_385c = 0;
      local_3698[0] = '\0';
      local_3798[0] = '\0';
      local_3864 = param_3;
      for (puVar1 = (undefined8 *)*DAT_1404e8ae8; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1)
      {
        FUN_140016fc0(local_3818,puVar1 + 2);
        FUN_140016fc0(local_37f8,puVar1 + 6);
        ppppcVar10 = local_3818;
        if (0xf < local_3800) {
          ppppcVar10 = (char ****)local_3818[0];
        }
        strncat(local_3698,(char *)ppppcVar10,0x200);
        strncat(local_3698,"\n",0x200);
        ppppcVar10 = local_37f8;
        if (0xf < local_37e0) {
          ppppcVar10 = (char ****)local_37f8[0];
        }
        strncat(local_3698,(char *)ppppcVar10,0x200);
        strncat(local_3698,"\n",0x200);
        FUN_140017240(local_37f8);
        FUN_140017240(local_3818);
      }
      local_3850 = local_3698;
      local_3499 = 0;
      local_3858 = 0x10000;
      sVar7 = strlen(local_3698);
      local_3854 = (int)sVar7 + 1;
      LVar4 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Valve\\Steam\\Users",0,0xf003f,
                            &local_3888);
      if (LVar4 == 0) {
        local_res10[0] = 0;
        LVar4 = RegQueryInfoKeyW(local_3888,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_res10,
                                 local_res20,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                 (LPDWORD)0x0,(PFILETIME)0x0);
        if ((LVar4 == 0) && (strncat(local_3798,"[steamusers]\n",0x100), local_res10[0] != 0)) {
          do {
            local_res8[0] = 0x100;
            local_2a68[0] = '\0';
            LVar4 = RegEnumKeyExA(local_3888,DVar12,local_2a68,local_res8,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
            if ((LVar4 == 0) && (local_res8[0] != 0)) {
              strncat(local_3798,local_2a68,0x100);
              strncat(local_3798,"\n",0x100);
            }
            DVar12 = DVar12 + 1;
          } while (DVar12 < local_res10[0]);
        }
        RegCloseKey(local_3888);
      }
      strncat(local_3798,"[environment]\n",0x100);
      cVar3 = FUN_140015180(10,0,0);
      if (cVar3 == '\0') {
        cVar3 = FUN_140015180(6,3,0);
        if (cVar3 == '\0') {
          cVar3 = FUN_140015180(6,2,0);
          if (cVar3 == '\0') {
            cVar3 = FUN_140015180(6,1,1);
            if (cVar3 == '\0') {
              cVar3 = FUN_140015180(6,1,0);
              _Source = "7";
              if (cVar3 == '\0') {
                _Source = "?";
              }
            }
            else {
              _Source = "7.1";
            }
          }
          else {
            _Source = "8";
          }
        }
        else {
          _Source = "8.1";
        }
      }
      else {
        _Source = "10";
      }
      strncat(local_3798,_Source,0x100);
      strncat(local_3798,"\n",0x100);
      local_3840 = local_3798;
      local_3848 = 0x10001;
      sVar7 = strlen(local_3798);
      local_3844 = (int)sVar7 + 1;
      local_3878 = 2;
      local_3874 = &local_3858;
      DVar12 = GetCurrentProcessId();
      pvVar8 = GetCurrentProcess();
      IVar9 = (*pFVar6)(pvVar8,(ulonglong)DVar12,hObject,0,&local_3868,&local_3878,0);
      uVar11 = 0;
      if ((int)IVar9 == 1) {
        FUN_1404217a0(local_1a68,0,0x1a28);
        FUN_1404217a0(local_2a68,0,0x1000);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
        FUN_1400069b0(param_3,local_2a68,local_res10);
        FUN_1402c9d90(local_1a68,0xd14,local_2a68);
        FUN_1402c9d90(local_1a68,0xd14,L"\n\nCrash information written to: ");
        FUN_1402c9d90(local_1a68,0xd14,local_3288);
        if ((char)local_res10[0] != '\0') {
          MessageBoxW((HWND)0x0,local_1a68,L"Error",0x1010);
        }
        uVar11 = 1;
      }
      CloseHandle(hObject);
    }
  }
  FreeLibrary(hModule);
  return uVar11;
}

