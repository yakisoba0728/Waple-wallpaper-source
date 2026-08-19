// Function: FUN_1404ccb78
// Addr: 1404ccb78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccb78(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x36);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

