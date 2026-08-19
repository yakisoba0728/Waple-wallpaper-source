// Function: FUN_1404a1e70
// Addr: 1404a1e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1e70(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

