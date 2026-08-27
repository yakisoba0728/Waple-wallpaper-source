// Function: FUN_14028bc00
// Addr: 14028bc00
// Size: 86 bytes


ulonglong FUN_14028bc00(void)

{
  ulonglong uVar1;
  _STARTUPINFOW local_78;
  
  local_78.cb = 0;
  local_78._4_4_ = 0;
  local_78.lpReserved = (LPWSTR)0x0;
  local_78.hStdError = (HANDLE)0x0;
  local_78.lpDesktop = (LPWSTR)0x0;
  local_78.lpTitle = (LPWSTR)0x0;
  local_78.dwX = 0;
  local_78.dwY = 0;
  local_78.dwXSize = 0;
  local_78.dwYSize = 0;
  local_78.dwXCountChars = 0;
  local_78.dwYCountChars = 0;
  local_78.dwFillAttribute = 0;
  local_78.dwFlags = 0;
  local_78.wShowWindow = 0;
  local_78.cbReserved2 = 0;
  local_78._68_4_ = 0;
  local_78.lpReserved2 = (LPBYTE)0x0;
  local_78.hStdInput = (HANDLE)0x0;
  local_78.hStdOutput = (HANDLE)0x0;
  GetStartupInfoW(&local_78);
  uVar1 = local_78._64_8_ & 0xffff;
  if ((local_78._56_8_ & 0x100000000) == 0) {
    uVar1 = 10;
  }
  return uVar1;
}

