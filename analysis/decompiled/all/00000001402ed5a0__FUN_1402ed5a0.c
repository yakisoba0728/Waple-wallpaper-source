// Function: FUN_1402ed5a0
// Addr: 1402ed5a0
// Size: 5 bytes


void FUN_1402ed5a0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}

