// Function: FUN_1404c5ac8
// Addr: 1404c5ac8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5ac8(char *param_1)

{
  char in_AL;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  *param_1 = *param_1 + in_AL * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

