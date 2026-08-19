// Function: FUN_1404a1620
// Addr: 1404a1620
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1620(void)

{
  int in_EAX;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

