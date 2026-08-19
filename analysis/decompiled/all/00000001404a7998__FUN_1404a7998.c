// Function: FUN_1404a7998
// Addr: 1404a7998
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7998(char param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  byte in_CF;
  
  *(undefined1 *)(unaff_RDI + 10) = *(undefined1 *)(unaff_RDI + 10);
  *(byte *)(unaff_RDI + 10) = *(byte *)(unaff_RDI + 10) >> 1 | ((in_CF & 1) != 0) << 7;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004a78);
  *pcVar1 = *pcVar1 + in_AH;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_1;
  in(0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

