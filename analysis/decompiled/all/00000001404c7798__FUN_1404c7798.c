// Function: FUN_1404c7798
// Addr: 1404c7798
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7798(char *param_1,longlong param_2)

{
  char in_AH;
  
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

