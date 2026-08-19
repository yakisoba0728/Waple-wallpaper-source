// Function: FUN_14049ed00
// Addr: 14049ed00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ed00(char *param_1)

{
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint *unaff_RSI;
  
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ in_AL;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

