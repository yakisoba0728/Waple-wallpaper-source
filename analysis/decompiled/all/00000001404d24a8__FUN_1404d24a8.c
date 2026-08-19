// Function: FUN_1404d24a8
// Addr: 1404d24a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d24a8(void)

{
  byte *in_RAX;
  int unaff_ESP;
  byte in_CF;
  
  iRam00000001747224b9 = iRam00000001747224b9 + unaff_ESP + (uint)in_CF;
  *in_RAX = *in_RAX & (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

