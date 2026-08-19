// Function: FUN_1404b33e8
// Addr: 1404b33e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b33e8(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + in_AH;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x3c);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

