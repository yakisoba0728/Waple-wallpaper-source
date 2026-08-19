// Function: FUN_1404b3214
// Addr: 1404b3214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3214(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  longlong unaff_RBP;
  
  *param_1 = *param_1 | (byte)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)(unaff_RBP + -0x44) = *(char *)(unaff_RBP + -0x44) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

