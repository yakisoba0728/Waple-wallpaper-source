// Function: FUN_1400604d0
// Addr: 1400604d0
// Size: 61 bytes


float FUN_1400604d0(LARGE_INTEGER *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  lVar1 = param_1->QuadPart;
  param_1->QuadPart = (LONGLONG)local_res8[0];
  return (float)(local_res8[0].QuadPart - lVar1) / (float)param_1[1].QuadPart;
}

