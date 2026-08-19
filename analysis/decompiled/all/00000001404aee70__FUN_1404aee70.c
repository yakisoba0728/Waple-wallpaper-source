// Function: FUN_1404aee70
// Addr: 1404aee70
// Size: 1 bytes


void FUN_1404aee70(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  char *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2affec80);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *unaff_RBX = *unaff_RBX + CARRY1(bVar2,bVar3);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xed) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xed) + (in_AL ^ 0xed);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

