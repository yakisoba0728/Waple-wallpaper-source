// Function: FUN_1404b1230
// Addr: 1404b1230
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1230(undefined8 param_1,uint param_2)

{
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 10) = *(uint *)(unaff_RSI + 10) & param_2;
  *(char *)(unaff_RSI + -0xc) = *(char *)(unaff_RSI + -0xc) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

