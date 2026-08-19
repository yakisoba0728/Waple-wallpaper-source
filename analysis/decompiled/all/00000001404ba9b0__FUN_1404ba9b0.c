// Function: FUN_1404ba9b0
// Addr: 1404ba9b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba9b0(longlong param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(param_2 + param_1) =
       (*(char *)(param_2 + param_1) - (char)((ulonglong)param_2 >> 8)) - in_CF;
  uVar1 = (in_EAX + 0x54000854U) * *(int *)(ulonglong)(in_EAX + 0x54000854U);
  *(char *)(unaff_RSI + -9) = *(char *)(unaff_RSI + -9) + (char)(uVar1 >> 8);
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

