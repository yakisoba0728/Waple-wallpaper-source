// Function: FUN_1404c5588
// Addr: 1404c5588
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5588(void)

{
  int unaff_EBX;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

