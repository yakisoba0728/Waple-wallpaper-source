// Function: FUN_1404abde0
// Addr: 1404abde0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abde0(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

