// Function: FUN_1404d7220
// Addr: 1404d7220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7220(char *param_1)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

