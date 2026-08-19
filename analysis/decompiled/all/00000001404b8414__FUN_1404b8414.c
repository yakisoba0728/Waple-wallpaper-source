// Function: FUN_1404b8414
// Addr: 1404b8414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8414(int *param_1)

{
  int unaff_EBX;
  
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

