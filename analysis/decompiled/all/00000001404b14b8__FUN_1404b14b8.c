// Function: FUN_1404b14b8
// Addr: 1404b14b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b14b8(void)

{
  char *in_R9;
  
  *in_R9 = *in_R9 + '\x13';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

