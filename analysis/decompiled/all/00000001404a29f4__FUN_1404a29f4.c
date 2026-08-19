// Function: FUN_1404a29f4
// Addr: 1404a29f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a29f4(void)

{
  undefined1 *in_R9;
  
  LOCK();
  *in_R9 = *in_R9;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

