// Function: FUN_1404a8a40
// Addr: 1404a8a40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8a40(longlong param_1)

{
  uint unaff_EBX;
  
  *(uint *)(param_1 + -0x1b66fff4) = *(uint *)(param_1 + -0x1b66fff4) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

