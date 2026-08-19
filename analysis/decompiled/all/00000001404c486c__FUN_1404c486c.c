// Function: FUN_1404c486c
// Addr: 1404c486c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c486c(int *param_1)

{
  int unaff_EBP;
  byte in_CF;
  
  *param_1 = (*param_1 - unaff_EBP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

