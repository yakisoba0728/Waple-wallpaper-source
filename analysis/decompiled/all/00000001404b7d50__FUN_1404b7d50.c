// Function: FUN_1404b7d50
// Addr: 1404b7d50
// Size: 1 bytes


void FUN_1404b7d50(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  char in_CF;
  
  *param_2 = *param_2 + in_AH + in_CF;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

