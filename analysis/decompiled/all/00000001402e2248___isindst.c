// Function: _isindst
// Addr: 1402e2248
// Size: 48 bytes


/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  int iVar1;
  
  __acrt_lock(6);
  iVar1 = FUN_1402e168c(_Time);
  __acrt_unlock(6);
  return iVar1;
}

