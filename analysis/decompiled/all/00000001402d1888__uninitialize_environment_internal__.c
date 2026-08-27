// Function: uninitialize_environment_internal<>
// Addr: 1402d1888
// Size: 26 bytes


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != DAT_1404e4590) {
    free_environment<>();
  }
  return;
}

