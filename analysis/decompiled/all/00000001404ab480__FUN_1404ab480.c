// Function: FUN_1404ab480
// Addr: 1404ab480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab480(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + -1;
  pcVar1 = (char *)(unaff_RBX + 0x4a + unaff_RBP);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI + -1;
  *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

