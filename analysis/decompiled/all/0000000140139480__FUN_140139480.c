// Function: FUN_140139480
// Addr: 140139480
// Size: 174 bytes


ulonglong FUN_140139480(void)

{
  LSTATUS LVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  DWORD local_res8 [2];
  int local_res10 [2];
  HKEY local_res18 [2];
  
  uVar2 = FUN_140015180(10,0,0);
  if ((char)uVar2 != '\0') {
    LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                          0xf003f,local_res18);
    uVar2 = CONCAT44(extraout_var,LVar1);
    if (LVar1 == 0) {
      local_res8[0] = 4;
      LVar1 = RegQueryValueExW(local_res18[0],L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                               (LPBYTE)local_res10,local_res8);
      if ((LVar1 == 0) && (local_res10[0] != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      RegCloseKey(local_res18[0]);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

