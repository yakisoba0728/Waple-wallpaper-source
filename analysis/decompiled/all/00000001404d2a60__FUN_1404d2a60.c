// Function: FUN_1404d2a60
// Addr: 1404d2a60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2a60(char *param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_ESP;
  undefined4 *unaff_RSI;
  
  LOCK();
  *unaff_RSI = unaff_ESP;
  UNLOCK();
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

