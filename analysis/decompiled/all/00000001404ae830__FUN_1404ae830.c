// Function: FUN_1404ae830
// Addr: 1404ae830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae830(void)

{
  char *in_R9;
  
  *in_R9 = *in_R9 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

