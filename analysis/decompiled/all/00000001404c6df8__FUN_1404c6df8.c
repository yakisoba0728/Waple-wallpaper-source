// Function: FUN_1404c6df8
// Addr: 1404c6df8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6df8(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + 0x4c) = *(byte *)(unaff_RBP + 0x4c) | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + in_AH;
  param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

