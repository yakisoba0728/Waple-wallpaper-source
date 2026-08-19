// Function: FUN_1404a2628
// Addr: 1404a2628
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2628(void)

{
  char in_AL;
  
  LOCK();
  cRam00000001454b3b2f = cRam00000001454b3b2f + in_AL;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

