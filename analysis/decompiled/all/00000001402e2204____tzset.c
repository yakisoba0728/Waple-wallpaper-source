// Function: __tzset
// Addr: 1402e2204
// Size: 66 bytes


/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_1404e4dc4 == 0) {
    __acrt_lock(6);
    if (DAT_1404e4dc4 == 0) {
      FUN_1402e206c();
      LOCK();
      DAT_1404e4dc4 = DAT_1404e4dc4 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}

