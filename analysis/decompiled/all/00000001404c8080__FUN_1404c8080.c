// Function: FUN_1404c8080
// Addr: 1404c8080
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8080(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x4cffcf74);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

