// Function: FUN_1404bb7d0
// Addr: 1404bb7d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb7d0(int *param_1)

{
  int unaff_ESP;
  
  *param_1 = *param_1 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

