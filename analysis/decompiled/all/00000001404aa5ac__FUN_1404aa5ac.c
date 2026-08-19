// Function: FUN_1404aa5ac
// Addr: 1404aa5ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa5ac(char param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + ((ulonglong)uRam01004a0220000e12 | 5) * 2);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

