// Function: FUN_1404b3084
// Addr: 1404b3084
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3084(void)

{
  char *pcVar1;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  char *unaff_retaddr;
  
  pcVar1 = (char *)((longlong)unaff_RSI * 5 + 0x17);
  *pcVar1 = *pcVar1 + unaff_BH;
  unaff_retaddr[0x21004b2f] = unaff_retaddr[0x21004b2f] + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_RSI = *unaff_RSI + '\x17';
  unaff_retaddr[-0x4a] = unaff_retaddr[-0x4a] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

