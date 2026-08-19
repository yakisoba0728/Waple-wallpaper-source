// Function: FUN_1404d5f14
// Addr: 1404d5f14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5f14(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + 0x4d) = (*(char *)(unaff_RSI + 0x4d) - unaff_BL) - in_CF;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

