// Function: FUN_1404c25f0
// Addr: 1404c25f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c25f0(void)

{
  byte bVar1;
  uint in_EAX;
  char unaff_BPL;
  char *unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  
  bVar1 = (byte)(in_EAX + 0x36400029 + (uint)in_CF >> 8);
  *unaff_RDI = *unaff_RDI + bVar1 + (0xc9bfffd6 < in_EAX || CARRY4(in_EAX + 0x36400029,(uint)in_CF))
  ;
  *unaff_RSI = *unaff_RSI + unaff_BPL;
  *unaff_RDI = *unaff_RDI & bVar1;
  *unaff_RSI = *unaff_RSI + unaff_BPL;
  *unaff_RDI = *unaff_RDI ^ bVar1;
  *unaff_RSI = *unaff_RSI + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

