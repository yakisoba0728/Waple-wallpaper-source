// Function: FUN_1404d4e40
// Addr: 1404d4e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4e40(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  pcVar1 = (char *)(unaff_RBP + 0x4d + param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(param_2 + 0x28000002) =
       *(char *)(param_2 + 0x28000002) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

