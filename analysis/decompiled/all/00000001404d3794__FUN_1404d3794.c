// Function: FUN_1404d3794
// Addr: 1404d3794
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3794(void)

{
  char *pcVar1;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + -0x6873ffc1) = *(char *)(unaff_RDI + -0x6873ffc1) + '?' + in_CF;
  pcVar1 = (char *)(unaff_RSI * 2 + 0x21004d);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

