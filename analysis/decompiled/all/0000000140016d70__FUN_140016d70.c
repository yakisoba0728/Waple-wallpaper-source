// Function: FUN_140016d70
// Addr: 140016d70
// Size: 24 bytes


void FUN_140016d70(longlong *param_1,longlong param_2)

{
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)(*param_1 + param_2) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + param_2) = 0;
  return;
}

