// Function: FUN_14039efb0
// Addr: 14039efb0
// Size: 41 bytes


void FUN_14039efb0(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)*param_1);
  CloseHandle((HANDLE)param_1[2]);
  thunk_FUN_1402d9040(param_1);
  return;
}

