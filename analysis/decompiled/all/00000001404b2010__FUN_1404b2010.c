// Function: FUN_1404b2010
// Addr: 1404b2010
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2010(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

