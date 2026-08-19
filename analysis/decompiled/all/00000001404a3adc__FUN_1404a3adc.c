// Function: FUN_1404a3adc
// Addr: 1404a3adc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3adc(char *param_1,char *param_2)

{
  byte *pbVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RDI + -0x6ff6fffa);
  *pbVar1 = *pbVar1 >> 6 | *pbVar1 << 2;
  param_1[unaff_RDI + 0x4a] = param_1[unaff_RDI + 0x4a] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

