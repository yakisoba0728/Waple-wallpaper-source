// Function: FUN_1402ed4d0
// Addr: 1402ed4d0
// Size: 8 bytes


void FUN_1402ed4d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}

