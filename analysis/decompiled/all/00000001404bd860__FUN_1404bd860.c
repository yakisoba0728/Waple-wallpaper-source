// Function: FUN_1404bd860
// Addr: 1404bd860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd860(char param_1,undefined8 param_2)

{
  char unaff_BH;
  longlong unaff_RSI;
  
  cRam0000000021004a3c = cRam0000000021004a3c + '<';
  cRam0000000021004a7b = cRam0000000021004a7b + (char)((ulonglong)param_2 >> 8);
  cRam0000000022004c3c = cRam0000000022004c3c + unaff_BH;
  *(char *)(unaff_RSI + -0x7afff208) = *(char *)(unaff_RSI + -0x7afff208) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

