// Function: FUN_1404d627c
// Addr: 1404d627c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d627c(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  int *unaff_RSI;
  
  uRam0000000124526284 = uRam0000000124526284 & in_EAX;
  LOCK();
  *unaff_RSI = *unaff_RSI + 1;
  UNLOCK();
  *(char *)(param_2 + 1) = *(char *)(param_2 + 1) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

