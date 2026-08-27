// Function: common_xtox_s<unsigned_long,wchar_t>
// Addr: 1402deac0
// Size: 105 bytes


/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      piVar2 = (int *)FUN_1402caf34();
      iVar1 = 0x22;
      goto LAB_1402deada;
    }
    if (param_4 - 2 < 0x23) {
      iVar1 = FUN_1402de9ec(param_1);
      return iVar1;
    }
  }
  piVar2 = (int *)FUN_1402caf34();
  iVar1 = 0x16;
LAB_1402deada:
  *piVar2 = iVar1;
  FUN_1402cad8c();
  return iVar1;
}

