// Function: FUN_1404c9410
// Addr: 1404c9410
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9410(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)(unaff_RSI + -0x41) = *(char *)(unaff_RSI + -0x41) + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

