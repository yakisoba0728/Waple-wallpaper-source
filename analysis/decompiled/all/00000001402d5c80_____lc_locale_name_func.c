// Function: ___lc_locale_name_func
// Addr: 1402d5c80
// Size: 50 bytes


/* Library Function - Single Match
    ___lc_locale_name_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t ** __cdecl ___lc_locale_name_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_1402d9964();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  FUN_1402d9b18(lVar1,local_res8);
  return (wchar_t **)(local_res8[0] + 0x128);
}

