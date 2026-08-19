// Function: FUN_1404c80ac
// Addr: 1404c80ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c80ac(char *param_1,undefined8 param_2)

{
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 0x446c0030) = *(uint *)(unaff_RSI + 0x446c0030) ^ (uint)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

