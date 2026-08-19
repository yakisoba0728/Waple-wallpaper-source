// Function: FUN_1404d06bc
// Addr: 1404d06bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d06bc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xea);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

