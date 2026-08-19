// Function: FUN_1404aaea8
// Addr: 1404aaea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaea8(undefined1 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  LOCK();
  *unaff_RSI = param_1;
  UNLOCK();
  *(char *)(unaff_RBX + -0x7a) = *(char *)(unaff_RBX + -0x7a) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

