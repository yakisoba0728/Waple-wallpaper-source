// Function: FUN_1404cf684
// Addr: 1404cf684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf684(longlong param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  char in_R10B;
  char unaff_R12B;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21);
  *pcVar1 = *pcVar1 - (char)((ulonglong)param_1 >> 8);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + in_AH;
  *(char *)(param_1 + param_3) = *(char *)(param_1 + param_3) + unaff_R12B;
  *unaff_RSI = *unaff_RSI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

