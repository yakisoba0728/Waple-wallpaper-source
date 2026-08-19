// Function: FUN_140036050
// Addr: 140036050
// Size: 5 bytes


void FUN_140036050(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

