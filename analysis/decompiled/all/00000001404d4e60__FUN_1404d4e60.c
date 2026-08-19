// Function: FUN_1404d4e60
// Addr: 1404d4e60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4e60(int param_1)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

