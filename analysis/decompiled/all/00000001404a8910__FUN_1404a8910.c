// Function: FUN_1404a8910
// Addr: 1404a8910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a8923) overlaps instruction at (ram,0x0001404a8922)
    */

void FUN_1404a8910(char param_1,char param_2)

{
  int in_EAX;
  char unaff_BL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  char *unaff_retaddr;
  
  if (in_EAX + 0xeafffa2cU != (uint)in_CF) {
    cRam00000001454a9481 = cRam00000001454a9481 + param_1;
    *unaff_RDI = *unaff_RSI;
    unaff_RDI[1] = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRamfffffffff0000ba4 = cRamfffffffff0000ba4 + unaff_BL;
  *unaff_retaddr = *unaff_retaddr + '\b';
  cRamffffffff98000ba4 = cRamffffffff98000ba4 + param_2;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

