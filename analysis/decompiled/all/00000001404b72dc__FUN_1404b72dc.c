// Function: FUN_1404b72dc
// Addr: 1404b72dc
// Size: 1 bytes


void FUN_1404b72dc(undefined8 param_1,char *param_2)

{
  char in_AH;
  char unaff_BL;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char *unaff_retaddr;
  
  *unaff_RDI = *unaff_RDI ^ 0x1d;
  *(char *)(unaff_RSI + -0xfffe2c9) = *(char *)(unaff_RSI + -0xfffe2c9) + in_AH;
  *unaff_retaddr = *unaff_retaddr + '\b';
  *param_2 = *param_2 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

