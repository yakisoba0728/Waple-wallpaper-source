// Function: FUN_1404c2a24
// Addr: 1404c2a24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2a24(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  char in_R11B;
  
  *(char *)(unaff_RSI + 0x22) = *(char *)(unaff_RSI + 0x22) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

