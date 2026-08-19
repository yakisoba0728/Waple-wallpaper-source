// Function: FUN_14049f18c
// Addr: 14049f18c
// Size: 1 bytes


void FUN_14049f18c(void)

{
  char in_AL;
  undefined1 *unaff_RSI;
  char *in_R9;
  
  LOCK();
  *in_R9 = *in_R9 + in_AL;
  UNLOCK();
  *unaff_RSI = *unaff_RSI;
  *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

