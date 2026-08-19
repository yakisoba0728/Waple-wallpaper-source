// Function: FUN_1404ca3e4
// Addr: 1404ca3e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca3e4(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x61ffcd45);
  *pcVar1 = *pcVar1 + in_AL;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

