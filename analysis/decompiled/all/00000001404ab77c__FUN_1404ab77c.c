// Function: FUN_1404ab77c
// Addr: 1404ab77c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab77c(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI - (int)param_1;
  pcVar1 = (char *)(unaff_RSI * 5 + 0x4a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI - (int)param_1;
  *(char *)(param_2 + 0x29) = *(char *)(param_2 + 0x29) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

