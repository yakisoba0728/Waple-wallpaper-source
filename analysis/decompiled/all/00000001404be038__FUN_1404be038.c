// Function: FUN_1404be038
// Addr: 1404be038
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be038(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x77ffda58);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(unaff_RBP + 0x1a21004b + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

