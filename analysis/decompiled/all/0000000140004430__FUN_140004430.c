// Function: FUN_140004430
// Addr: 140004430
// Size: 20 bytes


int FUN_140004430(void)

{
  int iVar1;
  code *pcVar2;
  
  FUN_140199850();
  if (DAT_1404e3b28 == -1) {
    iVar1 = func_0x0001402d1d94();
  }
  else {
    iVar1 = func_0x0001402d1e10(&DAT_1404e3b28,FUN_140424fa0);
  }
  pcVar2 = (code *)0x0;
  if (iVar1 == 0) {
    pcVar2 = FUN_140424fa0;
  }
  return (pcVar2 != (code *)0x0) - 1;
}

