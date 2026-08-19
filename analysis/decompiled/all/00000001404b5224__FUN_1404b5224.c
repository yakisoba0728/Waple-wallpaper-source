// Function: FUN_1404b5224
// Addr: 1404b5224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5224(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  param_1[0x4b] = param_1[0x4b] ^ (byte)param_2;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

