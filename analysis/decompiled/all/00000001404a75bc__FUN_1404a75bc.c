// Function: FUN_1404a75bc
// Addr: 1404a75bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a75bc(char param_1,char *param_2)

{
  char *pcVar1;
  int in_EAX;
  
  *param_2 = *param_2 + param_1;
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x4340500) - 0x20fff5f1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

