// Function: FUN_14049f7c4
// Addr: 14049f7c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f7c4(char param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  byte in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + -0x5961ffff) = *(byte *)(unaff_RSI + -0x5961ffff) ^ in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + param_1;
  cVar3 = in_AH + (char)((ulonglong)param_2 >> 8);
  uRam00000000210049ee = 0x210049f6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       + in_AL;
  cVar2 = in(0x55);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2)))
       + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

