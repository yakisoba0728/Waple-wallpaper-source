// Function: FUN_1404cc1b0
// Addr: 1404cc1b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc1b0(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

