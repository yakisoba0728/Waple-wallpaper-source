// Function: FUN_1404cfbec
// Addr: 1404cfbec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfbec(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint uVar3;
  char unaff_BL;
  longlong unaff_RSI;
  char in_R11B;
  char unaff_R12B;
  
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x7c);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  uVar3 = (int)param_1 - *param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + unaff_BL;
  *(int *)(unaff_RSI + 4) = *(int *)(unaff_RSI + 4) + uVar3;
  pbVar2 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,
                                       CONCAT11(in_AH | in_AL ^ 0x55 | 0xf0,in_AL))) ^ 0x55 | 0xf0)
                   + 7);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

