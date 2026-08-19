// Function: FUN_1404a6b6c
// Addr: 1404a6b6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b6c(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RBP;
  
  cVar2 = in((short)param_2);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

