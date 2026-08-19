// Function: FUN_1404c28c0
// Addr: 1404c28c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c28c0(longlong param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar6;
  char unaff_BL;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 ||
      *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ==
      0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = in_AL - *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar4 = cVar4 - *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)));
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)))
       + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)))
       + in_AH;
  cVar4 = cVar4 - *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)));
  bVar5 = cVar4 - *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)));
  bVar3 = *param_4;
  *param_4 = *param_4 + (byte)param_2;
  *pcVar6 = (*pcVar6 - (char)pcVar6) - CARRY1(bVar3,(byte)param_2);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + unaff_BL;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) ^
           0x19) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
                ^ 0x19) + unaff_BL;
  *param_2 = *param_2 + (int)param_2;
  pcVar2 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) ^ 0x19) +
                   unaff_RSI * 8);
  *pcVar2 = *pcVar2 + (char)pcVar6;
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH | bVar5 ^ 0x19,bVar5))) ^
                    0x19) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

