// Function: FUN_1404c9570
// Addr: 1404c9570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9570(undefined8 param_1,char *param_2)

{
  char in_AL;
  int *unaff_RSI;
  int unaff_EDI;
  
  *unaff_RSI = *unaff_RSI + unaff_EDI;
  if (in_AL != '\0') {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)((ulonglong)param_2 >> 8);
    *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

