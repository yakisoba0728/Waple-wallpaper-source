// Function: FUN_1404d0684
// Addr: 1404d0684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0684(char *param_1,undefined8 param_2)

{
  byte in_AL;
  char in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  char unaff_retaddr;
  
  param_1[-0x66b1ffc0] = param_1[-0x66b1ffc0] ^ unaff_BL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + -0x67) = *(char *)(unaff_RSI + -0x67) + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + unaff_retaddr;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(ulonglong)(uint)((int)in_register_00000002 >> 0xf) =
       *(byte *)(ulonglong)(uint)((int)in_register_00000002 >> 0xf) | in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)param_1;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
           0x12) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                ^ 0x12) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

