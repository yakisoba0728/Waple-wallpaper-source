// Function: FUN_1404acf2c
// Addr: 1404acf2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acf2c(char *param_1,uint *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char in_AL;
  char cVar8;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar9;
  longlong unaff_RDI;
  bool bVar10;
  
  bVar9 = (byte)param_2;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x67d8ffc4);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_1 >> 8);
  bVar10 = CARRY1(bRam00000001484b0eb5,bVar9);
  bRam00000001484b0eb5 = bRam00000001484b0eb5 + bVar9;
  uVar4 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  uVar6 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       uVar6 + bVar10;
  uVar5 = (uint)(CARRY4(uVar4,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ||
                CARRY4(uVar6,(uint)bVar10));
  uVar4 = *param_2;
  uVar7 = (uint)param_1;
  uVar6 = *param_2;
  *param_2 = uVar6 + uVar7 + uVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (uint)(CARRY4(uVar4,uVar7) || CARRY4(uVar6 + uVar7,uVar5));
  cVar8 = in_AL + '2';
  *param_1 = *param_1 + -8;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)))
       + cVar8;
  pbVar1 = (byte *)(unaff_RDI + 8);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  uVar4 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)));
  uVar6 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))
                          ) + CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       uVar6 + CARRY1(bVar3,in_AH);
  uVar5 = (uint)(CARRY4(uVar4,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) ||
                CARRY4(uVar6,(uint)CARRY1(bVar3,in_AH)));
  uVar4 = *param_2;
  uVar6 = *param_2;
  *param_2 = uVar6 + uVar7 + uVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)) +
       (uint)(CARRY4(uVar4,uVar7) || CARRY4(uVar6 + uVar7,uVar5));
  *param_1 = *param_1 + -8;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 'd'))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 'd'))));
  *pcVar2 = *pcVar2 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

