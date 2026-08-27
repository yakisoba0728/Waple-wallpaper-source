// Function: common_getenv<>
// Addr: 1402ea3e4
// Size: 93 bytes


/* Library Function - Multiple Matches With Same Base Name
    char * __ptr64 __cdecl common_getenv<char>(char const * __ptr64 const)
    wchar_t * __ptr64 __cdecl common_getenv<wchar_t>(wchar_t const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 common_getenv<>(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (uVar2 = FUN_1402d6910(param_1,0x7fff), uVar2 < 0x7fff)) {
    __acrt_lock(0xb);
    uVar3 = FUN_1402ea444(param_1);
    __acrt_unlock(0xb);
    return uVar3;
  }
  puVar1 = (undefined4 *)FUN_1402caf34();
  *puVar1 = 0x16;
  FUN_1402cad8c();
  return 0;
}

