// Function: FUN_1404a0d50
// Addr: 1404a0d50
// Size: 1 bytes


void FUN_1404a0d50(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  char *unaff_RSI;
  char in_CF;
  
  pcVar1 = (char *)(param_2 + (longlong)param_1 * 2);
  *pcVar1 = (*pcVar1 - (char)param_1) - in_CF;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x3afffc72);
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + in_AH;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

