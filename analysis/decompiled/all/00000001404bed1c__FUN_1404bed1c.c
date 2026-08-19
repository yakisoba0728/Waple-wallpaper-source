// Function: FUN_1404bed1c
// Addr: 1404bed1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed1c(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

