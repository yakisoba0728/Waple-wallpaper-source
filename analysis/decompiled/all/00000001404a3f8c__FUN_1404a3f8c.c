// Function: FUN_1404a3f8c
// Addr: 1404a3f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3f8c(char *param_1,undefined8 param_2)

{
  char in_AH;
  char *unaff_RSI;
  
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  in(0x46);
  *unaff_RSI = *unaff_RSI + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

