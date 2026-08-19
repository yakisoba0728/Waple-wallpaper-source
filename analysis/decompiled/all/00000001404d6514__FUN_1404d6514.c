// Function: FUN_1404d6514
// Addr: 1404d6514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6514(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

