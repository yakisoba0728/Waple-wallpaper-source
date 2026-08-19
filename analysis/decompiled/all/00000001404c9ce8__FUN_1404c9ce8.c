// Function: FUN_1404c9ce8
// Addr: 1404c9ce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9ce8(int *param_1)

{
  int unaff_EBX;
  
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

