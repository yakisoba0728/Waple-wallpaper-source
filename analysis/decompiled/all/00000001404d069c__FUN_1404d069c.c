// Function: FUN_1404d069c
// Addr: 1404d069c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d069c(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x4c);
  *pcVar1 = (*pcVar1 - unaff_BL) - in_CF;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x12) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x12) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

