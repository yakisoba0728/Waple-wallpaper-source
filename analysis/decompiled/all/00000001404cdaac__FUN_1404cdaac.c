// Function: FUN_1404cdaac
// Addr: 1404cdaac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdaac(char param_1)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

