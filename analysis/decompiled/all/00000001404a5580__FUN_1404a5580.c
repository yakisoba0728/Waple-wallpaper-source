// Function: FUN_1404a5580
// Addr: 1404a5580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5580(char *param_1,longlong param_2)

{
  char *pcVar1;
  char *in_RAX;
  
  pcVar1 = (char *)(param_2 + (longlong)param_1 * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_1 * 5) = *(char *)((longlong)param_1 * 5) + (char)param_2;
  *in_RAX = *in_RAX - (char)param_1;
  param_1[0x70000828] = param_1[0x70000828] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

