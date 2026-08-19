// Function: FUN_14028b4e0
// Addr: 14028b4e0
// Size: 64 bytes


int FUN_14028b4e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_1404e3b28 == -1) {
    iVar1 = func_0x0001402d1d94();
  }
  else {
    iVar1 = func_0x0001402d1e10(&DAT_1404e3b28,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

