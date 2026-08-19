// Function: FUN_1404c6a38
// Addr: 1404c6a38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6a38(longlong param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  if (param_1 == 1 || *pcVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

