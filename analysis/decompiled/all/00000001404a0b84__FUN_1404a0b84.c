// Function: FUN_1404a0b84
// Addr: 1404a0b84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b84(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

