// Function: FUN_1404c0168
// Addr: 1404c0168
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0168(void)

{
  char *unaff_RBX;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + ',';
  if (-1 < *unaff_RDI) {
    *unaff_RBX = *unaff_RBX + ',';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

