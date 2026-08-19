// Function: FUN_1404bca50
// Addr: 1404bca50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bca50(void)

{
  char unaff_BPL;
  undefined4 *unaff_RSI;
  char *in_R9;
  char in_CF;
  
  *in_R9 = *in_R9 + unaff_BPL + (char)*unaff_RSI + in_CF + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

