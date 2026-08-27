// Function: FUN_1402fb4c0
// Addr: 1402fb4c0
// Size: 37 bytes


void FUN_1402fb4c0(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

