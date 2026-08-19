// Function: FUN_1404a8a2c
// Addr: 1404a8a2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8a2c(longlong param_1,undefined4 *param_2)

{
  char *in_RAX;
  uint unaff_EBX;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_2 = (int)param_1;
  *(uint *)(param_1 + -0x1b66fff4) = *(uint *)(param_1 + -0x1b66fff4) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

