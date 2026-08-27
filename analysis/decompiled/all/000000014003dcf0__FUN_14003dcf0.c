// Function: FUN_14003dcf0
// Addr: 14003dcf0
// Size: 78 bytes


uint FUN_14003dcf0(void)

{
  int iVar1;
  uint local_res8 [8];
  
  if (((int)DAT_1404dfbec < 0) &&
     (iVar1 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000100c,(LPWSTR)local_res8,2), iVar1 != 0)) {
    DAT_1404dfbec = 6;
    if (local_res8[0] < 6) {
      DAT_1404dfbec = local_res8[0];
    }
    return DAT_1404dfbec;
  }
  return DAT_1404dfbec;
}

