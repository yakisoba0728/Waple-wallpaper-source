// Function: FUN_1404cc810
// Addr: 1404cc810
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc810(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x6100351f);
  *pcVar1 = *pcVar1 + in_AH;
  bRam000000018d13e023 = bRam000000018d13e023 & (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

