// Function: _Getcoll
// Addr: 140293a50
// Size: 52 bytes


/* Library Function - Single Match
    _Getcoll
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_Collvec * __cdecl _Getcoll(_Collvec *__return_storage_ptr__)

{
  uint uVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  
  uVar1 = func_0x0001402d5c50();
  __return_storage_ptr__->_Page = uVar1;
  ppwVar2 = ___lc_locale_name_func();
  pwVar3 = ppwVar2[1];
  __return_storage_ptr__->_LocaleName = pwVar3;
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = (wchar_t *)FUN_1402d6770();
    __return_storage_ptr__->_LocaleName = pwVar3;
  }
  return __return_storage_ptr__;
}

