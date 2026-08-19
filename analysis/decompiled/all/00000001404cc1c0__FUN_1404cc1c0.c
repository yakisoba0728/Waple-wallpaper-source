// Function: FUN_1404cc1c0
// Addr: 1404cc1c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc1c0(char param_1)

{
  uint in_EAX;
  char *unaff_RSI;
  
  if ((in_EAX & 0x170005c4) != 0) {
    *unaff_RSI = *unaff_RSI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

