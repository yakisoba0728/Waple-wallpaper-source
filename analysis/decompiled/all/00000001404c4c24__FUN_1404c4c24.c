// Function: FUN_1404c4c24
// Addr: 1404c4c24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4c24(int param_1,int *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

