// Function: FUN_140057720
// Addr: 140057720
// Size: 74 bytes


void FUN_140057720(LARGE_INTEGER *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  lVar1 = param_1->QuadPart;
  param_1->QuadPart = (LONGLONG)local_res8[0];
  *(float *)(param_1 + 2) =
       (float)(local_res8[0].QuadPart - lVar1) / (float)param_1[1].QuadPart +
       *(float *)(param_1 + 2);
  return;
}

