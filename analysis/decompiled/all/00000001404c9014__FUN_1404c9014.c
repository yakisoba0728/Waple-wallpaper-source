// Function: FUN_1404c9014
// Addr: 1404c9014
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9014(undefined1 *param_1,undefined8 param_2)

{
  char *pcVar1;
  int in_EAX;
  
  LOCK();
  *param_1 = (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x50000e74U) + 0x2c003186);
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x50000e74U >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

