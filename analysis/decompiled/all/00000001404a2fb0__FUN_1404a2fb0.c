// Function: FUN_1404a2fb0
// Addr: 1404a2fb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2fb0(char *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_EBX;
  char *unaff_RSI;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x47fffa58);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2 + in_AH;
  *unaff_RDI = *unaff_RDI + unaff_EBX;
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

