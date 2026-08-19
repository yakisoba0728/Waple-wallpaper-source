// Function: FUN_1404a4040
// Addr: 1404a4040
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4040(void)

{
  char in_CF;
  
  bRam000000015ec6404d = bRam000000015ec6404d >> 1 | in_CF << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

