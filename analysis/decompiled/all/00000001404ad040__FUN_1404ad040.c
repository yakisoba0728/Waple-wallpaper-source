// Function: FUN_1404ad040
// Addr: 1404ad040
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad040(void)

{
  char *pcVar1;
  byte in_AL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI);
  *pcVar1 = *pcVar1 + (in_AL ^ 0xe6) + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

