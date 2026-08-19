// Function: FUN_1404af134
// Addr: 1404af134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af134(void)

{
  byte in_AL;
  uint unaff_ESP;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & unaff_ESP;
  cRam00000001204afea5 = cRam00000001204afea5 + (in_AL ^ 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

