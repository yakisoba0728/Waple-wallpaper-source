// Function: FUN_14049fe64
// Addr: 14049fe64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe64(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char unaff_SPL;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

