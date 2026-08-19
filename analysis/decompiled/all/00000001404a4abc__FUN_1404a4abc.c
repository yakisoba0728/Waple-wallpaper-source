// Function: FUN_1404a4abc
// Addr: 1404a4abc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4abc(void)

{
  byte unaff_BH;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x4024fff9) = *(byte *)(unaff_RDI + -0x4024fff9) ^ unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

