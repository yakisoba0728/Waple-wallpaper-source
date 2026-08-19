// Function: FUN_1404d76c0
// Addr: 1404d76c0
// Size: 1 bytes


void FUN_1404d76c0(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  byte bVar4;
  uint unaff_EBP;
  uint *unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    *param_1 = *param_1 + in_AH;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) | in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar4 = unaff_BH + (char)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0x37) +
                   0x19004d64);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  bVar3 = ((in_AL | 0x37) - cRam00000001524e8227) - CARRY1(bVar3,bVar4);
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) +
                   (longlong)unaff_RSI * 2);
  *pcVar2 = *pcVar2 + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       ^ bVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + in_AH;
  *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *unaff_RSI = *unaff_RSI & unaff_EBP;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       | bVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

