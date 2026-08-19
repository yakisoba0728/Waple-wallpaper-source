// Function: FUN_1404b5314
// Addr: 1404b5314
// Size: 1 bytes


void FUN_1404b5314(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char in_CF;
  
  param_2[0x4b] = param_2[0x4b] + (char)param_2 + in_CF;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

