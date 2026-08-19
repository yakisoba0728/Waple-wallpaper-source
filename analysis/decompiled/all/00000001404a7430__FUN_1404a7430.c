// Function: FUN_1404a7430
// Addr: 1404a7430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7430(char *param_1)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

