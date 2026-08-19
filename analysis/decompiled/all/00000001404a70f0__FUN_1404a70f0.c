// Function: FUN_1404a70f0
// Addr: 1404a70f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a70f0(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

