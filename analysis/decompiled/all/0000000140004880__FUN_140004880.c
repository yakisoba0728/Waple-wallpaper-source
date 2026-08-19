// Function: FUN_140004880
// Addr: 140004880
// Size: 9 bytes


int FUN_140004880(void)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140227540();
  if (DAT_1404e3b28 == -1) {
    iVar1 = func_0x0001402d1d94();
  }
  else {
    iVar1 = func_0x0001402d1e10(&DAT_1404e3b28,0x140425480);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = 0x140425480;
  }
  return (lVar2 != 0) - 1;
}

