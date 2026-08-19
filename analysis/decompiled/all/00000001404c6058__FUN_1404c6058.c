// Function: FUN_1404c6058
// Addr: 1404c6058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6058(char *param_1)

{
  char in_AL;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(10,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(10,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(10,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(10,in_AL)) + '\n';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

