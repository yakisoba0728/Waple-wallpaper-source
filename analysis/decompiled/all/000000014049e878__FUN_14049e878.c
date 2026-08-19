// Function: FUN_14049e878
// Addr: 14049e878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e878(char *param_1,byte *param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
  in(0x11);
  *(char *)(unaff_RDI + -0x44ffff16) = *(char *)(unaff_RDI + -0x44ffff16) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

