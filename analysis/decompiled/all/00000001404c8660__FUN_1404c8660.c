// Function: FUN_1404c8660
// Addr: 1404c8660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8660(void)

{
  char in_AL;
  char *in_R9;
  
  *in_R9 = *in_R9 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

