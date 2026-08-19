// Function: FUN_1404d5bb8
// Addr: 1404d5bb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5bb8(int param_1)

{
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI + param_1 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

