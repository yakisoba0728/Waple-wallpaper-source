// Function: FUN_1404bd744
// Addr: 1404bd744
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd744(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint in_EAX;
  char unaff_SPL;
  longlong unaff_RSI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    pcVar1 = (char *)(unaff_RSI + param_2 * 8);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
    *param_4 = *param_4 + unaff_SPL;
    *(undefined1 *)(ulonglong)(in_EAX & 0x25384d00) =
         *(undefined1 *)(ulonglong)(in_EAX & 0x25384d00);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

