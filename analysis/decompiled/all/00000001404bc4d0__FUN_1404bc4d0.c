// Function: FUN_1404bc4d0
// Addr: 1404bc4d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_1404bc4d0(void)

{
  bool in_PF;
  
  if (in_PF) {
    return (ulonglong)&stack0x00000000 & 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

