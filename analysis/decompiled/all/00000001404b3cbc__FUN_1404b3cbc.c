// Function: FUN_1404b3cbc
// Addr: 1404b3cbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3cbc(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  char in_AL;
  byte bVar7;
  char cVar8;
  char cVar9;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar10;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  uRam0000000174503cc4 = uRam0000000174503cc4 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar7 = in_AL + in_AH;
  uRam0000000124503cd8 = uRam0000000124503cd8 & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))
  ;
  bVar7 = bVar7 | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)));
  iVar6 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))
                          );
  *(char *)param_1 = (char)*param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)))
       + bVar7;
  pbVar4 = (byte *)((longlong)param_1 + unaff_RBP * 2 + 0x69c60018);
  bVar5 = *pbVar4;
  bVar10 = (byte)((uint)(iVar6 * 0x4b3bec00) >> 8);
  *pbVar4 = *pbVar4 + bVar10;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)))
       - bVar7) - CARRY1(bVar5,bVar10);
  cVar8 = in((short)param_2);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)))
       + cVar8;
  cVar9 = cVar8 + in_AH;
  piVar2 = (int *)((ulonglong)
                   (uint)(*(int *)CONCAT44(in_register_00000004,
                                           CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) *
                         0x1869bc00) + (longlong)param_1);
  *piVar2 = *piVar2 + -0x39ffe797;
  *(char *)(unaff_RSI + 0xc6001869) = *(char *)(unaff_RSI + 0xc6001869) + in_AH;
  pcVar3 = (char *)((longlong)param_1 +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9))));
  *pcVar3 = *pcVar3 + in_AH;
  cRam00000001522b5105 = cRam00000001522b5105 + (char)param_2;
  uRam00000000c6001869 = param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9)))
       + cVar9;
  *param_1 = *param_1 & (uint)param_1;
  cVar9 = cVar9 + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9)));
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9))) + 0x6c900026);
  *puVar1 = *puVar1 | (uint)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar9)))
       - cVar9;
  *(char *)param_1 = (char)*param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

