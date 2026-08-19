// Function: FUN_1404bf9a0
// Addr: 1404bf9a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf9a0(char *param_1,int *param_2)

{
  *param_2 = *param_2 + (int)param_2;
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

