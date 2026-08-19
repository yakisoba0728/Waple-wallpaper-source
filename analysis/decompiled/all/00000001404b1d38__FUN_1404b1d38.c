// Function: FUN_1404b1d38
// Addr: 1404b1d38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1d38(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

