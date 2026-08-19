// Function: FUN_1404d610c
// Addr: 1404d610c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d610c(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x31ffc90b);
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

