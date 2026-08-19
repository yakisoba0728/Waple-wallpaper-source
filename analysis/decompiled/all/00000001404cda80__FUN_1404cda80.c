// Function: FUN_1404cda80
// Addr: 1404cda80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cda80(void)

{
  int in_EAX;
  byte unaff_BH;
  
  if ((POPCOUNT(unaff_BH ^ *(byte *)((ulonglong)(in_EAX + 0x6d000654U) * 2)) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam000000012451dac4 = uRam000000012451dac4 & in_EAX + 0x6d000654U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

