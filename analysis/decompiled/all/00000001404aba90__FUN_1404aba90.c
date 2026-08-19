// Function: FUN_1404aba90
// Addr: 1404aba90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aba90(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RBP;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar2;
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + in_AH;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x43fff0aa);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

