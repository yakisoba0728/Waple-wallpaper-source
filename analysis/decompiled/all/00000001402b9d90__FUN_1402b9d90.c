// Function: FUN_1402b9d90
// Addr: 1402b9d90
// Size: 80 bytes


undefined8 FUN_1402b9d90(void)

{
  wchar_t **ppwVar1;
  uint local_res8 [8];
  
  ppwVar1 = ___lc_locale_name_func();
  if (ppwVar1[5] != (wchar_t *)0x0) {
    local_res8[0] = 0;
    (*DAT_140426278)(ppwVar1[5],0x22,local_res8,2);
    local_res8[0] = local_res8[0] & 0xffff;
    if (local_res8[0] != 0x30) {
      if (local_res8[0] == 0x31) {
        return 1;
      }
      if (local_res8[0] != 0x32) {
        return 0;
      }
      return 3;
    }
  }
  return 2;
}

