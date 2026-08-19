// Function: FUN_1404ab13c
// Addr: 1404ab13c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab13c(undefined8 param_1)

{
  uint in_EAX;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001244fb0f8 = uRam00000001244fb0f8 & in_EAX;
  *(char *)(unaff_RDI + -0x5077fff2) =
       *(char *)(unaff_RDI + -0x5077fff2) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

