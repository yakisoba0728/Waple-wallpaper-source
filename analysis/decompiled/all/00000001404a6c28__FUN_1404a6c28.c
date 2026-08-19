// Function: FUN_1404a6c28
// Addr: 1404a6c28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6c28(char *param_1)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff6b) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff6b) +
       (in_AL & 0x6b);
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff6b) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff6b) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

