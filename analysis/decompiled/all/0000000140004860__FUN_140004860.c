// Function: FUN_140004860
// Addr: 140004860
// Size: 16 bytes


int FUN_140004860(void)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140214120();
  if (DAT_1404e3b28 == -1) {
    iVar1 = func_0x0001402d1d94();
  }
  else {
    iVar1 = func_0x0001402d1e10(&DAT_1404e3b28,0x140425440);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = 0x140425440;
  }
  return (lVar2 != 0) - 1;
}

