// Function: FUN_1404b1754
// Addr: 1404b1754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1754(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0xd);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

