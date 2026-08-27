// Function: _getdrive
// Addr: 1402dcce8
// Size: 246 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _getdrive
   
   Library: Visual Studio 2019 Release */

int __cdecl _getdrive(void)

{
  WCHAR WVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_248 [32];
  WCHAR local_228;
  short local_226;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_248;
  FUN_1404217a0(&local_228,0,0x20a);
  DVar2 = GetCurrentDirectoryW(0x105,&local_228);
  if (0x104 < DVar2) {
    lpBuffer = (LPWSTR)_calloc_base(DVar2 + 1,2);
    iVar5 = 0;
    if ((lpBuffer == (LPWSTR)0x0) || (DVar2 = GetCurrentDirectoryW(DVar2 + 1,lpBuffer), DVar2 == 0))
    {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0xc;
    }
    else if ((*lpBuffer != L'\0') && (lpBuffer[1] == L':')) {
      WVar1 = *lpBuffer;
      uVar4 = (ushort)WVar1 - 0x20;
      if (0x19 < (ushort)WVar1 - 0x61) {
        uVar4 = (uint)(ushort)WVar1;
      }
      iVar5 = uVar4 - 0x40;
    }
    FUN_1402d9040(lpBuffer);
    return iVar5;
  }
  if (local_228 == L'\0') {
    return 0;
  }
  if (local_226 != 0x3a) {
    return 0;
  }
  uVar4 = (ushort)local_228 - 0x20;
  if (0x19 < (ushort)local_228 - 0x61) {
    uVar4 = (uint)(ushort)local_228;
  }
  return uVar4 - 0x40;
}

