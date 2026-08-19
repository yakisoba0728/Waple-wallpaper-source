// Function: FUN_1404aa884
// Addr: 1404aa884
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa884(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar2;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + in_AH;
  *(char *)(unaff_RBP + param_1) = *(char *)(unaff_RBP + param_1) + (char)param_2;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x52);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

