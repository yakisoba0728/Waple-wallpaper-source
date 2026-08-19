// Function: FUN_1404a7a38
// Addr: 1404a7a38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7a38(char *param_1)

{
  char in_AL;
  byte unaff_BH;
  
  param_1[0x4a] = param_1[0x4a] | unaff_BH;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

