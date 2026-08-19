// Function: FUN_1400cee70
// Addr: 1400cee70
// Size: 10 bytes


void FUN_1400cee70(void)

{
  code *pcVar1;
  
  FUN_140293780();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

