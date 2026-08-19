// Function: FUN_1404a40c8
// Addr: 1404a40c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a40c8(void)

{
  uint in_EAX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & in_EAX;
  *unaff_RDI = *unaff_RDI & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

