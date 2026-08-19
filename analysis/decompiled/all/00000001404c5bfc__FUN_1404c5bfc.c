// Function: FUN_1404c5bfc
// Addr: 1404c5bfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5bfc(longlong param_1,undefined8 param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar1;
  longlong unaff_RSI;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
    *pcVar1 = *pcVar1 + in_AH;
    (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       pcVar1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] +
       (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

