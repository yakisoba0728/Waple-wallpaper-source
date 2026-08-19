// Function: FUN_1404b3c50
// Addr: 1404b3c50
// Size: 1 bytes


void FUN_1404b3c50(char *param_1)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte *unaff_RSI;
  
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI & in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

