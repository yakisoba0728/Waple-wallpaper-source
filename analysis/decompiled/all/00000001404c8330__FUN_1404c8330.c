// Function: FUN_1404c8330
// Addr: 1404c8330
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8330(int param_1)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

