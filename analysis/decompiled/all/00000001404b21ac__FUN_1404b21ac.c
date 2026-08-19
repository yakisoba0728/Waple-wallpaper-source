// Function: FUN_1404b21ac
// Addr: 1404b21ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b21ac(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

