// Function: FUN_1404c5e7c
// Addr: 1404c5e7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e7c(void)

{
  char unaff_BL;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x24) = *(char *)(unaff_RDI + 0x24) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

