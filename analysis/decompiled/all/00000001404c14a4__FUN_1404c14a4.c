// Function: FUN_1404c14a4
// Addr: 1404c14a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c14a4(int param_1,undefined8 param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  piVar2 = (int *)(unaff_RSI + CONCAT71(in_register_00000001,in_AL));
  *piVar2 = *piVar2 + param_1;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_1;
  pbVar1 = (byte *)((CONCAT71(in_register_00000001,in_AL) | 0x72) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

