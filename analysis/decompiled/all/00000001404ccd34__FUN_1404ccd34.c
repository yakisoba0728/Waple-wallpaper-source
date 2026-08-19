// Function: FUN_1404ccd34
// Addr: 1404ccd34
// Size: 1 bytes


void FUN_1404ccd34(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  char unaff_R12B;
  
  *(byte *)(unaff_RSI + 0x35) = *(byte *)(unaff_RSI + 0x35) ^ in_AH;
  *(char *)(unaff_RSI + 0x35) = *(char *)(unaff_RSI + 0x35) + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x34);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_2 >> 8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

