// Function: FUN_1404aee50
// Addr: 1404aee50
// Size: 1 bytes


void FUN_1404aee50(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined6 uVar5;
  byte bVar6;
  char *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  cVar2 = (char)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *unaff_RBX = *unaff_RBX + CARRY1(bVar6,bVar6);
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar4 = bVar3 + (byte)param_2;
  *unaff_RBX = *unaff_RBX + CARRY1(bVar3,(byte)param_2);
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2affec80);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6 * '\x02';
  *unaff_RBX = *unaff_RBX + CARRY1(bVar3,bVar6 * '\x02');
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) + unaff_SPL;
  *unaff_RSI = *unaff_RSI + cVar2;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xed) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xed) + (in_AL ^ 0xed);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

