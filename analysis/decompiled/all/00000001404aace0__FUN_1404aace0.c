// Function: FUN_1404aace0
// Addr: 1404aace0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aace0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RDI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x76);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

