// Function: FUN_1402913d0
// Addr: 1402913d0
// Size: 25 bytes


LARGE_INTEGER FUN_1402913d0(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (LARGE_INTEGER)local_res8[0].QuadPart;
}

