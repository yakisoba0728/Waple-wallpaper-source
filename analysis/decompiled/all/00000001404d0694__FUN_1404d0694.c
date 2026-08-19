// Function: FUN_1404d0694
// Addr: 1404d0694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0694(char *param_1,byte *param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  char unaff_R12B;
  
  param_1[-0x66b1ffc0] = param_1[-0x66b1ffc0] ^ unaff_BL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x12) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x12) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

