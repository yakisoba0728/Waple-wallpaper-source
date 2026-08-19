// Function: FUN_1404a41ec
// Addr: 1404a41ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a41ec(void)

{
  char in_AL;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + 0x7b0029f4) = *(char *)(unaff_RBX + 0x7b0029f4) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

