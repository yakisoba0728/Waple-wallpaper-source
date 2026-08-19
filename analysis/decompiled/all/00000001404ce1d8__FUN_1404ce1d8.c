// Function: FUN_1404ce1d8
// Addr: 1404ce1d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce1d8(void)

{
  char *in_RAX;
  int unaff_ESP;
  byte in_CF;
  
  iRam000000014163e1e7 = (iRam000000014163e1e7 - unaff_ESP) - (uint)in_CF;
  *in_RAX = *in_RAX - (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

