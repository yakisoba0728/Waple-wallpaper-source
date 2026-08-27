// Function: __acrt_initialize_lowio
// Addr: 1402dbaec
// Size: 59 bytes


/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  int iVar1;
  
  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_1402db8e4();
    FUN_1402db9e4();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}

