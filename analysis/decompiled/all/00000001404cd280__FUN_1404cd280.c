// Function: FUN_1404cd280
// Addr: 1404cd280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd280(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + 0x4b) = *(byte *)(unaff_RBP + 0x4b) & unaff_BL;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x3affbe66);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

