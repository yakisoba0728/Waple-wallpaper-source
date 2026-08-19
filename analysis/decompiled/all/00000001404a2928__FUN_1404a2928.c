// Function: FUN_1404a2928
// Addr: 1404a2928
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2928(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_1);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x33fffad1);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

