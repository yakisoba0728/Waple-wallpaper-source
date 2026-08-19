// Function: FUN_1404af110
// Addr: 1404af110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af110(undefined8 param_1,char *param_2)

{
  int unaff_EBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

