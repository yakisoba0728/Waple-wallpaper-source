// Function: FUN_1404bd118
// Addr: 1404bd118
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd118(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char cVar3;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + unaff_RSI);
  *pcVar1 = *pcVar1 + in_AH + in_CF;
  (&stack0x00000000)[CONCAT44(unaff_0000003c,unaff_EDI)] =
       (&stack0x00000000)[CONCAT44(unaff_0000003c,unaff_EDI)] | (byte)param_2;
  bRam0000000165552127 = bRam0000000165552127 | in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bRam0000000165552137 = bRam0000000165552137 | in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       >> 5 | *(char *)CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) << 3;
  cVar3 = unaff_BL + (char)((ulonglong)param_2 >> 8);
  bRam000000018c1bc14b = bRam000000018c1bc14b | in_AH;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AL;
  *(byte *)CONCAT71(unaff_00000019,cVar3) =
       *(char *)CONCAT71(unaff_00000019,cVar3) + in_AL + CARRY1(bVar2,in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (byte)param_2;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       unaff_EDI;
  *param_1 = *param_1 + (char)param_1;
  param_1[-1] = param_1[-1] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

