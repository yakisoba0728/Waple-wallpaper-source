// Function: FUN_14049e1f4
// Addr: 14049e1f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e1f4(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

