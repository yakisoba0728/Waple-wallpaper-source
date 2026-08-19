// Function: FUN_1404cf2c0
// Addr: 1404cf2c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf2c0(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x4c);
  *pcVar1 = (*pcVar1 - unaff_BL) - in_CF;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

