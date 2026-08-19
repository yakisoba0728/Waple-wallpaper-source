// Function: FUN_1404b3204
// Addr: 1404b3204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3204(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *param_1 = *param_1 | (byte)((ulonglong)param_2 >> 8);
  *param_4 = *param_4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)(unaff_RDI + -0x54ffe844) = *(char *)(unaff_RDI + -0x54ffe844) + in_AL;
  *param_4 = *param_4 + '\x17';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)(unaff_RBP + -0x44) = *(char *)(unaff_RBP + -0x44) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

