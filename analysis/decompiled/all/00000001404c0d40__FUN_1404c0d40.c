// Function: FUN_1404c0d40
// Addr: 1404c0d40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0d40(char *param_1,byte param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  char cVar4;
  byte in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *unaff_RSI;
  char in_R11B;
  char unaff_R12B;
  
  bVar3 = in_AL - 0xc;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + -0x57);
  *pcVar1 = *pcVar1 + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       - bVar3;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + bVar3;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       - bVar3) - CARRY1(bVar2,bVar3);
  cVar5 = in_AH + param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3)))
       - CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) - (uint)CARRY1(in_AH,param_2);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3)))
       - bVar3;
  cVar4 = in_AL + -0x18;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4)))
       + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4)))
       + param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4)))
       - cVar4;
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

