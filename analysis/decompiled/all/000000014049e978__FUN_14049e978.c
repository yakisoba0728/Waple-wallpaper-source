// Function: FUN_14049e978
// Addr: 14049e978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e978(byte *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar5;
  undefined6 uVar6;
  char cVar7;
  undefined6 uVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar9;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)param_2;
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  cVar2 = in_AL + '\x02';
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  uRam00000001744ee984 = uRam00000001744ee984 & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))
  ;
  bVar3 = cVar2 + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)));
  cVar9 = unaff_BH << 1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  cVar2 = *(char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar9,unaff_BL)) + (ulonglong)bVar3);
  *param_1 = *param_1 + in_AH;
  bVar3 = cVar2 + 2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  bVar3 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(cVar9,unaff_BL)) + (ulonglong)bVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + 0x210049 +
                   unaff_RBP * 8);
  *pcVar1 = *pcVar1 + cVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  bVar3 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(cVar9,unaff_BL)) + (ulonglong)bVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + 0x210049 +
                   unaff_RBP * 8);
  *pcVar1 = *pcVar1 + cVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  bVar4 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 2,unaff_BL)) + (ulonglong)bVar3);
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar4;
  cVar2 = (char)param_1 +
          *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) +
          CARRY1(bVar3,bVar4);
  *param_2 = *param_2 + cVar7;
  cVar2 = (char)((ulonglong)param_2 >> 8) +
          *(char *)(CONCAT62(uVar6,CONCAT11(cVar5,cVar2)) + CONCAT62(uVar6,CONCAT11(cVar5,cVar2)));
  *(char *)CONCAT62(uVar8,CONCAT11(cVar2,cVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar2,cVar7)) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

