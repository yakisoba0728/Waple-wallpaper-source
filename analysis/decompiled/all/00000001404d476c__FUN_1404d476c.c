// Function: FUN_1404d476c
// Addr: 1404d476c
// Size: 1 bytes


void FUN_1404d476c(byte param_1)

{
  code *pcVar1;
  char in_AL;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)((param_1 | 0x36) + in_AL);
  return;
}

