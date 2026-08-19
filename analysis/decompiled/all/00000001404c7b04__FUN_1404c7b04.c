// Function: FUN_1404c7b04
// Addr: 1404c7b04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7b04(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x30);
  *pcVar1 = *pcVar1 + unaff_BL + in_CF;
  param_1[0x5b] = param_1[0x5b] + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

