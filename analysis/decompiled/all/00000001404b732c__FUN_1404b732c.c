// Function: FUN_1404b732c
// Addr: 1404b732c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b732c(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char *unaff_retaddr;
  
  *unaff_RDI = *unaff_RDI ^ 0x1d;
  *(char *)(unaff_RSI + -0xfffe2c9) =
       *(char *)(unaff_RSI + -0xfffe2c9) + (char)((ulonglong)in_RAX >> 8);
  *unaff_retaddr = *unaff_retaddr + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

