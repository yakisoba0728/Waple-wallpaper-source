// Function: FUN_1404c90e4
// Addr: 1404c90e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c90e4(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

