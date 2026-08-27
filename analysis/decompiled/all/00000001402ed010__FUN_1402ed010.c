// Function: FUN_1402ed010
// Addr: 1402ed010
// Size: 8 bytes


void FUN_1402ed010(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}

