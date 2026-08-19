// Function: FUN_1404a703c
// Addr: 1404a703c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a703c(void)

{
  int in_EAX;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

