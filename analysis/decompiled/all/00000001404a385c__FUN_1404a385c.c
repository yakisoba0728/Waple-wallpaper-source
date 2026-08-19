// Function: FUN_1404a385c
// Addr: 1404a385c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a385c(longlong param_1)

{
  longlong unaff_RBX;
  int unaff_ESP;
  byte in_CF;
  
  *(int *)(unaff_RBX + param_1) = *(int *)(unaff_RBX + param_1) + unaff_ESP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

