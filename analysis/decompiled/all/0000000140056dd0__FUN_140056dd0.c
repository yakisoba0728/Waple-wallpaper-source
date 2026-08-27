// Function: FUN_140056dd0
// Addr: 140056dd0
// Size: 41 bytes


longlong * FUN_140056dd0(longlong *param_1,longlong *param_2)

{
  if (0xf < (ulonglong)param_1[3]) {
    *param_2 = param_1[2] + *param_1;
    return param_2;
  }
  *param_2 = param_1[2] + (longlong)param_1;
  return param_2;
}

