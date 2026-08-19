// Function: FUN_1404bc464
// Addr: 1404bc464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc464(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

