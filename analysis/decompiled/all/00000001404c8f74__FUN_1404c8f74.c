// Function: FUN_1404c8f74
// Addr: 1404c8f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8f74(void)

{
  int unaff_EBX;
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = (*unaff_RDI - unaff_EBX) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

