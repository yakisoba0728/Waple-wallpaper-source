// Function: FUN_1404d153c
// Addr: 1404d153c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d153c(char param_1)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

