// Function: FUN_1404c4058
// Addr: 1404c4058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4058(int param_1)

{
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI + param_1 + (uint)in_CF;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

