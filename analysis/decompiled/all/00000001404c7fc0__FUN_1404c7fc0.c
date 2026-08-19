// Function: FUN_1404c7fc0
// Addr: 1404c7fc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7fc0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + param_2);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)(unaff_RSI + -0x792bffd0 + CONCAT71(in_register_00000001,in_AL) * 4);
  *pcVar2 = *pcVar2 + unaff_BL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

