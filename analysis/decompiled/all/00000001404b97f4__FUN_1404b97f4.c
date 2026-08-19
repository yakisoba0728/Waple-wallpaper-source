// Function: FUN_1404b97f4
// Addr: 1404b97f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b97f4(undefined8 param_1,char *param_2)

{
  byte bVar1;
  longlong unaff_RSI;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  param_2[unaff_RSI] = param_2[unaff_RSI] | bVar1;
  *param_2 = *param_2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

