// Function: FUN_1404a605c
// Addr: 1404a605c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a605c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *in_RAX;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RBX + param_1 * 2);
  *pcVar1 = *pcVar1 + cVar2;
  *in_RAX = *in_RAX + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

