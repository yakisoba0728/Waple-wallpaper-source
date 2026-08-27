// Function: FUN_1402913f0
// Addr: 1402913f0
// Size: 44 bytes


void FUN_1402913f0(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1404e3b30.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_1404e3b30 = local_res8[0];
  }
  return;
}

