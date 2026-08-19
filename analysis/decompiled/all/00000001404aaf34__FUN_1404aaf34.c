// Function: FUN_1404aaf34
// Addr: 1404aaf34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaf34(void)

{
  longlong in_RAX;
  int unaff_ESI;
  byte in_CF;
  
  *(int *)(in_RAX + 0x10) = *(int *)(in_RAX + 0x10) + unaff_ESI + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

