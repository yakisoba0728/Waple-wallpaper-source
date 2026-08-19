// Function: FUN_1404b4bd4
// Addr: 1404b4bd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4bd4(longlong param_1)

{
  byte in_AH;
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + param_1) = *(byte *)(unaff_RBP + param_1) | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

