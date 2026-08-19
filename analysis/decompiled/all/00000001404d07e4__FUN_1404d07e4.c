// Function: FUN_1404d07e4
// Addr: 1404d07e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d07e4(longlong param_1,longlong param_2)

{
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (byte)param_2;
  *(byte *)(unaff_RBP + 0x3a) = *(byte *)(unaff_RBP + 0x3a) ^ (byte)param_2;
  *(char *)(unaff_RBX + 0x55) = *(char *)(unaff_RBX + 0x55) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

