// Function: FUN_1404a81d4
// Addr: 1404a81d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a81d4(char *param_1,char *param_2)

{
  char in_AL;
  
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2 + in_AL + *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

