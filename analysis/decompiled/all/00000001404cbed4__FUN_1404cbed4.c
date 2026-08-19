// Function: FUN_1404cbed4
// Addr: 1404cbed4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbed4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + in_AH;
  *(char *)(unaff_RSI + unaff_RBX) =
       *(char *)(unaff_RSI + unaff_RBX) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x15);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

