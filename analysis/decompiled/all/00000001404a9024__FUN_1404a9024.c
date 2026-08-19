// Function: FUN_1404a9024
// Addr: 1404a9024
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9024(byte *param_1,int param_2)

{
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)
                   (uint)(param_2 +
                         *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 2));
  *param_1 = *param_1 ^ in_AL;
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

