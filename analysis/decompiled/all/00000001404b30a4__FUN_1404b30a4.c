// Function: FUN_1404b30a4
// Addr: 1404b30a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b30a4(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + -0x49c9ffe9) =
       *(char *)(unaff_RSI + -0x49c9ffe9) + (char)((ulonglong)param_2 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

