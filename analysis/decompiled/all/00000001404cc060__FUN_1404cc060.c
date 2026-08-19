// Function: FUN_1404cc060
// Addr: 1404cc060
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc060(void)

{
  char *in_RAX;
  char unaff_BH;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x21004c) = *(char *)(unaff_RDI + 0x21004c) + unaff_BH;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(undefined4 *)((longlong)in_RAX * 2) = unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

