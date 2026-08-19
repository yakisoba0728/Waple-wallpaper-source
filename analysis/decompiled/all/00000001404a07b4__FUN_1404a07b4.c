// Function: FUN_1404a07b4
// Addr: 1404a07b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a07b4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004a06);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

