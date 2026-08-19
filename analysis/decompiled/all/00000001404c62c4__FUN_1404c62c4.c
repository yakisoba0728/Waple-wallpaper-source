// Function: FUN_1404c62c4
// Addr: 1404c62c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c62c4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(unaff_RSI + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x73);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

