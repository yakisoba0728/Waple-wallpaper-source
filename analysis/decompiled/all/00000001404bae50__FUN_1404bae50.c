// Function: FUN_1404bae50
// Addr: 1404bae50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bae50(void)

{
  char *in_R9;
  
  *in_R9 = *in_R9 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

