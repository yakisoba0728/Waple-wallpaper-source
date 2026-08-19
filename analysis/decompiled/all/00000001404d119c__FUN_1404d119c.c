// Function: FUN_1404d119c
// Addr: 1404d119c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d119c(ulonglong param_1,byte *param_2)

{
  char *pcVar1;
  short sVar2;
  byte in_AL;
  char cVar3;
  byte bVar4;
  char in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  (&stack0x00000000)
  [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))] =
       (&stack0x00000000)
       [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))] + cVar6
  ;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + param_1);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(unaff_RDI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x62ffc30a);
  *pcVar1 = *pcVar1 + in_AL;
  sVar2 = (short)*(char *)(CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                          CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  cVar3 = (char)(CONCAT11(in_AH,in_AL) / sVar2);
  cVar5 = (char)(CONCAT11(in_AH,in_AL) % sVar2);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3)))
       + cVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) + -0x62ffc30a);
  *pcVar1 = *pcVar1 + cVar3;
  sVar2 = (short)*(char *)(CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) +
                          CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))));
  bVar4 = (byte)(CONCAT11(cVar5,cVar3) / sVar2);
  cVar3 = (char)(CONCAT11(cVar5,cVar3) % sVar2);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar3;
  *param_2 = *param_2 | bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
       + ((byte)param_1 & 0x49);
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) ^ 0x12) - 0x1f);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

