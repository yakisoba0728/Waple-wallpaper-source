// Function: FUN_1404c9054
// Addr: 1404c9054
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9054(undefined4 *param_1)

{
  char in_AH;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  LOCK();
  *param_1 = unaff_ESI;
  UNLOCK();
  *(char *)(unaff_RBP + 0x64003188) = *(char *)(unaff_RBP + 0x64003188) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

