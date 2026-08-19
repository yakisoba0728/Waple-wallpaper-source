// Function: FUN_1404cc070
// Addr: 1404cc070
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc070(void)

{
  char unaff_BH;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0xb01004c) = *(char *)(unaff_RDI + 0xb01004c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

