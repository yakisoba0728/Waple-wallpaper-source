// Function: FUN_1404d266c
// Addr: 1404d266c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d266c(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x25);
  *pcVar1 = *pcVar1 + in_AH;
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + '>';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

