// Function: FUN_1404bad40
// Addr: 1404bad40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad40(void)

{
  char *in_R9;
  
  *in_R9 = *in_R9 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

