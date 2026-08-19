// Function: FUN_1404a8f04
// Addr: 1404a8f04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8f04(char *param_1)

{
  char in_AL;
  
  *param_1 = *param_1 + in_AL + -0x72;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

