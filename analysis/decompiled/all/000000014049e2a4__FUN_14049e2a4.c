// Function: FUN_14049e2a4
// Addr: 14049e2a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e2a4(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  longlong unaff_RSI;
  
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(unaff_RSI + -0x77ffff9f);
  *pcVar1 = *pcVar1 + (char)param_1;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *pcVar1 != '\0') {
    *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

