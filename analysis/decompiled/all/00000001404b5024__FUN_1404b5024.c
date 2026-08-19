// Function: FUN_1404b5024
// Addr: 1404b5024
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5024(void)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI >> 0x1a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

