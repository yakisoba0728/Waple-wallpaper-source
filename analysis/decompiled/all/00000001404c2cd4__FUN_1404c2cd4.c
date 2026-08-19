// Function: FUN_1404c2cd4
// Addr: 1404c2cd4
// Size: 1 bytes


void FUN_1404c2cd4(char param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x29);
  *pbVar1 = *pbVar1 & unaff_BL;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x29 +
                   CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar2 = *pcVar2 + (char)param_2;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004c2b);
  *pcVar2 = *pcVar2 + in_AH;
  *param_2 = *param_2 + param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

