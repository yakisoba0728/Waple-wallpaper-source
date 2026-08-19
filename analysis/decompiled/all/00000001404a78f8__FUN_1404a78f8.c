// Function: FUN_1404a78f8
// Addr: 1404a78f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a78f8(char *param_1,byte *param_2)

{
  byte *pbVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x4a);
  *pbVar1 = *pbVar1 | unaff_BH;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

