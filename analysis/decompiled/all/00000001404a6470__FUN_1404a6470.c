// Function: FUN_1404a6470
// Addr: 1404a6470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6470(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar6;
  longlong unaff_RSI;
  char in_CF;
  byte bVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cRam000000017569647f = cRam000000017569647f + cVar6 + in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = *param_1;
  *param_1 = *param_1 + in_AH;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar4 = *pbVar1;
  bVar5 = *pbVar1;
  *pbVar1 = bVar5 + in_AL + CARRY1(bVar3,in_AH);
  pcVar2 = (char *)(param_2 + unaff_RSI * 2);
  *pcVar2 = *pcVar2 + cVar6 + (CARRY1(bVar4,in_AL) || CARRY1(bVar5 + in_AL,CARRY1(bVar3,in_AH)));
  param_1[unaff_RSI * 2] = param_1[unaff_RSI * 2] | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

