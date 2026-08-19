// Function: FUN_1404d6848
// Addr: 1404d6848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6848(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] +
       (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x3dffc904);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x15);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

