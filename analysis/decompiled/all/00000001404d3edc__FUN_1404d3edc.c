// Function: FUN_1404d3edc
// Addr: 1404d3edc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3edc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char unaff_BH;
  char *unaff_RSI;
  char unaff_R13B;
  char in_CF;
  
  *unaff_RSI = *unaff_RSI + unaff_BH + in_CF;
  *(char *)(param_3 + 0x31) = *(char *)(param_3 + 0x31) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

