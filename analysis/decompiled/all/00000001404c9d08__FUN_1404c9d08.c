// Function: FUN_1404c9d08
// Addr: 1404c9d08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d08(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  char unaff_R12B;
  
  *(byte *)(unaff_RSI + 0x32) = *(byte *)(unaff_RSI + 0x32) & (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x1800326e) = *(char *)(unaff_RSI + 0x1800326e) + in_AH;
  *param_1 = *param_1 + unaff_R12B;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

