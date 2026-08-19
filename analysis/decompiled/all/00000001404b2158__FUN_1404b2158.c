// Function: FUN_1404b2158
// Addr: 1404b2158
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2158(longlong param_1)

{
  char in_AL;
  char *unaff_RSI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

