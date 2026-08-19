// Function: FUN_1404cbb00
// Addr: 1404cbb00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb00(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)(unaff_RSI + 0x34) = *(char *)(unaff_RSI + 0x34) << 1;
  *param_4 = *param_4 + in_AL;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6)
       = *(uint *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6) |
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 6;
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0x36) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

