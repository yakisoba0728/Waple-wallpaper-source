// Function: FUN_1404d0cd8
// Addr: 1404d0cd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0cd8(undefined8 param_1,undefined8 param_2)

{
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

