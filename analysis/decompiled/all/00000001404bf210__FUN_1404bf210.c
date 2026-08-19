// Function: FUN_1404bf210
// Addr: 1404bf210
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf210(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_1);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2fffd952);
  *pcVar1 = *pcVar1 + cVar2;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

