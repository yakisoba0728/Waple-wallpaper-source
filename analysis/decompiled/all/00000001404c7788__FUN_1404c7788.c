// Function: FUN_1404c7788
// Addr: 1404c7788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7788(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x15);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

