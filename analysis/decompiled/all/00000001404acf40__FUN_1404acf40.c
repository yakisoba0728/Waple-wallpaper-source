// Function: FUN_1404acf40
// Addr: 1404acf40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acf40(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar8;
  undefined7 uVar9;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uVar7 = (uint)param_1;
  *(byte *)(longlong)(int)uVar7 = *(byte *)(longlong)(int)uVar7 | bVar8;
  *param_1 = *param_1 + bVar8;
  bVar8 = bVar8 | *param_1;
  pcVar2 = (char *)(unaff_RSI + (longlong)param_1 * 8);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar1 = (byte *)(unaff_RDI + 8);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  uVar4 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  uVar5 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       uVar5 + CARRY1(bVar3,in_AH);
  uVar5 = (uint)(CARRY4(uVar4,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ||
                CARRY4(uVar5,(uint)CARRY1(bVar3,in_AH)));
  uVar4 = *(uint *)CONCAT71(uVar9,bVar8);
  uVar6 = *(int *)CONCAT71(uVar9,bVar8) + uVar7;
  *(uint *)CONCAT71(uVar9,bVar8) = uVar6 + uVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (uint)(CARRY4(uVar4,uVar7) || CARRY4(uVar6,uVar5));
  *param_1 = *param_1 + unaff_SPL;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + '2'))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + '2'))));
  *pcVar2 = *pcVar2 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

