// Function: FUN_1404b990c
// Addr: 1404b990c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b990c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte in_AH;
  byte bVar3;
  char cVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  byte bVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2;
  bVar3 = in_AH + bVar6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + in_AL + CARRY1(in_AH,bVar6);
  bVar2 = bVar3 * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) + (uint)CARRY1(bVar3,bVar3);
  cVar4 = bVar2 + bVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL)))
       - CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) - (uint)CARRY1(bVar2,bVar5);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) + unaff_RBX);
  *pcVar1 = *pcVar1 + bVar5;
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + bVar6;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) + 0x54);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

