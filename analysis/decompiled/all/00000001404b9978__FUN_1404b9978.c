// Function: FUN_1404b9978
// Addr: 1404b9978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9978(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBX + unaff_RBP) = *(char *)(unaff_RBX + unaff_RBP) + in_AH;
  (&stack0x00000000)[unaff_RBP] = (&stack0x00000000)[unaff_RBP] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x28ffe0a7);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

