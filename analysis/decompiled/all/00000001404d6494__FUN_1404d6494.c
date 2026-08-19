// Function: FUN_1404d6494
// Addr: 1404d6494
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6494(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char *unaff_RSI;
  
  *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) - unaff_BL;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  if (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) != '\0') {
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x3d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

