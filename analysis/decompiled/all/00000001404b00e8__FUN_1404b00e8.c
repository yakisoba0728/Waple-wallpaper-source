// Function: FUN_1404b00e8
// Addr: 1404b00e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b0119) overlaps instruction at (ram,0x0001404b0118)
    */

void FUN_1404b00e8(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char in_AL;
  char cVar2;
  byte bVar3;
  char in_AH;
  undefined1 uVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  byte bVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  param_1[param_2] = param_1[param_2] + bVar3;
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + in_AH;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + bVar6;
  param_1[0x14fbd000] = param_1[0x14fbd000] + bVar3;
  cVar2 = in_AL + CARRY1(bVar3,bVar3);
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - cVar2;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + cVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  bVar3 = in(7);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  bVar3 = bVar3 ^ 0xd;
  cVar2 = bVar3 + bVar6 + CARRY1(bVar3,bVar6);
  uVar4 = (undefined1)(CONCAT11(in_AH,cVar2) % (short)unaff_BL);
  cVar2 = (char)(CONCAT11(in_AH,cVar2) / (short)unaff_BL) +
          CARRY1(bVar3 + bVar6,CARRY1(bVar3,bVar6));
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - cVar2;
  *param_1 = *param_1 + cVar2;
  cVar2 = cVar2 + -10;
  pbVar1 = (byte *)(param_1 +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(uVar4,cVar2))));
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(uVar4,cVar2))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(uVar4,cVar2)))
       - CONCAT22(in_register_00000002,CONCAT11(uVar4,cVar2))) - (uint)CARRY1(bVar3,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

