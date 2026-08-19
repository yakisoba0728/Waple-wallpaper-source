// Function: FUN_1404cbe80
// Addr: 1404cbe80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbe80(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + unaff_RBX) =
       *(byte *)(unaff_RSI + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x15);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

