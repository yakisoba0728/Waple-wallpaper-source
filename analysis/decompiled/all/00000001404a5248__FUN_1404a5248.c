// Function: FUN_1404a5248
// Addr: 1404a5248
// Size: 1 bytes


void FUN_1404a5248(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char *unaff_RSI;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x6fff809);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

