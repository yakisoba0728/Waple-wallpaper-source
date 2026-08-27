// Function: FUN_14039bac0
// Addr: 14039bac0
// Size: 538 bytes


undefined4 * FUN_14039bac0(char *param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  size_t sVar4;
  LPCWSTR lpWideCharStr;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar3 = (undefined8 *)_calloc_base(1,0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined4 *)0x0;
  }
  sVar4 = strlen(param_1);
  uVar7 = (int)sVar4 + 1;
  lpWideCharStr = (LPCWSTR)_malloc_base((ulonglong)uVar7 * 2);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    iVar1 = MultiByteToWideChar(0xfde9,8,param_1,-1,lpWideCharStr,uVar7);
    if (iVar1 < 1) {
      FUN_1402c9654(lpWideCharStr,param_1,uVar7);
    }
    hFile = CreateFileW(lpWideCharStr,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                        (HANDLE)0x0);
    thunk_FUN_1402d9040(lpWideCharStr);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
      *(DWORD *)(puVar3 + 1) = DVar2;
      hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
      puVar3[2] = hFileMappingObject;
      if (hFileMappingObject != (HANDLE)0x0) {
        pvVar5 = MapViewOfFile(hFileMappingObject,4,0,0,0);
        *puVar3 = pvVar5;
        if (pvVar5 != (LPVOID)0x0) {
          uVar7 = *(uint *)(puVar3 + 1);
          if ((uVar7 < 0x80000000) &&
             (puVar6 = (undefined4 *)_calloc_base(1,0x30), puVar6 != (undefined4 *)0x0)) {
            *(undefined2 *)((longlong)puVar6 + 5) = 0;
            *(undefined1 *)((longlong)puVar6 + 7) = 0;
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 1) = 0;
            *(undefined8 *)(puVar6 + 2) = 0;
            *(undefined8 *)(puVar6 + 4) = 0;
            *(undefined8 *)(puVar6 + 6) = 0;
            *(undefined8 *)(puVar6 + 8) = 0;
            *(undefined8 *)(puVar6 + 10) = 0;
            *puVar6 = 1;
            *(undefined1 *)(puVar6 + 1) = 1;
            *(undefined8 *)(puVar6 + 2) = 0;
            *(LPVOID *)(puVar6 + 4) = pvVar5;
            *(code **)(puVar6 + 10) = FUN_14039efb0;
            puVar6[6] = uVar7;
            puVar6[7] = 3;
            *(undefined8 **)(puVar6 + 8) = puVar3;
            CloseHandle(hFile);
            return puVar6;
          }
          UnmapViewOfFile((LPCVOID)*puVar3);
          CloseHandle((HANDLE)puVar3[2]);
          thunk_FUN_1402d9040(puVar3);
          CloseHandle(hFile);
          return (undefined4 *)0x0;
        }
      }
      CloseHandle(hFile);
    }
  }
  thunk_FUN_1402d9040(puVar3);
  return (undefined4 *)0x0;
}

