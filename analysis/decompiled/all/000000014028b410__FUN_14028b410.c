// Function: FUN_14028b410
// Addr: 14028b410
// Size: 64 bytes


int FUN_14028b410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_1404e3a58 == -1) {
    iVar1 = FUN_1402d1cc4();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1404e3a58,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

