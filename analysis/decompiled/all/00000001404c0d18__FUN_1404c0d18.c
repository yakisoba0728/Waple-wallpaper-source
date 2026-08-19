// Function: FUN_1404c0d18
// Addr: 1404c0d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0d18(char *param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte in_AH;
  char cVar7;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar8;
  char *unaff_RBX;
  char *unaff_RSI;
  char in_R11B;
  char unaff_R12B;
  
  bVar8 = (byte)param_2;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  bVar4 = in(0x18);
  pbVar2 = &stack0x00000000 + (longlong)param_2 * 8;
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       - CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) - (uint)CARRY1(bVar3,bVar4);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       - bVar4;
  bVar5 = bVar4 - 0xc;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       - bVar5;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar5;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) + -0x57);
  *pcVar1 = *pcVar1 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       - bVar5;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + bVar5;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       - bVar5) - CARRY1(bVar3,bVar5);
  cVar7 = in_AH + bVar8;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5)))
       - CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5))) - (uint)CARRY1(in_AH,bVar8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5)))
       - bVar5;
  cVar6 = bVar4 - 0x18;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6)))
       + cVar6;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6)))
       + bVar8;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,cVar6)))
       - cVar6;
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

