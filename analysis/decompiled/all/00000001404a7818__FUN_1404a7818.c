// Function: FUN_1404a7818
// Addr: 1404a7818
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7818(char param_1)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

