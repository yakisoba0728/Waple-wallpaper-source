// Function: FUN_1404a7934
// Addr: 1404a7934
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7934(char *param_1)

{
  byte *pbVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x4a);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

