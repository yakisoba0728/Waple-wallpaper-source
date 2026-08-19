// Function: FUN_1404b8f08
// Addr: 1404b8f08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8f08(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  char *unaff_RSI;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    *param_4 = *param_4 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(param_1 + -1 + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + unaff_BL;
  *unaff_RSI = *unaff_RSI + (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

