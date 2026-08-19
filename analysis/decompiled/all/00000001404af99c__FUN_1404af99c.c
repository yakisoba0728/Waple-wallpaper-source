// Function: FUN_1404af99c
// Addr: 1404af99c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af99c(void)

{
  int in_EAX;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

