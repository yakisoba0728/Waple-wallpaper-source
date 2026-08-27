// Function: FUN_1402c9290
// Addr: 1402c9290
// Size: 132 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1402c9290(uint param_1)

{
  UINT UVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  WCHAR local_18 [4];
  ulonglong local_10;
  
  local_10 = DAT_1404dc040 ^ (ulonglong)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 == 0) {
      return true;
    }
    local_18[0] = (short)param_1 + L'@';
    local_18[1] = L':';
    local_18[2] = L'\\';
    local_18[3] = 0;
    UVar1 = GetDriveTypeW(local_18);
    if (UVar1 != 0) {
      return UVar1 != 1;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_1402caf10();
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0xd;
    FUN_1402cad8c();
  }
  return false;
}

