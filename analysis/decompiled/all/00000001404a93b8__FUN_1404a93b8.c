// Function: FUN_1404a93b8
// Addr: 1404a93b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a93b8(char *param_1,char *param_2)

{
  longlong unaff_RBX;
  byte in_CF;
  
  *(byte *)(unaff_RBX + -0x6bf7fff4) = *(byte *)(unaff_RBX + -0x6bf7fff4) << 1 | in_CF;
  *param_1 = *param_1 + -0x6e;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

