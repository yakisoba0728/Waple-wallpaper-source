// Function: FUN_1404b4358
// Addr: 1404b4358
// Size: 1 bytes


void FUN_1404b4358(char *param_1,longlong param_2)

{
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  char in_CF;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + '\x12') - in_CF;
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) ^ 0xee;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + -0x12;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + -0x12;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

