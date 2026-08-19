// Function: FUN_1404b2788
// Addr: 1404b2788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2788(void)

{
  int unaff_ESP;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

