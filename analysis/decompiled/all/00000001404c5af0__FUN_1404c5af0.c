// Function: FUN_1404c5af0
// Addr: 1404c5af0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5af0(int param_1)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

