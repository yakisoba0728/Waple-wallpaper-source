// Function: FUN_1404c4848
// Addr: 1404c4848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4848(void)

{
  int *in_RAX;
  int unaff_ESI;
  byte in_CF;
  
  *in_RAX = (*in_RAX - unaff_ESI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

