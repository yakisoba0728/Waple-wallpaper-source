// Function: FUN_1404beeb0
// Addr: 1404beeb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beeb0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BL;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(param_2 + -0x65a4ffda) = *(char *)(param_2 + -0x65a4ffda) + unaff_BL + in_CF;
  pcVar1 = (char *)(unaff_RBP * 9 + 0x21004b);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

