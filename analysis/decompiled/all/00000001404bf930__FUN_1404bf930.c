// Function: FUN_1404bf930
// Addr: 1404bf930
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf930(void)

{
  int in_EAX;
  longlong unaff_RDI;
  
  if (in_EAX + 0x35000c54 < 0) {
    *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + (char)(in_EAX + 0x35000c54);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

