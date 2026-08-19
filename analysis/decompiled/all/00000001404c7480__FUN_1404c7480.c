// Function: FUN_1404c7480
// Addr: 1404c7480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7480(void)

{
  char *unaff_RDI;
  char in_R10B;
  
  *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

