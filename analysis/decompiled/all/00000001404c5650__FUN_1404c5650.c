// Function: FUN_1404c5650
// Addr: 1404c5650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5650(char *param_1,byte param_2)

{
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  
  param_2 = in_AL & param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))
                        ) + in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2)))
       + CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2));
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

