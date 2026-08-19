// Function: FUN_1404b4de4
// Addr: 1404b4de4
// Size: 1 bytes


void FUN_1404b4de4(char *param_1,char *param_2)

{
  byte *pbVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  pbVar1 = (byte *)(unaff_RBX + (longlong)param_1 * 2);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

