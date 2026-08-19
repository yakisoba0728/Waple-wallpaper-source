// Function: FUN_1404d3758
// Addr: 1404d3758
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3758(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RSI;
  char unaff_R12B;
  
  *unaff_RSI = *unaff_RSI - (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x6cffc09c);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

