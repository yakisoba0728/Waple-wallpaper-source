// Function: FUN_1404c9aa4
// Addr: 1404c9aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9aa4(char *param_1,longlong param_2)

{
  char in_AL;
  char in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_R11B;
  char unaff_R12B;
  
  *(byte *)(param_2 + unaff_RSI) = *(byte *)(param_2 + unaff_RSI) & unaff_BH;
  *(char *)(unaff_RBP + -0x4bffcdc4) =
       *(char *)(unaff_RBP + -0x4bffcdc4) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AH;
  *(char *)(unaff_RBP + -0x4bffcdc4) =
       *(char *)(unaff_RBP + -0x4bffcdc4) + (char)((uint)((int)in_register_00000002 >> 0xf) >> 8);
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

