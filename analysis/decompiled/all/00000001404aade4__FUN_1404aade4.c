// Function: FUN_1404aade4
// Addr: 1404aade4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aade4(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

