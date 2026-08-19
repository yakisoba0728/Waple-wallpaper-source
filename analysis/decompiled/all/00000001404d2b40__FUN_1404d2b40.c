// Function: FUN_1404d2b40
// Addr: 1404d2b40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2b40(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

