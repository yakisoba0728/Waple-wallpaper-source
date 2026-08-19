// Function: FUN_1404cfbc4
// Addr: 1404cfbc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfbc4(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte extraout_AL;
  char in_AH;
  byte extraout_AH;
  undefined2 in_register_00000002;
  undefined2 extraout_var;
  undefined4 in_register_00000004;
  undefined4 extraout_var_00;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char unaff_BL;
  longlong unaff_RSI;
  char in_R11B;
  byte unaff_R12B;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2 >> 1;
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  cVar4 = (in_AL - *(char *)(CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                            CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))))) -
          CARRY1(bVar3,unaff_R12B);
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) +
       (int)param_1;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)))
       + cVar4;
  *(char *)(unaff_RSI + -0x7affc37b) = *(char *)(unaff_RSI + -0x7affc37b) + in_AH;
  func_0x0001614d48f3();
  *(byte *)CONCAT44(extraout_var_00,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) =
       *(char *)CONCAT44(extraout_var_00,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) +
       extraout_AL;
  pcVar1 = (char *)(CONCAT44(extraout_var_00,
                             CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) + -0x7c);
  *pcVar1 = *pcVar1 + cVar6;
  *param_1 = *param_1 + in_R11B;
  uVar5 = (int)param_1 - *(int *)param_1;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + unaff_BL;
  *(int *)(unaff_RSI + 4) = *(int *)(unaff_RSI + 4) + uVar5;
  pbVar2 = (byte *)((CONCAT44(extraout_var_00,
                              CONCAT22(extraout_var,
                                       CONCAT11(extraout_AH | extraout_AL ^ 0x55 | 0xf0,extraout_AL)
                                      )) ^ 0x55 | 0xf0) + 7);
  *pbVar2 = *pbVar2 | bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

