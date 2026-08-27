// Function: FUN_1402fb490
// Addr: 1402fb490
// Size: 46 bytes


void FUN_1402fb490(undefined8 *param_1)

{
  HeapFree(*(HANDLE *)param_1[6],0,(LPVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

