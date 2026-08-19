// Function: FUN_1404c5268
// Addr: 1404c5268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5268(int param_1,int *param_2)

{
  int unaff_EBP;
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = (*unaff_RDI - unaff_EBP) - (uint)in_CF;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

