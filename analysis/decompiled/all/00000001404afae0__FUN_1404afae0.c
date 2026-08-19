// Function: FUN_1404afae0
// Addr: 1404afae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404afb29) overlaps instruction at (ram,0x0001404afb28)
    */

void FUN_1404afae0(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  char cVar3;
  byte bVar4;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  byte bVar6;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 in_YMM6 [32];
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2;
  param_1[unaff_RBP] = param_1[unaff_RBP] + bVar5;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + bVar6;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x3f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  cVar3 = in_AL + CARRY1(bVar2,in_AH);
  *param_1 = *param_1 + -8;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) + -0x3f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  bVar4 = cVar3 + CARRY1(bVar2,in_AH);
  *param_1 = *param_1 + bVar4;
  bVar4 = bVar4 | *(byte *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) +
                           CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))));
  bVar6 = bVar6 | *(byte *)(param_2 + -0x3ffb0ffa);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) + 0x21);
  cVar3 = in_AH + *pbVar1;
  *unaff_RSI = (*unaff_RSI - bVar4) - CARRY1(in_AH,*pbVar1);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
       + unaff_BL;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
       + bVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)) + (uint)CARRY1(bVar2,bVar5);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) +
                   CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar6,bVar5)));
  *pbVar1 = *pbVar1 | bVar6;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) + -0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  vunpcklps_avx(in_YMM6,*(undefined1 (*) [32])
                         CONCAT44(in_register_00000004,
                                  CONCAT22(in_register_00000002,
                                           CONCAT11(cVar3,bVar4 + CARRY1(bVar2,bVar6)))));
  *param_1 = *param_1 + -0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

