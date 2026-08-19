// Function: FUN_1404b3148
// Addr: 1404b3148
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3148(longlong param_1)

{
  undefined4 unaff_EDI;
  
  LOCK();
  *(undefined4 *)(param_1 + -0x4654ffe9) = unaff_EDI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

