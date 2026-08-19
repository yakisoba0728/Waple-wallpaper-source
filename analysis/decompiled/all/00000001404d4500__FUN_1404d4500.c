// Function: FUN_1404d4500
// Addr: 1404d4500
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4500(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  bool in_PF;
  
  LOCK();
  *(char *)(param_2 * 2) = (char)((ulonglong)in_RAX >> 8);
  UNLOCK();
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

