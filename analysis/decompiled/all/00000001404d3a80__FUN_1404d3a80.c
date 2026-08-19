// Function: FUN_1404d3a80
// Addr: 1404d3a80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3a80(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  byte unaff_BH;
  byte *unaff_RSI;
  char unaff_R12B;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) ^ (uint)param_1;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x39);
  *pcVar1 = *pcVar1 + cVar2;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
  *unaff_RSI = *unaff_RSI | unaff_BH;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI | unaff_BH;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x39);
  *pcVar1 = *pcVar1 + cVar2;
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

