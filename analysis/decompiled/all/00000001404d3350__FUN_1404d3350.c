// Function: FUN_1404d3350
// Addr: 1404d3350
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3350(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  *(byte *)(param_2 + 0x3f) = *(byte *)(param_2 + 0x3f) ^ in_AH;
  pcVar1 = (char *)(param_2 + 0x4d + unaff_RSI);
  *pcVar1 = *pcVar1 + in_AL;
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

