// Function: __acrt_uninitialize_winapi_thunks
// Addr: 1402dcb34
// Size: 65 bytes


/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_1404e4ca0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_1404e4d58);
  }
  return 1;
}

