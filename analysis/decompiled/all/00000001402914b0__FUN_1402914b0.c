// Function: FUN_1402914b0
// Addr: 1402914b0
// Size: 66 bytes


int * FUN_1402914b0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_1402d6310();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e3b50 + (longlong)param_2 * 0x28));
  }
  return param_1;
}

