// Function: FUN_1404ac830
// Addr: 1404ac830
// Size: 1 bytes


void FUN_1404ac830(undefined8 param_1,byte param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  undefined6 uVar4;
  char unaff_SPL;
  char *unaff_RSI;
  char in_CF;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + in_CF;
  *(char *)CONCAT62(uVar4,CONCAT11(0x45,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(0x45,cVar3)) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x4affefbb);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  *param_3 = *param_3 + (char)param_3 + CARRY1(bVar2,param_2);
  *(char *)CONCAT62(uVar4,CONCAT11(0x45,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(0x45,cVar3)) + unaff_SPL;
  *unaff_RSI = *unaff_RSI + cVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

