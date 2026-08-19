// Function: FUN_1404d4bfc
// Addr: 1404d4bfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4bfc(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  char extraout_AL;
  char extraout_AH;
  undefined6 extraout_var;
  byte unaff_BH;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_R10;
  
  *unaff_RDI = *unaff_RSI;
  func_0x0001406e4c4b();
  *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + extraout_AL;
  *param_2 = *param_2 ^ unaff_BH;
  unaff_RDI[in_R10 + 0x42] = unaff_RDI[in_R10 + 0x42] + extraout_AL;
  pcVar1 = (char *)(CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + 0x6010049 +
                   unaff_RBP * 8);
  *pcVar1 = *pcVar1 + extraout_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

