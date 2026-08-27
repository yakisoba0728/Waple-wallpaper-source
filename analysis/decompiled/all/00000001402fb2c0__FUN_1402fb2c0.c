// Function: FUN_1402fb2c0
// Addr: 1402fb2c0
// Size: 449 bytes


undefined8 FUN_1402fb2c0(longlong *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  DWORD local_res8 [2];
  LARGE_INTEGER local_res18;
  ulonglong uVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0x28;
  }
  uVar6 = 0;
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    return 1;
  }
  BVar1 = GetFileSizeEx(hFile,&local_res18);
  if ((((BVar1 == 0) || (0x7fffffff < CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart))) ||
      (CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) == 0)) ||
     (hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0),
     hFileMappingObject == (HANDLE)0x0)) {
LAB_1402fb456:
    CloseHandle(hFile);
    uVar4 = 0x51;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(DWORD *)(param_1 + 1) = local_res18.s.LowPart;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    pvVar2 = MapViewOfFile(hFileMappingObject,4,0,0,0);
    *param_1 = (longlong)pvVar2;
    CloseHandle(hFileMappingObject);
    if (*param_1 == 0) {
      pvVar2 = HeapAlloc(*(HANDLE *)param_1[6],0,(longlong)(int)param_1[1]);
      *param_1 = (longlong)pvVar2;
      if (pvVar2 == (LPVOID)0x0) goto LAB_1402fb456;
      do {
        BVar1 = ReadFile(hFile,(LPVOID)(uVar6 + *param_1),(int)param_1[1] - (int)uVar6,local_res8,
                         (LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          HeapFree(*(HANDLE *)param_1[6],0,(LPVOID)*param_1);
          goto LAB_1402fb456;
        }
        uVar5 = (int)uVar6 + local_res8[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != *(uint *)(param_1 + 1));
      pcVar3 = FUN_1402fb490;
    }
    else {
      pcVar3 = FUN_1402fb4c0;
    }
    param_1[5] = (longlong)pcVar3;
    CloseHandle(hFile);
    param_1[2] = *param_1;
    uVar4 = 0;
    param_1[3] = (longlong)param_2;
    param_1[4] = 0;
  }
  return uVar4;
}

