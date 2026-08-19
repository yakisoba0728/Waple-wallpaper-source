// Function: FUN_1404b36b8
// Addr: 1404b36b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b36b8(byte *param_1,char param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL & *param_1)) + unaff_RSI * 8)
  ;
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

