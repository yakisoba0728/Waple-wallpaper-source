// Function: FUN_14010d9b0
// Addr: 14010d9b0
// Size: 228 bytes


bool FUN_14010d9b0(HWND param_1)

{
  int iVar1;
  HANDLE pvVar2;
  HWND hWnd;
  WCHAR local_48 [32];
  
  local_48[0] = L'\0';
  local_48[1] = L'\0';
  local_48[2] = L'\0';
  local_48[3] = L'\0';
  local_48[4] = L'\0';
  local_48[5] = L'\0';
  local_48[6] = L'\0';
  local_48[7] = L'\0';
  local_48[8] = L'\0';
  local_48[9] = L'\0';
  local_48[10] = L'\0';
  local_48[0xb] = L'\0';
  local_48[0xc] = L'\0';
  local_48[0xd] = L'\0';
  local_48[0xe] = L'\0';
  local_48[0xf] = L'\0';
  local_48[0x10] = L'\0';
  local_48[0x11] = L'\0';
  local_48[0x12] = L'\0';
  local_48[0x13] = L'\0';
  local_48[0x14] = L'\0';
  local_48[0x15] = L'\0';
  local_48[0x16] = L'\0';
  local_48[0x17] = L'\0';
  local_48[0x18] = L'\0';
  local_48[0x19] = L'\0';
  local_48[0x1a] = L'\0';
  local_48[0x1b] = L'\0';
  local_48[0x1c] = L'\0';
  local_48[0x1d] = L'\0';
  local_48[0x1e] = L'\0';
  local_48[0x1f] = L'\0';
  GetClassNameW(param_1,local_48,0x20);
  pvVar2 = GetPropW(param_1,L"WallpaperEngineParent");
  iVar1 = FUN_1402c12c0(local_48,L"SysListView32");
  if (iVar1 == 0) {
    hWnd = GetParent(param_1);
    GetClassNameW(hWnd,local_48,0x20);
    iVar1 = FUN_1402c12c0(local_48,L"SHELLDLL_DefView");
    return iVar1 == 0;
  }
  if (pvVar2 != (HANDLE)0x1) {
    iVar1 = FUN_1402c12c0(local_48,L"SHELLDLL_DefView");
    if (iVar1 != 0) {
      iVar1 = FUN_1402c12c0(local_48,L"Progman");
      return iVar1 == 0;
    }
  }
  return true;
}

