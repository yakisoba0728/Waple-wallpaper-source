// Function: FUN_1404ac848
// Addr: 1404ac848
// Size: 1 bytes


void FUN_1404ac848(char *param_1)

{
  char in_AL;
  undefined6 in_register_00000002;
  char unaff_SPL;
  char *unaff_RSI;
  
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

