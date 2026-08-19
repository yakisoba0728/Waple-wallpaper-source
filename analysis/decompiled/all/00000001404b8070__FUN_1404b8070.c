// Function: FUN_1404b8070
// Addr: 1404b8070
// Size: 1 bytes


void FUN_1404b8070(char *param_1,undefined8 param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  param_1[0x1dce8000] = param_1[0x1dce8000] + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + -0x23ffe232) = *(char *)(unaff_RSI + -0x23ffe232) + in_AH;
  *param_1 = *param_1 + in_AH;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x4a) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x4a) + (char)param_1;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x4a) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x4a) + (in_AL | 0x4a);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

