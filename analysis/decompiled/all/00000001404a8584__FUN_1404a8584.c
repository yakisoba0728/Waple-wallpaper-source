// Function: FUN_1404a8584
// Addr: 1404a8584
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8584(char *param_1,longlong param_2)

{
  byte in_AL;
  byte bVar1;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + 0xb) = *(byte *)(unaff_RSI + 0xb) & in_AH;
  *(char *)(param_2 + 0xb66) = *(char *)(param_2 + 0xb66) + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  bVar1 = in_AL | (byte)*(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(*(undefined1 *)(unaff_RSI + 0xb),bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(*(undefined1 *)(unaff_RSI + 0xb),bVar1)) +
       bVar1;
  *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

